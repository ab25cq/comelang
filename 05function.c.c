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
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
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
struct sFun* come_fun_280;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_281;
void* __right_value255 = (void*)0;
int block_level_282;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_283;
void* __right_value258 = (void*)0;
char* __dec_obj34;
void* __right_value298 = (void*)0;
struct sType* __dec_obj83;
_Bool __result241__;
    come_fun_280=info->come_fun;
    info->come_fun=self->mFun;
    result_type_281=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_281,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_282=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_282;
    come_value_283=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj34=come_value_283->c_value;
    come_value_283->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj83=come_value_283->type;
    come_value_283->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_283->var=((void*)0);
    add_come_last_code(info,"%s",come_value_283->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_283));
    info->come_fun=come_fun_280;
    __result241__ = (_Bool)1;
    come_call_finalizer3(result_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* result_284;
void* __right_value262 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
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
struct sType* __result239__;
    if(    self==(void*)0) {
        __result223__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_284=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_284->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=result_284->mNoSolvedGenericsType;
        result_284->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj58=result_284->mOriginalLoadVarType;
        result_284->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj59=result_284->mRefferenceOriginalType;
        result_284->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj60=result_284->mInterfaceName;
        result_284->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj61=result_284->mGenericsName;
        result_284->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_284->mGenericsTypes;
        result_284->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj69=result_284->mArrayNum;
        result_284->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj70=result_284->mParamTypes;
        result_284->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=result_284->mParamNames;
        result_284->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=result_284->mResultType;
        result_284->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj76=result_284->mAlignas;
        result_284->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj77=result_284->mChannelType;
        result_284->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_284->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_284->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_284->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_284->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_284->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_284->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_284->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_284->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_284->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_284->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_284->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_284->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_284->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_284->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_284->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_284->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_284->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_284->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_284->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_284->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_284->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_284->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_284->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_284->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_284->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj78=result_284->mSizeNum;
        result_284->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_284->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj79=result_284->mOriginalTypeName;
        result_284->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_284->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_284->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_284->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_284->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_284->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_284->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_284->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj80=result_284->mAsmName;
        result_284->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_284->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_284->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_284->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_284->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_284->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj81=result_284->mTupleName;
        result_284->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj82=result_284->mAttribute;
        result_284->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_284->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result224__;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* result_285;
void* __right_value261 = (void*)0;
struct sType* __dec_obj35;
struct tuple1$1sTypeph* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_285=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj35=result_285->v1;
        result_285->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj36;
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
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
            __dec_obj49=self->mAlignas;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj50=self->mChannelType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj51=self->mSizeNum;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj52=self->mOriginalTypeName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj53=self->mAsmName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj54=self->mTupleName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj55=self->mAttribute;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct list_item$1sTypeph* it_286;
struct list_item$1sTypeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_288;
struct list_item$1sTypeph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer3(prev_it_289,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_290;
struct list_item$1sNodeph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_292;
struct list_item$1sNodeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_294;
struct list_item$1charph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj56;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj56=self->v1;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result226__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* result_296;
struct list_item$1sTypeph* it_297;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __result229__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_296=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1220, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1sTypeph_add(result_296,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_297->item)));
        it_297=it_297->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_298;
struct sType* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_299;
struct sType* __dec_obj63;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_300;
struct sType* __dec_obj64;
struct list$1sTypeph* __result228__;
    if(    self->len==0) {
        litem_298=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1234, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj62=litem_298->item;
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1244, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj63=litem_299->item;
        litem_299->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1254, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj64=litem_300->item;
        litem_300->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
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
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_301;
struct list_item$1sNodeph* it_302;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __result235__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_301=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_302=self->head;
    while(it_302!=((void*)0)) {
        list$1sNodeph_add(result_301,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_302->item)));
        it_302=it_302->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_303;
struct sNode* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_304;
struct sNode* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_305;
struct sNode* __dec_obj68;
struct list$1sNodeph* __result232__;
    if(    self->len==0) {
        litem_303=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_303->prev=((void*)0);
        litem_303->next=((void*)0);
        __dec_obj66=litem_303->item;
        litem_303->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_303;
        self->head=litem_303;
    }
    else if(    self->len==1) {
        litem_304=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_304->prev=self->head;
        litem_304->next=((void*)0);
        __dec_obj67=litem_304->item;
        litem_304->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_304;
        self->head->next=litem_304;
    }
    else {
        litem_305=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_305->prev=self->tail;
        litem_305->next=((void*)0);
        __dec_obj68=litem_305->item;
        litem_305->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_305;
        self->tail=litem_305;
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
void* __right_value279 = (void*)0;
struct sNode* result_306;
struct sNode* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_306=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_306->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_306->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_306->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_306->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_306->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_306->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_306->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_306->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_306->kind=self->kind;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_306;
    if(result_306) { result_306 = come_decrement_ref_count2(result_306, ((struct sNode*)result_306)->finalize, ((struct sNode*)result_306)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result236__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_307;
struct list_item$1charph* it_308;
void* __right_value288 = (void*)0;
struct list$1charph* __result238__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_307=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1charph_add(result_307,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_308->item)));
        it_308=it_308->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_309;
char* __dec_obj71;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_310;
char* __dec_obj72;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_311;
char* __dec_obj73;
struct list$1charph* __result237__;
    if(    self->len==0) {
        litem_309=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj71=litem_309->item;
        litem_309->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj72=litem_310->item;
        litem_310->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj73=litem_311->item;
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_312;
struct CVALUE* __dec_obj84;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_313;
struct CVALUE* __dec_obj88;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_314;
struct CVALUE* __dec_obj89;
struct list$1CVALUEph* __result240__;
    if(    self->len==0) {
        litem_312=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj84=litem_312->item;
        litem_312->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj88=litem_313->item;
        litem_313->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj89=litem_314->item;
        litem_314->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj85;
struct sType* __dec_obj86;
char* __dec_obj87;
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
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct sFun* __dec_obj90;
struct sFunNode* __result242__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj90,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sFunNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_315;
char* come_fun_name_316;
void* __right_value304 = (void*)0;
char* __dec_obj110;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* result_type_317;
void* __right_value307 = (void*)0;
int block_level_318;
void* __right_value308 = (void*)0;
char* __dec_obj111;
_Bool __result244__;
    come_fun_315=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_316=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj110=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_317=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value307=make_define_var(result_type_317,"__result_obj__",(_Bool)0,info))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_318=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_318;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_315;
    __dec_obj111=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_316);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result244__ = (_Bool)1;
    come_fun_name_316 = come_decrement_ref_count2(come_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result244__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj91;
struct sType* __dec_obj92;
struct list$1sTypeph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct sType* __dec_obj96;
struct sBlock* __dec_obj97;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj91=self->mName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj92=self->mResultType;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj93=self->mParamTypes;
            come_call_finalizer3(__dec_obj93,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj94=self->mParamNames;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj95=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj96=self->mLambdaType;
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj97=self->mBlock;
            come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj100=self->mSource;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead2;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj103=self->mSourceDefer;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj104=self->mComeHeader;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj106=self->mAttribute;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj107=self->mFunAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj98;
struct sVarTable* __dec_obj99;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj98=self->mNodes;
            come_call_finalizer3(__dec_obj98,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj99=self->mVarTable;
            come_call_finalizer3(__dec_obj99,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj108;
struct sFun* __dec_obj109;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj108=self->sname;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj109=self->mFun;
            come_call_finalizer3(__dec_obj109,sFun_finalize, 0, 0, 1, 0, (void*)0);
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
struct list$1sNodeph* __dec_obj112;
struct sBlock* __result245__;
    __dec_obj112=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj113;
void* __right_value312 = (void*)0;
struct list$1charph* __dec_obj114;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj115;
char* __dec_obj116;
struct sType* __dec_obj117;
struct list$1sTypeph* __dec_obj118;
struct list$1charph* __dec_obj119;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
void* __right_value314 = (void*)0;
char* __dec_obj122;
struct sGenericsFun* __result246__;
    __dec_obj113=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj115=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj118,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj119=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj120=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj121=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj122=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj123;
struct list$1charph* __dec_obj124;
struct list$1charph* __dec_obj125;
char* __dec_obj126;
struct sType* __dec_obj127;
struct list$1sTypeph* __dec_obj128;
struct list$1charph* __dec_obj129;
struct list$1charph* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj123=self->mImplType;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj124=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj125=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj126=self->mName;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj127=self->mResultType;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj128=self->mParamTypes;
            come_call_finalizer3(__dec_obj128,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj129=self->mParamNames;
            come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj130=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj130,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj131=self->mBlock;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj132=self->mGenericsSName;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sBlock* result_319;
int sline_top_320;
int block_level_321;
char* p_saved_322;
int sline_saved_323;
char* sname_saved_324;
void* __right_value317 = (void*)0;
char* __dec_obj133;
char* __dec_obj134;
struct map$2charphcharph* __dec_obj135;
char* p_327;
int sline_328;
void* __right_value318 = (void*)0;
char* sname_329;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* module_name_330;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* params_331;
void* __right_value323 = (void*)0;
char* word_332;
void* __right_value324 = (void*)0;
char* __dec_obj136;
void* __right_value325 = (void*)0;
char* __dec_obj137;
void* __right_value326 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result251__;
void* __right_value327 = (void*)0;
struct sClassModule* module_336;
void* __right_value328 = (void*)0;
void* __right_value334 = (void*)0;
struct map$2charphcharph* __dec_obj143;
int i_340;
struct list$1charph* o2_saved_341;
char* it_344;
void* __right_value335 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* __dec_obj144;
void* __right_value344 = (void*)0;
struct sNode* node_391;
void* __right_value345 = (void*)0;
char* __dec_obj145;
_Bool omit_semicolon_395;
void* __right_value349 = (void*)0;
char* __dec_obj149;
char* head_410;
void* __right_value350 = (void*)0;
struct sNode* value_411;
char* tail_412;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* node_414;
void* __right_value354 = (void*)0;
char* __dec_obj151;
struct sNode* node_415;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj154;
_Bool omit_semicolon_417;
char* p_418;
char* head_419;
void* __right_value361 = (void*)0;
char* source_420;
void* __right_value362 = (void*)0;
struct sNode* node_421;
struct sBlock* __result289__;
node_415 = (void*)0;
    result_319=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "struct sBlock*", (void*)0, (void*)0)),info));
    sline_top_320=info->sline_top;
    info->sline_top=info->sline;
    block_level_321=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_322=((void*)0);
        sline_saved_323=0;
        sname_saved_324=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_322) {
                if(                *info->p==0) {
                    info->p=p_saved_322;
                    info->sline=sline_saved_323;
                    __dec_obj133=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_324));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_322=((void*)0);
                    sline_saved_323=0;
                    __dec_obj134=sname_saved_324;
                    sname_saved_324=((void*)0);
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj135=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj135,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
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
            p_327=info->p;
            sline_328=info->sline;
            sname_329=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_328;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value319=parse_word(info)));
                __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_330=(char*)come_increment_ref_count(parse_word(info));
                params_331=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_332=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_331,(char*)come_increment_ref_count(word_332));
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
                            word_332 = come_decrement_ref_count2(word_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_332 = come_decrement_ref_count2(word_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_322=info->p;
                sline_saved_323=info->sline;
                __dec_obj136=sname_saved_324;
                sname_saved_324=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj137=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_330));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_330)))==((void*)0))),                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result251__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_330 = come_decrement_ref_count2(module_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_329 = come_decrement_ref_count2(sname_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_324 = come_decrement_ref_count2(sname_saved_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_319,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result251__;
                }
                module_336=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value327=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_330))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value327,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_336->mParams)!=list$1charph_length(params_331)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj143=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj143,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_340=0;
                for(                o2_saved_341=(struct list$1charph*)come_increment_ref_count((module_336->mParams)),it_344=list$1charph_begin((o2_saved_341));                !list$1charph_end((o2_saved_341));                it_344=list$1charph_next((o2_saved_341))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_344)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value341=list$1charphp_operator_load_element(params_331,i_340))), "05function.c", 273, 1)))));
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_340++;
                }
                come_call_finalizer3(o2_saved_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_336->mText;
                info->sline=module_336->mSLine;
                __dec_obj144=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_336->mSName));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_330 = come_decrement_ref_count2(module_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_391=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj145=info->sname;
            info->sname=(char*)come_increment_ref_count(node_391->sname(node_391->_protocol_obj));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_391->sline(node_391->_protocol_obj);
            if(            node_391==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_319->mNodes,(struct sNode*)come_increment_ref_count(node_391));
            parse_sharp_v5(info);
            if(            node_391->terminated(node_391->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_395=(_Bool)1;
            if(            node_391->terminated(node_391->_protocol_obj)) {
                omit_semicolon_395=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_395=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_319->mOmitSemicolon=omit_semicolon_395;
                if(                omit_semicolon_395&&in_function) {
                    list$1sNodeph_delete(result_319->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_327;
                    info->sline=sline_328;
                    __dec_obj149=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_329));
                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_410=info->p;
                    value_411=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_412=info->p;
                    __dec_obj150=value_411;
                    value_411=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_411),info));
                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_413[tail_412-head_410+1];
                    memset(&buf_413, 0, sizeof(char)                    *(tail_412-head_410+1)                    );
                    memcpy(buf_413,head_410,tail_412-head_410);
                    buf_413[tail_412-head_410]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_414=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_411),(char*)come_increment_ref_count(__builtin_string(buf_413)),info));
                    list$1sNodeph_push_back(result_319->mNodes,(struct sNode*)come_increment_ref_count(node_414));
                    if(value_411) { value_411 = come_decrement_ref_count2(value_411, ((struct sNode*)value_411)->finalize, ((struct sNode*)value_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_329 = come_decrement_ref_count2(sname_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_411) { value_411 = come_decrement_ref_count2(value_411, ((struct sNode*)value_411)->finalize, ((struct sNode*)value_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_329 = come_decrement_ref_count2(sname_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_329 = come_decrement_ref_count2(sname_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_322) {
            if(            info->p==0) {
                info->p=p_saved_322;
                info->sline=sline_saved_323;
                __dec_obj151=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_324));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_322=((void*)0);
                sline_saved_323=0;
            }
        }
        sname_saved_324 = come_decrement_ref_count2(sname_saved_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value356=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "struct sSemicolonNode*", (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj153=node_415;
            node_415=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value356,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_319->mNodes,(struct sNode*)come_increment_ref_count(node_415));
        }
        else {
            __dec_obj154=node_415;
            node_415=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_415==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_415->terminated(node_415->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_417=(_Bool)1;
            if(            node_415->terminated(node_415->_protocol_obj)) {
                omit_semicolon_417=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_417=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_319->mOmitSemicolon=omit_semicolon_417;
            list$1sNodeph_push_back(result_319->mNodes,(struct sNode*)come_increment_ref_count(node_415));
        }
        if(node_415) { node_415 = come_decrement_ref_count2(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_418=info->p;
        head_419=info->head;
        source_420=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_420;
        info->head=source_420;
        node_421=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_421==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_319->mNodes,(struct sNode*)come_increment_ref_count(node_421));
        info->p=p_418;
        info->head=head_419;
        source_420 = come_decrement_ref_count2(source_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_321;
    __result289__ = gComeFunResultObject = __result_obj__ = result_319;
    come_call_finalizer3(result_319,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_325;
int i_326;
    for(    i_325=0;    i_325<self->size;    i_325++    ){
        if(        self->item_existance[i_325]) {
            if(            1) {
                self->items[i_325] = come_decrement_ref_count2(self->items[i_325], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_326=0;    i_326<self->size;    i_326++    ){
        if(        self->item_existance[i_326]) {
            if(            1) {
                self->keys[i_326] = come_decrement_ref_count2(self->keys[i_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_333;
unsigned int hash_334;
unsigned int it_335;
struct sClassModule* __result247__;
struct sClassModule* __result248__;
struct sClassModule* __result249__;
struct sClassModule* __result250__;
default_value_333 = (void*)0;
    memset(&default_value_333,0,sizeof(struct sClassModule*));
    hash_334=charp_get_hash_key(((char*)key))%self->size;
    it_335=hash_334;
    while((_Bool)1) {
        if(        self->item_existance[it_335]) {
            if(            charp_equals(self->keys[it_335],key)) {
                __result247__ = gComeFunResultObject = __result_obj__ = self->items[it_335];
                come_call_finalizer3(default_value_333,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
            it_335++;
            if(            it_335>=self->size) {
                it_335=0;
            }
            else if(            it_335==hash_334) {
                __result248__ = gComeFunResultObject = __result_obj__ = default_value_333;
                come_call_finalizer3(default_value_333,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result248__;
            }
        }
        else {
            __result249__ = gComeFunResultObject = __result_obj__ = default_value_333;
            come_call_finalizer3(default_value_333,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result249__;
        }
    }
    __result250__ = gComeFunResultObject = __result_obj__ = default_value_333;
    come_call_finalizer3(default_value_333,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj138;
char* __dec_obj139;
struct list$1charph* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj138=self->mName;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj139=self->mText;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj140=self->mParams;
            come_call_finalizer3(__dec_obj140,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj141=self->mSName;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
int i_337;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charp* __dec_obj142;
struct map$2charphcharph* __result253__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2479, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value331=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2481, "_Bool*", (void*)0, (void*)0))));
    for(    i_337=0;    i_337<128;    i_337++    ){
        self->item_existance[i_337]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj142=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj142,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
int i_338;
int i_339;
    for(    i_338=0;    i_338<self->size;    i_338++    ){
        if(        self->item_existance[i_338]) {
            if(            1) {
                self->items[i_338] = come_decrement_ref_count2(self->items[i_338], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_339=0;    i_339<self->size;    i_339++    ){
        if(        self->item_existance[i_339]) {
            if(            1) {
                self->keys[i_339] = come_decrement_ref_count2(self->keys[i_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_342;
char* __result254__;
char* __result255__;
char* result_343;
char* __result256__;
result_342 = (void*)0;
result_343 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_342,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_342;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->head;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_343,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_343;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_345;
char* __result257__;
char* __result258__;
char* result_346;
char* __result259__;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_345,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_345;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_346,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_346;
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
unsigned int hash_364;
unsigned int it_365;
_Bool same_key_exist_382;
char* it2_385;
struct map$2charphcharph* __result280__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_364=charp_get_hash_key(key)%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            charp_equals(self->keys[it_365],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_365]);
                    self->keys[it_365] = come_decrement_ref_count2(self->keys[it_365], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_365]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_365]);
                    self->keys[it_365]=key;
                }
                if(                1) {
                    self->items[it_365] = come_decrement_ref_count2(self->items[it_365], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_365]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_365]=item;
                }
                break;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_365]=(_Bool)1;
            if(            1) {
                self->keys[it_365]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_365]=key;
            }
            if(            1) {
                self->items[it_365]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_365]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_382=(_Bool)0;
    for(    it2_385=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_385=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_385,key)) {
            same_key_exist_382=(_Bool)1;
        }
    }
    if(    !same_key_exist_382) {
        list$1charp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_347;
void* __right_value336 = (void*)0;
char** keys_348;
void* __right_value337 = (void*)0;
char** items_349;
void* __right_value338 = (void*)0;
_Bool* item_existance_350;
int len_351;
char* it_354;
char* default_value_357;
void* __right_value339 = (void*)0;
char* it2_358;
unsigned int hash_361;
int n_362;
char* default_value_363;
void* __right_value340 = (void*)0;
default_value_357 = (void*)0;
default_value_363 = (void*)0;
    size_347=self->size*10;
    keys_348=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_347)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_349=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(size_347)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    item_existance_350=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_347)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_351=0;
    for(    it_354=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_354=map$2charphcharph_next(self)    ){
        memset(&default_value_357,0,sizeof(char*));
        it2_358=((char*)(__right_value339=map$2charphcharph_at(self,it_354,default_value_357)));
        __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_361=charp_get_hash_key(it_354)%size_347;
        n_362=hash_361;
        while((_Bool)1) {
            if(            item_existance_350[n_362]) {
                n_362++;
                if(                n_362>=size_347) {
                    n_362=0;
                }
                else if(                n_362==hash_361) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_350[n_362]=(_Bool)1;
                keys_348[n_362]=it_354;
                items_349[n_362]=((char*)(__right_value340=map$2charphcharph_at(self,it_354,default_value_363)));
                __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_351++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_348;
    self->items=items_349;
    self->item_existance=item_existance_350;
    self->size=size_347;
    self->len=len_351;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result260__;
char* __result261__;
char* result_353;
char* __result262__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_353,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result263__;
char* __result264__;
char* result_356;
char* __result265__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_356,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_359;
unsigned int it_360;
char* __result266__;
char* __result267__;
char* __result268__;
char* __result269__;
    hash_359=charp_get_hash_key(((char*)key))%self->size;
    it_360=hash_359;
    while((_Bool)1) {
        if(        self->item_existance[it_360]) {
            if(            charp_equals(self->keys[it_360],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_360];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_360++;
            if(            it_360>=self->size) {
                it_360=0;
            }
            else if(            it_360==hash_359) {
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
int it2_366;
struct list_item$1charp* it_367;
struct list$1charp* __result273__;
    it2_366=0;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        charp_equals(it_367->item,item)) {
            list$1charp_delete(self,it2_366,it2_366+1);
            break;
        }
        it2_366++;
        it_367=it_367->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_368;
struct list$1charp* __result270__;
struct list_item$1charp* it_371;
int i_372;
struct list_item$1charp* prev_it_373;
struct list_item$1charp* it_374;
int i_375;
struct list_item$1charp* prev_it_376;
struct list_item$1charp* it_377;
struct list_item$1charp* head_prev_it_378;
struct list_item$1charp* tail_it_379;
int i_380;
struct list_item$1charp* prev_it_381;
struct list$1charp* __result272__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_368=tail;
        tail=head;
        head=tmp_368;
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
        it_371=self->head;
        i_372=0;
        while(it_371!=((void*)0)) {
            if(            i_372<tail) {
                prev_it_373=it_371;
                it_371=it_371->next;
                i_372++;
                come_call_finalizer3(prev_it_373,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_372==tail) {
                self->head=it_371;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_371=it_371->next;
                i_372++;
            }
        }
    }
    else if(    tail==self->len) {
        it_374=self->head;
        i_375=0;
        while(it_374!=((void*)0)) {
            if(            i_375==head) {
                self->tail=it_374->prev;
                self->tail->next=((void*)0);
            }
            if(            i_375>=head) {
                prev_it_376=it_374;
                it_374=it_374->next;
                i_375++;
                come_call_finalizer3(prev_it_376,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_374=it_374->next;
                i_375++;
            }
        }
    }
    else {
        it_377=self->head;
        head_prev_it_378=((void*)0);
        tail_it_379=((void*)0);
        i_380=0;
        while(it_377!=((void*)0)) {
            if(            i_380==head) {
                head_prev_it_378=it_377->prev;
            }
            if(            i_380==tail) {
                tail_it_379=it_377;
            }
            if(            i_380>=head&&i_380<tail) {
                prev_it_381=it_377;
                it_377=it_377->next;
                i_380++;
                come_call_finalizer3(prev_it_381,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_377=it_377->next;
                i_380++;
            }
        }
        if(        head_prev_it_378!=((void*)0)) {
            head_prev_it_378->next=tail_it_379;
        }
        if(        tail_it_379!=((void*)0)) {
            tail_it_379->prev=head_prev_it_378;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_369;
struct list_item$1charp* prev_it_370;
struct list$1charp* __result271__;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        prev_it_370=it_369;
        it_369=it_369->next;
        come_call_finalizer3(prev_it_370,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_383;
char* __result274__;
char* __result275__;
char* result_384;
char* __result276__;
result_383 = (void*)0;
result_384 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_383,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_383;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->head;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_384,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_384;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_386;
char* __result277__;
char* __result278__;
char* result_387;
char* __result279__;
result_386 = (void*)0;
result_387 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_386,0,sizeof(char*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_386;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_387,0,sizeof(char*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_387;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_388;
int i_389;
char* __result281__;
char* default_value_390;
char* __result282__;
default_value_390 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_388=self->head;
    i_389=0;
    while(it_388!=((void*)0)) {
        if(        position==i_389) {
            __result281__ = gComeFunResultObject = __result_obj__ = it_388->item;
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
        it_388=it_388->next;
        i_389++;
    }
    memset(&default_value_390,0,sizeof(char*));
    __result282__ = gComeFunResultObject = __result_obj__ = default_value_390;
    default_value_390 = come_decrement_ref_count2(default_value_390, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_392;
struct sNode* __dec_obj146;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_393;
struct sNode* __dec_obj147;
void* __right_value348 = (void*)0;
struct list_item$1sNodeph* litem_394;
struct sNode* __dec_obj148;
struct list$1sNodeph* __result283__;
    if(    self->len==0) {
        litem_392=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_392->prev=((void*)0);
        litem_392->next=((void*)0);
        __dec_obj146=litem_392->item;
        litem_392->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_392;
        self->head=litem_392;
    }
    else if(    self->len==1) {
        litem_393=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_393->prev=self->head;
        litem_393->next=((void*)0);
        __dec_obj147=litem_393->item;
        litem_393->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_393;
        self->head->next=litem_393;
    }
    else {
        litem_394=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_394->prev=self->tail;
        litem_394->next=((void*)0);
        __dec_obj148=litem_394->item;
        litem_394->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_394;
        self->tail=litem_394;
    }
    self->len++;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_396;
struct list$1sNodeph* __result284__;
struct list_item$1sNodeph* it_399;
int i_400;
struct list_item$1sNodeph* prev_it_401;
struct list_item$1sNodeph* it_402;
int i_403;
struct list_item$1sNodeph* prev_it_404;
struct list_item$1sNodeph* it_405;
struct list_item$1sNodeph* head_prev_it_406;
struct list_item$1sNodeph* tail_it_407;
int i_408;
struct list_item$1sNodeph* prev_it_409;
struct list$1sNodeph* __result286__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_396=tail;
        tail=head;
        head=tmp_396;
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
        it_399=self->head;
        i_400=0;
        while(it_399!=((void*)0)) {
            if(            i_400<tail) {
                prev_it_401=it_399;
                it_399=it_399->next;
                i_400++;
                come_call_finalizer3(prev_it_401,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_400==tail) {
                self->head=it_399;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_399=it_399->next;
                i_400++;
            }
        }
    }
    else if(    tail==self->len) {
        it_402=self->head;
        i_403=0;
        while(it_402!=((void*)0)) {
            if(            i_403==head) {
                self->tail=it_402->prev;
                self->tail->next=((void*)0);
            }
            if(            i_403>=head) {
                prev_it_404=it_402;
                it_402=it_402->next;
                i_403++;
                come_call_finalizer3(prev_it_404,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_402=it_402->next;
                i_403++;
            }
        }
    }
    else {
        it_405=self->head;
        head_prev_it_406=((void*)0);
        tail_it_407=((void*)0);
        i_408=0;
        while(it_405!=((void*)0)) {
            if(            i_408==head) {
                head_prev_it_406=it_405->prev;
            }
            if(            i_408==tail) {
                tail_it_407=it_405;
            }
            if(            i_408>=head&&i_408<tail) {
                prev_it_409=it_405;
                it_405=it_405->next;
                i_408++;
                come_call_finalizer3(prev_it_409,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_405=it_405->next;
                i_408++;
            }
        }
        if(        head_prev_it_406!=((void*)0)) {
            head_prev_it_406->next=tail_it_407;
        }
        if(        tail_it_407!=((void*)0)) {
            tail_it_407->prev=head_prev_it_406;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_397;
struct list_item$1sNodeph* prev_it_398;
struct list$1sNodeph* __result285__;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer3(prev_it_398,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value357 = (void*)0;
struct sSemicolonNode* result_416;
void* __right_value358 = (void*)0;
char* __dec_obj152;
struct sSemicolonNode* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_416=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_416->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_416->sname;
        result_416->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_416->sline_real=self->sline_real;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_416;
    come_call_finalizer3(result_416,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_422;
struct sVarTable* old_table_423;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sVarTable* __dec_obj155;
struct sVarTable* current_loop_vtable_424;
struct list$1sTypeph* param_types__425;
struct list$1charph* param_names__426;
int i_427;
struct list$1charph* o2_saved_428;
char* name_429;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* type_430;
void* __right_value367 = (void*)0;
int block_level_434;
int i_435;
struct list$1sNodeph* o2_saved_436;
struct sNode* node_439;
struct list$1sRightValueObjectph* right_value_objects_442;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
int stack_num_before_447;
int sline_448;
void* __right_value370 = (void*)0;
char* sname_449;
void* __right_value371 = (void*)0;
char* __dec_obj163;
_Bool Value_450;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_451;
void* __right_value377 = (void*)0;
struct CVALUE* come_value2_452;
void* __right_value378 = (void*)0;
char* __dec_obj167;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_454;
struct sVar* var__455;
void* __right_value380 = (void*)0;
struct CVALUE* come_value3_456;
void* __right_value381 = (void*)0;
_Bool _if_conditional2;
void* __right_value382 = (void*)0;
struct sType* __dec_obj168;
void* __right_value383 = (void*)0;
char* c_value_473;
void* __right_value384 = (void*)0;
char* __dec_obj169;
void* __right_value385 = (void*)0;
char* __dec_obj170;
void* __right_value386 = (void*)0;
char* __dec_obj171;
_Bool Value_474;
void* __right_value387 = (void*)0;
char* __dec_obj172;
struct list$1sRightValueObjectph* __dec_obj173;
void* __if_result__0_477 = (void*)0;
struct list$1sVarph* o2_saved_478;
struct sVar* it_481;
struct list$1sVarph* __dec_obj179;
memset(&i_427, 0, sizeof(int));
memset(&i_435, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_422=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_423=info->lv_table;
    if(    !no_var_table) {
        __dec_obj155=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "struct sVarTable*", (void*)0, (void*)0)),(_Bool)0,old_table_423));
        come_call_finalizer3(__dec_obj155,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_424=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__425=info->param_types;
    param_names__426=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_428=(param_names),name_429=list$1charph_begin((o2_saved_428));        !list$1charph_end((o2_saved_428));        name_429=list$1charph_next((o2_saved_428))        ){
            type_430=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value365=list$1sTypephp_operator_load_element(param_types,i_427))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_430->mFunctionParam=(_Bool)1;
            type_430->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_429,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_430)),info);
            i_427++;
            come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_434=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_436=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_439=list$1sNodeph_begin((o2_saved_436));        !list$1sNodeph_end((o2_saved_436));        node_439=list$1sNodeph_next((o2_saved_436))        ){
            right_value_objects_442=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj160=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj160,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj161=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj162=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_447=list$1CVALUEph_length(info->stack);
            sline_448=info->sline;
            sname_449=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_439->sline(node_439->_protocol_obj);
            __dec_obj163=info->sname;
            info->sname=(char*)come_increment_ref_count(node_439->sname(node_439->_protocol_obj));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_435==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_450=node_compile(node_439,info);
                if(                !Value_450) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_447+1) {
                    come_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_451->type->mClass->mName,"void")&&come_value_451->type->mPointerNum==0) {
                        come_value2_452=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_451));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_452));
                        __dec_obj167=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_452->c_value));
                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_454=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_451));
                        var__455=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__455) {
                            come_value3_456=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__455->mType->mClass=="void"&&var__455->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__455->mType,((struct sType*)(__right_value381=come_call_cloner(sType_clone, come_value_451->type))),come_value3_456,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj168=var__455->mType;
                            var__455->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_451->type));
                            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_451->type->mHeap) {
                                c_value_473=(char*)come_increment_ref_count(increment_ref_count_object(come_value_451->type,come_value_451->c_value,info));
                                __dec_obj169=come_value2_454->c_value;
                                come_value2_454->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__455->mCValueName,c_value_473));
                                __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_473 = come_decrement_ref_count2(c_value_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj170=come_value2_454->c_value;
                                come_value2_454->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__455->mCValueName,come_value_451->c_value));
                                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_454));
                        __dec_obj171=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_454->c_value));
                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_454,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_474=node_compile(node_439,info);
                if(                !Value_474) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_448;
            __dec_obj172=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_449));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_447);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj173=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_442);
            come_call_finalizer3(__dec_obj173,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_435++;
            come_call_finalizer3(right_value_objects_442,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_449 = come_decrement_ref_count2(sname_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_436,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_434==0) {
            for(            o2_saved_478=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_481=list$1sVarph_begin((o2_saved_478));            !list$1sVarph_end((o2_saved_478));            it_481=list$1sVarph_next((o2_saved_478))            ){
                free_object(it_481->mType,it_481->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_478,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj179=info->match_it_var;
            __if_result__0_477=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj179,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_477,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_423;
    info->block_level=block_level_434;
    info->param_types=param_types__425;
    info->param_names=param_names__426;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_424;
    info->inhibits_output_code=inhibits_output_code_422;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_431;
int i_432;
struct sType* __result290__;
struct sType* default_value_433;
struct sType* __result291__;
default_value_433 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_431=self->head;
    i_432=0;
    while(it_431!=((void*)0)) {
        if(        position==i_432) {
            __result290__ = gComeFunResultObject = __result_obj__ = it_431->item;
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        it_431=it_431->next;
        i_432++;
    }
    memset(&default_value_433,0,sizeof(struct sType*));
    __result291__ = gComeFunResultObject = __result_obj__ = default_value_433;
    come_call_finalizer3(default_value_433,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* result_437;
struct sNode* __result292__;
struct sNode* __result293__;
struct sNode* result_438;
struct sNode* __result294__;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_437,0,sizeof(struct sNode*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_437;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->head;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_438,0,sizeof(struct sNode*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_438;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_440;
struct sNode* __result295__;
struct sNode* __result296__;
struct sNode* result_441;
struct sNode* __result297__;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_440,0,sizeof(struct sNode*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_440;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_441,0,sizeof(struct sNode*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_441;
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
struct list_item$1sRightValueObjectph* it_443;
struct list_item$1sRightValueObjectph* prev_it_444;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        prev_it_444=it_443;
        it_443=it_443->next;
        come_call_finalizer3(prev_it_444,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj156;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj156=self->item;
            come_call_finalizer3(__dec_obj156,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj157=self->mType;
            come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj158=self->mVarName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj159=self->mFunName;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_445;
struct list_item$1sRightValueObjectph* prev_it_446;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value373 = (void*)0;
struct CVALUE* result_453;
void* __right_value374 = (void*)0;
char* __dec_obj164;
void* __right_value375 = (void*)0;
struct sType* __dec_obj165;
void* __right_value376 = (void*)0;
char* __dec_obj166;
struct CVALUE* __result300__;
    if(    self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_453=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj164=result_453->c_value;
        result_453->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj165=result_453->type;
        result_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_453->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_453->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj166=result_453->c_value_without_right_value_objects;
        result_453->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_453;
    come_call_finalizer3(result_453,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_457;
struct list_item$1tuple2$2charphsTypephph* it2_458;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_457=left->head;
    it2_458=right->head;
    while(it_457!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_457->item,it2_458->item)) {
            return (_Bool)0;
        }
        it_457=it_457->next;
        it2_458=it2_458->next;
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
struct list_item$1sTypeph* it_459;
struct list_item$1sTypeph* it2_460;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_459=left->head;
    it2_460=right->head;
    while(it_459!=((void*)0)) {
        if(        !sType_equals(it_459->item,it2_460->item)) {
            return (_Bool)0;
        }
        it_459=it_459->next;
        it2_460=it2_460->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_461;
struct list_item$1sNodeph* it2_462;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_461=left->head;
    it2_462=right->head;
    while(it_461!=((void*)0)) {
        if(        !sNode_equals(it_461->item,it2_462->item)) {
            return (_Bool)0;
        }
        it_461=it_461->next;
        it2_462=it2_462->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_463;
struct list_item$1charph* it2_464;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_463=left->head;
    it2_464=right->head;
    while(it_463!=((void*)0)) {
        if(        !charp_equals(it_463->item,it2_464->item)) {
            return (_Bool)0;
        }
        it_463=it_463->next;
        it2_464=it2_464->next;
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
struct list_item$1tuple2$2charphsTypephph* it_465;
struct list_item$1tuple2$2charphsTypephph* it2_466;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_465=left->head;
    it2_466=right->head;
    while(it_465!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_465->item,it2_466->item))) {
            return (_Bool)0;
        }
        it_465=it_465->next;
        it2_466=it2_466->next;
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

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_467;
struct list_item$1sTypeph* it2_468;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_467=left->head;
    it2_468=right->head;
    while(it_467!=((void*)0)) {
        if(        !(sType_operator_equals(it_467->item,it2_468->item))) {
            return (_Bool)0;
        }
        it_467=it_467->next;
        it2_468=it2_468->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_469;
struct list_item$1sNodeph* it2_470;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_469=left->head;
    it2_470=right->head;
    while(it_469!=((void*)0)) {
        if(        !(sNode_operator_equals(it_469->item,it2_470->item))) {
            return (_Bool)0;
        }
        it_469=it_469->next;
        it2_470=it2_470->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_471;
struct list_item$1charph* it2_472;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_471=left->head;
    it2_472=right->head;
    while(it_471!=((void*)0)) {
        if(        !(string_operator_equals(it_471->item,it2_472->item))) {
            return (_Bool)0;
        }
        it_471=it_471->next;
        it2_472=it2_472->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_475;
struct list_item$1sRightValueObjectph* prev_it_476;
struct list$1sRightValueObjectph* __result301__;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sVar* result_479;
struct sVar* __result302__;
struct sVar* __result303__;
struct sVar* result_480;
struct sVar* __result304__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct sVar*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->head;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_480,0,sizeof(struct sVar*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_482;
struct sVar* __result305__;
struct sVar* __result306__;
struct sVar* result_483;
struct sVar* __result307__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct sVar*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_483,0,sizeof(struct sVar*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_484;
struct list_item$1sVarph* prev_it_485;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        prev_it_485=it_484;
        it_484=it_484->next;
        come_call_finalizer3(prev_it_485,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj174;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj174=self->item;
            come_call_finalizer3(__dec_obj174,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj175;
char* __dec_obj176;
struct sType* __dec_obj177;
char* __dec_obj178;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj175=self->mName;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj176=self->mCValueName;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj177=self->mType;
            come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj178=self->mFunName;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_486;
struct list_item$1sVarph* prev_it_487;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        come_call_finalizer3(prev_it_487,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_488;
_Bool dquort_489;
_Bool squort_490;
int sline_491;
int nest_492;
char* tail_493;
void* __right_value388 = (void*)0;
char* buf_494;
void* __right_value389 = (void*)0;
char* __result308__;
    head_488=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_489=(_Bool)0;
        squort_490=(_Bool)0;
        sline_491=0;
        nest_492=0;
        while(1) {
            if(            dquort_489) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_489=!dquort_489;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
            }
            else if(            squort_490) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_490=!squort_490;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_491=info->sline;
                info->p++;
                squort_490=!squort_490;
            }
            else if(            *info->p==34) {
                sline_491=info->sline;
                info->p++;
                dquort_489=!dquort_489;
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
                nest_492++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_492==0) {
                    break;
                }
                nest_492--;
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
    tail_493=info->p;
    buf_494=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_493-head_488+1)), "05function.c", 757, "char*", (void*)0, (void*)0));
    memcpy(buf_494,head_488,tail_493-head_488);
    buf_494[tail_493-head_488]=0;
    skip_spaces_and_lf(info);
    __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string(buf_494)));
    buf_494 = come_decrement_ref_count2(buf_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_495;
char* p3_496;
int i_497;
    terminated_495=(_Bool)0;
    p3_496=p;
    for(    i_497=0;    i_497<strlen(p2);    i_497++    ){
        if(        *p3_496==0) {
            terminated_495=(_Bool)1;
            break;
        }
        p3_496++;
    }
    return !terminated_495&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* asm_fun_name_498;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct buffer* result_499;
char* head_500;
int brace_num_501;
char* tail_502;
char* head_503;
int brace_num_504;
char* tail_505;
char* head_506;
char* tail_507;
char* head_508;
char* tail_509;
int len_510;
_Bool in_dquort_511;
int brace_num_512;
char* head_513;
char* tail_514;
char* head_515;
char* tail_516;
char* head_517;
char* tail_518;
char* head_519;
int nest_520;
char* tail_521;
char* head_522;
int nest_523;
char* tail_524;
char* head_525;
int nest_526;
char* tail_527;
char* head_528;
int nest_529;
char* tail_530;
char* head_531;
int nest_532;
char* tail_533;
char* head_534;
char* tail_535;
char* head_536;
char* tail_537;
char* head_538;
char* tail_539;
char* head_540;
char* tail_541;
char* head_542;
char* tail_543;
char* head_544;
int brace_num_545;
char* tail_546;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2charphcharph* __result310__;
    asm_fun_name_498=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "struct buffer*", (void*)0, (void*)0))));
    result_499=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_500=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_501=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_501++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_501--;
                        if(                        brace_num_501==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_499,head_500,tail_502-head_500);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_503=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_504=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_504++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_504--;
                        if(                        brace_num_504==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_505=info->p;
            buffer_append(result_499,head_503,tail_505-head_503);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_506=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_507=info->p;
            buffer_append(result_499,head_506,tail_507-head_506);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_508=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_499,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_510=0;
            if(            *info->p==40) {
                in_dquort_511=(_Bool)0;
                brace_num_512=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_511=!in_dquort_511;
                    }
                    else if(                    in_dquort_511) {
                        buffer_append_char(asm_fun_name_498,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_512++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_512--;
                        if(                        brace_num_512==0) {
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
            head_513=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_514=info->p;
            buffer_append(result_499,head_513,tail_514-head_513);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_515=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_516=info->p;
            buffer_append(result_499,head_515,tail_516-head_515);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_517=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_518=info->p;
            buffer_append(result_499,head_517,tail_518-head_517);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_519=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_520=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520--;
                        if(                        nest_520==0) {
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
            tail_521=info->p;
            buffer_append(result_499,head_519,tail_521-head_519);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_522=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_523=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_523++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_523--;
                        if(                        nest_523==0) {
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
            tail_524=info->p;
            buffer_append(result_499,head_522,tail_524-head_522);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_525=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_526=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_526++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_526--;
                        if(                        nest_526==0) {
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
            tail_527=info->p;
            buffer_append(result_499,head_525,tail_527-head_525);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_528=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_529=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_529++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_529--;
                        if(                        nest_529==0) {
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
            tail_530=info->p;
            buffer_append(result_499,head_528,tail_530-head_528);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_531=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_532=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_532++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_532--;
                        if(                        nest_532==0) {
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
            tail_533=info->p;
            buffer_append(result_499,head_531,tail_533-head_531);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_534=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_535=info->p;
            buffer_append(result_499,head_534,tail_535-head_534);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_536=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_537=info->p;
            buffer_append(result_499,head_536,tail_537-head_536);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_538=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_539=info->p;
            buffer_append(result_499,head_538,tail_539-head_538);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_540=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_541=info->p;
            buffer_append(result_499,head_540,tail_541-head_540);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_542=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_543=info->p;
            buffer_append(result_499,head_542,tail_543-head_542);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_544=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_545=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_545--;
                        if(                        brace_num_545==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_546=info->p;
            buffer_append(result_499,head_544,tail_546-head_544);
        }
        else {
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value397=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_498)),(char*)come_increment_ref_count(buffer_to_string(result_499)))));
    come_call_finalizer3(asm_fun_name_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_499,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value397,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj180;
char* __dec_obj181;
struct tuple2$2charphcharph* __result309__;
    __dec_obj180=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj182;
char* __dec_obj183;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj182=self->v1;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj183=self->v2;
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* asm_fun_name_547;
void* __right_value400 = (void*)0;
char* attribute_548;
int nest_549;
int nest_550;
int nest_551;
int nest_552;
int nest_553;
void* __right_value401 = (void*)0;
char* __dec_obj184;
int len_554;
_Bool in_dquort_555;
int brace_num_556;
int brace_num_557;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2charphcharph* __result311__;
    asm_fun_name_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "struct buffer*", (void*)0, (void*)0))));
    attribute_548=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_549=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549--;
                        if(                        nest_549==0) {
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
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_551=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_551++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_551--;
                        if(                        nest_551==0) {
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
                nest_552=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_552++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_552--;
                        if(                        nest_552==0) {
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
                nest_553=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_553++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_553--;
                        if(                        nest_553==0) {
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
            __dec_obj184=attribute_548;
            attribute_548=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_554=0;
            if(            *info->p==40) {
                in_dquort_555=(_Bool)0;
                brace_num_556=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_555=!in_dquort_555;
                    }
                    else if(                    in_dquort_555) {
                        buffer_append_char(asm_fun_name_547,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_556++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_556--;
                        if(                        brace_num_556==0) {
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
                brace_num_557=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_557++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_557--;
                        if(                        brace_num_557==0) {
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
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value404=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_547)),(char*)come_increment_ref_count(attribute_548))));
    come_call_finalizer3(asm_fun_name_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_548 = come_decrement_ref_count2(attribute_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value404,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value405 = (void*)0;
char* __dec_obj185;
char* head_558;
int head_sline_559;
void* __right_value406 = (void*)0;
char* buf_560;
void* __right_value407 = (void*)0;
struct sNode* node_561;
_Bool Value_562;
    while(*info->p) {
        __dec_obj185=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_558=info->p;
        head_sline_559=info->sline;
        buf_560=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_561=(struct sNode*)come_increment_ref_count(top_level_v99(buf_560,head_558,head_sline_559,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_561!=((void*)0)) {
            Value_562=node_compile(node_561,info);
            if(            !Value_562) {
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
            buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value408 = (void*)0;
char* name_563;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* result_type_564;
void* __right_value411 = (void*)0;
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
struct sType* __list_values1___565[7];
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1sTypeph* param_types_570;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __list_values2___571[7];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_names_573;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_default_parametors_574;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sFun* main_fun_575;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* name_597;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_598;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __list_values3___599[1];
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value463 = (void*)0;
char* __list_values4___601[1];
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sFun* main_fun_604;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* name_605;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* result_type_606;
void* __right_value478 = (void*)0;
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
struct sType* __list_values5___607[7];
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1sTypeph* param_types_608;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* __list_values6___609[7];
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_names_610;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_default_parametors_611;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sFun* main_fun_612;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* name_613;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* result_type_614;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __list_values7___615[5];
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sTypeph* param_types_616;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __list_values8___617[5];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1charph* param_names_618;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charph* param_default_parametors_619;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sFun* main_fun_620;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* name_621;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* result_type_622;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __list_values9___623[1];
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1sTypeph* param_types_624;
void* __right_value550 = (void*)0;
char* __list_values10___625[1];
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1charph* param_names_626;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_default_parametors_627;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sFun* main_fun_628;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* name_629;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* result_type_630;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* __list_values11___631[4];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __list_values12___633[4];
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sFun* main_fun_636;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* name_637;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* result_type_638;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* __list_values13___639[3];
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1sTypeph* param_types_640;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* __list_values14___641[3];
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1charph* param_names_642;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1charph* param_default_parametors_643;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* main_fun_644;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* name_645;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* result_type_646;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* __list_values15___647[1];
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1sTypeph* param_types_648;
void* __right_value625 = (void*)0;
char* __list_values16___649[1];
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1charph* param_names_650;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charph* param_default_parametors_651;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sFun* main_fun_652;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* name_653;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sType* result_type_654;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sType* __list_values17___655[3];
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1sTypeph* param_types_656;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
char* __list_values18___657[3];
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1charph* param_names_658;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_default_parametors_659;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* main_fun_660;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
char* name_661;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* result_type_662;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1sTypeph* param_types_663;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1charph* param_names_664;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charph* param_default_parametors_665;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sFun* main_fun_666;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
char* name_667;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* result_type_668;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* __list_values19___669[4];
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1sTypeph* param_types_670;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* __list_values20___671[4];
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1charph* param_names_672;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1charph* param_default_parametors_673;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sFun* main_fun_674;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
char* name_675;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sType* result_type_676;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1sTypeph* param_types_677;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1charph* param_names_678;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1charph* param_default_parametors_679;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sFun* fun_680;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
char* name_681;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* result_type_682;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1sTypeph* param_types_683;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1charph* param_names_684;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1charph* param_default_parametors_685;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sFun* fun_686;
void* __right_value737 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_563=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_564=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_570=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___565[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value412=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___565[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___565[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___565[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___565[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___565[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values1___565[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values1___565)));
        come_call_finalizer3(__right_value412,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_573=(struct list$1charph*)come_increment_ref_count((__list_values2___571[0]=(char*)come_increment_ref_count(((char*)(__right_value430=__builtin_string("count")))),
__list_values2___571[1]=(char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("size")))),
__list_values2___571[2]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("sname")))),
__list_values2___571[3]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("sline")))),
__list_values2___571[4]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("class_name")))),
__list_values2___571[5]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("finalizer_fun")))),
__list_values2___571[6]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph", (void*)0, (void*)0)),7,__list_values2___571)));
        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_574=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_574,((void*)0));
        list$1charph_push_back(param_default_parametors_574,((void*)0));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_575=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_563),(struct sType*)come_increment_ref_count(result_type_564),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_573),(struct list$1charph*)come_increment_ref_count(param_default_parametors_574),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_563)),(struct sFun*)come_increment_ref_count(main_fun_575));
        name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_575,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value460=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values3___599)));
        come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values4___601[0]=(char*)come_increment_ref_count(((char*)(__right_value463=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph", (void*)0, (void*)0)),1,__list_values4___601)));
        __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_608=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___607[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___607[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___607[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___607[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___607[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___607[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___607[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values5___607)));
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_610=(struct list$1charph*)come_increment_ref_count((__list_values6___609[0]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("fun")))),
__list_values6___609[1]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("mem")))),
__list_values6___609[2]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("protocol_fun")))),
__list_values6___609[3]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("protocol_obj")))),
__list_values6___609[4]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("call_finalizer_only")))),
__list_values6___609[5]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("no_decrement")))),
__list_values6___609[6]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph", (void*)0, (void*)0)),7,__list_values6___609)));
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_611=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_610),(struct list$1charph*)come_increment_ref_count(param_default_parametors_611),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(main_fun_612));
        name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_612,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_613=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_616=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___615[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value516=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___615[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___615[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___615[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
__list_values7___615[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph", (void*)0, (void*)0)),5,__list_values7___615)));
        come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_618=(struct list$1charph*)come_increment_ref_count((__list_values8___617[0]=(char*)come_increment_ref_count(((char*)(__right_value527=__builtin_string("mem")))),
__list_values8___617[1]=(char*)come_increment_ref_count(((char*)(__right_value528=__builtin_string("protocol_fun")))),
__list_values8___617[2]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("protocol_obj")))),
__list_values8___617[3]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("no_decrement")))),
__list_values8___617[4]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph", (void*)0, (void*)0)),5,__list_values8___617)));
        __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_619=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_620=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_613),(struct sType*)come_increment_ref_count(result_type_614),(struct list$1sTypeph*)come_increment_ref_count(param_types_616),(struct list$1charph*)come_increment_ref_count(param_names_618),(struct list$1charph*)come_increment_ref_count(param_default_parametors_619),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_613)),(struct sFun*)come_increment_ref_count(main_fun_620));
        name_613 = come_decrement_ref_count2(name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_619,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_621=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_622=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_624=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___623[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value547=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values9___623)));
        come_call_finalizer3(__right_value547,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_626=(struct list$1charph*)come_increment_ref_count((__list_values10___625[0]=(char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph", (void*)0, (void*)0)),1,__list_values10___625)));
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_627=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_628=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_621),(struct sType*)come_increment_ref_count(result_type_622),(struct list$1sTypeph*)come_increment_ref_count(param_types_624),(struct list$1charph*)come_increment_ref_count(param_names_626),(struct list$1charph*)come_increment_ref_count(param_default_parametors_627),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_621)),(struct sFun*)come_increment_ref_count(main_fun_628));
        name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_628,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_629=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_630=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_632=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___631[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value566=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values11___631[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values11___631[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values11___631[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values11___631)));
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_634=(struct list$1charph*)come_increment_ref_count((__list_values12___633[0]=(char*)come_increment_ref_count(((char*)(__right_value575=__builtin_string("block")))),
__list_values12___633[1]=(char*)come_increment_ref_count(((char*)(__right_value576=__builtin_string("sname")))),
__list_values12___633[2]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("sline")))),
__list_values12___633[3]=(char*)come_increment_ref_count(((char*)(__right_value578=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph", (void*)0, (void*)0)),4,__list_values12___633)));
        __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_635,((void*)0));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_636=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_629),(struct sType*)come_increment_ref_count(result_type_630),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_629)),(struct sFun*)come_increment_ref_count(main_fun_636));
        name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_636,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_637=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_638=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___639[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value597=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values13___639[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values13___639[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values13___639)));
        come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_642=(struct list$1charph*)come_increment_ref_count((__list_values14___641[0]=(char*)come_increment_ref_count(((char*)(__right_value604=__builtin_string("b")))),
__list_values14___641[1]=(char*)come_increment_ref_count(((char*)(__right_value605=__builtin_string("c")))),
__list_values14___641[2]=(char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph", (void*)0, (void*)0)),3,__list_values14___641)));
        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_643=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_644=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(result_type_638),(struct list$1sTypeph*)come_increment_ref_count(param_types_640),(struct list$1charph*)come_increment_ref_count(param_names_642),(struct list$1charph*)come_increment_ref_count(param_default_parametors_643),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_637)),(struct sFun*)come_increment_ref_count(main_fun_644));
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_644,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        param_types_648=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___647[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value622=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values15___647)));
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_650=(struct list$1charph*)come_increment_ref_count((__list_values16___649[0]=(char*)come_increment_ref_count(((char*)(__right_value625=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph", (void*)0, (void*)0)),1,__list_values16___649)));
        __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_651=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_652=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_648),(struct list$1charph*)come_increment_ref_count(param_names_650),(struct list$1charph*)come_increment_ref_count(param_default_parametors_651),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(main_fun_652));
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_648,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_652,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_653=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_654=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_656=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___655[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value641=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___655[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value643=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___655[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value645=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values17___655)));
        come_call_finalizer3(__right_value641,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value643,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value645,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_658=(struct list$1charph*)come_increment_ref_count((__list_values18___657[0]=(char*)come_increment_ref_count(((char*)(__right_value648=xsprintf("come_malloc")))),
__list_values18___657[1]=(char*)come_increment_ref_count(((char*)(__right_value649=xsprintf("come_debug")))),
__list_values18___657[2]=(char*)come_increment_ref_count(((char*)(__right_value650=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph", (void*)0, (void*)0)),3,__list_values18___657)));
        __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_659=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_659,((void*)0));
        main_fun_660=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),(struct sType*)come_increment_ref_count(result_type_654),(struct list$1sTypeph*)come_increment_ref_count(param_types_656),(struct list$1charph*)come_increment_ref_count(param_names_658),(struct list$1charph*)come_increment_ref_count(param_default_parametors_659),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_653)),(struct sFun*)come_increment_ref_count(main_fun_660));
        name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_656,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_658,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_660,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_661=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_662=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_663=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_664=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_665=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_666=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_661),(struct sType*)come_increment_ref_count(result_type_662),(struct list$1sTypeph*)come_increment_ref_count(param_types_663),(struct list$1charph*)come_increment_ref_count(param_names_664),(struct list$1charph*)come_increment_ref_count(param_default_parametors_665),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_661)),(struct sFun*)come_increment_ref_count(main_fun_666));
        name_661 = come_decrement_ref_count2(name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_663,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_666,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_667=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_670=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___669[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value682=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values19___669[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value684=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values19___669[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value686=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values19___669[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value688=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values19___669)));
        come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_672=(struct list$1charph*)come_increment_ref_count((__list_values20___671[0]=(char*)come_increment_ref_count(((char*)(__right_value691=__builtin_string("mem")))),
__list_values20___671[1]=(char*)come_increment_ref_count(((char*)(__right_value692=__builtin_string("sname")))),
__list_values20___671[2]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("sline")))),
__list_values20___671[3]=(char*)come_increment_ref_count(((char*)(__right_value694=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph", (void*)0, (void*)0)),4,__list_values20___671)));
        __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_673=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_674=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_670),(struct list$1charph*)come_increment_ref_count(param_names_672),(struct list$1charph*)come_increment_ref_count(param_default_parametors_673),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(main_fun_674));
        name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_672,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_674,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_675=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_676=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_677=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_678=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_679=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "struct list$1charph*", (void*)0, (void*)0))));
        fun_680=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_675),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1sTypeph*)come_increment_ref_count(param_types_677),(struct list$1charph*)come_increment_ref_count(param_names_678),(struct list$1charph*)come_increment_ref_count(param_default_parametors_679),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_675)),(struct sFun*)come_increment_ref_count(fun_680));
        name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_677,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_678,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_679,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_680,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_681=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_682=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_683=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_684=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_685=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "struct list$1charph*", (void*)0, (void*)0))));
        fun_686=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_681),(struct sType*)come_increment_ref_count(result_type_682),(struct list$1sTypeph*)come_increment_ref_count(param_types_683),(struct list$1charph*)come_increment_ref_count(param_names_684),(struct list$1charph*)come_increment_ref_count(param_default_parametors_685),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_681)),(struct sFun*)come_increment_ref_count(fun_686));
        name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_683,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_685,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_686,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_566;
struct list$1sTypeph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_566=0;    i_566<num_value;    i_566++    ){
        list$1sTypeph_push_back(self,values[i_566]);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
struct list_item$1sTypeph* litem_567;
struct sType* __dec_obj186;
void* __right_value426 = (void*)0;
struct list_item$1sTypeph* litem_568;
struct sType* __dec_obj187;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_569;
struct sType* __dec_obj188;
struct list$1sTypeph* __result312__;
    if(    self->len==0) {
        litem_567=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value425=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1304, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_567->prev=((void*)0);
        litem_567->next=((void*)0);
        __dec_obj186=litem_567->item;
        litem_567->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_567;
        self->head=litem_567;
    }
    else if(    self->len==1) {
        litem_568=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value426=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1314, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_568->prev=self->head;
        litem_568->next=((void*)0);
        __dec_obj187=litem_568->item;
        litem_568->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_568;
        self->head->next=litem_568;
    }
    else {
        litem_569=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1324, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_569->prev=self->tail;
        litem_569->next=((void*)0);
        __dec_obj188=litem_569->item;
        litem_569->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_569;
        self->tail=litem_569;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_572;
struct list$1charph* __result314__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_572=0;    i_572<num_value;    i_572++    ){
        list$1charph_push_back(self,values[i_572]);
    }
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_593;
unsigned int it_594;
_Bool same_key_exist_595;
char* it2_596;
struct map$2charphsFunph* __result325__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_593=charp_get_hash_key(key)%self->size;
    it_594=hash_593;
    while((_Bool)1) {
        if(        self->item_existance[it_594]) {
            if(            charp_equals(self->keys[it_594],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594] = come_decrement_ref_count2(self->keys[it_594], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_594]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_594],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_594]=item;
                }
                break;
            }
            it_594++;
            if(            it_594>=self->size) {
                it_594=0;
            }
            else if(            it_594==hash_593) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_594]=(_Bool)1;
            if(            1) {
                self->keys[it_594]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_594]=key;
            }
            if(            1) {
                self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_594]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_595=(_Bool)0;
    for(    it2_596=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_596=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_596,key)) {
            same_key_exist_595=(_Bool)1;
        }
    }
    if(    !same_key_exist_595) {
        list$1charp_push_back(self->key_list,key);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_576;
void* __right_value450 = (void*)0;
char** keys_577;
void* __right_value451 = (void*)0;
struct sFun** items_578;
void* __right_value452 = (void*)0;
_Bool* item_existance_579;
int len_580;
char* it_583;
struct sFun* default_value_586;
void* __right_value453 = (void*)0;
struct sFun* it2_587;
unsigned int hash_590;
int n_591;
struct sFun* default_value_592;
void* __right_value454 = (void*)0;
default_value_586 = (void*)0;
default_value_592 = (void*)0;
    size_576=self->size*10;
    keys_577=(char**)come_increment_ref_count(((char**)(__right_value450=(char**)come_calloc(1, sizeof(char*)*(1*(size_576)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_578=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value451=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_576)), "./comelang.h", 2708, "struct sFun**", (void*)0, (void*)0))));
    item_existance_579=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value452=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_576)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_580=0;
    for(    it_583=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_583=map$2charphsFunph_next(self)    ){
        memset(&default_value_586,0,sizeof(struct sFun*));
        it2_587=((struct sFun*)(__right_value453=map$2charphsFunph_at(self,it_583,default_value_586)));
        come_call_finalizer3(__right_value453,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_590=charp_get_hash_key(it_583)%size_576;
        n_591=hash_590;
        while((_Bool)1) {
            if(            item_existance_579[n_591]) {
                n_591++;
                if(                n_591>=size_576) {
                    n_591=0;
                }
                else if(                n_591==hash_590) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_579[n_591]=(_Bool)1;
                keys_577[n_591]=it_583;
                items_578[n_591]=((struct sFun*)(__right_value454=map$2charphsFunph_at(self,it_583,default_value_592)));
                come_call_finalizer3(__right_value454,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_580++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_577;
    self->items=items_578;
    self->item_existance=item_existance_579;
    self->size=size_576;
    self->len=len_580;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_581;
char* __result315__;
char* __result316__;
char* result_582;
char* __result317__;
result_581 = (void*)0;
result_582 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_581,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_581;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_582,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_582;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_584;
char* __result318__;
char* __result319__;
char* result_585;
char* __result320__;
result_584 = (void*)0;
result_585 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_584,0,sizeof(char*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_584;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_585,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_585;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_588;
unsigned int it_589;
struct sFun* __result321__;
struct sFun* __result322__;
struct sFun* __result323__;
struct sFun* __result324__;
    hash_588=charp_get_hash_key(((char*)key))%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                __result321__ = gComeFunResultObject = __result_obj__ = self->items[it_589];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result321__;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
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
char* source_head_687;
_Bool is_type_name_flag_688;
int sline_689;
_Bool define_struct_nobody_690;
char* p_691;
int sline_692;
void* __right_value738 = (void*)0;
char* word_693;
_Bool define_function_pointer_result_function_694;
_Bool define_variable_between_brace_695;
char* p_696;
void* __right_value739 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_697=0;
char* fun_name_698=0;
_Bool err_699=0;
void* __right_value740 = (void*)0;
char* word_700;
_Bool define_function_flag_701;
char* p_702;
void* __right_value741 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_703=0;
char* fun_name_704=0;
_Bool err_705=0;
char* word_706;
void* __right_value742 = (void*)0;
char* __dec_obj191;
void* __right_value743 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
void* __right_value744 = (void*)0;
char* __dec_obj194;
_Bool define_variable_707;
char* p_708;
void* __right_value745 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_709=0;
char* fun_name_710=0;
_Bool err_711=0;
void* __right_value746 = (void*)0;
char* word_712;
void* __right_value747 = (void*)0;
char* word_713;
char* p_714;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
char* word_715;
void* __right_value751 = (void*)0;
char* __dec_obj195;
void* __right_value752 = (void*)0;
char* word_716;
void* __right_value753 = (void*)0;
char* word_719;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* node_720;
struct sNode* __result327__;
void* __right_value756 = (void*)0;
struct sNode* __result328__;
char* header_head_721;
void* __right_value757 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_722=0;
char* fun_name_723=0;
_Bool err_724=0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sTypeph* param_types_725;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1charph* param_names_726;
void* __right_value762 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_727=0;
char* param_name_728=0;
_Bool err_729=0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1sTypeph* param_types2_731;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct list$1charph* param_names2_732;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_733=0;
char* param_name_734=0;
_Bool err_735=0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* header_tail_737;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sType* result_type2_738;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct tuple1$1sTypeph* __dec_obj197;
void* __right_value776 = (void*)0;
struct list$1sTypeph* __dec_obj198;
void* __right_value777 = (void*)0;
struct list$1charph* __dec_obj199;
_Bool var_args_739;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* header_buf_740;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1charph* param_default_parametors_741;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun_742;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sFun* fun2_746;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value839 = (void*)0;
struct sNode* __result358__;
void* __right_value840 = (void*)0;
struct sNode* node_782;
struct sNode* __result359__;
void* __right_value841 = (void*)0;
struct sNode* node_783;
struct sNode* __result360__;
void* __right_value842 = (void*)0;
struct sNode* node_784;
char* source_tail_785;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_786;
struct sNode* __result361__;
void* __right_value845 = (void*)0;
char* buf2_787;
void* __right_value846 = (void*)0;
struct sNode* __result362__;
    info->in_top_level=(_Bool)1;
    source_head_687=info->p;
    is_type_name_flag_688=is_type_name(buf,info);
    sline_689=info->sline;
    define_struct_nobody_690=(_Bool)0;
    {
        p_691=info->p;
        sline_692=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_693=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_690=(_Bool)1;
                }
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_692;
    }
    define_function_pointer_result_function_694=(_Bool)0;
    define_variable_between_brace_695=(_Bool)0;
    if(    is_type_name_flag_688) {
        p_696=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value739=backtrace_parse_type((_Bool)0,info)));
            result_type_697=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_698=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_699=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value739,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_694=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_700=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_700,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_695=(_Bool)1;
                            }
                        }
                        word_700 = come_decrement_ref_count2(word_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_697,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_698 = come_decrement_ref_count2(fun_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_689;
    }
    define_function_flag_701=(_Bool)0;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694&&charp_operator_not_equals(buf,"__typeof__")) {
        p_702=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value741=backtrace_parse_type((_Bool)0,info)));
            result_type_703=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_704=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_705=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value741,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_704 = come_decrement_ref_count2(fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_706=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj191=word_706;
                word_706=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_706,"extern")) {
                    __dec_obj192=word_706;
                    word_706=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj193=word_706;
                word_706=((void*)0);
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_706) {
                if(                is_type_name(word_706,info)) {
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
                        __dec_obj194=word_706;
                        word_706=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_706)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_688) {
                        define_function_flag_701=(_Bool)1;
                    }
                }
            }
            word_706 = come_decrement_ref_count2(word_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_702;
        info->sline=sline_689;
    }
    define_variable_707=(_Bool)1;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694) {
        p_708=info->p;
        info->p=head;
        if(        !is_type_name_flag_688) {
            define_variable_707=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value745=backtrace_parse_type((_Bool)0,info)));
            result_type_709=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_710=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_711=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value745,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_712=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_707=(_Bool)1;
                            }
                        }
                        word_712 = come_decrement_ref_count2(word_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_713=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_713,info)&&*info->p!=40) {
                            define_variable_707=(_Bool)1;
                        }
                    }
                    word_713 = come_decrement_ref_count2(word_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_710 = come_decrement_ref_count2(fun_name_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_708;
        info->sline=sline_689;
    }
    else {
        define_variable_707=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_694) {
        p_714=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value748=parse_struct_attribute(info)));
            __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value749=parse_word(info)));
                __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_715=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj195=word_715;
                        word_715=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_715,"extends")) {
                            define_variable_707=(_Bool)0;
                        }
                    }
                    word_715 = come_decrement_ref_count2(word_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_714;
        info->sline=sline_689;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_716=(char*)come_increment_ref_count(parse_word(info));
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
                    word_719=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_719)));
                    word_719 = come_decrement_ref_count2(word_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_720=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result327__ = gComeFunResultObject = __result_obj__ = node_720;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_690) {
    }
    else if(    define_variable_between_brace_695) {
        info->p=head;
        info->sline=sline_689;
        __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value756=parse_global_variable(info)));
        if(__right_value756) { __right_value756 = come_decrement_ref_count2(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    else if(    define_function_pointer_result_function_694) {
        header_head_721=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value757=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_722=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_723=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_724=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value757,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_725=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "struct list$1sTypeph*", (void*)0, (void*)0))));
            param_names_726=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value762=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_727=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_728=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_729=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value762,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_729) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_725,(struct sType*)come_increment_ref_count(param_type_727));
                    static int num_function_pointer_result_var_name_a_730=0;
                    list$1charph_push_back(param_names_726,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_730)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value764=parse_word(info)));
                        __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_731=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "struct list$1sTypeph*", (void*)0, (void*)0))));
                param_names2_732=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_733=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_734=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_735=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_735) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_731,(struct sType*)come_increment_ref_count(param_type_733));
                        static int num_function_pointer_result_var_name_b_736=0;
                        list$1charph_push_back(param_names2_732,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_736)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value771=parse_word(info)));
                            __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_734 = come_decrement_ref_count2(param_name_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_734 = come_decrement_ref_count2(param_name_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_737=info->p;
                result_type2_738=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
                __dec_obj197=result_type2_738->mResultType;
                result_type2_738->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_722)));
                come_call_finalizer3(__dec_obj197,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj198=result_type2_738->mParamTypes;
                result_type2_738->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types2_731));
                come_call_finalizer3(__dec_obj198,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj199=result_type2_738->mParamNames;
                result_type2_738->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_732));
                come_call_finalizer3(__dec_obj199,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_738->mVarArgs=(_Bool)0;
                result_type2_738->mStatic=(_Bool)0;
                var_args_739=(_Bool)0;
                header_buf_740=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_740,header_head_721,header_tail_737-header_head_721);
                buffer_append_char(header_buf_740,0);
                param_default_parametors_741=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "struct list$1charph*", (void*)0, (void*)0))));
                fun_742=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_723)),(struct sType*)come_increment_ref_count(result_type2_738),(struct list$1sTypeph*)come_increment_ref_count(param_types_725),(struct list$1charph*)come_increment_ref_count(param_names_726),(struct list$1charph*)come_increment_ref_count(param_default_parametors_741),(_Bool)1,var_args_739,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_740)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_746=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value789=__builtin_string(fun_name_723)))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_746==((void*)0)||fun2_746->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_723)),(struct sFun*)come_increment_ref_count(fun_742));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value793=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_742),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value2));
                come_call_finalizer3(param_types2_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_738,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_741,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_725,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value793,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result358__;
                come_call_finalizer3(param_types2_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_738,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_741,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_725,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_689;
        node_782=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result359__ = gComeFunResultObject = __result_obj__ = node_782;
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_701) {
        info->p=head;
        info->sline=sline_689;
        node_783=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result360__ = gComeFunResultObject = __result_obj__ = node_783;
        if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result360__;
        if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_707) {
        info->p=head;
        info->sline=sline_689;
        node_784=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_785=info->p;
        header_786=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_786,source_head_687,source_tail_785-source_head_687);
        __result361__ = gComeFunResultObject = __result_obj__ = node_784;
        if(node_784) { node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result361__;
        if(node_784) { node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_689;
    buf2_787=(char*)come_increment_ref_count(parse_word(info));
    __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=top_level_v98(buf2_787,head,head_sline,info)));
    buf2_787 = come_decrement_ref_count2(buf2_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj189;
char* __dec_obj190;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj189=self->v1;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj190=self->v2;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_717;
struct list_item$1charph* prev_it_718;
struct list$1charph* __result326__;
    it_717=self->head;
    while(it_717!=((void*)0)) {
        prev_it_718=it_717;
        it_717=it_717->next;
        come_call_finalizer3(prev_it_718,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj196;
struct tuple1$1sTypeph* __result329__;
    __dec_obj196=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_743;
unsigned int hash_744;
unsigned int it_745;
struct sFun* __result330__;
struct sFun* __result331__;
struct sFun* __result332__;
struct sFun* __result333__;
default_value_743 = (void*)0;
    memset(&default_value_743,0,sizeof(struct sFun*));
    hash_744=charp_get_hash_key(((char*)key))%self->size;
    it_745=hash_744;
    while((_Bool)1) {
        if(        self->item_existance[it_745]) {
            if(            charp_equals(self->keys[it_745],key)) {
                __result330__ = gComeFunResultObject = __result_obj__ = self->items[it_745];
                come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result330__;
            }
            it_745++;
            if(            it_745>=self->size) {
                it_745=0;
            }
            else if(            it_745==hash_744) {
                __result331__ = gComeFunResultObject = __result_obj__ = default_value_743;
                come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result331__;
            }
        }
        else {
            __result332__ = gComeFunResultObject = __result_obj__ = default_value_743;
            come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result332__;
        }
    }
    __result333__ = gComeFunResultObject = __result_obj__ = default_value_743;
    come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result334__;
void* __right_value794 = (void*)0;
struct sFunNode* result_747;
void* __right_value795 = (void*)0;
char* __dec_obj200;
void* __right_value838 = (void*)0;
struct sFun* __dec_obj225;
struct sFunNode* __result357__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_747=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_747->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_747->sname;
        result_747->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj225=result_747->mFun;
        result_747->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj225,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_747;
    come_call_finalizer3(result_747,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result335__;
void* __right_value796 = (void*)0;
struct sFun* result_748;
void* __right_value797 = (void*)0;
char* __dec_obj201;
void* __right_value798 = (void*)0;
struct sType* __dec_obj202;
void* __right_value799 = (void*)0;
struct list$1sTypeph* __dec_obj203;
void* __right_value800 = (void*)0;
struct list$1charph* __dec_obj204;
void* __right_value801 = (void*)0;
struct list$1charph* __dec_obj205;
void* __right_value802 = (void*)0;
struct sType* __dec_obj206;
void* __right_value829 = (void*)0;
struct sBlock* __dec_obj216;
void* __right_value830 = (void*)0;
struct buffer* __dec_obj217;
void* __right_value831 = (void*)0;
struct buffer* __dec_obj218;
void* __right_value832 = (void*)0;
struct buffer* __dec_obj219;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj220;
void* __right_value834 = (void*)0;
char* __dec_obj221;
void* __right_value835 = (void*)0;
char* __dec_obj222;
void* __right_value836 = (void*)0;
char* __dec_obj223;
void* __right_value837 = (void*)0;
char* __dec_obj224;
struct sFun* __result356__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_748=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj201=result_748->mName;
        result_748->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj202=result_748->mResultType;
        result_748->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj203=result_748->mParamTypes;
        result_748->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj203,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj204=result_748->mParamNames;
        result_748->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj205=result_748->mParamDefaultParametors;
        result_748->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj206=result_748->mLambdaType;
        result_748->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj216=result_748->mBlock;
        result_748->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj216,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_748->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj217=result_748->mSource;
        result_748->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj218=result_748->mSourceHead;
        result_748->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj219=result_748->mSourceHead2;
        result_748->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj220=result_748->mSourceDefer;
        result_748->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_748->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_748->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj221=result_748->mComeHeader;
        result_748->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj222=result_748->mDeclareSName;
        result_748->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_748->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_748->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj223=result_748->mAttribute;
        result_748->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj224=result_748->mFunAttribute;
        result_748->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_748;
    come_call_finalizer3(result_748,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result336__;
void* __right_value803 = (void*)0;
struct sBlock* result_749;
void* __right_value804 = (void*)0;
struct list$1sNodeph* __dec_obj207;
void* __right_value828 = (void*)0;
struct sVarTable* __dec_obj215;
struct sBlock* __result355__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_749=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj207=result_749->mNodes;
        result_749->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj207,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj215=result_749->mVarTable;
        result_749->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj215,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_749->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_749;
    come_call_finalizer3(result_749,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result337__;
void* __right_value805 = (void*)0;
struct sVarTable* result_750;
void* __right_value827 = (void*)0;
struct map$2charphsVarph* __dec_obj214;
struct sVarTable* __result354__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_750=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj214=result_750->mVars;
        result_750->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj214,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_750->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_750->mID=self->mID;
    }
    __result354__ = gComeFunResultObject = __result_obj__ = result_750;
    come_call_finalizer3(result_750,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result338__;
void* __right_value806 = (void*)0;
void* __right_value812 = (void*)0;
struct map$2charphsVarph* result_754;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1charp* __dec_obj209;
char* it_757;
struct sVar* default_value_760;
void* __right_value815 = (void*)0;
struct sVar* it2_763;
void* __right_value826 = (void*)0;
struct map$2charphsVarph* __result353__;
default_value_760 = (void*)0;
    if(    self==((void*)0)) {
        __result338__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_754=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2550, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj209=result_754->key_list;
    result_754->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2552, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj209,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_757=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_757=map$2charphsVarph_next(self)    ){
        memset(&default_value_760,0,sizeof(struct sVar*));
        it2_763=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_757,default_value_760));
        map$2charphsVarph_put(result_754,it_757,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_763)));
        come_call_finalizer3(it2_763,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = result_754;
    come_call_finalizer3(result_754,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
int i_751;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1charp* __dec_obj208;
struct map$2charphsVarph* __result339__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value807=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2479, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value808=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2480, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value809=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2481, "_Bool*", (void*)0, (void*)0))));
    for(    i_751=0;    i_751<128;    i_751++    ){
        self->item_existance[i_751]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj208=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj208,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_752;
int i_753;
    for(    i_752=0;    i_752<self->size;    i_752++    ){
        if(        self->item_existance[i_752]) {
            if(            1) {
                come_call_finalizer3(self->items[i_752],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_753=0;    i_753<self->size;    i_753++    ){
        if(        self->item_existance[i_753]) {
            if(            1) {
                self->keys[i_753] = come_decrement_ref_count2(self->keys[i_753], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_755;
char* __result340__;
char* __result341__;
char* result_756;
char* __result342__;
result_755 = (void*)0;
result_756 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_755,0,sizeof(char*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_755;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_756,0,sizeof(char*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_756;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_758;
char* __result343__;
char* __result344__;
char* result_759;
char* __result345__;
result_758 = (void*)0;
result_759 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_758,0,sizeof(char*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_758;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_759,0,sizeof(char*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_759;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_761;
unsigned int it_762;
struct sVar* __result346__;
struct sVar* __result347__;
struct sVar* __result348__;
struct sVar* __result349__;
    hash_761=charp_get_hash_key(((char*)key))%self->size;
    it_762=hash_761;
    while((_Bool)1) {
        if(        self->item_existance[it_762]) {
            if(            charp_equals(self->keys[it_762],key)) {
                __result346__ = gComeFunResultObject = __result_obj__ = self->items[it_762];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result346__;
            }
            it_762++;
            if(            it_762>=self->size) {
                it_762=0;
            }
            else if(            it_762==hash_761) {
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
unsigned int hash_775;
int it_776;
_Bool same_key_exist_777;
char* it2_778;
struct map$2charphsVarph* __result350__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_775=charp_get_hash_key(key)%self->size;
    it_776=hash_775;
    while((_Bool)1) {
        if(        self->item_existance[it_776]) {
            if(            charp_equals(self->keys[it_776],key)) {
                if(                1) {
                    self->keys[it_776] = come_decrement_ref_count2(self->keys[it_776], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_776]);
                    self->keys[it_776]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_776]);
                    self->keys[it_776]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_776],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_776]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_776]=item;
                }
                break;
            }
            it_776++;
            if(            it_776>=self->size) {
                it_776=0;
            }
            else if(            it_776==hash_775) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_776]=(_Bool)1;
            if(            1) {
                self->keys[it_776]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_776]=key;
            }
            if(            1) {
                self->items[it_776]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_776]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_777=(_Bool)0;
    for(    it2_778=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_778=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_778,key)) {
            same_key_exist_777=(_Bool)1;
        }
    }
    if(    !same_key_exist_777) {
        list$1charp_push_back(self->key_list,key);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_764;
void* __right_value816 = (void*)0;
char** keys_765;
void* __right_value817 = (void*)0;
struct sVar** items_766;
void* __right_value818 = (void*)0;
_Bool* item_existance_767;
int len_768;
char* it_769;
struct sVar* default_value_770;
void* __right_value819 = (void*)0;
struct sVar* it2_771;
unsigned int hash_772;
int n_773;
struct sVar* default_value_774;
void* __right_value820 = (void*)0;
default_value_770 = (void*)0;
default_value_774 = (void*)0;
    size_764=self->size*10;
    keys_765=(char**)come_increment_ref_count(((char**)(__right_value816=(char**)come_calloc(1, sizeof(char*)*(1*(size_764)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_766=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value817=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_764)), "./comelang.h", 2708, "struct sVar**", (void*)0, (void*)0))));
    item_existance_767=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value818=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_764)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_768=0;
    for(    it_769=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_769=map$2charphsVarph_next(self)    ){
        memset(&default_value_770,0,sizeof(struct sVar*));
        it2_771=((struct sVar*)(__right_value819=map$2charphsVarph_at(self,it_769,default_value_770)));
        come_call_finalizer3(__right_value819,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_772=charp_get_hash_key(it_769)%size_764;
        n_773=hash_772;
        while((_Bool)1) {
            if(            item_existance_767[n_773]) {
                n_773++;
                if(                n_773>=size_764) {
                    n_773=0;
                }
                else if(                n_773==hash_772) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_767[n_773]=(_Bool)1;
                keys_765[n_773]=it_769;
                items_766[n_773]=((struct sVar*)(__right_value820=map$2charphsVarph_at(self,it_769,default_value_774)));
                come_call_finalizer3(__right_value820,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_768++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_765;
    self->items=items_766;
    self->item_existance=item_existance_767;
    self->size=size_764;
    self->len=len_768;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result351__;
void* __right_value821 = (void*)0;
struct sVar* result_779;
void* __right_value822 = (void*)0;
char* __dec_obj210;
void* __right_value823 = (void*)0;
char* __dec_obj211;
void* __right_value824 = (void*)0;
struct sType* __dec_obj212;
void* __right_value825 = (void*)0;
char* __dec_obj213;
struct sVar* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_779=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj210=result_779->mName;
        result_779->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj211=result_779->mCValueName;
        result_779->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj212=result_779->mType;
        result_779->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_779->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_779->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_779->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_779->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_779->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj213=result_779->mFunName;
        result_779->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_779;
    come_call_finalizer3(result_779,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_780;
int i_781;
    for(    i_780=0;    i_780<self->size;    i_780++    ){
        if(        self->item_existance[i_780]) {
            if(            1) {
                come_call_finalizer3(self->items[i_780],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_781=0;    i_781<self->size;    i_781++    ){
        if(        self->item_existance[i_781]) {
            if(            1) {
                self->keys[i_781] = come_decrement_ref_count2(self->keys[i_781], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_788;
int caller_line_789;
char* caller_sname_790;
_Bool comma_instead_of_semicolon_791;
char* last_code_792;
char* __dec_obj226;
char* last_code2_793;
char* __dec_obj227;
void* __right_value847 = (void*)0;
char* sname_top_794;
int sline_top_795;
void* __right_value848 = (void*)0;
struct sFun* funX_796;
_Bool __result363__;
void* __right_value849 = (void*)0;
struct sType* result_type_797;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1sTypeph* param_types_798;
struct list$1sTypeph* o2_saved_799;
struct sType* it_802;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sType* param_type_805;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1charph* param_names_806;
void* __right_value856 = (void*)0;
struct list$1charph* param_default_parametors_807;
char* p_808;
int sline_809;
char* sname_810;
char* head_811;
struct buffer* source_812;
void* __right_value857 = (void*)0;
struct buffer* __dec_obj228;
struct sType* generics_type_saved_813;
void* __right_value858 = (void*)0;
struct sType* __dec_obj229;
struct list$1charph* method_generics_type_names_814;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1charph* __dec_obj230;
struct list$1charph* o2_saved_815;
char* it_816;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1charph* __dec_obj231;
char* __dec_obj232;
void* __right_value863 = (void*)0;
struct sBlock* block_817;
struct buffer* __dec_obj233;
char* __dec_obj234;
_Bool var_args_818;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sFun* fun_819;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value873 = (void*)0;
struct sNode* node_820;
_Bool in_generics_fun_821;
_Bool Value_822;
void* __if_result__1_823 = (void*)0;
_Bool __result370__;
struct sType* __dec_obj235;
struct list$1charph* __dec_obj236;
void* __right_value874 = (void*)0;
char* __dec_obj237;
char* __dec_obj238;
char* __dec_obj239;
_Bool __result371__;
    caller_fun_788=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_789=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_790=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_791=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_792=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_793=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_794=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_795=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_796=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_796) {
        __result363__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_796,sFun_finalize, 0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    result_type_797=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_798=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2309, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_799=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_802=list$1sTypeph_begin((o2_saved_799));    !list$1sTypeph_end((o2_saved_799));    it_802=list$1sTypeph_next((o2_saved_799))    ){
        param_type_805=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value852=come_call_cloner(sType_clone, it_802))),generics_type,info));
        come_call_finalizer3(__right_value852,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_805->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_798,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_805)));
        come_call_finalizer3(param_type_805,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_799,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_806=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_807=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_808=info->p;
    sline_809=info->sline;
    sname_810=(char*)come_increment_ref_count(info->sname);
    head_811=info->head;
    source_812=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj228=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_813=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj229=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_814=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj230=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_815=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_816=list$1charph_begin((o2_saved_815));    !list$1charph_end((o2_saved_815));    it_816=list$1charph_next((o2_saved_815))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_816)));
    }
    come_call_finalizer3(o2_saved_815,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj231=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj232=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_817=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_811;
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_812);
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_808;
    info->sline=sline_809;
    __dec_obj234=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_810);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_797->mInline=(_Bool)0;
    result_type_797->mStatic=(_Bool)0;
    result_type_797->mUniq=(_Bool)0;
    var_args_818=generics_fun->mVarArgs;
    fun_819=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2360, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sTypeph*)come_increment_ref_count(param_types_798),(struct list$1charph*)come_increment_ref_count(param_names_806),(struct list$1charph*)come_increment_ref_count(param_default_parametors_807),(_Bool)0,var_args_818,(struct sBlock*)come_increment_ref_count(block_817),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_819));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value872=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2367, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_819),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_820=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value872,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_821=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_822=node_compile(node_820,info);
    if(    !Value_822) {
        __result370__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_796,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_798,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_810 = come_decrement_ref_count2(sname_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_812,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_813,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_817,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_819,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result370__;
    }
    else {
        __if_result__1_823=(void*)(Value_822);
;
    }
    info->in_generics_fun=in_generics_fun_821;
    __dec_obj235=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_813);
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_814);
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_794));
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_795;
    __dec_obj238=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_792);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_793);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_788;
    info->caller_line=caller_line_789;
    info->caller_sname=caller_sname_790;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_791;
    __result371__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_796,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_798,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_810 = come_decrement_ref_count2(sname_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_812,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_813,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_817,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_819,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result371__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_800;
struct sType* __result364__;
struct sType* __result365__;
struct sType* result_801;
struct sType* __result366__;
result_800 = (void*)0;
result_801 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_800,0,sizeof(struct sType*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_800;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->it=self->head;
    if(    self->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_801,0,sizeof(struct sType*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_801;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_803;
struct sType* __result367__;
struct sType* __result368__;
struct sType* result_804;
struct sType* __result369__;
result_803 = (void*)0;
result_804 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_803,0,sizeof(struct sType*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_803;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_804,0,sizeof(struct sType*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_804;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_824;
int caller_line_825;
char* caller_sname_826;
_Bool comma_instead_of_semicolon_827;
char* last_code_828;
char* __dec_obj240;
char* last_code2_829;
char* __dec_obj241;
void* __right_value875 = (void*)0;
char* sname_top_830;
int sline_top_831;
void* __right_value876 = (void*)0;
struct sFun* funX_832;
_Bool __result372__;
void* __right_value877 = (void*)0;
struct sType* result_type_833;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1sTypeph* param_types_834;
struct list$1sTypeph* o2_saved_835;
struct sType* it_836;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sType* param_type_837;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1charph* param_names_838;
void* __right_value884 = (void*)0;
struct list$1charph* param_default_parametors_839;
char* p_840;
int sline_841;
char* sname_842;
char* head_843;
struct buffer* source_844;
void* __right_value885 = (void*)0;
struct buffer* __dec_obj242;
struct list$1charph* method_generics_type_names_845;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct list$1charph* __dec_obj243;
struct list$1charph* o2_saved_846;
char* it_847;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1charph* __dec_obj244;
char* __dec_obj245;
void* __right_value890 = (void*)0;
struct sBlock* block_848;
struct buffer* __dec_obj246;
char* __dec_obj247;
_Bool var_args_849;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sFun* fun_850;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value901 = (void*)0;
struct sNode* node_851;
_Bool Value_852;
void* __if_result__2_853 = (void*)0;
_Bool __result373__;
struct list$1charph* __dec_obj248;
void* __right_value902 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
_Bool __result374__;
    caller_fun_824=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_825=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_826=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_827=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_828=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_829=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_830=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_831=info->sline;
    funX_832=((struct sFun*)(__right_value876=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value876,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_832) {
        __result372__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result372__;
    }
    result_type_833=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_834=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2421, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_835=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_836=list$1sTypeph_begin((o2_saved_835));    !list$1sTypeph_end((o2_saved_835));    it_836=list$1sTypeph_next((o2_saved_835))    ){
        param_type_837=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value880=come_call_cloner(sType_clone, it_836))),info));
        come_call_finalizer3(__right_value880,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_837->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_834,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_837)));
        come_call_finalizer3(param_type_837,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_835,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_838=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_839=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_840=info->p;
    sline_841=info->sline;
    sname_842=(char*)come_increment_ref_count(info->sname);
    head_843=info->head;
    source_844=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj242=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj242,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_845=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj243=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2445, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj243,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_846=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_847=list$1charph_begin((o2_saved_846));    !list$1charph_end((o2_saved_846));    it_847=list$1charph_next((o2_saved_846))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_847)));
    }
    come_call_finalizer3(o2_saved_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj244=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj245=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_848=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_843;
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_844);
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_840;
    info->sline=sline_841;
    __dec_obj247=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_842);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_833->mInline=(_Bool)0;
    result_type_833->mStatic=(_Bool)0;
    result_type_833->mUniq=(_Bool)0;
    var_args_849=generics_fun->mVarArgs;
    fun_850=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2469, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types_834)),(struct list$1charph*)come_increment_ref_count(param_names_838),(struct list$1charph*)come_increment_ref_count(param_default_parametors_839),(_Bool)0,var_args_849,(struct sBlock*)come_increment_ref_count(block_848),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_850));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2476, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value900=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2476, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_850),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_851=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value900,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_852=node_compile(node_851,info);
    if(    !Value_852) {
        __result373__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_834,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_842 = come_decrement_ref_count2(sname_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_844,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_850,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_851) { node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result373__;
    }
    else {
        __if_result__2_853=(void*)(Value_852);
;
    }
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_845);
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_830));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_831;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_828);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_829);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_824;
    info->caller_line=caller_line_825;
    info->caller_sname=caller_sname_826;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_827;
    __result374__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_834,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_842 = come_decrement_ref_count2(sname_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_844,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_850,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_851) { node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result374__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_854;
char* source_head_855;
void* __right_value903 = (void*)0;
char* attribute_856;
struct sType* result_type_857;
char* var_name_858;
_Bool constructor__859;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* __dec_obj252;
void* __right_value906 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_860=0;
char* var_name2_861=0;
_Bool err_862=0;
struct sType* __dec_obj253;
char* __dec_obj254;
_Bool method_definition_863;
char* p_864;
int sline_865;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* buf2_866;
char* fun_name_867;
char* base_fun_name_868;
void* __right_value909 = (void*)0;
char* __dec_obj255;
void* __right_value910 = (void*)0;
char* __dec_obj256;
void* __right_value911 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_869=0;
char* name_870=0;
_Bool err_871=0;
void* __right_value912 = (void*)0;
char* __dec_obj257;
void* __right_value913 = (void*)0;
char* __dec_obj258;
void* __right_value914 = (void*)0;
char* __dec_obj259;
void* __right_value915 = (void*)0;
char* __dec_obj260;
void* __right_value916 = (void*)0;
char* __dec_obj261;
void* __right_value917 = (void*)0;
char* __dec_obj262;
void* __right_value918 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_872=0;
struct list$1charph* param_names_873=0;
struct list$1charph* param_default_parametors_874=0;
_Bool var_args_875=0;
char* header_tail_876;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* header_buf_877;
int version_878;
int n_879;
_Bool in_top_level_880;
void* __right_value921 = (void*)0;
struct sBlock* block_881;
void* __right_value922 = (void*)0;
char* fun_name_883;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sFun* fun_884;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun2_885;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value937 = (void*)0;
struct sNode* __result377__;
void* __right_value938 = (void*)0;
char* none_generics_name_887;
void* __right_value939 = (void*)0;
char* generics_sname_888;
int generics_sline_889;
void* __right_value940 = (void*)0;
char* block_890;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sGenericsFun* fun_891;
void* __right_value947 = (void*)0;
char* fun_name3_892;
void* __right_value953 = (void*)0;
struct sNode* __result389__;
void* __right_value954 = (void*)0;
char* generics_sname_914;
int generics_sline_915;
void* __right_value955 = (void*)0;
char* block_916;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sGenericsFun* fun_917;
void* __right_value962 = (void*)0;
char* fun_name3_918;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* __result390__;
char* source_tail_919;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct buffer* header_920;
void* __right_value967 = (void*)0;
char* name_921;
void* __right_value968 = (void*)0;
char* name_922;
int i_923;
void* __right_value969 = (void*)0;
struct sType* param_type_924;
void* __right_value970 = (void*)0;
char* param_name_925;
void* __right_value971 = (void*)0;
char* default_parametor_926;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
char* impl_name_927;
void* __right_value975 = (void*)0;
char* result_type_name_928;
void* __right_value976 = (void*)0;
char* impl_name_929;
void* __right_value977 = (void*)0;
char* result_type_name_930;
int i_931;
void* __right_value978 = (void*)0;
struct sType* param_type_932;
void* __right_value979 = (void*)0;
char* param_name_933;
void* __right_value980 = (void*)0;
char* default_parametor_934;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sBlock* block_935;
_Bool static_fun_936;
_Bool inline_fun_937;
_Bool uniq_fun_938;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
char* new_fun_name_939;
void* __right_value987 = (void*)0;
char* __dec_obj267;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sFun* fun_940;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sFun* fun2_941;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1001 = (void*)0;
struct sNode* __result391__;
void* __right_value1002 = (void*)0;
char* new_fun_name_942;
void* __right_value1003 = (void*)0;
char* __dec_obj268;
char* source_tail_943;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct buffer* header_944;
_Bool result_type_static_945;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sFun* fun_946;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sFun* fun2_947;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1018 = (void*)0;
struct sNode* __result392__;
void* __right_value1019 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_948=0;
char* fun_attribute_949=0;
void* __right_value1020 = (void*)0;
char* __dec_obj269;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct buffer* header_950;
char* source_tail_951;
_Bool result_type_static_952;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sFun* fun_953;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun2_954;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1034 = (void*)0;
struct sNode* __result393__;
struct sNode* __result394__;
fun_name_867 = (void*)0;
    header_head_854=info->p;
    source_head_855=info->p;
    attribute_856=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_857=((void*)0);
    var_name_858=((void*)0);
    constructor__859=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value904=parse_word(info)));
        __right_value904 = come_decrement_ref_count2(__right_value904, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj252=result_type_857;
        result_type_857=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_857->mHeap=(_Bool)1;
        constructor__859=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value906=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_860=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_861=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_862=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value906,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj253=result_type_857;
        result_type_857=(struct sType*)come_increment_ref_count(result_type2_860);
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj254=var_name_858;
        var_name_858=(char*)come_increment_ref_count(var_name2_861);
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_862) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_860,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_861 = come_decrement_ref_count2(var_name2_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_863=(_Bool)0;
    {
        p_864=info->p;
        sline_865=info->sline;
        buf2_866=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_866,*info->p);
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
        if(        buffer_length(buf2_866)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_863=(_Bool)1;
        }
        info->p=p_864;
        info->sline=sline_865;
        come_call_finalizer3(buf2_866,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_868=((void*)0);
    if(    constructor__859) {
        __dec_obj255=base_fun_name_868;
        base_fun_name_868=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=fun_name_867;
        fun_name_867=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_868,info,(_Bool)1));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_863) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value911=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_869=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_870=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_871=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value911,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_871) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj257=base_fun_name_868;
        base_fun_name_868=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=fun_name_867;
        fun_name_867=(char*)come_increment_ref_count(create_method_name(obj_type_869,(_Bool)0,base_fun_name_868,info,(_Bool)1));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_870 = come_decrement_ref_count2(name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj259=base_fun_name_868;
        base_fun_name_868=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=fun_name_867;
        fun_name_867=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_868,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj261=fun_name_867;
        fun_name_867=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=base_fun_name_868;
        base_fun_name_868=(char*)come_increment_ref_count(__builtin_string(fun_name_867));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_868,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value918=parse_params(info,constructor__859)));
    param_types_872=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_873=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_874=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_875=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value918,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_876=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_868,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_877,header_head_854,header_tail_876-header_head_854);
    buffer_append_char(header_buf_877,0);
    version_878=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_879=0;
        while(xisdigit(*info->p)) {
            n_879=n_879*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_878=n_879;
    }
    in_top_level_880=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_868,"lambda")) {
        block_881=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_882=0;
        lambda_num_882++;
        fun_name_883=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_882));
        result_type_857->mInline=(_Bool)0;
        result_type_857->mStatic=(_Bool)0;
        result_type_857->mUniq=(_Bool)0;
        fun_884=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2644, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_883)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),(_Bool)0,var_args_875,(struct sBlock*)come_increment_ref_count(block_881),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_877)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_885=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value930=__builtin_string(fun_name_883)))));
        __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_885==((void*)0)||fun2_885->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_883)),(struct sFun*)come_increment_ref_count(fun_884));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2654, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value934=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2654, "struct sLambdaNode*", (void*)0, (void*)0)),fun_884,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value937=_inf_value5));
        come_call_finalizer3(block_881,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_883 = come_decrement_ref_count2(fun_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_885,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value934,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value937) { __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result377__;
        come_call_finalizer3(block_881,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_883 = come_decrement_ref_count2(fun_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_885,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_887=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_888=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_889=info->sline;
        block_890=(char*)come_increment_ref_count(skip_block(info));
        fun_891=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2664, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value942=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value943=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),var_args_875,(char*)come_increment_ref_count(block_890),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_888)),generics_sline_889));
        come_call_finalizer3(__right_value942,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value943,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_892=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_887,base_fun_name_868));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_892)),(struct sGenericsFun*)come_increment_ref_count(fun_891));
        __result389__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_887 = come_decrement_ref_count2(none_generics_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_888 = come_decrement_ref_count2(generics_sname_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_890 = come_decrement_ref_count2(block_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_891,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_892 = come_decrement_ref_count2(fun_name3_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result389__;
        none_generics_name_887 = come_decrement_ref_count2(none_generics_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_888 = come_decrement_ref_count2(generics_sname_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_890 = come_decrement_ref_count2(block_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_891,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_892 = come_decrement_ref_count2(fun_name3_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_914=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_915=info->sline;
        block_916=(char*)come_increment_ref_count(skip_block(info));
        fun_917=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value957=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value958=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),var_args_875,(char*)come_increment_ref_count(block_916),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_914)),generics_sline_915));
        come_call_finalizer3(__right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_918=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_868));
        if(        method_definition_863) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sGenericsFun*)come_increment_ref_count(fun_917));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_918)),(struct sGenericsFun*)come_increment_ref_count(fun_917));
        }
        __result390__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_914 = come_decrement_ref_count2(generics_sname_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_916 = come_decrement_ref_count2(block_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_917,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_918 = come_decrement_ref_count2(fun_name3_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result390__;
        generics_sname_914 = come_decrement_ref_count2(generics_sname_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_916 = come_decrement_ref_count2(block_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_917,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_918 = come_decrement_ref_count2(fun_name3_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_919=info->p-1;
        header_920=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2694, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__859) {
            if(            list$1sTypeph_length(param_types_872)==1) {
                name_921=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_920,"extern %s*%% %s*::initialize(%s*%% self);\n",name_921,name_921,name_921);
                name_921 = come_decrement_ref_count2(name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_922=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_920,"extern %s*%% %s*::initialize(%s*%% self, ",name_922,name_922,name_922);
                for(                i_923=1;                i_923<list$1sTypeph_length(param_types_872);                i_923++                ){
                    param_type_924=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_872,i_923));
                    param_name_925=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_873,i_923));
                    default_parametor_926=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_874,i_923));
                    if(                    default_parametor_926) {
                        buffer_append_format(header_920,"extern %s %s=%s",((char*)(__right_value972=make_come_type_name_string_no_solved(param_type_924,(_Bool)0,info))),param_name_925,default_parametor_926);
                        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_920,"extern %s %s",((char*)(__right_value973=make_come_type_name_string_no_solved(param_type_924,(_Bool)0,info))),param_name_925);
                        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_923!=list$1sTypeph_length(param_types_872)-1) {
                        buffer_append_str(header_920,",");
                    }
                    come_call_finalizer3(param_type_924,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_925 = come_decrement_ref_count2(param_name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_926 = come_decrement_ref_count2(default_parametor_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_920,");\n");
                name_922 = come_decrement_ref_count2(name_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_872)==1) {
                impl_name_927=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_928=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_857,(_Bool)0,info));
                buffer_append_format(header_920,"extern %s %s*::%s(%s* self);\n",result_type_name_928,impl_name_927,base_fun_name_868,impl_name_927);
                impl_name_927 = come_decrement_ref_count2(impl_name_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_928 = come_decrement_ref_count2(result_type_name_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_929=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_930=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_857,(_Bool)0,info));
                buffer_append_format(header_920,"extern %s %s*::%s(%s* self, ",result_type_name_930,impl_name_929,base_fun_name_868,impl_name_929);
                for(                i_931=1;                i_931<list$1sTypeph_length(param_types_872);                i_931++                ){
                    param_type_932=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_872,i_931));
                    param_name_933=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_873,i_931));
                    default_parametor_934=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_874,i_931));
                    if(                    default_parametor_934) {
                        buffer_append_format(header_920,"extern %s %s=%s",((char*)(__right_value981=make_come_type_name_string_no_solved(param_type_932,(_Bool)0,info))),param_name_933,default_parametor_934);
                        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_920,"extern %s %s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_932,(_Bool)0,info))),param_name_933);
                        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_931!=list$1sTypeph_length(param_types_872)-1) {
                        buffer_append_str(header_920,",");
                    }
                    come_call_finalizer3(param_type_932,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_933 = come_decrement_ref_count2(param_name_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_934 = come_decrement_ref_count2(default_parametor_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_920,");\n");
                impl_name_929 = come_decrement_ref_count2(impl_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_930 = come_decrement_ref_count2(result_type_name_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_920,source_head_855,source_tail_919-source_head_855);
            buffer_append_str(header_920,";\n");
        }
        if(        !result_type_857->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value983=buffer_to_string(header_920))));
                __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_935=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__859,(_Bool)1));
        static_fun_936=(_Bool)0;
        if(        result_type_857->mStatic) {
            result_type_857->mStatic=(_Bool)0;
            result_type_857->mUniq=(_Bool)0;
            static_fun_936=(_Bool)1;
        }
        inline_fun_937=(_Bool)0;
        if(        result_type_857->mInline) {
            result_type_857->mInline=(_Bool)0;
            result_type_857->mUniq=(_Bool)0;
            inline_fun_937=(_Bool)1;
        }
        uniq_fun_938=(_Bool)0;
        if(        result_type_857->mUniq) {
            result_type_857->mUniq=(_Bool)0;
            result_type_857->mInline=(_Bool)0;
            result_type_857->mStatic=(_Bool)0;
            uniq_fun_938=(_Bool)1;
        }
        if(        version_878>0) {
            new_fun_name_939=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value985=__builtin_string(fun_name_867))),version_878));
            __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj267=fun_name_867;
            fun_name_867=(char*)come_increment_ref_count(__builtin_string(new_fun_name_939));
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_939 = come_decrement_ref_count2(new_fun_name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_940=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),(_Bool)0,var_args_875,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_935)),static_fun_936,(char*)come_increment_ref_count(buffer_to_string(header_buf_877)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_937,uniq_fun_938,(char*)come_increment_ref_count(attribute_856),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_867)),(struct sFun*)come_increment_ref_count(fun_940));
        }
        else {
            fun2_941=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value996=__builtin_string(fun_name_867)))));
            __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_941==((void*)0)||fun2_941->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_867)),(struct sFun*)come_increment_ref_count(fun_940));
            }
            come_call_finalizer3(fun2_941,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2816, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1000=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2816, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_940),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1001=_inf_value6));
        come_call_finalizer3(header_920,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_935,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1000,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1001) { __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        come_call_finalizer3(header_920,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_935,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_878>0) {
            new_fun_name_942=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_867,version_878));
            __dec_obj268=fun_name_867;
            fun_name_867=(char*)come_increment_ref_count(__builtin_string(new_fun_name_942));
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_942 = come_decrement_ref_count2(new_fun_name_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_943=info->p;
            header_944=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2829, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_944,source_head_855,source_tail_943-source_head_855);
            skip_spaces_and_lf(info);
            result_type_static_945=result_type_857->mStatic;
            result_type_857->mStatic=(_Bool)0;
            result_type_857->mUniq=(_Bool)0;
            result_type_857->mInline=(_Bool)0;
            fun_946=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2839, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),(_Bool)1,var_args_875,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_877)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_856),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_947=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1012=__builtin_string(fun_name_867)))));
            __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_947==((void*)0)||fun2_947->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_867)),(struct sFun*)come_increment_ref_count(fun_946));
            }
            if(            !result_type_static_945) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1015=buffer_to_string(header_944))));
                    __right_value1015 = come_decrement_ref_count2(__right_value1015, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1017=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_946),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1018=_inf_value7));
            come_call_finalizer3(header_944,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_946,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_947,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1017,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1018) { __right_value1018 = come_decrement_ref_count2(__right_value1018, ((struct sNode*)__right_value1018)->finalize, ((struct sNode*)__right_value1018)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result392__;
            come_call_finalizer3(header_944,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_946,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_947,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1019=parse_function_attribute(info)));
            asm_fun_948=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_949=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1019,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_948,"")) {
                __dec_obj269=fun_name_867;
                fun_name_867=(char*)come_increment_ref_count(__builtin_string(asm_fun_948));
                __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_950=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2867, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_951=info->p;
                buffer_append(header_950,source_head_855,source_tail_951-source_head_855);
                skip_spaces_and_lf(info);
            }
            result_type_static_952=result_type_857->mStatic;
            result_type_857->mStatic=(_Bool)0;
            result_type_857->mUniq=(_Bool)0;
            result_type_857->mInline=(_Bool)0;
            fun_953=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2880, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_867)),(struct sType*)come_increment_ref_count(result_type_857),(struct list$1sTypeph*)come_increment_ref_count(param_types_872),(struct list$1charph*)come_increment_ref_count(param_names_873),(struct list$1charph*)come_increment_ref_count(param_default_parametors_874),(_Bool)1,var_args_875,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_877)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_856),(char*)come_increment_ref_count(fun_attribute_949)));
            fun2_954=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1028=__builtin_string(fun_name_867)))));
            __right_value1028 = come_decrement_ref_count2(__right_value1028, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_954==((void*)0)||fun2_954->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_867)),(struct sFun*)come_increment_ref_count(fun_953));
            }
            if(            !result_type_static_952) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1031=buffer_to_string(header_950))));
                    __right_value1031 = come_decrement_ref_count2(__right_value1031, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1033=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2899, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_953),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1034=_inf_value8));
            asm_fun_948 = come_decrement_ref_count2(asm_fun_948, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_949 = come_decrement_ref_count2(fun_attribute_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_950,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_953,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_954,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1033,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1034) { __right_value1034 = come_decrement_ref_count2(__right_value1034, ((struct sNode*)__right_value1034)->finalize, ((struct sNode*)__right_value1034)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result393__;
            asm_fun_948 = come_decrement_ref_count2(asm_fun_948, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_949 = come_decrement_ref_count2(fun_attribute_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_950,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_953,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_954,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_880;
    __result394__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_856 = come_decrement_ref_count2(attribute_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_857,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_858 = come_decrement_ref_count2(var_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_867 = come_decrement_ref_count2(fun_name_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_868 = come_decrement_ref_count2(base_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_872,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_873,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj263;
struct list$1charph* __dec_obj264;
struct list$1charph* __dec_obj265;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj263=self->v1;
            come_call_finalizer3(__dec_obj263,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            come_call_finalizer3(__dec_obj264,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj265=self->v3;
            come_call_finalizer3(__dec_obj265,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result375__;
void* __right_value935 = (void*)0;
struct sLambdaNode* result_886;
void* __right_value936 = (void*)0;
char* __dec_obj266;
struct sLambdaNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_886=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_886->sname;
        result_886->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_886->mFun=self->mFun;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_910;
unsigned int it_911;
_Bool same_key_exist_912;
char* it2_913;
struct map$2charphsGenericsFunph* __result388__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_910=charp_get_hash_key(key)%self->size;
    it_911=hash_910;
    while((_Bool)1) {
        if(        self->item_existance[it_911]) {
            if(            charp_equals(self->keys[it_911],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_911]);
                    self->keys[it_911] = come_decrement_ref_count2(self->keys[it_911], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_911]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_911]);
                    self->keys[it_911]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_911],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_911]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_911]=item;
                }
                break;
            }
            it_911++;
            if(            it_911>=self->size) {
                it_911=0;
            }
            else if(            it_911==hash_910) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_911]=(_Bool)1;
            if(            1) {
                self->keys[it_911]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_911]=key;
            }
            if(            1) {
                self->items[it_911]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_911]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_912=(_Bool)0;
    for(    it2_913=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_913=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_913,key)) {
            same_key_exist_912=(_Bool)1;
        }
    }
    if(    !same_key_exist_912) {
        list$1charp_push_back(self->key_list,key);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_893;
void* __right_value948 = (void*)0;
char** keys_894;
void* __right_value949 = (void*)0;
struct sGenericsFun** items_895;
void* __right_value950 = (void*)0;
_Bool* item_existance_896;
int len_897;
char* it_900;
struct sGenericsFun* default_value_903;
void* __right_value951 = (void*)0;
struct sGenericsFun* it2_904;
unsigned int hash_907;
int n_908;
struct sGenericsFun* default_value_909;
void* __right_value952 = (void*)0;
default_value_903 = (void*)0;
default_value_909 = (void*)0;
    size_893=self->size*10;
    keys_894=(char**)come_increment_ref_count(((char**)(__right_value948=(char**)come_calloc(1, sizeof(char*)*(1*(size_893)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_895=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value949=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_893)), "./comelang.h", 2708, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_896=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value950=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_893)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_897=0;
    for(    it_900=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_900=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_903,0,sizeof(struct sGenericsFun*));
        it2_904=((struct sGenericsFun*)(__right_value951=map$2charphsGenericsFunph_at(self,it_900,default_value_903)));
        come_call_finalizer3(__right_value951,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_907=charp_get_hash_key(it_900)%size_893;
        n_908=hash_907;
        while((_Bool)1) {
            if(            item_existance_896[n_908]) {
                n_908++;
                if(                n_908>=size_893) {
                    n_908=0;
                }
                else if(                n_908==hash_907) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_896[n_908]=(_Bool)1;
                keys_894[n_908]=it_900;
                items_895[n_908]=((struct sGenericsFun*)(__right_value952=map$2charphsGenericsFunph_at(self,it_900,default_value_909)));
                come_call_finalizer3(__right_value952,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_897++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_894;
    self->items=items_895;
    self->item_existance=item_existance_896;
    self->size=size_893;
    self->len=len_897;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_898;
char* __result378__;
char* __result379__;
char* result_899;
char* __result380__;
result_898 = (void*)0;
result_899 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_898,0,sizeof(char*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_898;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_899,0,sizeof(char*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_899;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_901;
char* __result381__;
char* __result382__;
char* result_902;
char* __result383__;
result_901 = (void*)0;
result_902 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_901,0,sizeof(char*));
        __result381__ = gComeFunResultObject = __result_obj__ = result_901;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result382__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    memset(&result_902,0,sizeof(char*));
    __result383__ = gComeFunResultObject = __result_obj__ = result_902;
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_905;
unsigned int it_906;
struct sGenericsFun* __result384__;
struct sGenericsFun* __result385__;
struct sGenericsFun* __result386__;
struct sGenericsFun* __result387__;
    hash_905=charp_get_hash_key(((char*)key))%self->size;
    it_906=hash_905;
    while((_Bool)1) {
        if(        self->item_existance[it_906]) {
            if(            charp_equals(self->keys[it_906],key)) {
                __result384__ = gComeFunResultObject = __result_obj__ = self->items[it_906];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
            it_906++;
            if(            it_906>=self->size) {
                it_906=0;
            }
            else if(            it_906==hash_905) {
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
char* last_code_955;
char* __dec_obj270;
char* last_code2_956;
char* __dec_obj271;
_Bool comma_instead_of_semicolon_957;
struct sClass* current_stack_frame_struct_958;
struct sFun* finalizer_959;
void* __right_value1035 = (void*)0;
char* real_fun_name_960;
void* __right_value1036 = (void*)0;
char* user_real_fun_name_961;
void* __right_value1037 = (void*)0;
struct sFun* user_finalizer_962;
void* __right_value1038 = (void*)0;
struct sType* type2_963;
struct sClass* klass_964;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct buffer* source_965;
void* __right_value1041 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_974;
struct tuple2$2charphsTypeph* it_977;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_980=0;
struct sType* field_type_981=0;
char* p_984;
int sline_985;
char* sname_986;
char* head_987;
struct buffer* source3_988;
struct buffer* __dec_obj280;
void* __right_value1042 = (void*)0;
char* __dec_obj281;
void* __right_value1043 = (void*)0;
struct sBlock* block_989;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sType* result_type_990;
void* __right_value1046 = (void*)0;
char* name_991;
void* __right_value1047 = (void*)0;
struct sType* self_type_992;
struct sType* __list_values21___994[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1sTypeph* param_types_993;
void* __right_value1050 = (void*)0;
char* __list_values22___995[1];
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct list$1charph* param_names_996;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1charph* param_default_parametors_997;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct buffer* header_buf_998;
void* __right_value1057 = (void*)0;
int i_999;
void* __right_value1058 = (void*)0;
struct sType* param_type_1000;
void* __right_value1059 = (void*)0;
char* param_name_1001;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sFun* fun2_1002;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sFun* fun_1003;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1072 = (void*)0;
struct sNode* node_1004;
_Bool Value_1005;
struct buffer* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
    last_code_955=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_956=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_957=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_958=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_959=((void*)0);
    real_fun_name_960=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_961=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_962=((struct sFun*)(__right_value1037=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_961)));
    come_call_finalizer3(__right_value1037,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_963=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_963;
    klass_964=type->mClass;
    if(    type->mPointerNum>0&&klass_964->mStruct||type->mAllocaValue) {
        source_965=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2940, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_965,123);
        if(        user_finalizer_962) {
            char source2_966[1024];
            memset(&source2_966, 0, sizeof(char)            *(1024)            );
            snprintf(source2_966,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_961);
            buffer_append_str(source_965,source2_966);
        }
        klass_964=((struct sClass*)(__right_value1041=map$2charphsClassphp_operator_load_element(info->classes,klass_964->mName)));
        come_call_finalizer3(__right_value1041,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_974=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_964->mFields)),it_977=list$1tuple2$2charphsTypephph_begin((o2_saved_974));        !list$1tuple2$2charphsTypephph_end((o2_saved_974));        it_977=list$1tuple2$2charphsTypephph_next((o2_saved_974))        ){
            multiple_assign_var11=it_977;
            name_980=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_981=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            field_type_981->mHeap) {
                char source2_982[1024];
                memset(&source2_982, 0, sizeof(char)                *(1024)                );
                snprintf(source2_982,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_980,name_980,name_980,name_980);
                buffer_append_str(source_965,source2_982);
            }
            else if(            field_type_981->mChannel) {
                char source2_983[1024];
                memset(&source2_983, 0, sizeof(char)                *(1024)                );
                snprintf(source2_983,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_980,name_980);
                buffer_append_str(source_965,source2_983);
                snprintf(source2_983,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_980,name_980);
                buffer_append_str(source_965,source2_983);
            }
            name_980 = come_decrement_ref_count2(name_980, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_981,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_974,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_965,125);
        p_984=info->p;
        sline_985=info->sline;
        sname_986=(char*)come_increment_ref_count(info->sname);
        head_987=info->head;
        source3_988=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj280=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_965);
        come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_965->buf;
        info->head=source_965->buf;
        __dec_obj281=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_960));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_989=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_990=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2997, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        name_991=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_960));
        self_type_992=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_992->mHeap=(_Bool)0;
        if(        self_type_992->mPointerNum==0) {
            self_type_992->mPointerNum=1;
        }
        if(        self_type_992->mPointerNum>1) {
            self_type_992->mPointerNum=1;
        }
        param_types_993=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___994[0]=(struct sType*)come_increment_ref_count(self_type_992),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3007, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values21___994)));
        param_names_996=(struct list$1charph*)come_increment_ref_count((__list_values22___995[0]=(char*)come_increment_ref_count(((char*)(__right_value1050=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3008, "struct list$1charph", (void*)0, (void*)0)),1,__list_values22___995)));
        __right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_997=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3009, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_997,((void*)0));
        header_buf_998=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3012, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_998,((char*)(__right_value1057=make_come_type_name_string(result_type_990,info))));
        __right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_998," ");
        buffer_append_str(header_buf_998,real_fun_name_960);
        buffer_append_str(header_buf_998,"(");
        for(        i_999=0;        i_999<list$1sTypeph_length(param_types_993);        i_999++        ){
            param_type_1000=((struct sType*)come_null_check(((struct sType*)(__right_value1058=list$1sTypephp_operator_load_element(param_types_993,i_999))), "05function.c", 3020, 7));
            come_call_finalizer3(__right_value1058,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1001=((char*)come_null_check(((char*)(__right_value1059=list$1charphp_operator_load_element(param_names_996,i_999))), "05function.c", 3021, 8));
            __right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_998,((char*)(__right_value1060=make_come_type_name_string(param_type_1000,info))));
            __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_998," ");
            buffer_append_str(header_buf_998,param_name_1001);
            if(            i_999!=list$1sTypeph_length(param_types_993)-1) {
                buffer_append_str(header_buf_998,",");
            }
        }
        buffer_append_str(header_buf_998,")");
        result_type_990->mStatic=(_Bool)0;
        result_type_990->mUniq=(_Bool)0;
        result_type_990->mInline=(_Bool)0;
        fun2_1002=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1061=__builtin_string(name_991)))));
        __right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1002==((void*)0)||fun2_1002->mExternal) {
            fun_1003=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3039, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_991),(struct sType*)come_increment_ref_count(result_type_990),(struct list$1sTypeph*)come_increment_ref_count(param_types_993),(struct list$1charph*)come_increment_ref_count(param_names_996),(struct list$1charph*)come_increment_ref_count(param_default_parametors_997),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_989),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_998)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_991)),(struct sFun*)come_increment_ref_count(fun_1003));
            finalizer_959=fun_1003;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3051, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1071=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3051, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1003),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            node_1004=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value1071,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1005=node_compile(node_1004,info);
            if(            !Value_1005) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1003,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1004) { node_1004 = come_decrement_ref_count2(node_1004, ((struct sNode*)node_1004)->finalize, ((struct sNode*)node_1004)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            finalizer_959=fun2_1002;
        }
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_988);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_984;
        info->head=head_987;
        info->sline=sline_985;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_986);
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_965,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_986 = come_decrement_ref_count2(sname_986, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_988,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_989,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_990,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_991 = come_decrement_ref_count2(name_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_992,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_993,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_996,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_997,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_998,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1002,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_958;
    __dec_obj284=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_955);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_956);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_957;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1074=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3075, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),finalizer_959,(char*)come_increment_ref_count(real_fun_name_960))));
    last_code_955 = come_decrement_ref_count2(last_code_955, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_956 = come_decrement_ref_count2(last_code2_956, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_960 = come_decrement_ref_count2(real_fun_name_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_961 = come_decrement_ref_count2(user_real_fun_name_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_963,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1074,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_967;
unsigned int hash_968;
unsigned int it_969;
struct sClass* __result395__;
struct sClass* __result396__;
struct sClass* __result397__;
struct sClass* __result398__;
default_value_967 = (void*)0;
    memset(&default_value_967,0,sizeof(struct sClass*));
    hash_968=charp_get_hash_key(((char*)key))%self->size;
    it_969=hash_968;
    while((_Bool)1) {
        if(        self->item_existance[it_969]) {
            if(            charp_equals(self->keys[it_969],key)) {
                __result395__ = gComeFunResultObject = __result_obj__ = self->items[it_969];
                come_call_finalizer3(default_value_967,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result395__;
            }
            it_969++;
            if(            it_969>=self->size) {
                it_969=0;
            }
            else if(            it_969==hash_968) {
                __result396__ = gComeFunResultObject = __result_obj__ = default_value_967;
                come_call_finalizer3(default_value_967,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
        }
        else {
            __result397__ = gComeFunResultObject = __result_obj__ = default_value_967;
            come_call_finalizer3(default_value_967,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result397__;
        }
    }
    __result398__ = gComeFunResultObject = __result_obj__ = default_value_967;
    come_call_finalizer3(default_value_967,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj272;
struct list$1tuple2$2charphsTypephph* __dec_obj273;
char* __dec_obj277;
char* __dec_obj278;
char* __dec_obj279;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj272=self->mName;
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj273=self->mFields;
            come_call_finalizer3(__dec_obj273,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj277=self->mDeclareSName;
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj278=self->mParentClassName;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj279=self->mAttribute;
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_970;
struct list_item$1tuple2$2charphsTypephph* prev_it_971;
    it_970=self->head;
    while(it_970!=((void*)0)) {
        prev_it_971=it_970;
        it_970=it_970->next;
        come_call_finalizer3(prev_it_971,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj274;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj274=self->item;
            come_call_finalizer3(__dec_obj274,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj275;
struct sType* __dec_obj276;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj275=self->v1;
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj276=self->v2;
            come_call_finalizer3(__dec_obj276,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_972;
struct list_item$1tuple2$2charphsTypephph* prev_it_973;
    it_972=self->head;
    while(it_972!=((void*)0)) {
        prev_it_973=it_972;
        it_972=it_972->next;
        come_call_finalizer3(prev_it_973,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_975;
struct tuple2$2charphsTypeph* __result399__;
struct tuple2$2charphsTypeph* __result400__;
struct tuple2$2charphsTypeph* result_976;
struct tuple2$2charphsTypeph* __result401__;
result_975 = (void*)0;
result_976 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_975,0,sizeof(struct tuple2$2charphsTypeph*));
        __result399__ = gComeFunResultObject = __result_obj__ = result_975;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    self->it=self->head;
    if(    self->it) {
        __result400__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    memset(&result_976,0,sizeof(struct tuple2$2charphsTypeph*));
    __result401__ = gComeFunResultObject = __result_obj__ = result_976;
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_978;
struct tuple2$2charphsTypeph* __result402__;
struct tuple2$2charphsTypeph* __result403__;
struct tuple2$2charphsTypeph* result_979;
struct tuple2$2charphsTypeph* __result404__;
result_978 = (void*)0;
result_979 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_978,0,sizeof(struct tuple2$2charphsTypeph*));
        __result402__ = gComeFunResultObject = __result_obj__ = result_978;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result403__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    memset(&result_979,0,sizeof(struct tuple2$2charphsTypeph*));
    __result404__ = gComeFunResultObject = __result_obj__ = result_979;
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj286;
struct tuple2$2sFunpcharph* __result405__;
    self->v1=v1;
    __dec_obj286=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result405__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj287;
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

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1006;
char* __dec_obj288;
char* last_code2_1007;
char* __dec_obj289;
_Bool comma_instead_of_semicolon_1008;
struct sClass* current_stack_frame_struct_1009;
struct sFun* equaler_1010;
void* __right_value1075 = (void*)0;
char* real_fun_name_1011;
void* __right_value1076 = (void*)0;
struct sType* type2_1012;
struct sClass* klass_1013;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct buffer* source_1014;
char* name_1015;
void* __right_value1079 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1017;
struct tuple2$2charphsTypeph* it_1018;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1019=0;
struct sType* field_type_1020=0;
char* p_1022;
int sline_1023;
char* sname_1024;
char* head_1025;
struct buffer* source3_1026;
struct buffer* __dec_obj290;
void* __right_value1080 = (void*)0;
char* __dec_obj291;
void* __right_value1081 = (void*)0;
struct sBlock* block_1027;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct sType* result_type_1028;
void* __right_value1084 = (void*)0;
char* name_1029;
void* __right_value1085 = (void*)0;
struct sType* left_type_1030;
void* __right_value1086 = (void*)0;
struct sType* right_type_1031;
struct sType* __list_values23___1033[2];
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1sTypeph* param_types_1032;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
char* __list_values24___1034[2];
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
struct list$1charph* param_names_1035;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1charph* param_default_parametors_1036;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct buffer* header_buf_1037;
void* __right_value1097 = (void*)0;
int i_1038;
void* __right_value1098 = (void*)0;
struct sType* param_type_1039;
void* __right_value1099 = (void*)0;
char* param_name_1040;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sFun* fun2_1041;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sFun* fun_1042;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1112 = (void*)0;
struct sNode* node_1043;
_Bool Value_1044;
struct buffer* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct tuple2$2sFunpcharph* __result407__;
    last_code_1006=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj288=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1007=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj289=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1008=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1009=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1010=((void*)0);
    real_fun_name_1011=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1012=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1012;
    klass_1013=type->mClass;
    if(    type->mPointerNum>0&&!klass_1013->mNumber) {
        source_1014=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3101, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1014,123);
        if(        klass_1013->mProtocol) {
            name_1015="_protocol_obj";
            char source2_1016[1024];
            memset(&source2_1016, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1016,1024,"return left.%s.equals(right.%s);\n",name_1015,name_1015);
            buffer_append_str(source_1014,source2_1016);
        }
        else {
            klass_1013=((struct sClass*)(__right_value1079=map$2charphsClassphp_operator_load_element(info->classes,klass_1013->mName)));
            come_call_finalizer3(__right_value1079,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1017=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1013->mFields)),it_1018=list$1tuple2$2charphsTypephph_begin((o2_saved_1017));            !list$1tuple2$2charphsTypephph_end((o2_saved_1017));            it_1018=list$1tuple2$2charphsTypephph_next((o2_saved_1017))            ){
                multiple_assign_var12=it_1018;
                name_1019=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1020=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                char source2_1021[1024];
                memset(&source2_1021, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1021,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1019,name_1019,name_1019);
                buffer_append_str(source_1014,source2_1021);
                name_1019 = come_decrement_ref_count2(name_1019, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1020,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1017,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1014,"return true;");
        buffer_append_char(source_1014,125);
        p_1022=info->p;
        sline_1023=info->sline;
        sname_1024=(char*)come_increment_ref_count(info->sname);
        head_1025=info->head;
        source3_1026=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj290=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1014);
        come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1014->buf;
        info->head=source_1014->buf;
        __dec_obj291=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1011));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1027=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1028=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3149, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1029=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1011));
        left_type_1030=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1030->mHeap=(_Bool)0;
        right_type_1031=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1031->mHeap=(_Bool)0;
        param_types_1032=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1033[0]=(struct sType*)come_increment_ref_count(left_type_1030),
__list_values23___1033[1]=(struct sType*)come_increment_ref_count(right_type_1031),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3155, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values23___1033)));
        param_names_1035=(struct list$1charph*)come_increment_ref_count((__list_values24___1034[0]=(char*)come_increment_ref_count(((char*)(__right_value1089=__builtin_string("left")))),
__list_values24___1034[1]=(char*)come_increment_ref_count(((char*)(__right_value1090=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3156, "struct list$1charph", (void*)0, (void*)0)),2,__list_values24___1034)));
        __right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1036=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3157, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1036,((void*)0));
        list$1charph_push_back(param_default_parametors_1036,((void*)0));
        header_buf_1037=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3161, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1037,((char*)(__right_value1097=make_come_type_name_string(result_type_1028,info))));
        __right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1037," ");
        buffer_append_str(header_buf_1037,real_fun_name_1011);
        buffer_append_str(header_buf_1037,"(");
        for(        i_1038=0;        i_1038<list$1sTypeph_length(param_types_1032);        i_1038++        ){
            param_type_1039=((struct sType*)come_null_check(((struct sType*)(__right_value1098=list$1sTypephp_operator_load_element(param_types_1032,i_1038))), "05function.c", 3169, 9));
            come_call_finalizer3(__right_value1098,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1040=((char*)come_null_check(((char*)(__right_value1099=list$1charphp_operator_load_element(param_names_1035,i_1038))), "05function.c", 3170, 10));
            __right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1037,((char*)(__right_value1100=make_come_type_name_string(param_type_1039,info))));
            __right_value1100 = come_decrement_ref_count2(__right_value1100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1037," ");
            buffer_append_str(header_buf_1037,param_name_1040);
            if(            i_1038!=list$1sTypeph_length(param_types_1032)-1) {
                buffer_append_str(header_buf_1037,",");
            }
        }
        buffer_append_str(header_buf_1037,")");
        result_type_1028->mStatic=(_Bool)0;
        result_type_1028->mUniq=(_Bool)0;
        result_type_1028->mInline=(_Bool)0;
        fun2_1041=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1101=__builtin_string(name_1029)))));
        __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1041==((void*)0)||fun2_1041->mExternal) {
            fun_1042=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3188, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1029),(struct sType*)come_increment_ref_count(result_type_1028),(struct list$1sTypeph*)come_increment_ref_count(param_types_1032),(struct list$1charph*)come_increment_ref_count(param_names_1035),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1036),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1027),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1037)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1029)),(struct sFun*)come_increment_ref_count(fun_1042));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3198, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1111=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3198, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1042),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1043=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1111,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1044=node_compile(node_1043,info);
            if(            !Value_1044) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1010=fun_1042;
            come_call_finalizer3(fun_1042,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1043) { node_1043 = come_decrement_ref_count2(node_1043, ((struct sNode*)node_1043)->finalize, ((struct sNode*)node_1043)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1010=fun2_1041;
        }
        __dec_obj292=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1026);
        come_call_finalizer3(__dec_obj292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1022;
        info->head=head_1025;
        info->sline=sline_1023;
        __dec_obj293=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1024);
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1014,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1024 = come_decrement_ref_count2(sname_1024, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1026,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1027,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1028,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1029 = come_decrement_ref_count2(name_1029, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1030,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1031,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1032,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1035,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1036,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1037,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1041,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1009;
    __dec_obj294=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1006);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj295=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1007);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1008;
    __result407__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1114=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3224, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1010,(char*)come_increment_ref_count(real_fun_name_1011))));
    last_code_1006 = come_decrement_ref_count2(last_code_1006, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1007 = come_decrement_ref_count2(last_code2_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1011 = come_decrement_ref_count2(real_fun_name_1011, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1012,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1114,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1045;
char* __dec_obj296;
char* last_code2_1046;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_1047;
struct sClass* current_stack_frame_struct_1048;
struct sFun* equaler_1049;
void* __right_value1115 = (void*)0;
char* real_fun_name_1050;
void* __right_value1116 = (void*)0;
struct sType* type2_1051;
struct sClass* klass_1052;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct buffer* source_1053;
char* name_1054;
int i_1057;
void* __right_value1119 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1058;
struct tuple2$2charphsTypeph* it_1059;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1060=0;
struct sType* field_type_1061=0;
char* p_1065;
int sline_1066;
char* sname_1067;
char* head_1068;
struct buffer* source3_1069;
struct buffer* __dec_obj298;
void* __right_value1120 = (void*)0;
char* __dec_obj299;
void* __right_value1121 = (void*)0;
struct sBlock* block_1070;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct sType* result_type_1071;
void* __right_value1124 = (void*)0;
char* name_1072;
void* __right_value1125 = (void*)0;
struct sType* left_type_1073;
void* __right_value1126 = (void*)0;
struct sType* right_type_1074;
struct sType* __list_values25___1076[2];
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
struct list$1sTypeph* param_types_1075;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
char* __list_values26___1077[2];
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1charph* param_names_1078;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct list$1charph* param_default_parametors_1079;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct buffer* header_buf_1080;
void* __right_value1137 = (void*)0;
int i_1081;
void* __right_value1138 = (void*)0;
struct sType* param_type_1082;
void* __right_value1139 = (void*)0;
char* param_name_1083;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
struct sFun* fun2_1084;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct sFun* fun_1085;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1152 = (void*)0;
struct sNode* node_1086;
_Bool Value_1087;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct tuple2$2sFunpcharph* __result408__;
    last_code_1045=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1046=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1047=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1048=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1049=((void*)0);
    real_fun_name_1050=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1051=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1051;
    klass_1052=type->mClass;
    if(    type->mPointerNum>0&&!klass_1052->mNumber) {
        source_1053=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3249, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1053,123);
        if(        klass_1052->mProtocol) {
            name_1054="_protocol_obj";
            char source2_1055[1024];
            memset(&source2_1055, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1055,1024,"return left.%s !== right.%s;\n",name_1054,name_1054);
            buffer_append_str(source_1053,source2_1055);
        }
        else {
            char source2_1056[1024];
            memset(&source2_1056, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1056,1024,"return !(");
            buffer_append_str(source_1053,source2_1056);
            snprintf(source2_1056,1024,"( ");
            buffer_append_str(source_1053,source2_1056);
            i_1057=0;
            klass_1052=((struct sClass*)(__right_value1119=map$2charphsClassphp_operator_load_element(info->classes,klass_1052->mName)));
            come_call_finalizer3(__right_value1119,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1058=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1052->mFields)),it_1059=list$1tuple2$2charphsTypephph_begin((o2_saved_1058));            !list$1tuple2$2charphsTypephph_end((o2_saved_1058));            it_1059=list$1tuple2$2charphsTypephph_next((o2_saved_1058))            ){
                multiple_assign_var13=it_1059;
                name_1060=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1061=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1062[1024];
                memset(&source2_1062, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1062,1024,"(left.%s === right.%s)",name_1060,name_1060,name_1060);
                buffer_append_str(source_1053,source2_1062);
                if(                i_1057==list$1tuple2$2charphsTypephph_length(klass_1052->mFields)-1) {
                    char source2_1063[1024];
                    memset(&source2_1063, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1063,1024,"));");
                    buffer_append_str(source_1053,source2_1063);
                }
                else {
                    char source2_1064[1024];
                    memset(&source2_1064, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1064,1024," && ");
                    buffer_append_str(source_1053,source2_1064);
                }
                i_1057++;
                name_1060 = come_decrement_ref_count2(name_1060, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1061,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1058,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1053,125);
        p_1065=info->p;
        sline_1066=info->sline;
        sname_1067=(char*)come_increment_ref_count(info->sname);
        head_1068=info->head;
        source3_1069=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1053);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1053->buf;
        info->head=source_1053->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1050));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1070=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1071=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3317, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1072=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1050));
        left_type_1073=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1073->mHeap=(_Bool)0;
        right_type_1074=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1074->mHeap=(_Bool)0;
        param_types_1075=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1076[0]=(struct sType*)come_increment_ref_count(left_type_1073),
__list_values25___1076[1]=(struct sType*)come_increment_ref_count(right_type_1074),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3323, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values25___1076)));
        param_names_1078=(struct list$1charph*)come_increment_ref_count((__list_values26___1077[0]=(char*)come_increment_ref_count(((char*)(__right_value1129=__builtin_string("left")))),
__list_values26___1077[1]=(char*)come_increment_ref_count(((char*)(__right_value1130=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3324, "struct list$1charph", (void*)0, (void*)0)),2,__list_values26___1077)));
        __right_value1129 = come_decrement_ref_count2(__right_value1129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1130 = come_decrement_ref_count2(__right_value1130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1079=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3325, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1079,((void*)0));
        list$1charph_push_back(param_default_parametors_1079,((void*)0));
        header_buf_1080=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3329, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1080,((char*)(__right_value1137=make_come_type_name_string(result_type_1071,info))));
        __right_value1137 = come_decrement_ref_count2(__right_value1137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1080," ");
        buffer_append_str(header_buf_1080,real_fun_name_1050);
        buffer_append_str(header_buf_1080,"(");
        for(        i_1081=0;        i_1081<list$1sTypeph_length(param_types_1075);        i_1081++        ){
            param_type_1082=((struct sType*)come_null_check(((struct sType*)(__right_value1138=list$1sTypephp_operator_load_element(param_types_1075,i_1081))), "05function.c", 3337, 11));
            come_call_finalizer3(__right_value1138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1083=((char*)come_null_check(((char*)(__right_value1139=list$1charphp_operator_load_element(param_names_1078,i_1081))), "05function.c", 3338, 12));
            __right_value1139 = come_decrement_ref_count2(__right_value1139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1080,((char*)(__right_value1140=make_come_type_name_string(param_type_1082,info))));
            __right_value1140 = come_decrement_ref_count2(__right_value1140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1080," ");
            buffer_append_str(header_buf_1080,param_name_1083);
            if(            i_1081!=list$1sTypeph_length(param_types_1075)-1) {
                buffer_append_str(header_buf_1080,",");
            }
        }
        buffer_append_str(header_buf_1080,")");
        result_type_1071->mStatic=(_Bool)0;
        result_type_1071->mUniq=(_Bool)0;
        result_type_1071->mInline=(_Bool)0;
        fun2_1084=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1141=__builtin_string(name_1072)))));
        __right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1084==((void*)0)||fun2_1084->mExternal) {
            fun_1085=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3356, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1072),(struct sType*)come_increment_ref_count(result_type_1071),(struct list$1sTypeph*)come_increment_ref_count(param_types_1075),(struct list$1charph*)come_increment_ref_count(param_names_1078),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1079),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1070),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1080)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1072)),(struct sFun*)come_increment_ref_count(fun_1085));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3366, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1151=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3366, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1085),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1086=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1151,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1087=node_compile(node_1086,info);
            if(            !Value_1087) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1049=fun_1085;
            come_call_finalizer3(fun_1085,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1086) { node_1086 = come_decrement_ref_count2(node_1086, ((struct sNode*)node_1086)->finalize, ((struct sNode*)node_1086)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1049=fun2_1084;
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1069);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1065;
        info->head=head_1068;
        info->sline=sline_1066;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1067);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1053,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1067 = come_decrement_ref_count2(sname_1067, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1069,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1070,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1071,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1072 = come_decrement_ref_count2(name_1072, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1073,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1074,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1075,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1078,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1079,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1080,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1084,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1048;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1045);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1046);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1047;
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1154=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3392, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1049,(char*)come_increment_ref_count(real_fun_name_1050))));
    last_code_1045 = come_decrement_ref_count2(last_code_1045, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1046 = come_decrement_ref_count2(last_code2_1046, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1050 = come_decrement_ref_count2(real_fun_name_1050, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1154,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
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
char* last_code_1088;
char* __dec_obj304;
char* last_code2_1089;
char* __dec_obj305;
_Bool comma_instead_of_semicolon_1090;
struct sClass* current_stack_frame_struct_1091;
struct sFun* equaler_1092;
void* __right_value1155 = (void*)0;
char* real_fun_name_1093;
void* __right_value1156 = (void*)0;
struct sType* type2_1094;
struct sClass* klass_1095;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* source_1096;
char* name_1097;
int i_1100;
void* __right_value1159 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1101;
struct tuple2$2charphsTypeph* it_1102;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1103=0;
struct sType* field_type_1104=0;
char* p_1108;
int sline_1109;
char* sname_1110;
char* head_1111;
struct buffer* source3_1112;
struct buffer* __dec_obj306;
void* __right_value1160 = (void*)0;
char* __dec_obj307;
void* __right_value1161 = (void*)0;
struct sBlock* block_1113;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sType* result_type_1114;
void* __right_value1164 = (void*)0;
char* name_1115;
void* __right_value1165 = (void*)0;
struct sType* left_type_1116;
void* __right_value1166 = (void*)0;
struct sType* right_type_1117;
struct sType* __list_values27___1119[2];
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct list$1sTypeph* param_types_1118;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
char* __list_values28___1120[2];
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct list$1charph* param_names_1121;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
struct list$1charph* param_default_parametors_1122;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct buffer* header_buf_1123;
void* __right_value1177 = (void*)0;
int i_1124;
void* __right_value1178 = (void*)0;
struct sType* param_type_1125;
void* __right_value1179 = (void*)0;
char* param_name_1126;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct sFun* fun2_1127;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct sFun* fun_1128;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1192 = (void*)0;
struct sNode* node_1129;
_Bool Value_1130;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_1088=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1089=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1090=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1091=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1092=((void*)0);
    real_fun_name_1093=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1094=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1094;
    klass_1095=type->mClass;
    if(    type->mPointerNum>0&&!klass_1095->mNumber) {
        source_1096=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3417, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1096,123);
        if(        klass_1095->mProtocol) {
            name_1097="_protocol_obj";
            char source2_1098[1024];
            memset(&source2_1098, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1098,1024,"return !left.%s.equals(right.%s);\n",name_1097,name_1097);
            buffer_append_str(source_1096,source2_1098);
        }
        else {
            char source2_1099[1024];
            memset(&source2_1099, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1099,1024,"return !(");
            buffer_append_str(source_1096,source2_1099);
            i_1100=0;
            klass_1095=((struct sClass*)(__right_value1159=map$2charphsClassphp_operator_load_element(info->classes,klass_1095->mName)));
            come_call_finalizer3(__right_value1159,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1101=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1095->mFields)),it_1102=list$1tuple2$2charphsTypephph_begin((o2_saved_1101));            !list$1tuple2$2charphsTypephph_end((o2_saved_1101));            it_1102=list$1tuple2$2charphsTypephph_next((o2_saved_1101))            ){
                multiple_assign_var14=it_1102;
                name_1103=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1104=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1105[1024];
                memset(&source2_1105, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1105,1024,"left.%s.equals(right.%s)",name_1103,name_1103);
                buffer_append_str(source_1096,source2_1105);
                if(                i_1100==list$1tuple2$2charphsTypephph_length(klass_1095->mFields)-1) {
                    char source2_1106[1024];
                    memset(&source2_1106, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1106,1024,");");
                    buffer_append_str(source_1096,source2_1106);
                }
                else {
                    char source2_1107[1024];
                    memset(&source2_1107, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1107,1024," && ");
                    buffer_append_str(source_1096,source2_1107);
                }
                i_1100++;
                name_1103 = come_decrement_ref_count2(name_1103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1104,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1101,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1096,125);
        p_1108=info->p;
        sline_1109=info->sline;
        sname_1110=(char*)come_increment_ref_count(info->sname);
        head_1111=info->head;
        source3_1112=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1096);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1096->buf;
        info->head=source_1096->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1093));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1113=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1114=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3482, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1115=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1093));
        left_type_1116=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1116->mHeap=(_Bool)0;
        right_type_1117=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1117->mHeap=(_Bool)0;
        param_types_1118=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1119[0]=(struct sType*)come_increment_ref_count(left_type_1116),
__list_values27___1119[1]=(struct sType*)come_increment_ref_count(right_type_1117),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3488, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values27___1119)));
        param_names_1121=(struct list$1charph*)come_increment_ref_count((__list_values28___1120[0]=(char*)come_increment_ref_count(((char*)(__right_value1169=__builtin_string("left")))),
__list_values28___1120[1]=(char*)come_increment_ref_count(((char*)(__right_value1170=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3489, "struct list$1charph", (void*)0, (void*)0)),2,__list_values28___1120)));
        __right_value1169 = come_decrement_ref_count2(__right_value1169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1122=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3490, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1122,((void*)0));
        list$1charph_push_back(param_default_parametors_1122,((void*)0));
        header_buf_1123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3494, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1123,((char*)(__right_value1177=make_come_type_name_string(result_type_1114,info))));
        __right_value1177 = come_decrement_ref_count2(__right_value1177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1123," ");
        buffer_append_str(header_buf_1123,real_fun_name_1093);
        buffer_append_str(header_buf_1123,"(");
        for(        i_1124=0;        i_1124<list$1sTypeph_length(param_types_1118);        i_1124++        ){
            param_type_1125=((struct sType*)come_null_check(((struct sType*)(__right_value1178=list$1sTypephp_operator_load_element(param_types_1118,i_1124))), "05function.c", 3502, 13));
            come_call_finalizer3(__right_value1178,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1126=((char*)come_null_check(((char*)(__right_value1179=list$1charphp_operator_load_element(param_names_1121,i_1124))), "05function.c", 3503, 14));
            __right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1123,((char*)(__right_value1180=make_come_type_name_string(param_type_1125,info))));
            __right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1123," ");
            buffer_append_str(header_buf_1123,param_name_1126);
            if(            i_1124!=list$1sTypeph_length(param_types_1118)-1) {
                buffer_append_str(header_buf_1123,",");
            }
        }
        buffer_append_str(header_buf_1123,")");
        result_type_1114->mStatic=(_Bool)0;
        result_type_1114->mUniq=(_Bool)0;
        result_type_1114->mInline=(_Bool)0;
        fun2_1127=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1181=__builtin_string(name_1115)))));
        __right_value1181 = come_decrement_ref_count2(__right_value1181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1127==((void*)0)||fun2_1127->mExternal) {
            fun_1128=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3521, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1115),(struct sType*)come_increment_ref_count(result_type_1114),(struct list$1sTypeph*)come_increment_ref_count(param_types_1118),(struct list$1charph*)come_increment_ref_count(param_names_1121),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1122),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1113),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1123)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1115)),(struct sFun*)come_increment_ref_count(fun_1128));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3531, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1191=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3531, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1128),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1129=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1191,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1130=node_compile(node_1129,info);
            if(            !Value_1130) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1092=fun_1128;
            come_call_finalizer3(fun_1128,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1129) { node_1129 = come_decrement_ref_count2(node_1129, ((struct sNode*)node_1129)->finalize, ((struct sNode*)node_1129)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1092=fun2_1127;
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1112);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1108;
        info->head=head_1111;
        info->sline=sline_1109;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1110);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1096,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1110 = come_decrement_ref_count2(sname_1110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1112,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1113,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1114,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1115 = come_decrement_ref_count2(name_1115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1116,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1118,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1121,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1122,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1123,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1127,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1091;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1088);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1089);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1090;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1194=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3557, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1092,(char*)come_increment_ref_count(real_fun_name_1093))));
    last_code_1088 = come_decrement_ref_count2(last_code_1088, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1089 = come_decrement_ref_count2(last_code2_1089, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1093 = come_decrement_ref_count2(real_fun_name_1093, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1094,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1194,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1131;
char* __dec_obj312;
char* last_code2_1132;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_1133;
struct sClass* current_stack_frame_struct_1134;
struct sFun* equaler_1135;
void* __right_value1195 = (void*)0;
char* real_fun_name_1136;
void* __right_value1196 = (void*)0;
struct sType* type2_1137;
struct sClass* klass_1138;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct buffer* source_1139;
char* name_1140;
void* __right_value1199 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1143;
struct tuple2$2charphsTypeph* it_1144;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1145=0;
struct sType* field_type_1146=0;
char* p_1148;
int sline_1149;
char* sname_1150;
char* head_1151;
struct buffer* source3_1152;
struct buffer* __dec_obj314;
void* __right_value1200 = (void*)0;
char* __dec_obj315;
void* __right_value1201 = (void*)0;
struct sBlock* block_1153;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
struct sType* result_type_1154;
void* __right_value1204 = (void*)0;
char* name_1155;
void* __right_value1205 = (void*)0;
struct sType* left_type_1156;
void* __right_value1206 = (void*)0;
struct sType* right_type_1157;
struct sType* __list_values29___1159[2];
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
struct list$1sTypeph* param_types_1158;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
char* __list_values30___1160[2];
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1charph* param_names_1161;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct list$1charph* param_default_parametors_1162;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct buffer* header_buf_1163;
void* __right_value1217 = (void*)0;
int i_1164;
void* __right_value1218 = (void*)0;
struct sType* param_type_1165;
void* __right_value1219 = (void*)0;
char* param_name_1166;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct sFun* fun2_1167;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
struct sFun* fun_1168;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1232 = (void*)0;
struct sNode* node_1169;
_Bool Value_1170;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct tuple2$2sFunpcharph* __result410__;
    last_code_1131=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1132=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1133=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1134=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1135=((void*)0);
    real_fun_name_1136=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1137=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1137;
    klass_1138=type->mClass;
    if(    type->mPointerNum>0&&!klass_1138->mNumber) {
        source_1139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3582, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1139,123);
        if(        klass_1138->mProtocol) {
            name_1140="_protocol_obj";
            char source2_1141[1024];
            memset(&source2_1141, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1141,1024,"return left.%s === right.%s;\n",name_1140,name_1140);
            buffer_append_str(source_1139,source2_1141);
        }
        else {
            char source2_1142[1024];
            memset(&source2_1142, 0, sizeof(char)            *(1024)            );
            klass_1138=((struct sClass*)(__right_value1199=map$2charphsClassphp_operator_load_element(info->classes,klass_1138->mName)));
            come_call_finalizer3(__right_value1199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1138->mFields)),it_1144=list$1tuple2$2charphsTypephph_begin((o2_saved_1143));            !list$1tuple2$2charphsTypephph_end((o2_saved_1143));            it_1144=list$1tuple2$2charphsTypephph_next((o2_saved_1143))            ){
                multiple_assign_var15=it_1144;
                name_1145=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1146=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1147[1024];
                memset(&source2_1147, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1147,1024,"if(left.%s !== right.%s) { return false; }\n",name_1145,name_1145,name_1145);
                buffer_append_str(source_1139,source2_1147);
                name_1145 = come_decrement_ref_count2(name_1145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1146,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1143,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1139,"return true;\n");
        buffer_append_char(source_1139,125);
        p_1148=info->p;
        sline_1149=info->sline;
        sname_1150=(char*)come_increment_ref_count(info->sname);
        head_1151=info->head;
        source3_1152=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1139);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1139->buf;
        info->head=source_1139->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1136));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1153=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1154=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3632, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1155=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1136));
        left_type_1156=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1156->mHeap=(_Bool)0;
        right_type_1157=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1157->mHeap=(_Bool)0;
        param_types_1158=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1159[0]=(struct sType*)come_increment_ref_count(left_type_1156),
__list_values29___1159[1]=(struct sType*)come_increment_ref_count(right_type_1157),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3638, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values29___1159)));
        param_names_1161=(struct list$1charph*)come_increment_ref_count((__list_values30___1160[0]=(char*)come_increment_ref_count(((char*)(__right_value1209=__builtin_string("left")))),
__list_values30___1160[1]=(char*)come_increment_ref_count(((char*)(__right_value1210=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3639, "struct list$1charph", (void*)0, (void*)0)),2,__list_values30___1160)));
        __right_value1209 = come_decrement_ref_count2(__right_value1209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1210 = come_decrement_ref_count2(__right_value1210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1162=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3640, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1162,((void*)0));
        list$1charph_push_back(param_default_parametors_1162,((void*)0));
        header_buf_1163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3644, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1163,((char*)(__right_value1217=make_come_type_name_string(result_type_1154,info))));
        __right_value1217 = come_decrement_ref_count2(__right_value1217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1163," ");
        buffer_append_str(header_buf_1163,real_fun_name_1136);
        buffer_append_str(header_buf_1163,"(");
        for(        i_1164=0;        i_1164<list$1sTypeph_length(param_types_1158);        i_1164++        ){
            param_type_1165=((struct sType*)come_null_check(((struct sType*)(__right_value1218=list$1sTypephp_operator_load_element(param_types_1158,i_1164))), "05function.c", 3652, 15));
            come_call_finalizer3(__right_value1218,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1166=((char*)come_null_check(((char*)(__right_value1219=list$1charphp_operator_load_element(param_names_1161,i_1164))), "05function.c", 3653, 16));
            __right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1163,((char*)(__right_value1220=make_come_type_name_string(param_type_1165,info))));
            __right_value1220 = come_decrement_ref_count2(__right_value1220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1163," ");
            buffer_append_str(header_buf_1163,param_name_1166);
            if(            i_1164!=list$1sTypeph_length(param_types_1158)-1) {
                buffer_append_str(header_buf_1163,",");
            }
        }
        buffer_append_str(header_buf_1163,")");
        result_type_1154->mStatic=(_Bool)0;
        result_type_1154->mUniq=(_Bool)0;
        result_type_1154->mInline=(_Bool)0;
        fun2_1167=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1221=__builtin_string(name_1155)))));
        __right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1167==((void*)0)||fun2_1167->mExternal) {
            fun_1168=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3671, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1155),(struct sType*)come_increment_ref_count(result_type_1154),(struct list$1sTypeph*)come_increment_ref_count(param_types_1158),(struct list$1charph*)come_increment_ref_count(param_names_1161),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1162),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1153),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1163)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1155)),(struct sFun*)come_increment_ref_count(fun_1168));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3681, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1231=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3681, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1168),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1169=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1231,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1170=node_compile(node_1169,info);
            if(            !Value_1170) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1135=fun_1168;
            come_call_finalizer3(fun_1168,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1169) { node_1169 = come_decrement_ref_count2(node_1169, ((struct sNode*)node_1169)->finalize, ((struct sNode*)node_1169)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1135=fun2_1167;
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1152);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1148;
        info->head=head_1151;
        info->sline=sline_1149;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1150);
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1139,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1150 = come_decrement_ref_count2(sname_1150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1152,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1153,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1154,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1155 = come_decrement_ref_count2(name_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1158,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1161,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1162,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1167,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1134;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1131);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1132);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1133;
    __result410__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1234=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3707, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1135,(char*)come_increment_ref_count(real_fun_name_1136))));
    last_code_1131 = come_decrement_ref_count2(last_code_1131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1132 = come_decrement_ref_count2(last_code2_1132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1136 = come_decrement_ref_count2(real_fun_name_1136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1234,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1171;
char* __dec_obj320;
char* last_code2_1172;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_1173;
struct sClass* current_stack_frame_struct_1174;
struct sFun* cloner_1175;
void* __right_value1235 = (void*)0;
char* real_fun_name_1176;
void* __right_value1236 = (void*)0;
struct sType* type2_1177;
struct sClass* klass_1178;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct buffer* source_1179;
void* __right_value1239 = (void*)0;
char* name_1180;
void* __right_value1240 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1182;
struct tuple2$2charphsTypeph* it_1183;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1184=0;
struct sType* field_type_1185=0;
void* __right_value1241 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1188;
struct tuple2$2charphsTypeph* it_1189;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1190=0;
struct sType* field_type_1191=0;
char* p_1195;
int sline_1196;
char* sname_1197;
struct buffer* source3_1198;
char* head_1199;
struct buffer* __dec_obj322;
void* __right_value1242 = (void*)0;
char* __dec_obj323;
void* __right_value1243 = (void*)0;
struct sBlock* block_1200;
void* __right_value1244 = (void*)0;
struct sType* result_type_1201;
void* __right_value1245 = (void*)0;
char* name_1202;
void* __right_value1246 = (void*)0;
struct sType* self_type_1203;
struct sType* __list_values31___1205[1];
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
struct list$1sTypeph* param_types_1204;
void* __right_value1249 = (void*)0;
char* __list_values32___1206[1];
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
struct list$1charph* param_names_1207;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct list$1charph* param_default_parametors_1208;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct buffer* header_buf_1209;
void* __right_value1256 = (void*)0;
int i_1210;
void* __right_value1257 = (void*)0;
struct sType* param_type_1211;
void* __right_value1258 = (void*)0;
char* param_name_1212;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sFun* fun2_1213;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
struct sFun* fun_1214;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1271 = (void*)0;
struct sNode* node_1215;
_Bool Value_1216;
char* __dec_obj324;
struct buffer* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
void* __right_value1272 = (void*)0;
void* __right_value1273 = (void*)0;
struct tuple2$2sFunpcharph* __result411__;
    last_code_1171=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1172=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1173=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1174=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1175=((void*)0);
    real_fun_name_1176=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1177=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1177;
    klass_1178=type->mClass;
    if(    type->mPointerNum>0&&!klass_1178->mNumber) {
        source_1179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3732, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1179,"{\n");
        buffer_append_str(source_1179,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1179,"var result = new %s;\n",((char*)(__right_value1239=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1178->mProtocol) {
            name_1180="_protocol_obj";
            char source2_1181[1024];
            memset(&source2_1181, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1181,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1179,source2_1181);
            klass_1178=((struct sClass*)(__right_value1240=map$2charphsClassphp_operator_load_element(info->classes,klass_1178->mName)));
            come_call_finalizer3(__right_value1240,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1178->mFields)),it_1183=list$1tuple2$2charphsTypephph_begin((o2_saved_1182));            !list$1tuple2$2charphsTypephph_end((o2_saved_1182));            it_1183=list$1tuple2$2charphsTypephph_next((o2_saved_1182))            ){
                multiple_assign_var16=it_1183;
                name_1184=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1185=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(name_1184,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1185->mArrayNum)>0) {
                    char source2_1186[1024];
                    memset(&source2_1186, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1186,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1184,name_1184,name_1184);
                    buffer_append_str(source_1179,source2_1186);
                }
                else {
                    char source2_1187[1024];
                    memset(&source2_1187, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1187,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1184,name_1184);
                    buffer_append_str(source_1179,source2_1187);
                }
                name_1184 = come_decrement_ref_count2(name_1184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1185,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1182,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1178=((struct sClass*)(__right_value1241=map$2charphsClassphp_operator_load_element(info->classes,klass_1178->mName)));
            come_call_finalizer3(__right_value1241,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1188=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1178->mFields)),it_1189=list$1tuple2$2charphsTypephph_begin((o2_saved_1188));            !list$1tuple2$2charphsTypephph_end((o2_saved_1188));            it_1189=list$1tuple2$2charphsTypephph_next((o2_saved_1188))            ){
                multiple_assign_var17=it_1189;
                name_1190=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1191=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                field_type_1191->mHeap) {
                    char source2_1192[1024];
                    memset(&source2_1192, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1192,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1190,name_1190,name_1190);
                    buffer_append_str(source_1179,source2_1192);
                }
                else if(                list$1sNodeph_length(field_type_1191->mArrayNum)>0) {
                    char source2_1193[1024];
                    memset(&source2_1193, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1193,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1190,name_1190,name_1190);
                    buffer_append_str(source_1179,source2_1193);
                }
                else {
                    char source2_1194[1024];
                    memset(&source2_1194, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1194,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1190,name_1190);
                    buffer_append_str(source_1179,source2_1194);
                }
                name_1190 = come_decrement_ref_count2(name_1190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1191,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1188,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1179,"return result;");
        buffer_append_char(source_1179,125);
        p_1195=info->p;
        sline_1196=info->sline;
        sname_1197=(char*)come_increment_ref_count(info->sname);
        source3_1198=(struct buffer*)come_increment_ref_count(info->source);
        head_1199=info->head;
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1179);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1176));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1200=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1201=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1202=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1176));
        self_type_1203=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1203->mHeap=(_Bool)0;
        param_types_1204=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1205[0]=(struct sType*)come_increment_ref_count(self_type_1203),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3830, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values31___1205)));
        param_names_1207=(struct list$1charph*)come_increment_ref_count((__list_values32___1206[0]=(char*)come_increment_ref_count(((char*)(__right_value1249=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3831, "struct list$1charph", (void*)0, (void*)0)),1,__list_values32___1206)));
        __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1208=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3832, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1208,((void*)0));
        header_buf_1209=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3835, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1209,((char*)(__right_value1256=make_come_type_name_string(result_type_1201,info))));
        __right_value1256 = come_decrement_ref_count2(__right_value1256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1209," ");
        buffer_append_str(header_buf_1209,real_fun_name_1176);
        buffer_append_str(header_buf_1209,"(");
        for(        i_1210=0;        i_1210<list$1sTypeph_length(param_types_1204);        i_1210++        ){
            param_type_1211=((struct sType*)come_null_check(((struct sType*)(__right_value1257=list$1sTypephp_operator_load_element(param_types_1204,i_1210))), "05function.c", 3843, 17));
            come_call_finalizer3(__right_value1257,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1212=((char*)come_null_check(((char*)(__right_value1258=list$1charphp_operator_load_element(param_names_1207,i_1210))), "05function.c", 3844, 18));
            __right_value1258 = come_decrement_ref_count2(__right_value1258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1209,((char*)(__right_value1259=make_come_type_name_string(param_type_1211,info))));
            __right_value1259 = come_decrement_ref_count2(__right_value1259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1209," ");
            buffer_append_str(header_buf_1209,param_name_1212);
            if(            i_1210!=list$1sTypeph_length(param_types_1204)-1) {
                buffer_append_str(header_buf_1209,",");
            }
        }
        buffer_append_str(header_buf_1209,")");
        result_type_1201->mStatic=(_Bool)0;
        result_type_1201->mUniq=(_Bool)0;
        result_type_1201->mInline=(_Bool)0;
        fun2_1213=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1260=__builtin_string(name_1202)))));
        __right_value1260 = come_decrement_ref_count2(__right_value1260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1213==((void*)0)||fun2_1213->mExternal) {
            fun_1214=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3863, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1202),(struct sType*)come_increment_ref_count(result_type_1201),(struct list$1sTypeph*)come_increment_ref_count(param_types_1204),(struct list$1charph*)come_increment_ref_count(param_names_1207),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1208),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1200),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1209)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1214->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1202)),(struct sFun*)come_increment_ref_count(fun_1214));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3875, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1270=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3875, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1214),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1215=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1270,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1216=node_compile(node_1215,info);
            if(            !Value_1216) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1175=fun_1214;
            come_call_finalizer3(fun_1214,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1215) { node_1215 = come_decrement_ref_count2(node_1215, ((struct sNode*)node_1215)->finalize, ((struct sNode*)node_1215)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1175=fun2_1213;
        }
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1197);
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1196;
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1198);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1195;
        info->head=head_1199;
        info->sline=sline_1196;
        come_call_finalizer3(source_1179,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1197 = come_decrement_ref_count2(sname_1197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1198,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1200,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1202 = come_decrement_ref_count2(name_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1203,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1204,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1207,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1209,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1213,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1174;
    __dec_obj326=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1171);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj327=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1172);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1173;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1273=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3903, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1175,(char*)come_increment_ref_count(real_fun_name_1176))));
    last_code_1171 = come_decrement_ref_count2(last_code_1171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1172 = come_decrement_ref_count2(last_code2_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1176 = come_decrement_ref_count2(real_fun_name_1176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1273,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1217;
char* __dec_obj328;
char* last_code2_1218;
char* __dec_obj329;
_Bool comma_instead_of_semicolon_1219;
struct sClass* current_stack_frame_struct_1220;
struct sFun* cloner_1221;
void* __right_value1274 = (void*)0;
char* real_fun_name_1222;
void* __right_value1275 = (void*)0;
struct sType* type2_1223;
struct sClass* klass_1224;
void* __right_value1276 = (void*)0;
void* __right_value1277 = (void*)0;
struct buffer* source_1225;
int i_1226;
void* __right_value1278 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1227;
struct tuple2$2charphsTypeph* it_1228;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1229=0;
struct sType* field_type_1230=0;
char* p_1233;
int sline_1234;
char* sname_1235;
struct buffer* source3_1236;
char* head_1237;
struct buffer* __dec_obj330;
void* __right_value1279 = (void*)0;
char* __dec_obj331;
void* __right_value1280 = (void*)0;
struct sBlock* block_1238;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
struct sType* result_type_1239;
void* __right_value1283 = (void*)0;
char* name_1240;
void* __right_value1284 = (void*)0;
struct sType* self_type_1241;
struct sType* __list_values33___1243[1];
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct list$1sTypeph* param_types_1242;
void* __right_value1287 = (void*)0;
char* __list_values34___1244[1];
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct list$1charph* param_names_1245;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct list$1charph* param_default_parametors_1246;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct buffer* header_buf_1247;
void* __right_value1294 = (void*)0;
int i_1248;
void* __right_value1295 = (void*)0;
struct sType* param_type_1249;
void* __right_value1296 = (void*)0;
char* param_name_1250;
void* __right_value1297 = (void*)0;
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct sFun* fun2_1251;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
struct sFun* fun_1252;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
void* __right_value1308 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1309 = (void*)0;
struct sNode* node_1253;
_Bool Value_1254;
char* __dec_obj332;
struct buffer* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1217=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1218=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1219=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1220=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1221=((void*)0);
    real_fun_name_1222=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1223=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1223;
    klass_1224=type->mClass;
    if(    type->mPointerNum>0&&!klass_1224->mNumber) {
        source_1225=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3928, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1225,"{\n");
        buffer_append_str(source_1225,"var result = new buffer();\n");
        buffer_append_format(source_1225,"result.append_str(\"%s {\");\n",klass_1224->mName);
        i_1226=0;
        klass_1224=((struct sClass*)(__right_value1278=map$2charphsClassphp_operator_load_element(info->classes,klass_1224->mName)));
        come_call_finalizer3(__right_value1278,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1227=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1224->mFields)),it_1228=list$1tuple2$2charphsTypephph_begin((o2_saved_1227));        !list$1tuple2$2charphsTypephph_end((o2_saved_1227));        it_1228=list$1tuple2$2charphsTypephph_next((o2_saved_1227))        ){
            multiple_assign_var18=it_1228;
            name_1229=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1230=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            i_1226==list$1tuple2$2charphsTypephph_length(klass_1224->mFields)-1) {
                char source2_1231[1024];
                memset(&source2_1231, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1231,1024,"result.append_str(\"%s:\");\n",name_1229);
                buffer_append_str(source_1225,source2_1231);
                snprintf(source2_1231,1024,"result.append_str(self.%s.to_string());\n",name_1229);
                buffer_append_str(source_1225,source2_1231);
            }
            else {
                char source2_1232[1024];
                memset(&source2_1232, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1232,1024,"result.append_str(\"%s:\");\n",name_1229);
                buffer_append_str(source_1225,source2_1232);
                snprintf(source2_1232,1024,"result.append_str(self.%s.to_string());\n",name_1229);
                buffer_append_str(source_1225,source2_1232);
                snprintf(source2_1232,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1225,source2_1232);
            }
            i_1226++;
            name_1229 = come_decrement_ref_count2(name_1229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1230,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1227,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1225,"result.append_str(\"}\");\n");
        buffer_append_format(source_1225,"return result.to_string();\n");
        buffer_append_char(source_1225,125);
        p_1233=info->p;
        sline_1234=info->sline;
        sname_1235=(char*)come_increment_ref_count(info->sname);
        source3_1236=(struct buffer*)come_increment_ref_count(info->source);
        head_1237=info->head;
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1225);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1222));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1238=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1239=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3997, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        result_type_1239->mHeap=(_Bool)1;
        name_1240=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1222));
        self_type_1241=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1241->mHeap=(_Bool)0;
        param_types_1242=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1243[0]=(struct sType*)come_increment_ref_count(self_type_1241),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4002, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values33___1243)));
        param_names_1245=(struct list$1charph*)come_increment_ref_count((__list_values34___1244[0]=(char*)come_increment_ref_count(((char*)(__right_value1287=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4003, "struct list$1charph", (void*)0, (void*)0)),1,__list_values34___1244)));
        __right_value1287 = come_decrement_ref_count2(__right_value1287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1246=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4004, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1246,((void*)0));
        header_buf_1247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4007, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1247,((char*)(__right_value1294=make_come_type_name_string(result_type_1239,info))));
        __right_value1294 = come_decrement_ref_count2(__right_value1294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1247," ");
        buffer_append_str(header_buf_1247,real_fun_name_1222);
        buffer_append_str(header_buf_1247,"(");
        for(        i_1248=0;        i_1248<list$1sTypeph_length(param_types_1242);        i_1248++        ){
            param_type_1249=((struct sType*)come_null_check(((struct sType*)(__right_value1295=list$1sTypephp_operator_load_element(param_types_1242,i_1248))), "05function.c", 4015, 19));
            come_call_finalizer3(__right_value1295,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1250=((char*)come_null_check(((char*)(__right_value1296=list$1charphp_operator_load_element(param_names_1245,i_1248))), "05function.c", 4016, 20));
            __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1247,((char*)(__right_value1297=make_come_type_name_string(param_type_1249,info))));
            __right_value1297 = come_decrement_ref_count2(__right_value1297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1247," ");
            buffer_append_str(header_buf_1247,param_name_1250);
            if(            i_1248!=list$1sTypeph_length(param_types_1242)-1) {
                buffer_append_str(header_buf_1247,",");
            }
        }
        buffer_append_str(header_buf_1247,")");
        result_type_1239->mStatic=(_Bool)0;
        result_type_1239->mUniq=(_Bool)0;
        result_type_1239->mInline=(_Bool)0;
        fun2_1251=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1298=__builtin_string(name_1240)))));
        __right_value1298 = come_decrement_ref_count2(__right_value1298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1251==((void*)0)||fun2_1251->mExternal) {
            fun_1252=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4034, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1240),(struct sType*)come_increment_ref_count(result_type_1239),(struct list$1sTypeph*)come_increment_ref_count(param_types_1242),(struct list$1charph*)come_increment_ref_count(param_names_1245),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1246),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1238),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1247)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1252->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1240)),(struct sFun*)come_increment_ref_count(fun_1252));
            cloner_1221=fun_1252;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4048, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1308=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4048, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1252),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1253=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1308,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1254=node_compile(node_1253,info);
            if(            !Value_1254) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1252,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1253) { node_1253 = come_decrement_ref_count2(node_1253, ((struct sNode*)node_1253)->finalize, ((struct sNode*)node_1253)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1221=fun2_1251;
        }
        __dec_obj332=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1235);
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1234;
        __dec_obj333=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1236);
        come_call_finalizer3(__dec_obj333,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1233;
        info->head=head_1237;
        info->sline=sline_1234;
        come_call_finalizer3(source_1225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1235 = come_decrement_ref_count2(sname_1235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1236,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1238,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1239,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1240 = come_decrement_ref_count2(name_1240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1245,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1246,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1251,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1220;
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1217);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1218);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1219;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1311=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4074, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1221,(char*)come_increment_ref_count(real_fun_name_1222))));
    last_code_1217 = come_decrement_ref_count2(last_code_1217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1218 = come_decrement_ref_count2(last_code2_1218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1222 = come_decrement_ref_count2(real_fun_name_1222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1223,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

