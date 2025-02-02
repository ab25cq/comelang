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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result214__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
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
struct sLambdaNode* __result216__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_272;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_273;
void* __right_value255 = (void*)0;
int block_level_274;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_275;
void* __right_value258 = (void*)0;
char* __dec_obj34;
void* __right_value298 = (void*)0;
struct sType* __dec_obj83;
_Bool __result236__;
    come_fun_272=info->come_fun;
    info->come_fun=self->mFun;
    result_type_273=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_273,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_274=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_274;
    come_value_275=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj34=come_value_275->c_value;
    come_value_275->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj83=come_value_275->type;
    come_value_275->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_275->var=((void*)0);
    add_come_last_code(info,"%s",come_value_275->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
    info->come_fun=come_fun_272;
    __result236__ = (_Bool)1;
    come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
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
struct sType* __result218__;
void* __right_value259 = (void*)0;
struct sType* result_276;
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
struct sType* __result234__;
    if(    self==(void*)0) {
        __result218__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_276=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_276->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=result_276->mNoSolvedGenericsType;
        result_276->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj58=result_276->mOriginalLoadVarType;
        result_276->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj59=result_276->mRefferenceOriginalType;
        result_276->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj60=result_276->mInterfaceName;
        result_276->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj61=result_276->mGenericsName;
        result_276->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_276->mGenericsTypes;
        result_276->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj69=result_276->mArrayNum;
        result_276->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj70=result_276->mParamTypes;
        result_276->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=result_276->mParamNames;
        result_276->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=result_276->mResultType;
        result_276->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj76=result_276->mAlignas;
        result_276->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj77=result_276->mChannelType;
        result_276->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_276->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_276->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_276->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_276->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_276->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_276->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_276->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_276->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_276->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_276->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_276->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_276->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_276->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_276->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_276->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_276->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_276->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_276->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_276->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_276->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_276->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_276->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_276->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_276->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_276->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj78=result_276->mSizeNum;
        result_276->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_276->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj79=result_276->mOriginalTypeName;
        result_276->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_276->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_276->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_276->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_276->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_276->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_276->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_276->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj80=result_276->mAsmName;
        result_276->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_276->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_276->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_276->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_276->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_276->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj81=result_276->mTupleName;
        result_276->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj82=result_276->mAttribute;
        result_276->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_276->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_276;
    come_call_finalizer3(result_276,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result219__;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* result_277;
void* __right_value261 = (void*)0;
struct sType* __dec_obj35;
struct tuple1$1sTypeph* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_277=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj35=result_277->v1;
        result_277->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_277;
    come_call_finalizer3(result_277,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
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
struct list_item$1sTypeph* it_278;
struct list_item$1sTypeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_282;
struct list_item$1sNodeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_284;
struct list_item$1sNodeph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_286;
struct list_item$1charph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* __result221__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* result_288;
struct list_item$1sTypeph* it_289;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __result224__;
    if(    self==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_288=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_289=self->head;
    while(it_289!=((void*)0)) {
        list$1sTypeph_add(result_288,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_289->item)));
        it_289=it_289->next;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_288;
    come_call_finalizer3(result_288,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_290;
struct sType* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_291;
struct sType* __dec_obj63;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_292;
struct sType* __dec_obj64;
struct list$1sTypeph* __result223__;
    if(    self->len==0) {
        litem_290=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj62=litem_290->item;
        litem_290->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj63=litem_291->item;
        litem_291->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj64=litem_292->item;
        litem_292->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
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
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_293;
struct list_item$1sNodeph* it_294;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __result230__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_293=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_294=self->head;
    while(it_294!=((void*)0)) {
        list$1sNodeph_add(result_293,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_294->item)));
        it_294=it_294->next;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_295;
struct sNode* __dec_obj66;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_296;
struct sNode* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_297;
struct sNode* __dec_obj68;
struct list$1sNodeph* __result227__;
    if(    self->len==0) {
        litem_295=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj66=litem_295->item;
        litem_295->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj67=litem_296->item;
        litem_296->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj68=litem_297->item;
        litem_297->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_297;
        self->tail=litem_297;
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
void* __right_value279 = (void*)0;
struct sNode* result_298;
struct sNode* __result229__;
    if(    self==(void*)0) {
        __result228__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_298=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_298->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_298->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_298->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_298->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_298->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_298->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_298->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_298->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_298->kind=self->kind;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_298;
    if(result_298) { result_298 = come_decrement_ref_count2(result_298, ((struct sNode*)result_298)->finalize, ((struct sNode*)result_298)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result231__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_299;
struct list_item$1charph* it_300;
void* __right_value288 = (void*)0;
struct list$1charph* __result233__;
    if(    self==((void*)0)) {
        __result231__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_299=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_300=self->head;
    while(it_300!=((void*)0)) {
        list$1charph_add(result_299,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_300->item)));
        it_300=it_300->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_299;
    come_call_finalizer3(result_299,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_301;
char* __dec_obj71;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_302;
char* __dec_obj72;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_303;
char* __dec_obj73;
struct list$1charph* __result232__;
    if(    self->len==0) {
        litem_301=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        __dec_obj71=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1) {
        litem_302=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        __dec_obj72=litem_302->item;
        litem_302->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        __dec_obj73=litem_303->item;
        litem_303->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_304;
struct CVALUE* __dec_obj84;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_305;
struct CVALUE* __dec_obj88;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_306;
struct CVALUE* __dec_obj89;
struct list$1CVALUEph* __result235__;
    if(    self->len==0) {
        litem_304=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1305, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj84=litem_304->item;
        litem_304->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1315, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj88=litem_305->item;
        litem_305->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1325, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj89=litem_306->item;
        litem_306->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
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
struct sFunNode* __result237__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj90,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sFunNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_307;
char* come_fun_name_308;
void* __right_value304 = (void*)0;
char* __dec_obj110;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* result_type_309;
void* __right_value307 = (void*)0;
int block_level_310;
void* __right_value308 = (void*)0;
char* __dec_obj111;
_Bool __result239__;
    come_fun_307=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_308=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj110=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_309=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value307=make_define_var(result_type_309,"__result_obj__",(_Bool)0,info))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_310=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_310;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_307;
    __dec_obj111=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_308);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result239__ = (_Bool)1;
    come_fun_name_308 = come_decrement_ref_count2(come_fun_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result239__;
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
struct sBlock* __result240__;
    __dec_obj112=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
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
struct sGenericsFun* __result241__;
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
    __result241__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result241__;
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
struct sBlock* result_311;
int sline_top_312;
int block_level_313;
char* p_saved_314;
int sline_saved_315;
char* sname_saved_316;
void* __right_value317 = (void*)0;
char* __dec_obj133;
char* __dec_obj134;
struct map$2charphcharph* __dec_obj135;
char* p_319;
int sline_320;
void* __right_value318 = (void*)0;
char* sname_321;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* module_name_322;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1charph* params_323;
void* __right_value323 = (void*)0;
char* word_324;
void* __right_value324 = (void*)0;
char* __dec_obj136;
void* __right_value325 = (void*)0;
char* __dec_obj137;
void* __right_value326 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result246__;
void* __right_value327 = (void*)0;
struct sClassModule* module_328;
void* __right_value328 = (void*)0;
void* __right_value334 = (void*)0;
struct map$2charphcharph* __dec_obj143;
int i_332;
struct list$1charph* o2_saved_333;
char* it_336;
void* __right_value335 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* __dec_obj144;
void* __right_value344 = (void*)0;
struct sNode* node_383;
void* __right_value345 = (void*)0;
char* __dec_obj145;
_Bool omit_semicolon_387;
void* __right_value349 = (void*)0;
char* __dec_obj149;
char* head_402;
void* __right_value350 = (void*)0;
struct sNode* value_403;
char* tail_404;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* node_406;
void* __right_value354 = (void*)0;
char* __dec_obj151;
struct sNode* node_407;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj153;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj154;
_Bool omit_semicolon_409;
char* p_410;
char* head_411;
void* __right_value361 = (void*)0;
char* source_412;
void* __right_value362 = (void*)0;
struct sNode* node_413;
struct sBlock* __result284__;
node_407 = (void*)0;
    result_311=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "struct sBlock*", (void*)0, (void*)0)),info));
    sline_top_312=info->sline_top;
    info->sline_top=info->sline;
    block_level_313=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_314=((void*)0);
        sline_saved_315=0;
        sname_saved_316=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_314) {
                if(                *info->p==0) {
                    info->p=p_saved_314;
                    info->sline=sline_saved_315;
                    __dec_obj133=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_316));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_314=((void*)0);
                    sline_saved_315=0;
                    __dec_obj134=sname_saved_316;
                    sname_saved_316=((void*)0);
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
            p_319=info->p;
            sline_320=info->sline;
            sname_321=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_320;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value319=parse_word(info)));
                __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_322=(char*)come_increment_ref_count(parse_word(info));
                params_323=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_324=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_323,(char*)come_increment_ref_count(word_324));
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
                            word_324 = come_decrement_ref_count2(word_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_324 = come_decrement_ref_count2(word_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_314=info->p;
                sline_saved_315=info->sline;
                __dec_obj136=sname_saved_316;
                sname_saved_316=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj137=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_322));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_322)))==((void*)0))),                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result246__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_322 = come_decrement_ref_count2(module_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_323,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_321 = come_decrement_ref_count2(sname_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_316 = come_decrement_ref_count2(sname_saved_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_311,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result246__;
                }
                module_328=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value327=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_322))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value327,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_328->mParams)!=list$1charph_length(params_323)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj143=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj143,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_332=0;
                for(                o2_saved_333=(struct list$1charph*)come_increment_ref_count((module_328->mParams)),it_336=list$1charph_begin((o2_saved_333));                !list$1charph_end((o2_saved_333));                it_336=list$1charph_next((o2_saved_333))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_336)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value341=list$1charphp_operator_load_element(params_323,i_332))), "05function.c", 273, 1)))));
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_332++;
                }
                come_call_finalizer3(o2_saved_333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_328->mText;
                info->sline=module_328->mSLine;
                __dec_obj144=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_328->mSName));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_322 = come_decrement_ref_count2(module_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_323,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_383=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj145=info->sname;
            info->sname=(char*)come_increment_ref_count(node_383->sname(node_383->_protocol_obj));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_383->sline(node_383->_protocol_obj);
            if(            node_383==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_311->mNodes,(struct sNode*)come_increment_ref_count(node_383));
            parse_sharp_v5(info);
            if(            node_383->terminated(node_383->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_387=(_Bool)1;
            if(            node_383->terminated(node_383->_protocol_obj)) {
                omit_semicolon_387=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_387=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_311->mOmitSemicolon=omit_semicolon_387;
                if(                omit_semicolon_387&&in_function) {
                    list$1sNodeph_delete(result_311->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_319;
                    info->sline=sline_320;
                    __dec_obj149=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_321));
                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_402=info->p;
                    value_403=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_404=info->p;
                    __dec_obj150=value_403;
                    value_403=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_403),info));
                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_405[tail_404-head_402+1];
                    memset(&buf_405, 0, sizeof(char)                    *(tail_404-head_402+1)                    );
                    memcpy(buf_405,head_402,tail_404-head_402);
                    buf_405[tail_404-head_402]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_406=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_403),(char*)come_increment_ref_count(__builtin_string(buf_405)),info));
                    list$1sNodeph_push_back(result_311->mNodes,(struct sNode*)come_increment_ref_count(node_406));
                    if(value_403) { value_403 = come_decrement_ref_count2(value_403, ((struct sNode*)value_403)->finalize, ((struct sNode*)value_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_321 = come_decrement_ref_count2(sname_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_383) { node_383 = come_decrement_ref_count2(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_403) { value_403 = come_decrement_ref_count2(value_403, ((struct sNode*)value_403)->finalize, ((struct sNode*)value_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_321 = come_decrement_ref_count2(sname_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_383) { node_383 = come_decrement_ref_count2(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_321 = come_decrement_ref_count2(sname_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_383) { node_383 = come_decrement_ref_count2(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_314) {
            if(            info->p==0) {
                info->p=p_saved_314;
                info->sline=sline_saved_315;
                __dec_obj151=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_316));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_314=((void*)0);
                sline_saved_315=0;
            }
        }
        sname_saved_316 = come_decrement_ref_count2(sname_saved_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __dec_obj153=node_407;
            node_407=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value356,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_311->mNodes,(struct sNode*)come_increment_ref_count(node_407));
        }
        else {
            __dec_obj154=node_407;
            node_407=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_407==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_407->terminated(node_407->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_409=(_Bool)1;
            if(            node_407->terminated(node_407->_protocol_obj)) {
                omit_semicolon_409=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_409=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_311->mOmitSemicolon=omit_semicolon_409;
            list$1sNodeph_push_back(result_311->mNodes,(struct sNode*)come_increment_ref_count(node_407));
        }
        if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_410=info->p;
        head_411=info->head;
        source_412=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_412;
        info->head=source_412;
        node_413=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_413==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_311->mNodes,(struct sNode*)come_increment_ref_count(node_413));
        info->p=p_410;
        info->head=head_411;
        source_412 = come_decrement_ref_count2(source_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_313;
    __result284__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer3(result_311,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_317;
int i_318;
    for(    i_317=0;    i_317<self->size;    i_317++    ){
        if(        self->item_existance[i_317]) {
            if(            1) {
                self->items[i_317] = come_decrement_ref_count2(self->items[i_317], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_318=0;    i_318<self->size;    i_318++    ){
        if(        self->item_existance[i_318]) {
            if(            1) {
                self->keys[i_318] = come_decrement_ref_count2(self->keys[i_318], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_325;
unsigned int hash_326;
unsigned int it_327;
struct sClassModule* __result242__;
struct sClassModule* __result243__;
struct sClassModule* __result244__;
struct sClassModule* __result245__;
default_value_325 = (void*)0;
    memset(&default_value_325,0,sizeof(struct sClassModule*));
    hash_326=charp_get_hash_key(((char*)key))%self->size;
    it_327=hash_326;
    while((_Bool)1) {
        if(        self->item_existance[it_327]) {
            if(            charp_equals(self->keys[it_327],key)) {
                __result242__ = gComeFunResultObject = __result_obj__ = self->items[it_327];
                come_call_finalizer3(default_value_325,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
            it_327++;
            if(            it_327>=self->size) {
                it_327=0;
            }
            else if(            it_327==hash_326) {
                __result243__ = gComeFunResultObject = __result_obj__ = default_value_325;
                come_call_finalizer3(default_value_325,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
        }
        else {
            __result244__ = gComeFunResultObject = __result_obj__ = default_value_325;
            come_call_finalizer3(default_value_325,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result244__;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = default_value_325;
    come_call_finalizer3(default_value_325,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
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
int i_329;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charp* __dec_obj142;
struct map$2charphcharph* __result248__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2481, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value331=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2482, "_Bool*", (void*)0, (void*)0))));
    for(    i_329=0;    i_329<128;    i_329++    ){
        self->item_existance[i_329]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj142=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2492, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj142,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result247__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_330;
int i_331;
    for(    i_330=0;    i_330<self->size;    i_330++    ){
        if(        self->item_existance[i_330]) {
            if(            1) {
                self->items[i_330] = come_decrement_ref_count2(self->items[i_330], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_331=0;    i_331<self->size;    i_331++    ){
        if(        self->item_existance[i_331]) {
            if(            1) {
                self->keys[i_331] = come_decrement_ref_count2(self->keys[i_331], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_334;
char* __result249__;
char* __result250__;
char* result_335;
char* __result251__;
result_334 = (void*)0;
result_335 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_334,0,sizeof(char*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_334;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_335,0,sizeof(char*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_335;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_337;
char* __result252__;
char* __result253__;
char* result_338;
char* __result254__;
result_337 = (void*)0;
result_338 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_337,0,sizeof(char*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_337;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_338,0,sizeof(char*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_338;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_356;
unsigned int it_357;
_Bool same_key_exist_374;
char* it2_377;
struct map$2charphcharph* __result275__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_356=charp_get_hash_key(key)%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            charp_equals(self->keys[it_357],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_357]);
                    self->keys[it_357] = come_decrement_ref_count2(self->keys[it_357], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_357]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_357]);
                    self->keys[it_357]=key;
                }
                if(                1) {
                    self->items[it_357] = come_decrement_ref_count2(self->items[it_357], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_357]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_357]=item;
                }
                break;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_357]=(_Bool)1;
            if(            1) {
                self->keys[it_357]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_357]=key;
            }
            if(            1) {
                self->items[it_357]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_357]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_374=(_Bool)0;
    for(    it2_377=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_377=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_377,key)) {
            same_key_exist_374=(_Bool)1;
        }
    }
    if(    !same_key_exist_374) {
        list$1charp_push_back(self->key_list,key);
    }
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_339;
void* __right_value336 = (void*)0;
char** keys_340;
void* __right_value337 = (void*)0;
char** items_341;
void* __right_value338 = (void*)0;
_Bool* item_existance_342;
int len_343;
char* it_346;
char* default_value_349;
void* __right_value339 = (void*)0;
char* it2_350;
unsigned int hash_353;
int n_354;
char* default_value_355;
void* __right_value340 = (void*)0;
default_value_349 = (void*)0;
default_value_355 = (void*)0;
    size_339=self->size*10;
    keys_340=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_339)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_341=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(size_339)), "./comelang.h", 2709, "char**", (void*)0, (void*)0))));
    item_existance_342=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_339)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_343=0;
    for(    it_346=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_346=map$2charphcharph_next(self)    ){
        memset(&default_value_349,0,sizeof(char*));
        it2_350=((char*)(__right_value339=map$2charphcharph_at(self,it_346,default_value_349)));
        __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_353=charp_get_hash_key(it_346)%size_339;
        n_354=hash_353;
        while((_Bool)1) {
            if(            item_existance_342[n_354]) {
                n_354++;
                if(                n_354>=size_339) {
                    n_354=0;
                }
                else if(                n_354==hash_353) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_342[n_354]=(_Bool)1;
                keys_340[n_354]=it_346;
                items_341[n_354]=((char*)(__right_value340=map$2charphcharph_at(self,it_346,default_value_355)));
                __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_343++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_340;
    self->items=items_341;
    self->item_existance=item_existance_342;
    self->size=size_339;
    self->len=len_343;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result255__;
char* __result256__;
char* result_345;
char* __result257__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_345,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_347;
char* __result258__;
char* __result259__;
char* result_348;
char* __result260__;
result_347 = (void*)0;
result_348 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_347,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_347;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_348,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_348;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_351;
unsigned int it_352;
char* __result261__;
char* __result262__;
char* __result263__;
char* __result264__;
    hash_351=charp_get_hash_key(((char*)key))%self->size;
    it_352=hash_351;
    while((_Bool)1) {
        if(        self->item_existance[it_352]) {
            if(            charp_equals(self->keys[it_352],key)) {
                __result261__ = gComeFunResultObject = __result_obj__ = self->items[it_352];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
            it_352++;
            if(            it_352>=self->size) {
                it_352=0;
            }
            else if(            it_352==hash_351) {
                __result262__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
        }
        else {
            __result263__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result263__;
        }
    }
    __result264__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_358;
struct list_item$1charp* it_359;
struct list$1charp* __result268__;
    it2_358=0;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        if(        charp_equals(it_359->item,item)) {
            list$1charp_delete(self,it2_358,it2_358+1);
            break;
        }
        it2_358++;
        it_359=it_359->next;
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_360;
struct list$1charp* __result265__;
struct list_item$1charp* it_363;
int i_364;
struct list_item$1charp* prev_it_365;
struct list_item$1charp* it_366;
int i_367;
struct list_item$1charp* prev_it_368;
struct list_item$1charp* it_369;
struct list_item$1charp* head_prev_it_370;
struct list_item$1charp* tail_it_371;
int i_372;
struct list_item$1charp* prev_it_373;
struct list$1charp* __result267__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_360=tail;
        tail=head;
        head=tmp_360;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result265__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_363=self->head;
        i_364=0;
        while(it_363!=((void*)0)) {
            if(            i_364<tail) {
                prev_it_365=it_363;
                it_363=it_363->next;
                i_364++;
                come_call_finalizer3(prev_it_365,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_364==tail) {
                self->head=it_363;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_363=it_363->next;
                i_364++;
            }
        }
    }
    else if(    tail==self->len) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367==head) {
                self->tail=it_366->prev;
                self->tail->next=((void*)0);
            }
            if(            i_367>=head) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else {
        it_369=self->head;
        head_prev_it_370=((void*)0);
        tail_it_371=((void*)0);
        i_372=0;
        while(it_369!=((void*)0)) {
            if(            i_372==head) {
                head_prev_it_370=it_369->prev;
            }
            if(            i_372==tail) {
                tail_it_371=it_369;
            }
            if(            i_372>=head&&i_372<tail) {
                prev_it_373=it_369;
                it_369=it_369->next;
                i_372++;
                come_call_finalizer3(prev_it_373,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_372++;
            }
        }
        if(        head_prev_it_370!=((void*)0)) {
            head_prev_it_370->next=tail_it_371;
        }
        if(        tail_it_371!=((void*)0)) {
            tail_it_371->prev=head_prev_it_370;
        }
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_361;
struct list_item$1charp* prev_it_362;
struct list$1charp* __result266__;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        come_call_finalizer3(prev_it_362,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result269__;
char* __result270__;
char* result_376;
char* __result271__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_376,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result272__;
char* __result273__;
char* result_379;
char* __result274__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_379,0,sizeof(char*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_380;
int i_381;
char* __result276__;
char* default_value_382;
char* __result277__;
default_value_382 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_380=self->head;
    i_381=0;
    while(it_380!=((void*)0)) {
        if(        position==i_381) {
            __result276__ = gComeFunResultObject = __result_obj__ = it_380->item;
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
        it_380=it_380->next;
        i_381++;
    }
    memset(&default_value_382,0,sizeof(char*));
    __result277__ = gComeFunResultObject = __result_obj__ = default_value_382;
    default_value_382 = come_decrement_ref_count2(default_value_382, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_384;
struct sNode* __dec_obj146;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_385;
struct sNode* __dec_obj147;
void* __right_value348 = (void*)0;
struct list_item$1sNodeph* litem_386;
struct sNode* __dec_obj148;
struct list$1sNodeph* __result278__;
    if(    self->len==0) {
        litem_384=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1305, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_384->prev=((void*)0);
        litem_384->next=((void*)0);
        __dec_obj146=litem_384->item;
        litem_384->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_384;
        self->head=litem_384;
    }
    else if(    self->len==1) {
        litem_385=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1315, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_385->prev=self->head;
        litem_385->next=((void*)0);
        __dec_obj147=litem_385->item;
        litem_385->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_385;
        self->head->next=litem_385;
    }
    else {
        litem_386=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1325, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_386->prev=self->tail;
        litem_386->next=((void*)0);
        __dec_obj148=litem_386->item;
        litem_386->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_386;
        self->tail=litem_386;
    }
    self->len++;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_388;
struct list$1sNodeph* __result279__;
struct list_item$1sNodeph* it_391;
int i_392;
struct list_item$1sNodeph* prev_it_393;
struct list_item$1sNodeph* it_394;
int i_395;
struct list_item$1sNodeph* prev_it_396;
struct list_item$1sNodeph* it_397;
struct list_item$1sNodeph* head_prev_it_398;
struct list_item$1sNodeph* tail_it_399;
int i_400;
struct list_item$1sNodeph* prev_it_401;
struct list$1sNodeph* __result281__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_388=tail;
        tail=head;
        head=tmp_388;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result279__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_391=self->head;
        i_392=0;
        while(it_391!=((void*)0)) {
            if(            i_392<tail) {
                prev_it_393=it_391;
                it_391=it_391->next;
                i_392++;
                come_call_finalizer3(prev_it_393,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_392==tail) {
                self->head=it_391;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_391=it_391->next;
                i_392++;
            }
        }
    }
    else if(    tail==self->len) {
        it_394=self->head;
        i_395=0;
        while(it_394!=((void*)0)) {
            if(            i_395==head) {
                self->tail=it_394->prev;
                self->tail->next=((void*)0);
            }
            if(            i_395>=head) {
                prev_it_396=it_394;
                it_394=it_394->next;
                i_395++;
                come_call_finalizer3(prev_it_396,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_394=it_394->next;
                i_395++;
            }
        }
    }
    else {
        it_397=self->head;
        head_prev_it_398=((void*)0);
        tail_it_399=((void*)0);
        i_400=0;
        while(it_397!=((void*)0)) {
            if(            i_400==head) {
                head_prev_it_398=it_397->prev;
            }
            if(            i_400==tail) {
                tail_it_399=it_397;
            }
            if(            i_400>=head&&i_400<tail) {
                prev_it_401=it_397;
                it_397=it_397->next;
                i_400++;
                come_call_finalizer3(prev_it_401,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_397=it_397->next;
                i_400++;
            }
        }
        if(        head_prev_it_398!=((void*)0)) {
            head_prev_it_398->next=tail_it_399;
        }
        if(        tail_it_399!=((void*)0)) {
            tail_it_399->prev=head_prev_it_398;
        }
    }
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_389;
struct list_item$1sNodeph* prev_it_390;
struct list$1sNodeph* __result280__;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        prev_it_390=it_389;
        it_389=it_389->next;
        come_call_finalizer3(prev_it_390,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result282__;
void* __right_value357 = (void*)0;
struct sSemicolonNode* result_408;
void* __right_value358 = (void*)0;
char* __dec_obj152;
struct sSemicolonNode* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_408=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_408->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_408->sname;
        result_408->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_408->sline_real=self->sline_real;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_408;
    come_call_finalizer3(result_408,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_414;
struct sVarTable* old_table_415;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sVarTable* __dec_obj155;
struct sVarTable* current_loop_vtable_416;
struct list$1sTypeph* param_types__417;
struct list$1charph* param_names__418;
int i_419;
struct list$1charph* o2_saved_420;
char* name_421;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* type_422;
void* __right_value367 = (void*)0;
int block_level_426;
int i_427;
struct list$1sNodeph* o2_saved_428;
struct sNode* node_431;
struct list$1sRightValueObjectph* right_value_objects_434;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
int stack_num_before_439;
int sline_440;
void* __right_value370 = (void*)0;
char* sname_441;
void* __right_value371 = (void*)0;
char* __dec_obj163;
_Bool Value_442;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value377 = (void*)0;
struct CVALUE* come_value2_444;
void* __right_value378 = (void*)0;
char* __dec_obj167;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_446;
struct sVar* var__447;
void* __right_value380 = (void*)0;
struct CVALUE* come_value3_448;
void* __right_value381 = (void*)0;
_Bool _if_conditional2;
void* __right_value382 = (void*)0;
struct sType* __dec_obj168;
void* __right_value383 = (void*)0;
char* c_value_465;
void* __right_value384 = (void*)0;
char* __dec_obj169;
void* __right_value385 = (void*)0;
char* __dec_obj170;
void* __right_value386 = (void*)0;
char* __dec_obj171;
_Bool Value_466;
void* __right_value387 = (void*)0;
char* __dec_obj172;
struct list$1sRightValueObjectph* __dec_obj173;
void* __if_result__0_469 = (void*)0;
struct list$1sVarph* o2_saved_470;
struct sVar* it_473;
struct list$1sVarph* __dec_obj179;
memset(&i_419, 0, sizeof(int));
memset(&i_427, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_414=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_415=info->lv_table;
    if(    !no_var_table) {
        __dec_obj155=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "struct sVarTable*", (void*)0, (void*)0)),(_Bool)0,old_table_415));
        come_call_finalizer3(__dec_obj155,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_416=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__417=info->param_types;
    param_names__418=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_420=(param_names),name_421=list$1charph_begin((o2_saved_420));        !list$1charph_end((o2_saved_420));        name_421=list$1charph_next((o2_saved_420))        ){
            type_422=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value365=list$1sTypephp_operator_load_element(param_types,i_419))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_422->mFunctionParam=(_Bool)1;
            type_422->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_421,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_422)),info);
            i_419++;
            come_call_finalizer3(type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_426=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_428=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_431=list$1sNodeph_begin((o2_saved_428));        !list$1sNodeph_end((o2_saved_428));        node_431=list$1sNodeph_next((o2_saved_428))        ){
            right_value_objects_434=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj160=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj160,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj161=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj162=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_439=list$1CVALUEph_length(info->stack);
            sline_440=info->sline;
            sname_441=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_431->sline(node_431->_protocol_obj);
            __dec_obj163=info->sname;
            info->sname=(char*)come_increment_ref_count(node_431->sname(node_431->_protocol_obj));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_427==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_442=node_compile(node_431,info);
                if(                !Value_442) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_439+1) {
                    come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_443->type->mClass->mName,"void")&&come_value_443->type->mPointerNum==0) {
                        come_value2_444=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_443));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_444));
                        __dec_obj167=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_444->c_value));
                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_444,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_446=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_443));
                        var__447=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__447) {
                            come_value3_448=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__447->mType->mClass=="void"&&var__447->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__447->mType,((struct sType*)(__right_value381=come_call_cloner(sType_clone, come_value_443->type))),come_value3_448,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj168=var__447->mType;
                            var__447->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_443->type));
                            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_443->type->mHeap) {
                                c_value_465=(char*)come_increment_ref_count(increment_ref_count_object(come_value_443->type,come_value_443->c_value,info));
                                __dec_obj169=come_value2_446->c_value;
                                come_value2_446->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__447->mCValueName,c_value_465));
                                __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_465 = come_decrement_ref_count2(c_value_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj170=come_value2_446->c_value;
                                come_value2_446->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__447->mCValueName,come_value_443->c_value));
                                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_446));
                        __dec_obj171=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_446->c_value));
                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_466=node_compile(node_431,info);
                if(                !Value_466) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_440;
            __dec_obj172=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_441));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_439);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj173=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_434);
            come_call_finalizer3(__dec_obj173,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_427++;
            come_call_finalizer3(right_value_objects_434,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_441 = come_decrement_ref_count2(sname_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_428,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_426==0) {
            for(            o2_saved_470=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_473=list$1sVarph_begin((o2_saved_470));            !list$1sVarph_end((o2_saved_470));            it_473=list$1sVarph_next((o2_saved_470))            ){
                free_object(it_473->mType,it_473->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_470,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj179=info->match_it_var;
            __if_result__0_469=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj179,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_469,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_415;
    info->block_level=block_level_426;
    info->param_types=param_types__417;
    info->param_names=param_names__418;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_416;
    info->inhibits_output_code=inhibits_output_code_414;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_423;
int i_424;
struct sType* __result285__;
struct sType* default_value_425;
struct sType* __result286__;
default_value_425 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_423=self->head;
    i_424=0;
    while(it_423!=((void*)0)) {
        if(        position==i_424) {
            __result285__ = gComeFunResultObject = __result_obj__ = it_423->item;
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
        it_423=it_423->next;
        i_424++;
    }
    memset(&default_value_425,0,sizeof(struct sType*));
    __result286__ = gComeFunResultObject = __result_obj__ = default_value_425;
    come_call_finalizer3(default_value_425,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_429;
struct sNode* __result287__;
struct sNode* __result288__;
struct sNode* result_430;
struct sNode* __result289__;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_429,0,sizeof(struct sNode*));
        __result287__ = gComeFunResultObject = __result_obj__ = result_429;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    self->it=self->head;
    if(    self->it) {
        __result288__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    memset(&result_430,0,sizeof(struct sNode*));
    __result289__ = gComeFunResultObject = __result_obj__ = result_430;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_432;
struct sNode* __result290__;
struct sNode* __result291__;
struct sNode* result_433;
struct sNode* __result292__;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_432,0,sizeof(struct sNode*));
        __result290__ = gComeFunResultObject = __result_obj__ = result_432;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result291__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    memset(&result_433,0,sizeof(struct sNode*));
    __result292__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result293__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_435;
struct list_item$1sRightValueObjectph* prev_it_436;
    it_435=self->head;
    while(it_435!=((void*)0)) {
        prev_it_436=it_435;
        it_435=it_435->next;
        come_call_finalizer3(prev_it_436,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_437;
struct list_item$1sRightValueObjectph* prev_it_438;
    it_437=self->head;
    while(it_437!=((void*)0)) {
        prev_it_438=it_437;
        it_437=it_437->next;
        come_call_finalizer3(prev_it_438,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result294__;
void* __right_value373 = (void*)0;
struct CVALUE* result_445;
void* __right_value374 = (void*)0;
char* __dec_obj164;
void* __right_value375 = (void*)0;
struct sType* __dec_obj165;
void* __right_value376 = (void*)0;
char* __dec_obj166;
struct CVALUE* __result295__;
    if(    self==(void*)0) {
        __result294__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    result_445=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj164=result_445->c_value;
        result_445->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj165=result_445->type;
        result_445->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_445->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_445->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj166=result_445->c_value_without_right_value_objects;
        result_445->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = result_445;
    come_call_finalizer3(result_445,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
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
struct list_item$1tuple2$2charphsTypephph* it_449;
struct list_item$1tuple2$2charphsTypephph* it2_450;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_449=left->head;
    it2_450=right->head;
    while(it_449!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_449->item,it2_450->item)) {
            return (_Bool)0;
        }
        it_449=it_449->next;
        it2_450=it2_450->next;
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
struct list_item$1sTypeph* it_451;
struct list_item$1sTypeph* it2_452;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_451=left->head;
    it2_452=right->head;
    while(it_451!=((void*)0)) {
        if(        !sType_equals(it_451->item,it2_452->item)) {
            return (_Bool)0;
        }
        it_451=it_451->next;
        it2_452=it2_452->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_453;
struct list_item$1sNodeph* it2_454;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_453=left->head;
    it2_454=right->head;
    while(it_453!=((void*)0)) {
        if(        !sNode_equals(it_453->item,it2_454->item)) {
            return (_Bool)0;
        }
        it_453=it_453->next;
        it2_454=it2_454->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_455;
struct list_item$1charph* it2_456;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_455=left->head;
    it2_456=right->head;
    while(it_455!=((void*)0)) {
        if(        !charp_equals(it_455->item,it2_456->item)) {
            return (_Bool)0;
        }
        it_455=it_455->next;
        it2_456=it2_456->next;
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
struct list_item$1tuple2$2charphsTypephph* it_457;
struct list_item$1tuple2$2charphsTypephph* it2_458;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_457=left->head;
    it2_458=right->head;
    while(it_457!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_457->item,it2_458->item))) {
            return (_Bool)0;
        }
        it_457=it_457->next;
        it2_458=it2_458->next;
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
struct list_item$1sTypeph* it_459;
struct list_item$1sTypeph* it2_460;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_459=left->head;
    it2_460=right->head;
    while(it_459!=((void*)0)) {
        if(        !(sType_operator_equals(it_459->item,it2_460->item))) {
            return (_Bool)0;
        }
        it_459=it_459->next;
        it2_460=it2_460->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_461;
struct list_item$1sNodeph* it2_462;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_461=left->head;
    it2_462=right->head;
    while(it_461!=((void*)0)) {
        if(        !(sNode_operator_equals(it_461->item,it2_462->item))) {
            return (_Bool)0;
        }
        it_461=it_461->next;
        it2_462=it2_462->next;
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
struct list_item$1charph* it_463;
struct list_item$1charph* it2_464;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_463=left->head;
    it2_464=right->head;
    while(it_463!=((void*)0)) {
        if(        !(string_operator_equals(it_463->item,it2_464->item))) {
            return (_Bool)0;
        }
        it_463=it_463->next;
        it2_464=it2_464->next;
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
struct list_item$1sRightValueObjectph* it_467;
struct list_item$1sRightValueObjectph* prev_it_468;
struct list$1sRightValueObjectph* __result296__;
    it_467=self->head;
    while(it_467!=((void*)0)) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer3(prev_it_468,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_471;
struct sVar* __result297__;
struct sVar* __result298__;
struct sVar* result_472;
struct sVar* __result299__;
result_471 = (void*)0;
result_472 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_471,0,sizeof(struct sVar*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_471;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->it=self->head;
    if(    self->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_472,0,sizeof(struct sVar*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_472;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_474;
struct sVar* __result300__;
struct sVar* __result301__;
struct sVar* result_475;
struct sVar* __result302__;
result_474 = (void*)0;
result_475 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_474,0,sizeof(struct sVar*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_474;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_475,0,sizeof(struct sVar*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_475;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_476;
struct list_item$1sVarph* prev_it_477;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer3(prev_it_477,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sVarph* it_478;
struct list_item$1sVarph* prev_it_479;
    it_478=self->head;
    while(it_478!=((void*)0)) {
        prev_it_479=it_478;
        it_478=it_478->next;
        come_call_finalizer3(prev_it_479,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_480;
_Bool dquort_481;
_Bool squort_482;
int sline_483;
int nest_484;
char* tail_485;
void* __right_value388 = (void*)0;
char* buf_486;
void* __right_value389 = (void*)0;
char* __result303__;
    head_480=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_481=(_Bool)0;
        squort_482=(_Bool)0;
        sline_483=0;
        nest_484=0;
        while(1) {
            if(            dquort_481) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_481=!dquort_481;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                }
            }
            else if(            squort_482) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_482=!squort_482;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_483);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_483=info->sline;
                info->p++;
                squort_482=!squort_482;
            }
            else if(            *info->p==34) {
                sline_483=info->sline;
                info->p++;
                dquort_481=!dquort_481;
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
                nest_484++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_484==0) {
                    break;
                }
                nest_484--;
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
    tail_485=info->p;
    buf_486=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_485-head_480+1)), "05function.c", 757, "char*", (void*)0, (void*)0));
    memcpy(buf_486,head_480,tail_485-head_480);
    buf_486[tail_485-head_480]=0;
    skip_spaces_and_lf(info);
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string(buf_486)));
    buf_486 = come_decrement_ref_count2(buf_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_487;
char* p3_488;
int i_489;
    terminated_487=(_Bool)0;
    p3_488=p;
    for(    i_489=0;    i_489<strlen(p2);    i_489++    ){
        if(        *p3_488==0) {
            terminated_487=(_Bool)1;
            break;
        }
        p3_488++;
    }
    return !terminated_487&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* asm_fun_name_490;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct buffer* result_491;
char* head_492;
int brace_num_493;
char* tail_494;
char* head_495;
int brace_num_496;
char* tail_497;
char* head_498;
char* tail_499;
char* head_500;
char* tail_501;
int len_502;
_Bool in_dquort_503;
int brace_num_504;
char* head_505;
char* tail_506;
char* head_507;
char* tail_508;
char* head_509;
char* tail_510;
char* head_511;
int nest_512;
char* tail_513;
char* head_514;
int nest_515;
char* tail_516;
char* head_517;
int nest_518;
char* tail_519;
char* head_520;
int nest_521;
char* tail_522;
char* head_523;
int nest_524;
char* tail_525;
char* head_526;
char* tail_527;
char* head_528;
char* tail_529;
char* head_530;
char* tail_531;
char* head_532;
char* tail_533;
char* head_534;
char* tail_535;
char* head_536;
int brace_num_537;
char* tail_538;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2charphcharph* __result305__;
    asm_fun_name_490=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "struct buffer*", (void*)0, (void*)0))));
    result_491=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_492=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_493=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_493++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_493--;
                        if(                        brace_num_493==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_494=info->p;
            buffer_append(result_491,head_492,tail_494-head_492);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_495=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_496=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_496++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_496--;
                        if(                        brace_num_496==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_497=info->p;
            buffer_append(result_491,head_495,tail_497-head_495);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_498=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_499=info->p;
            buffer_append(result_491,head_498,tail_499-head_498);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_500=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_501=info->p;
            buffer_append(result_491,head_500,tail_501-head_500);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_502=0;
            if(            *info->p==40) {
                in_dquort_503=(_Bool)0;
                brace_num_504=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_503=!in_dquort_503;
                    }
                    else if(                    in_dquort_503) {
                        buffer_append_char(asm_fun_name_490,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
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
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_505=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_506=info->p;
            buffer_append(result_491,head_505,tail_506-head_505);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_507=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_508=info->p;
            buffer_append(result_491,head_507,tail_508-head_507);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_509=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_510=info->p;
            buffer_append(result_491,head_509,tail_510-head_509);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_511=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_512=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_512++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_512--;
                        if(                        nest_512==0) {
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
            tail_513=info->p;
            buffer_append(result_491,head_511,tail_513-head_511);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_514=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_515=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515--;
                        if(                        nest_515==0) {
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
            tail_516=info->p;
            buffer_append(result_491,head_514,tail_516-head_514);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_517=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_518=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518--;
                        if(                        nest_518==0) {
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
            tail_519=info->p;
            buffer_append(result_491,head_517,tail_519-head_517);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_520=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_521=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521--;
                        if(                        nest_521==0) {
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
            tail_522=info->p;
            buffer_append(result_491,head_520,tail_522-head_520);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_523=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_524=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524--;
                        if(                        nest_524==0) {
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
            tail_525=info->p;
            buffer_append(result_491,head_523,tail_525-head_523);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_526=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_527=info->p;
            buffer_append(result_491,head_526,tail_527-head_526);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_528=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_529=info->p;
            buffer_append(result_491,head_528,tail_529-head_528);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_530=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_531=info->p;
            buffer_append(result_491,head_530,tail_531-head_530);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_532=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_533=info->p;
            buffer_append(result_491,head_532,tail_533-head_532);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_534=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_535=info->p;
            buffer_append(result_491,head_534,tail_535-head_534);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_536=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_537=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_537++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_537--;
                        if(                        brace_num_537==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_538=info->p;
            buffer_append(result_491,head_536,tail_538-head_536);
        }
        else {
            break;
        }
    }
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value397=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_490)),(char*)come_increment_ref_count(buffer_to_string(result_491)))));
    come_call_finalizer3(asm_fun_name_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value397,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj180;
char* __dec_obj181;
struct tuple2$2charphcharph* __result304__;
    __dec_obj180=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
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
struct buffer* asm_fun_name_539;
void* __right_value400 = (void*)0;
char* attribute_540;
int nest_541;
int nest_542;
int nest_543;
int nest_544;
int nest_545;
void* __right_value401 = (void*)0;
char* __dec_obj184;
int len_546;
_Bool in_dquort_547;
int brace_num_548;
int brace_num_549;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2charphcharph* __result306__;
    asm_fun_name_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "struct buffer*", (void*)0, (void*)0))));
    attribute_540=(char*)come_increment_ref_count(xsprintf(""));
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
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
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
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_543=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543--;
                        if(                        nest_543==0) {
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
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_545=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545--;
                        if(                        nest_545==0) {
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
            __dec_obj184=attribute_540;
            attribute_540=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_546=0;
            if(            *info->p==40) {
                in_dquort_547=(_Bool)0;
                brace_num_548=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_547=!in_dquort_547;
                    }
                    else if(                    in_dquort_547) {
                        buffer_append_char(asm_fun_name_539,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_548++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_548--;
                        if(                        brace_num_548==0) {
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
                brace_num_549=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_549--;
                        if(                        brace_num_549==0) {
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
    __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value404=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_539)),(char*)come_increment_ref_count(attribute_540))));
    come_call_finalizer3(asm_fun_name_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_540 = come_decrement_ref_count2(attribute_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value404,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value405 = (void*)0;
char* __dec_obj185;
char* head_550;
int head_sline_551;
void* __right_value406 = (void*)0;
char* buf_552;
void* __right_value407 = (void*)0;
struct sNode* node_553;
_Bool Value_554;
    while(*info->p) {
        __dec_obj185=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_550=info->p;
        head_sline_551=info->sline;
        buf_552=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_552 = come_decrement_ref_count2(buf_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_553=(struct sNode*)come_increment_ref_count(top_level_v99(buf_552,head_550,head_sline_551,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_553!=((void*)0)) {
            Value_554=node_compile(node_553,info);
            if(            !Value_554) {
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
            buf_552 = come_decrement_ref_count2(buf_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_553) { node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_552 = come_decrement_ref_count2(buf_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_553) { node_553 = come_decrement_ref_count2(node_553, ((struct sNode*)node_553)->finalize, ((struct sNode*)node_553)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value408 = (void*)0;
char* name_555;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* result_type_556;
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
struct sType* __list_values1___557[7];
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1sTypeph* param_types_562;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __list_values2___563[7];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_names_565;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_default_parametors_566;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sFun* main_fun_567;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* name_589;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_590;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __list_values3___591[1];
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1sTypeph* param_types_592;
void* __right_value463 = (void*)0;
char* __list_values4___593[1];
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* param_names_594;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_default_parametors_595;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sFun* main_fun_596;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* name_597;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* result_type_598;
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
struct sType* __list_values5___599[7];
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* __list_values6___601[7];
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sFun* main_fun_604;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* name_605;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* result_type_606;
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
struct sType* __list_values7___607[5];
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sTypeph* param_types_608;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __list_values8___609[5];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1charph* param_names_610;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charph* param_default_parametors_611;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sFun* main_fun_612;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* name_613;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* result_type_614;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __list_values9___615[1];
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1sTypeph* param_types_616;
void* __right_value550 = (void*)0;
char* __list_values10___617[1];
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1charph* param_names_618;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_default_parametors_619;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sFun* main_fun_620;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* name_621;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* result_type_622;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* __list_values11___623[4];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sTypeph* param_types_624;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __list_values12___625[4];
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1charph* param_names_626;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1charph* param_default_parametors_627;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sFun* main_fun_628;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* name_629;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* result_type_630;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* __list_values13___631[3];
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* __list_values14___633[3];
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* main_fun_636;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* name_637;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* result_type_638;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* __list_values15___639[1];
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1sTypeph* param_types_640;
void* __right_value625 = (void*)0;
char* __list_values16___641[1];
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1charph* param_names_642;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charph* param_default_parametors_643;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sFun* main_fun_644;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* name_645;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sType* result_type_646;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sType* __list_values17___647[3];
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1sTypeph* param_types_648;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
char* __list_values18___649[3];
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1charph* param_names_650;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_default_parametors_651;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* main_fun_652;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
char* name_653;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* result_type_654;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1sTypeph* param_types_655;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1charph* param_names_656;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charph* param_default_parametors_657;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sFun* main_fun_658;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
char* name_659;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* result_type_660;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* __list_values19___661[4];
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1sTypeph* param_types_662;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* __list_values20___663[4];
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1charph* param_names_664;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1charph* param_default_parametors_665;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sFun* main_fun_666;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
char* name_667;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sType* result_type_668;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1sTypeph* param_types_669;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1charph* param_names_670;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1charph* param_default_parametors_671;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sFun* fun_672;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
char* name_673;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* result_type_674;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1sTypeph* param_types_675;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1charph* param_names_676;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1charph* param_default_parametors_677;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sFun* fun_678;
void* __right_value737 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_555=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_556=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_562=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___557[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value412=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___557[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___557[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___557[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___557[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___557[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values1___557[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values1___557)));
        come_call_finalizer3(__right_value412,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_565=(struct list$1charph*)come_increment_ref_count((__list_values2___563[0]=(char*)come_increment_ref_count(((char*)(__right_value430=__builtin_string("count")))),
__list_values2___563[1]=(char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("size")))),
__list_values2___563[2]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("sname")))),
__list_values2___563[3]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("sline")))),
__list_values2___563[4]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("class_name")))),
__list_values2___563[5]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("finalizer_fun")))),
__list_values2___563[6]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph", (void*)0, (void*)0)),7,__list_values2___563)));
        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_566=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_566,((void*)0));
        list$1charph_push_back(param_default_parametors_566,((void*)0));
        list$1charph_push_back(param_default_parametors_566,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_566,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_566,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_567=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_555),(struct sType*)come_increment_ref_count(result_type_556),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_565),(struct list$1charph*)come_increment_ref_count(param_default_parametors_566),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_555)),(struct sFun*)come_increment_ref_count(main_fun_567));
        name_555 = come_decrement_ref_count2(name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_556,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_565,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_566,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_567,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_589=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_590=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_592=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___591[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value460=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values3___591)));
        come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_594=(struct list$1charph*)come_increment_ref_count((__list_values4___593[0]=(char*)come_increment_ref_count(((char*)(__right_value463=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph", (void*)0, (void*)0)),1,__list_values4___593)));
        __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_595=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_596=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_589),(struct sType*)come_increment_ref_count(result_type_590),(struct list$1sTypeph*)come_increment_ref_count(param_types_592),(struct list$1charph*)come_increment_ref_count(param_names_594),(struct list$1charph*)come_increment_ref_count(param_default_parametors_595),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_589)),(struct sFun*)come_increment_ref_count(main_fun_596));
        name_589 = come_decrement_ref_count2(name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_594,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_595,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___599[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___599[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___599[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___599[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___599[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___599[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values5___599)));
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values6___601[0]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("fun")))),
__list_values6___601[1]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("mem")))),
__list_values6___601[2]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("protocol_fun")))),
__list_values6___601[3]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("protocol_obj")))),
__list_values6___601[4]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("call_finalizer_only")))),
__list_values6___601[5]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("no_decrement")))),
__list_values6___601[6]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph", (void*)0, (void*)0)),7,__list_values6___601)));
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_608=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___607[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value516=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___607[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___607[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___607[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
__list_values7___607[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph", (void*)0, (void*)0)),5,__list_values7___607)));
        come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_610=(struct list$1charph*)come_increment_ref_count((__list_values8___609[0]=(char*)come_increment_ref_count(((char*)(__right_value527=__builtin_string("mem")))),
__list_values8___609[1]=(char*)come_increment_ref_count(((char*)(__right_value528=__builtin_string("protocol_fun")))),
__list_values8___609[2]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("protocol_obj")))),
__list_values8___609[3]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("no_decrement")))),
__list_values8___609[4]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph", (void*)0, (void*)0)),5,__list_values8___609)));
        __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_611=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_610),(struct list$1charph*)come_increment_ref_count(param_default_parametors_611),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(main_fun_612));
        name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_612,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_613=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_616=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___615[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value547=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values9___615)));
        come_call_finalizer3(__right_value547,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_618=(struct list$1charph*)come_increment_ref_count((__list_values10___617[0]=(char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph", (void*)0, (void*)0)),1,__list_values10___617)));
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_619=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_620=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_613),(struct sType*)come_increment_ref_count(result_type_614),(struct list$1sTypeph*)come_increment_ref_count(param_types_616),(struct list$1charph*)come_increment_ref_count(param_names_618),(struct list$1charph*)come_increment_ref_count(param_default_parametors_619),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_613)),(struct sFun*)come_increment_ref_count(main_fun_620));
        name_613 = come_decrement_ref_count2(name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_619,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_621=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_622=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_624=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___623[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value566=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values11___623[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values11___623[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values11___623[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values11___623)));
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_626=(struct list$1charph*)come_increment_ref_count((__list_values12___625[0]=(char*)come_increment_ref_count(((char*)(__right_value575=__builtin_string("block")))),
__list_values12___625[1]=(char*)come_increment_ref_count(((char*)(__right_value576=__builtin_string("sname")))),
__list_values12___625[2]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("sline")))),
__list_values12___625[3]=(char*)come_increment_ref_count(((char*)(__right_value578=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph", (void*)0, (void*)0)),4,__list_values12___625)));
        __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_627=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_627,((void*)0));
        list$1charph_push_back(param_default_parametors_627,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_627,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_627,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_628=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_621),(struct sType*)come_increment_ref_count(result_type_622),(struct list$1sTypeph*)come_increment_ref_count(param_types_624),(struct list$1charph*)come_increment_ref_count(param_names_626),(struct list$1charph*)come_increment_ref_count(param_default_parametors_627),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_621)),(struct sFun*)come_increment_ref_count(main_fun_628));
        name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_628,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_629=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_630=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_632=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___631[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value597=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values13___631[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values13___631[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values13___631)));
        come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_634=(struct list$1charph*)come_increment_ref_count((__list_values14___633[0]=(char*)come_increment_ref_count(((char*)(__right_value604=__builtin_string("b")))),
__list_values14___633[1]=(char*)come_increment_ref_count(((char*)(__right_value605=__builtin_string("c")))),
__list_values14___633[2]=(char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph", (void*)0, (void*)0)),3,__list_values14___633)));
        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_636=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_629),(struct sType*)come_increment_ref_count(result_type_630),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_629)),(struct sFun*)come_increment_ref_count(main_fun_636));
        name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_636,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_637=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_638=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___639[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value622=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values15___639)));
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_642=(struct list$1charph*)come_increment_ref_count((__list_values16___641[0]=(char*)come_increment_ref_count(((char*)(__right_value625=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph", (void*)0, (void*)0)),1,__list_values16___641)));
        __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_643=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_644=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(result_type_638),(struct list$1sTypeph*)come_increment_ref_count(param_types_640),(struct list$1charph*)come_increment_ref_count(param_names_642),(struct list$1charph*)come_increment_ref_count(param_default_parametors_643),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_637)),(struct sFun*)come_increment_ref_count(main_fun_644));
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_644,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_648=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___647[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value641=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___647[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value643=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___647[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value645=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values17___647)));
        come_call_finalizer3(__right_value641,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value643,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value645,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_650=(struct list$1charph*)come_increment_ref_count((__list_values18___649[0]=(char*)come_increment_ref_count(((char*)(__right_value648=xsprintf("come_malloc")))),
__list_values18___649[1]=(char*)come_increment_ref_count(((char*)(__right_value649=xsprintf("come_debug")))),
__list_values18___649[2]=(char*)come_increment_ref_count(((char*)(__right_value650=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph", (void*)0, (void*)0)),3,__list_values18___649)));
        __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_651=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_651,((void*)0));
        main_fun_652=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_648),(struct list$1charph*)come_increment_ref_count(param_names_650),(struct list$1charph*)come_increment_ref_count(param_default_parametors_651),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(main_fun_652));
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_648,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_652,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_653=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_654=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_655=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_656=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_657=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_658=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),(struct sType*)come_increment_ref_count(result_type_654),(struct list$1sTypeph*)come_increment_ref_count(param_types_655),(struct list$1charph*)come_increment_ref_count(param_names_656),(struct list$1charph*)come_increment_ref_count(param_default_parametors_657),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_653)),(struct sFun*)come_increment_ref_count(main_fun_658));
        name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_655,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_657,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_658,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_659=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_660=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_662=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___661[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value682=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values19___661[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value684=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values19___661[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value686=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values19___661[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value688=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values19___661)));
        come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_664=(struct list$1charph*)come_increment_ref_count((__list_values20___663[0]=(char*)come_increment_ref_count(((char*)(__right_value691=__builtin_string("mem")))),
__list_values20___663[1]=(char*)come_increment_ref_count(((char*)(__right_value692=__builtin_string("sname")))),
__list_values20___663[2]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("sline")))),
__list_values20___663[3]=(char*)come_increment_ref_count(((char*)(__right_value694=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph", (void*)0, (void*)0)),4,__list_values20___663)));
        __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_665=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_666=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_659),(struct sType*)come_increment_ref_count(result_type_660),(struct list$1sTypeph*)come_increment_ref_count(param_types_662),(struct list$1charph*)come_increment_ref_count(param_names_664),(struct list$1charph*)come_increment_ref_count(param_default_parametors_665),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_659)),(struct sFun*)come_increment_ref_count(main_fun_666));
        name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_662,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_666,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_667=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_669=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_670=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_671=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "struct list$1charph*", (void*)0, (void*)0))));
        fun_672=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_669),(struct list$1charph*)come_increment_ref_count(param_names_670),(struct list$1charph*)come_increment_ref_count(param_default_parametors_671),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(fun_672));
        name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_669,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_671,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_672,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_673=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_674=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_675=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_676=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_677=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "struct list$1charph*", (void*)0, (void*)0))));
        fun_678=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_673),(struct sType*)come_increment_ref_count(result_type_674),(struct list$1sTypeph*)come_increment_ref_count(param_types_675),(struct list$1charph*)come_increment_ref_count(param_names_676),(struct list$1charph*)come_increment_ref_count(param_default_parametors_677),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_673)),(struct sFun*)come_increment_ref_count(fun_678));
        name_673 = come_decrement_ref_count2(name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_675,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_677,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_678,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_558;
struct list$1sTypeph* __result308__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_558=0;    i_558<num_value;    i_558++    ){
        list$1sTypeph_push_back(self,values[i_558]);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
struct list_item$1sTypeph* litem_559;
struct sType* __dec_obj186;
void* __right_value426 = (void*)0;
struct list_item$1sTypeph* litem_560;
struct sType* __dec_obj187;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_561;
struct sType* __dec_obj188;
struct list$1sTypeph* __result307__;
    if(    self->len==0) {
        litem_559=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value425=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1305, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_559->prev=((void*)0);
        litem_559->next=((void*)0);
        __dec_obj186=litem_559->item;
        litem_559->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_559;
        self->head=litem_559;
    }
    else if(    self->len==1) {
        litem_560=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value426=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1315, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_560->prev=self->head;
        litem_560->next=((void*)0);
        __dec_obj187=litem_560->item;
        litem_560->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_560;
        self->head->next=litem_560;
    }
    else {
        litem_561=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1325, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_561->prev=self->tail;
        litem_561->next=((void*)0);
        __dec_obj188=litem_561->item;
        litem_561->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_561;
        self->tail=litem_561;
    }
    self->len++;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_564;
struct list$1charph* __result309__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_564=0;    i_564<num_value;    i_564++    ){
        list$1charph_push_back(self,values[i_564]);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_585;
unsigned int it_586;
_Bool same_key_exist_587;
char* it2_588;
struct map$2charphsFunph* __result320__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_585=charp_get_hash_key(key)%self->size;
    it_586=hash_585;
    while((_Bool)1) {
        if(        self->item_existance[it_586]) {
            if(            charp_equals(self->keys[it_586],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_586]);
                    self->keys[it_586] = come_decrement_ref_count2(self->keys[it_586], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_586]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_586]);
                    self->keys[it_586]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_586],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_586]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_586]=item;
                }
                break;
            }
            it_586++;
            if(            it_586>=self->size) {
                it_586=0;
            }
            else if(            it_586==hash_585) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_586]=(_Bool)1;
            if(            1) {
                self->keys[it_586]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_586]=key;
            }
            if(            1) {
                self->items[it_586]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_586]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_587=(_Bool)0;
    for(    it2_588=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_588=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_588,key)) {
            same_key_exist_587=(_Bool)1;
        }
    }
    if(    !same_key_exist_587) {
        list$1charp_push_back(self->key_list,key);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_568;
void* __right_value450 = (void*)0;
char** keys_569;
void* __right_value451 = (void*)0;
struct sFun** items_570;
void* __right_value452 = (void*)0;
_Bool* item_existance_571;
int len_572;
char* it_575;
struct sFun* default_value_578;
void* __right_value453 = (void*)0;
struct sFun* it2_579;
unsigned int hash_582;
int n_583;
struct sFun* default_value_584;
void* __right_value454 = (void*)0;
default_value_578 = (void*)0;
default_value_584 = (void*)0;
    size_568=self->size*10;
    keys_569=(char**)come_increment_ref_count(((char**)(__right_value450=(char**)come_calloc(1, sizeof(char*)*(1*(size_568)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_570=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value451=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_568)), "./comelang.h", 2709, "struct sFun**", (void*)0, (void*)0))));
    item_existance_571=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value452=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_568)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_572=0;
    for(    it_575=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_575=map$2charphsFunph_next(self)    ){
        memset(&default_value_578,0,sizeof(struct sFun*));
        it2_579=((struct sFun*)(__right_value453=map$2charphsFunph_at(self,it_575,default_value_578)));
        come_call_finalizer3(__right_value453,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_582=charp_get_hash_key(it_575)%size_568;
        n_583=hash_582;
        while((_Bool)1) {
            if(            item_existance_571[n_583]) {
                n_583++;
                if(                n_583>=size_568) {
                    n_583=0;
                }
                else if(                n_583==hash_582) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_571[n_583]=(_Bool)1;
                keys_569[n_583]=it_575;
                items_570[n_583]=((struct sFun*)(__right_value454=map$2charphsFunph_at(self,it_575,default_value_584)));
                come_call_finalizer3(__right_value454,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_572++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_569;
    self->items=items_570;
    self->item_existance=item_existance_571;
    self->size=size_568;
    self->len=len_572;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_573;
char* __result310__;
char* __result311__;
char* result_574;
char* __result312__;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_573,0,sizeof(char*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_573;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_574,0,sizeof(char*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_574;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_576;
char* __result313__;
char* __result314__;
char* result_577;
char* __result315__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_576,0,sizeof(char*));
        __result313__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result314__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    memset(&result_577,0,sizeof(char*));
    __result315__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_580;
unsigned int it_581;
struct sFun* __result316__;
struct sFun* __result317__;
struct sFun* __result318__;
struct sFun* __result319__;
    hash_580=charp_get_hash_key(((char*)key))%self->size;
    it_581=hash_580;
    while((_Bool)1) {
        if(        self->item_existance[it_581]) {
            if(            charp_equals(self->keys[it_581],key)) {
                __result316__ = gComeFunResultObject = __result_obj__ = self->items[it_581];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result316__;
            }
            it_581++;
            if(            it_581>=self->size) {
                it_581=0;
            }
            else if(            it_581==hash_580) {
                __result317__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
        }
        else {
            __result318__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_679;
_Bool is_type_name_flag_680;
int sline_681;
_Bool define_struct_nobody_682;
char* p_683;
int sline_684;
void* __right_value738 = (void*)0;
char* word_685;
_Bool define_function_pointer_result_function_686;
_Bool define_variable_between_brace_687;
char* p_688;
void* __right_value739 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_689=0;
char* fun_name_690=0;
_Bool err_691=0;
void* __right_value740 = (void*)0;
char* word_692;
_Bool define_function_flag_693;
char* p_694;
void* __right_value741 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_695=0;
char* fun_name_696=0;
_Bool err_697=0;
char* word_698;
void* __right_value742 = (void*)0;
char* __dec_obj191;
void* __right_value743 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
void* __right_value744 = (void*)0;
char* __dec_obj194;
_Bool define_variable_699;
char* p_700;
void* __right_value745 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_701=0;
char* fun_name_702=0;
_Bool err_703=0;
void* __right_value746 = (void*)0;
char* word_704;
void* __right_value747 = (void*)0;
char* word_705;
char* p_706;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
char* word_707;
void* __right_value751 = (void*)0;
char* __dec_obj195;
void* __right_value752 = (void*)0;
char* word_708;
void* __right_value753 = (void*)0;
char* word_711;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* node_712;
struct sNode* __result322__;
void* __right_value756 = (void*)0;
struct sNode* __result323__;
char* header_head_713;
void* __right_value757 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_714=0;
char* fun_name_715=0;
_Bool err_716=0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sTypeph* param_types_717;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1charph* param_names_718;
void* __right_value762 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_719=0;
char* param_name_720=0;
_Bool err_721=0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1sTypeph* param_types2_723;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct list$1charph* param_names2_724;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_725=0;
char* param_name_726=0;
_Bool err_727=0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* header_tail_729;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sType* result_type2_730;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct tuple1$1sTypeph* __dec_obj197;
void* __right_value776 = (void*)0;
struct list$1sTypeph* __dec_obj198;
void* __right_value777 = (void*)0;
struct list$1charph* __dec_obj199;
_Bool var_args_731;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* header_buf_732;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1charph* param_default_parametors_733;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun_734;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sFun* fun2_738;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value839 = (void*)0;
struct sNode* __result353__;
void* __right_value840 = (void*)0;
struct sNode* node_774;
struct sNode* __result354__;
void* __right_value841 = (void*)0;
struct sNode* node_775;
struct sNode* __result355__;
void* __right_value842 = (void*)0;
struct sNode* node_776;
char* source_tail_777;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_778;
struct sNode* __result356__;
void* __right_value845 = (void*)0;
char* buf2_779;
void* __right_value846 = (void*)0;
struct sNode* __result357__;
    info->in_top_level=(_Bool)1;
    source_head_679=info->p;
    is_type_name_flag_680=is_type_name(buf,info);
    sline_681=info->sline;
    define_struct_nobody_682=(_Bool)0;
    {
        p_683=info->p;
        sline_684=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_685=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_682=(_Bool)1;
                }
                word_685 = come_decrement_ref_count2(word_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_684;
    }
    define_function_pointer_result_function_686=(_Bool)0;
    define_variable_between_brace_687=(_Bool)0;
    if(    is_type_name_flag_680) {
        p_688=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value739=backtrace_parse_type((_Bool)0,info)));
            result_type_689=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_690=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_691=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value739,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_686=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_692=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_692,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_687=(_Bool)1;
                            }
                        }
                        word_692 = come_decrement_ref_count2(word_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_690 = come_decrement_ref_count2(fun_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_681;
    }
    define_function_flag_693=(_Bool)0;
    if(    is_type_name_flag_680&&!define_function_pointer_result_function_686&&charp_operator_not_equals(buf,"__typeof__")) {
        p_694=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value741=backtrace_parse_type((_Bool)0,info)));
            result_type_695=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_696=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_697=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value741,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_696 = come_decrement_ref_count2(fun_name_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_698=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj191=word_698;
                word_698=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_698,"extern")) {
                    __dec_obj192=word_698;
                    word_698=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj193=word_698;
                word_698=((void*)0);
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_698) {
                if(                is_type_name(word_698,info)) {
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
                        __dec_obj194=word_698;
                        word_698=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_698)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_680) {
                        define_function_flag_693=(_Bool)1;
                    }
                }
            }
            word_698 = come_decrement_ref_count2(word_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_694;
        info->sline=sline_681;
    }
    define_variable_699=(_Bool)1;
    if(    is_type_name_flag_680&&!define_function_pointer_result_function_686) {
        p_700=info->p;
        info->p=head;
        if(        !is_type_name_flag_680) {
            define_variable_699=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value745=backtrace_parse_type((_Bool)0,info)));
            result_type_701=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_702=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_703=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value745,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_704=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_699=(_Bool)1;
                            }
                        }
                        word_704 = come_decrement_ref_count2(word_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_705=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_705,info)&&*info->p!=40) {
                            define_variable_699=(_Bool)1;
                        }
                    }
                    word_705 = come_decrement_ref_count2(word_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_702 = come_decrement_ref_count2(fun_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_699=(_Bool)0;
        }
        else if(        define_variable_699) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_699=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_699=(_Bool)0;
            }
        }
        info->p=p_700;
        info->sline=sline_681;
    }
    else {
        define_variable_699=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_686) {
        p_706=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value748=parse_struct_attribute(info)));
            __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value749=parse_word(info)));
                __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_707=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj195=word_707;
                        word_707=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_707,"extends")) {
                            define_variable_699=(_Bool)0;
                        }
                    }
                    word_707 = come_decrement_ref_count2(word_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_699=(_Bool)0;
        }
        else if(        define_variable_699) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_699=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_699=(_Bool)0;
            }
        }
        info->p=p_706;
        info->sline=sline_681;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_708=(char*)come_increment_ref_count(parse_word(info));
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
                    word_711=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_711)));
                    word_711 = come_decrement_ref_count2(word_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_712=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result322__ = gComeFunResultObject = __result_obj__ = node_712;
            if(node_712) { node_712 = come_decrement_ref_count2(node_712, ((struct sNode*)node_712)->finalize, ((struct sNode*)node_712)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_708 = come_decrement_ref_count2(word_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result322__;
            if(node_712) { node_712 = come_decrement_ref_count2(node_712, ((struct sNode*)node_712)->finalize, ((struct sNode*)node_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_708 = come_decrement_ref_count2(word_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_682) {
    }
    else if(    define_variable_between_brace_687) {
        info->p=head;
        info->sline=sline_681;
        __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value756=parse_global_variable(info)));
        if(__right_value756) { __right_value756 = come_decrement_ref_count2(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    else if(    define_function_pointer_result_function_686) {
        header_head_713=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value757=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_715=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_716=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value757,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_717=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "struct list$1sTypeph*", (void*)0, (void*)0))));
            param_names_718=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value762=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_719=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_720=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_721=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value762,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_721) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_717,(struct sType*)come_increment_ref_count(param_type_719));
                    static int num_function_pointer_result_var_name_a_722=0;
                    list$1charph_push_back(param_names_718,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_722)));
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
                        come_call_finalizer3(param_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_720 = come_decrement_ref_count2(param_name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_720 = come_decrement_ref_count2(param_name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_723=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "struct list$1sTypeph*", (void*)0, (void*)0))));
                param_names2_724=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_725=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_726=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_727=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_727) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_723,(struct sType*)come_increment_ref_count(param_type_725));
                        static int num_function_pointer_result_var_name_b_728=0;
                        list$1charph_push_back(param_names2_724,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_728)));
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
                            come_call_finalizer3(param_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_726 = come_decrement_ref_count2(param_name_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_726 = come_decrement_ref_count2(param_name_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_729=info->p;
                result_type2_730=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
                __dec_obj197=result_type2_730->mResultType;
                result_type2_730->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_714)));
                come_call_finalizer3(__dec_obj197,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj198=result_type2_730->mParamTypes;
                result_type2_730->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types2_723));
                come_call_finalizer3(__dec_obj198,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj199=result_type2_730->mParamNames;
                result_type2_730->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_724));
                come_call_finalizer3(__dec_obj199,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_730->mVarArgs=(_Bool)0;
                result_type2_730->mStatic=(_Bool)0;
                var_args_731=(_Bool)0;
                header_buf_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_732,header_head_713,header_tail_729-header_head_713);
                buffer_append_char(header_buf_732,0);
                param_default_parametors_733=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "struct list$1charph*", (void*)0, (void*)0))));
                fun_734=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_715)),(struct sType*)come_increment_ref_count(result_type2_730),(struct list$1sTypeph*)come_increment_ref_count(param_types_717),(struct list$1charph*)come_increment_ref_count(param_names_718),(struct list$1charph*)come_increment_ref_count(param_default_parametors_733),(_Bool)1,var_args_731,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_732)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_738=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value789=__builtin_string(fun_name_715)))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_738==((void*)0)||fun2_738->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_715)),(struct sFun*)come_increment_ref_count(fun_734));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value793=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_734),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value2));
                come_call_finalizer3(param_types2_723,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_724,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_733,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_734,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_738,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_717,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_718,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_715 = come_decrement_ref_count2(fun_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value793,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result353__;
                come_call_finalizer3(param_types2_723,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_724,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_730,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_733,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_734,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_738,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_717,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_718,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_715 = come_decrement_ref_count2(fun_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_681;
        node_774=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_774;
        if(node_774) { node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        if(node_774) { node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_693) {
        info->p=head;
        info->sline=sline_681;
        node_775=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result355__ = gComeFunResultObject = __result_obj__ = node_775;
        if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result355__;
        if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_699) {
        info->p=head;
        info->sline=sline_681;
        node_776=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_777=info->p;
        header_778=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_778,source_head_679,source_tail_777-source_head_679);
        __result356__ = gComeFunResultObject = __result_obj__ = node_776;
        if(node_776) { node_776 = come_decrement_ref_count2(node_776, ((struct sNode*)node_776)->finalize, ((struct sNode*)node_776)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result356__;
        if(node_776) { node_776 = come_decrement_ref_count2(node_776, ((struct sNode*)node_776)->finalize, ((struct sNode*)node_776)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_778,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_681;
    buf2_779=(char*)come_increment_ref_count(parse_word(info));
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=top_level_v98(buf2_779,head,head_sline,info)));
    buf2_779 = come_decrement_ref_count2(buf2_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
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
struct list_item$1charph* it_709;
struct list_item$1charph* prev_it_710;
struct list$1charph* __result321__;
    it_709=self->head;
    while(it_709!=((void*)0)) {
        prev_it_710=it_709;
        it_709=it_709->next;
        come_call_finalizer3(prev_it_710,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj196;
struct tuple1$1sTypeph* __result324__;
    __dec_obj196=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_735;
unsigned int hash_736;
unsigned int it_737;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
struct sFun* __result328__;
default_value_735 = (void*)0;
    memset(&default_value_735,0,sizeof(struct sFun*));
    hash_736=charp_get_hash_key(((char*)key))%self->size;
    it_737=hash_736;
    while((_Bool)1) {
        if(        self->item_existance[it_737]) {
            if(            charp_equals(self->keys[it_737],key)) {
                __result325__ = gComeFunResultObject = __result_obj__ = self->items[it_737];
                come_call_finalizer3(default_value_735,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
            it_737++;
            if(            it_737>=self->size) {
                it_737=0;
            }
            else if(            it_737==hash_736) {
                __result326__ = gComeFunResultObject = __result_obj__ = default_value_735;
                come_call_finalizer3(default_value_735,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result326__;
            }
        }
        else {
            __result327__ = gComeFunResultObject = __result_obj__ = default_value_735;
            come_call_finalizer3(default_value_735,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
    }
    __result328__ = gComeFunResultObject = __result_obj__ = default_value_735;
    come_call_finalizer3(default_value_735,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result329__;
void* __right_value794 = (void*)0;
struct sFunNode* result_739;
void* __right_value795 = (void*)0;
char* __dec_obj200;
void* __right_value838 = (void*)0;
struct sFun* __dec_obj225;
struct sFunNode* __result352__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_739=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_739->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_739->sname;
        result_739->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_739->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj225=result_739->mFun;
        result_739->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj225,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_739;
    come_call_finalizer3(result_739,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result330__;
void* __right_value796 = (void*)0;
struct sFun* result_740;
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
struct sFun* __result351__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_740=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj201=result_740->mName;
        result_740->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj202=result_740->mResultType;
        result_740->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj203=result_740->mParamTypes;
        result_740->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj203,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj204=result_740->mParamNames;
        result_740->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj205=result_740->mParamDefaultParametors;
        result_740->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj206=result_740->mLambdaType;
        result_740->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj216=result_740->mBlock;
        result_740->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj216,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_740->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj217=result_740->mSource;
        result_740->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj218=result_740->mSourceHead;
        result_740->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj219=result_740->mSourceHead2;
        result_740->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj220=result_740->mSourceDefer;
        result_740->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_740->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_740->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj221=result_740->mComeHeader;
        result_740->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj222=result_740->mDeclareSName;
        result_740->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_740->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_740->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_740->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj223=result_740->mAttribute;
        result_740->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj224=result_740->mFunAttribute;
        result_740->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_740;
    come_call_finalizer3(result_740,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result331__;
void* __right_value803 = (void*)0;
struct sBlock* result_741;
void* __right_value804 = (void*)0;
struct list$1sNodeph* __dec_obj207;
void* __right_value828 = (void*)0;
struct sVarTable* __dec_obj215;
struct sBlock* __result350__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_741=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj207=result_741->mNodes;
        result_741->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj207,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj215=result_741->mVarTable;
        result_741->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj215,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result350__ = gComeFunResultObject = __result_obj__ = result_741;
    come_call_finalizer3(result_741,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result332__;
void* __right_value805 = (void*)0;
struct sVarTable* result_742;
void* __right_value827 = (void*)0;
struct map$2charphsVarph* __dec_obj214;
struct sVarTable* __result349__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_742=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj214=result_742->mVars;
        result_742->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj214,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_742->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_742->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_742->mID=self->mID;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_742;
    come_call_finalizer3(result_742,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result333__;
void* __right_value806 = (void*)0;
void* __right_value812 = (void*)0;
struct map$2charphsVarph* result_746;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1charp* __dec_obj209;
char* it_749;
struct sVar* default_value_752;
void* __right_value815 = (void*)0;
struct sVar* it2_755;
void* __right_value826 = (void*)0;
struct map$2charphsVarph* __result348__;
default_value_752 = (void*)0;
    if(    self==((void*)0)) {
        __result333__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_746=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2551, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj209=result_746->key_list;
    result_746->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2553, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj209,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_749=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_749=map$2charphsVarph_next(self)    ){
        memset(&default_value_752,0,sizeof(struct sVar*));
        it2_755=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_749,default_value_752));
        map$2charphsVarph_put(result_746,it_749,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_755)));
        come_call_finalizer3(it2_755,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_746;
    come_call_finalizer3(result_746,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
int i_743;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1charp* __dec_obj208;
struct map$2charphsVarph* __result334__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value807=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2480, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value808=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2481, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value809=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2482, "_Bool*", (void*)0, (void*)0))));
    for(    i_743=0;    i_743<128;    i_743++    ){
        self->item_existance[i_743]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj208=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2492, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj208,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_744;
int i_745;
    for(    i_744=0;    i_744<self->size;    i_744++    ){
        if(        self->item_existance[i_744]) {
            if(            1) {
                come_call_finalizer3(self->items[i_744],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_745=0;    i_745<self->size;    i_745++    ){
        if(        self->item_existance[i_745]) {
            if(            1) {
                self->keys[i_745] = come_decrement_ref_count2(self->keys[i_745], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_747;
char* __result335__;
char* __result336__;
char* result_748;
char* __result337__;
result_747 = (void*)0;
result_748 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_747,0,sizeof(char*));
        __result335__ = gComeFunResultObject = __result_obj__ = result_747;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result336__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    memset(&result_748,0,sizeof(char*));
    __result337__ = gComeFunResultObject = __result_obj__ = result_748;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_750;
char* __result338__;
char* __result339__;
char* result_751;
char* __result340__;
result_750 = (void*)0;
result_751 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_750,0,sizeof(char*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_750;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_751,0,sizeof(char*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_751;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_753;
unsigned int it_754;
struct sVar* __result341__;
struct sVar* __result342__;
struct sVar* __result343__;
struct sVar* __result344__;
    hash_753=charp_get_hash_key(((char*)key))%self->size;
    it_754=hash_753;
    while((_Bool)1) {
        if(        self->item_existance[it_754]) {
            if(            charp_equals(self->keys[it_754],key)) {
                __result341__ = gComeFunResultObject = __result_obj__ = self->items[it_754];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result341__;
            }
            it_754++;
            if(            it_754>=self->size) {
                it_754=0;
            }
            else if(            it_754==hash_753) {
                __result342__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result342__;
            }
        }
        else {
            __result343__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result343__;
        }
    }
    __result344__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_767;
int it_768;
_Bool same_key_exist_769;
char* it2_770;
struct map$2charphsVarph* __result345__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_767=charp_get_hash_key(key)%self->size;
    it_768=hash_767;
    while((_Bool)1) {
        if(        self->item_existance[it_768]) {
            if(            charp_equals(self->keys[it_768],key)) {
                if(                1) {
                    self->keys[it_768] = come_decrement_ref_count2(self->keys[it_768], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_768]);
                    self->keys[it_768]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_768]);
                    self->keys[it_768]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_768],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_768]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_768]=item;
                }
                break;
            }
            it_768++;
            if(            it_768>=self->size) {
                it_768=0;
            }
            else if(            it_768==hash_767) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_768]=(_Bool)1;
            if(            1) {
                self->keys[it_768]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_768]=key;
            }
            if(            1) {
                self->items[it_768]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_768]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_769=(_Bool)0;
    for(    it2_770=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_770=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_770,key)) {
            same_key_exist_769=(_Bool)1;
        }
    }
    if(    !same_key_exist_769) {
        list$1charp_push_back(self->key_list,key);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_756;
void* __right_value816 = (void*)0;
char** keys_757;
void* __right_value817 = (void*)0;
struct sVar** items_758;
void* __right_value818 = (void*)0;
_Bool* item_existance_759;
int len_760;
char* it_761;
struct sVar* default_value_762;
void* __right_value819 = (void*)0;
struct sVar* it2_763;
unsigned int hash_764;
int n_765;
struct sVar* default_value_766;
void* __right_value820 = (void*)0;
default_value_762 = (void*)0;
default_value_766 = (void*)0;
    size_756=self->size*10;
    keys_757=(char**)come_increment_ref_count(((char**)(__right_value816=(char**)come_calloc(1, sizeof(char*)*(1*(size_756)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_758=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value817=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_756)), "./comelang.h", 2709, "struct sVar**", (void*)0, (void*)0))));
    item_existance_759=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value818=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_756)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_760=0;
    for(    it_761=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_761=map$2charphsVarph_next(self)    ){
        memset(&default_value_762,0,sizeof(struct sVar*));
        it2_763=((struct sVar*)(__right_value819=map$2charphsVarph_at(self,it_761,default_value_762)));
        come_call_finalizer3(__right_value819,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_764=charp_get_hash_key(it_761)%size_756;
        n_765=hash_764;
        while((_Bool)1) {
            if(            item_existance_759[n_765]) {
                n_765++;
                if(                n_765>=size_756) {
                    n_765=0;
                }
                else if(                n_765==hash_764) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_759[n_765]=(_Bool)1;
                keys_757[n_765]=it_761;
                items_758[n_765]=((struct sVar*)(__right_value820=map$2charphsVarph_at(self,it_761,default_value_766)));
                come_call_finalizer3(__right_value820,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_760++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_757;
    self->items=items_758;
    self->item_existance=item_existance_759;
    self->size=size_756;
    self->len=len_760;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result346__;
void* __right_value821 = (void*)0;
struct sVar* result_771;
void* __right_value822 = (void*)0;
char* __dec_obj210;
void* __right_value823 = (void*)0;
char* __dec_obj211;
void* __right_value824 = (void*)0;
struct sType* __dec_obj212;
void* __right_value825 = (void*)0;
char* __dec_obj213;
struct sVar* __result347__;
    if(    self==(void*)0) {
        __result346__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    result_771=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj210=result_771->mName;
        result_771->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj211=result_771->mCValueName;
        result_771->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj212=result_771->mType;
        result_771->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_771->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_771->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_771->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_771->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_771->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj213=result_771->mFunName;
        result_771->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_771;
    come_call_finalizer3(result_771,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_772;
int i_773;
    for(    i_772=0;    i_772<self->size;    i_772++    ){
        if(        self->item_existance[i_772]) {
            if(            1) {
                come_call_finalizer3(self->items[i_772],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_773=0;    i_773<self->size;    i_773++    ){
        if(        self->item_existance[i_773]) {
            if(            1) {
                self->keys[i_773] = come_decrement_ref_count2(self->keys[i_773], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_780;
int caller_line_781;
char* caller_sname_782;
_Bool comma_instead_of_semicolon_783;
char* last_code_784;
char* __dec_obj226;
char* last_code2_785;
char* __dec_obj227;
void* __right_value847 = (void*)0;
char* sname_top_786;
int sline_top_787;
void* __right_value848 = (void*)0;
struct sFun* funX_788;
_Bool __result358__;
void* __right_value849 = (void*)0;
struct sType* result_type_789;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1sTypeph* param_types_790;
struct list$1sTypeph* o2_saved_791;
struct sType* it_794;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sType* param_type_797;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1charph* param_names_798;
void* __right_value856 = (void*)0;
struct list$1charph* param_default_parametors_799;
char* p_800;
int sline_801;
char* sname_802;
char* head_803;
struct buffer* source_804;
void* __right_value857 = (void*)0;
struct buffer* __dec_obj228;
struct sType* generics_type_saved_805;
void* __right_value858 = (void*)0;
struct sType* __dec_obj229;
struct list$1charph* method_generics_type_names_806;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1charph* __dec_obj230;
struct list$1charph* o2_saved_807;
char* it_808;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1charph* __dec_obj231;
char* __dec_obj232;
void* __right_value863 = (void*)0;
struct sBlock* block_809;
struct buffer* __dec_obj233;
char* __dec_obj234;
_Bool var_args_810;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sFun* fun_811;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value873 = (void*)0;
struct sNode* node_812;
_Bool in_generics_fun_813;
_Bool Value_814;
void* __if_result__1_815 = (void*)0;
_Bool __result365__;
struct sType* __dec_obj235;
struct list$1charph* __dec_obj236;
void* __right_value874 = (void*)0;
char* __dec_obj237;
char* __dec_obj238;
char* __dec_obj239;
_Bool __result366__;
    caller_fun_780=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_781=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_782=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_783=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_784=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_785=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_786=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_787=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_788=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_788) {
        __result358__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_784 = come_decrement_ref_count2(last_code_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_785 = come_decrement_ref_count2(last_code2_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_786 = come_decrement_ref_count2(sname_top_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_788,sFun_finalize, 0, 0, 0, 0, (void*)0);
        return __result358__;
    }
    result_type_789=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_790=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2309, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_791=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_794=list$1sTypeph_begin((o2_saved_791));    !list$1sTypeph_end((o2_saved_791));    it_794=list$1sTypeph_next((o2_saved_791))    ){
        param_type_797=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value852=come_call_cloner(sType_clone, it_794))),generics_type,info));
        come_call_finalizer3(__right_value852,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_797->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_790,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_797)));
        come_call_finalizer3(param_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_791,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_798=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_799=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_800=info->p;
    sline_801=info->sline;
    sname_802=(char*)come_increment_ref_count(info->sname);
    head_803=info->head;
    source_804=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj228=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_805=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj229=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_806=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj230=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_807=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_808=list$1charph_begin((o2_saved_807));    !list$1charph_end((o2_saved_807));    it_808=list$1charph_next((o2_saved_807))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_808)));
    }
    come_call_finalizer3(o2_saved_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj231=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj232=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_809=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_803;
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_804);
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_800;
    info->sline=sline_801;
    __dec_obj234=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_802);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_789->mInline=(_Bool)0;
    result_type_789->mStatic=(_Bool)0;
    result_type_789->mUniq=(_Bool)0;
    var_args_810=generics_fun->mVarArgs;
    fun_811=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2360, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_790),(struct list$1charph*)come_increment_ref_count(param_names_798),(struct list$1charph*)come_increment_ref_count(param_default_parametors_799),(_Bool)0,var_args_810,(struct sBlock*)come_increment_ref_count(block_809),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_811));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value872=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2367, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_811),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_812=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value872,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_813=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_814=node_compile(node_812,info);
    if(    !Value_814) {
        __result365__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_784 = come_decrement_ref_count2(last_code_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_785 = come_decrement_ref_count2(last_code2_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_786 = come_decrement_ref_count2(sname_top_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_788,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_790,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_798,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_799,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_802 = come_decrement_ref_count2(sname_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_804,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_805,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_811,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result365__;
    }
    else {
        __if_result__1_815=(void*)(Value_814);
;
    }
    info->in_generics_fun=in_generics_fun_813;
    __dec_obj235=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_805);
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_806);
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_786));
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_787;
    __dec_obj238=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_784);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_785);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_780;
    info->caller_line=caller_line_781;
    info->caller_sname=caller_sname_782;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_783;
    __result366__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_784 = come_decrement_ref_count2(last_code_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_785 = come_decrement_ref_count2(last_code2_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_786 = come_decrement_ref_count2(sname_top_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_788,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_790,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_798,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_799,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_802 = come_decrement_ref_count2(sname_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_804,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_805,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_811,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result366__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_792;
struct sType* __result359__;
struct sType* __result360__;
struct sType* result_793;
struct sType* __result361__;
result_792 = (void*)0;
result_793 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_792,0,sizeof(struct sType*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_792;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->head;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_793,0,sizeof(struct sType*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_793;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_795;
struct sType* __result362__;
struct sType* __result363__;
struct sType* result_796;
struct sType* __result364__;
result_795 = (void*)0;
result_796 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_795,0,sizeof(struct sType*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_795;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_796,0,sizeof(struct sType*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_796;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_816;
int caller_line_817;
char* caller_sname_818;
_Bool comma_instead_of_semicolon_819;
char* last_code_820;
char* __dec_obj240;
char* last_code2_821;
char* __dec_obj241;
void* __right_value875 = (void*)0;
char* sname_top_822;
int sline_top_823;
void* __right_value876 = (void*)0;
struct sFun* funX_824;
_Bool __result367__;
void* __right_value877 = (void*)0;
struct sType* result_type_825;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1sTypeph* param_types_826;
struct list$1sTypeph* o2_saved_827;
struct sType* it_828;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sType* param_type_829;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1charph* param_names_830;
void* __right_value884 = (void*)0;
struct list$1charph* param_default_parametors_831;
char* p_832;
int sline_833;
char* sname_834;
char* head_835;
struct buffer* source_836;
void* __right_value885 = (void*)0;
struct buffer* __dec_obj242;
struct list$1charph* method_generics_type_names_837;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct list$1charph* __dec_obj243;
struct list$1charph* o2_saved_838;
char* it_839;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1charph* __dec_obj244;
char* __dec_obj245;
void* __right_value890 = (void*)0;
struct sBlock* block_840;
struct buffer* __dec_obj246;
char* __dec_obj247;
_Bool var_args_841;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sFun* fun_842;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value901 = (void*)0;
struct sNode* node_843;
_Bool Value_844;
void* __if_result__2_845 = (void*)0;
_Bool __result368__;
struct list$1charph* __dec_obj248;
void* __right_value902 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
_Bool __result369__;
    caller_fun_816=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_817=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_818=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_819=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_820=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_821=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_822=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_823=info->sline;
    funX_824=((struct sFun*)(__right_value876=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value876,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_824) {
        __result367__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_820 = come_decrement_ref_count2(last_code_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_821 = come_decrement_ref_count2(last_code2_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_822 = come_decrement_ref_count2(sname_top_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result367__;
    }
    result_type_825=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_826=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2421, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_827=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_828=list$1sTypeph_begin((o2_saved_827));    !list$1sTypeph_end((o2_saved_827));    it_828=list$1sTypeph_next((o2_saved_827))    ){
        param_type_829=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value880=come_call_cloner(sType_clone, it_828))),info));
        come_call_finalizer3(__right_value880,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_829->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_826,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_829)));
        come_call_finalizer3(param_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_827,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_830=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_831=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_832=info->p;
    sline_833=info->sline;
    sname_834=(char*)come_increment_ref_count(info->sname);
    head_835=info->head;
    source_836=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj242=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj242,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_837=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj243=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2445, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj243,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_838=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_839=list$1charph_begin((o2_saved_838));    !list$1charph_end((o2_saved_838));    it_839=list$1charph_next((o2_saved_838))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_839)));
    }
    come_call_finalizer3(o2_saved_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj244=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj245=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_840=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_835;
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_836);
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_832;
    info->sline=sline_833;
    __dec_obj247=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_834);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_825->mInline=(_Bool)0;
    result_type_825->mStatic=(_Bool)0;
    result_type_825->mUniq=(_Bool)0;
    var_args_841=generics_fun->mVarArgs;
    fun_842=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2469, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_825),(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types_826)),(struct list$1charph*)come_increment_ref_count(param_names_830),(struct list$1charph*)come_increment_ref_count(param_default_parametors_831),(_Bool)0,var_args_841,(struct sBlock*)come_increment_ref_count(block_840),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_842));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2476, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value900=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2476, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_842),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_843=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value900,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_844=node_compile(node_843,info);
    if(    !Value_844) {
        __result368__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_820 = come_decrement_ref_count2(last_code_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_821 = come_decrement_ref_count2(last_code2_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_822 = come_decrement_ref_count2(sname_top_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_825,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_826,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_830,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_831,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_834 = come_decrement_ref_count2(sname_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_837,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_840,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_842,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_843) { node_843 = come_decrement_ref_count2(node_843, ((struct sNode*)node_843)->finalize, ((struct sNode*)node_843)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result368__;
    }
    else {
        __if_result__2_845=(void*)(Value_844);
;
    }
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_837);
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_822));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_823;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_820);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_821);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_816;
    info->caller_line=caller_line_817;
    info->caller_sname=caller_sname_818;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_819;
    __result369__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_820 = come_decrement_ref_count2(last_code_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_821 = come_decrement_ref_count2(last_code2_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_822 = come_decrement_ref_count2(sname_top_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_825,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_826,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_830,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_831,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_834 = come_decrement_ref_count2(sname_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_837,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_840,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_842,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_843) { node_843 = come_decrement_ref_count2(node_843, ((struct sNode*)node_843)->finalize, ((struct sNode*)node_843)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result369__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_846;
char* source_head_847;
void* __right_value903 = (void*)0;
char* attribute_848;
struct sType* result_type_849;
char* var_name_850;
_Bool constructor__851;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* __dec_obj252;
void* __right_value906 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_852=0;
char* var_name2_853=0;
_Bool err_854=0;
struct sType* __dec_obj253;
char* __dec_obj254;
_Bool method_definition_855;
char* p_856;
int sline_857;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* buf2_858;
char* fun_name_859;
char* base_fun_name_860;
void* __right_value909 = (void*)0;
char* __dec_obj255;
void* __right_value910 = (void*)0;
char* __dec_obj256;
void* __right_value911 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_861=0;
char* name_862=0;
_Bool err_863=0;
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
struct list$1sTypeph* param_types_864=0;
struct list$1charph* param_names_865=0;
struct list$1charph* param_default_parametors_866=0;
_Bool var_args_867=0;
char* header_tail_868;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* header_buf_869;
int version_870;
int n_871;
_Bool in_top_level_872;
void* __right_value921 = (void*)0;
struct sBlock* block_873;
void* __right_value922 = (void*)0;
char* fun_name_875;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sFun* fun_876;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun2_877;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value937 = (void*)0;
struct sNode* __result372__;
void* __right_value938 = (void*)0;
char* none_generics_name_879;
void* __right_value939 = (void*)0;
char* generics_sname_880;
int generics_sline_881;
void* __right_value940 = (void*)0;
char* block_882;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sGenericsFun* fun_883;
void* __right_value947 = (void*)0;
char* fun_name3_884;
void* __right_value953 = (void*)0;
struct sNode* __result384__;
void* __right_value954 = (void*)0;
char* generics_sname_906;
int generics_sline_907;
void* __right_value955 = (void*)0;
char* block_908;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sGenericsFun* fun_909;
void* __right_value962 = (void*)0;
char* fun_name3_910;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* __result385__;
char* source_tail_911;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct buffer* header_912;
void* __right_value967 = (void*)0;
char* name_913;
void* __right_value968 = (void*)0;
char* name_914;
int i_915;
void* __right_value969 = (void*)0;
struct sType* param_type_916;
void* __right_value970 = (void*)0;
char* param_name_917;
void* __right_value971 = (void*)0;
char* default_parametor_918;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
char* impl_name_919;
void* __right_value975 = (void*)0;
char* result_type_name_920;
void* __right_value976 = (void*)0;
char* impl_name_921;
void* __right_value977 = (void*)0;
char* result_type_name_922;
int i_923;
void* __right_value978 = (void*)0;
struct sType* param_type_924;
void* __right_value979 = (void*)0;
char* param_name_925;
void* __right_value980 = (void*)0;
char* default_parametor_926;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sBlock* block_927;
_Bool static_fun_928;
_Bool inline_fun_929;
_Bool uniq_fun_930;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
char* new_fun_name_931;
void* __right_value987 = (void*)0;
char* __dec_obj267;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sFun* fun_932;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sFun* fun2_933;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1001 = (void*)0;
struct sNode* __result386__;
void* __right_value1002 = (void*)0;
char* new_fun_name_934;
void* __right_value1003 = (void*)0;
char* __dec_obj268;
char* source_tail_935;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct buffer* header_936;
_Bool result_type_static_937;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sFun* fun_938;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sFun* fun2_939;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1018 = (void*)0;
struct sNode* __result387__;
void* __right_value1019 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_940=0;
char* fun_attribute_941=0;
void* __right_value1020 = (void*)0;
char* __dec_obj269;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct buffer* header_942;
char* source_tail_943;
_Bool result_type_static_944;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sFun* fun_945;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun2_946;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1034 = (void*)0;
struct sNode* __result388__;
struct sNode* __result389__;
fun_name_859 = (void*)0;
    header_head_846=info->p;
    source_head_847=info->p;
    attribute_848=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_849=((void*)0);
    var_name_850=((void*)0);
    constructor__851=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value904=parse_word(info)));
        __right_value904 = come_decrement_ref_count2(__right_value904, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj252=result_type_849;
        result_type_849=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_849->mHeap=(_Bool)1;
        constructor__851=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value906=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_852=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_853=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_854=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value906,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj253=result_type_849;
        result_type_849=(struct sType*)come_increment_ref_count(result_type2_852);
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj254=var_name_850;
        var_name_850=(char*)come_increment_ref_count(var_name2_853);
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_854) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_852,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_853 = come_decrement_ref_count2(var_name2_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_855=(_Bool)0;
    {
        p_856=info->p;
        sline_857=info->sline;
        buf2_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_858,*info->p);
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
        if(        buffer_length(buf2_858)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_855=(_Bool)1;
        }
        info->p=p_856;
        info->sline=sline_857;
        come_call_finalizer3(buf2_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_860=((void*)0);
    if(    constructor__851) {
        __dec_obj255=base_fun_name_860;
        base_fun_name_860=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=fun_name_859;
        fun_name_859=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_860,info,(_Bool)1));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_855) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value911=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_861=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_862=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_863=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value911,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_863) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj257=base_fun_name_860;
        base_fun_name_860=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=fun_name_859;
        fun_name_859=(char*)come_increment_ref_count(create_method_name(obj_type_861,(_Bool)0,base_fun_name_860,info,(_Bool)1));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_862 = come_decrement_ref_count2(name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj259=base_fun_name_860;
        base_fun_name_860=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=fun_name_859;
        fun_name_859=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_860,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj261=fun_name_859;
        fun_name_859=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=base_fun_name_860;
        base_fun_name_860=(char*)come_increment_ref_count(__builtin_string(fun_name_859));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_860,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value918=parse_params(info,constructor__851)));
    param_types_864=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_865=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_866=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_867=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value918,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_868=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_860,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_869=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_869,header_head_846,header_tail_868-header_head_846);
    buffer_append_char(header_buf_869,0);
    version_870=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_871=0;
        while(xisdigit(*info->p)) {
            n_871=n_871*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_870=n_871;
    }
    in_top_level_872=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_860,"lambda")) {
        block_873=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_874=0;
        lambda_num_874++;
        fun_name_875=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_874));
        result_type_849->mInline=(_Bool)0;
        result_type_849->mStatic=(_Bool)0;
        result_type_849->mUniq=(_Bool)0;
        fun_876=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2644, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_875)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),(_Bool)0,var_args_867,(struct sBlock*)come_increment_ref_count(block_873),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_869)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_877=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value930=__builtin_string(fun_name_875)))));
        __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_877==((void*)0)||fun2_877->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_875)),(struct sFun*)come_increment_ref_count(fun_876));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2654, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value934=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2654, "struct sLambdaNode*", (void*)0, (void*)0)),fun_876,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value937=_inf_value5));
        come_call_finalizer3(block_873,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_875 = come_decrement_ref_count2(fun_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_876,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value934,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value937) { __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result372__;
        come_call_finalizer3(block_873,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_875 = come_decrement_ref_count2(fun_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_876,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_879=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_880=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_881=info->sline;
        block_882=(char*)come_increment_ref_count(skip_block(info));
        fun_883=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2664, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value942=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value943=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),var_args_867,(char*)come_increment_ref_count(block_882),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_880)),generics_sline_881));
        come_call_finalizer3(__right_value942,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value943,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_884=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_879,base_fun_name_860));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_884)),(struct sGenericsFun*)come_increment_ref_count(fun_883));
        __result384__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_879 = come_decrement_ref_count2(none_generics_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_880 = come_decrement_ref_count2(generics_sname_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_882 = come_decrement_ref_count2(block_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_883,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_884 = come_decrement_ref_count2(fun_name3_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result384__;
        none_generics_name_879 = come_decrement_ref_count2(none_generics_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_880 = come_decrement_ref_count2(generics_sname_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_882 = come_decrement_ref_count2(block_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_883,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_884 = come_decrement_ref_count2(fun_name3_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_906=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_907=info->sline;
        block_908=(char*)come_increment_ref_count(skip_block(info));
        fun_909=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value957=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value958=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),var_args_867,(char*)come_increment_ref_count(block_908),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_906)),generics_sline_907));
        come_call_finalizer3(__right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_910=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_860));
        if(        method_definition_855) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sGenericsFun*)come_increment_ref_count(fun_909));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_910)),(struct sGenericsFun*)come_increment_ref_count(fun_909));
        }
        __result385__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_906 = come_decrement_ref_count2(generics_sname_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_908 = come_decrement_ref_count2(block_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_909,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_910 = come_decrement_ref_count2(fun_name3_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result385__;
        generics_sname_906 = come_decrement_ref_count2(generics_sname_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_908 = come_decrement_ref_count2(block_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_909,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_910 = come_decrement_ref_count2(fun_name3_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_911=info->p-1;
        header_912=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2694, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__851) {
            if(            list$1sTypeph_length(param_types_864)==1) {
                name_913=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_912,"extern %s*%% %s*::initialize(%s*%% self);\n",name_913,name_913,name_913);
                name_913 = come_decrement_ref_count2(name_913, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_914=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_912,"extern %s*%% %s*::initialize(%s*%% self, ",name_914,name_914,name_914);
                for(                i_915=1;                i_915<list$1sTypeph_length(param_types_864);                i_915++                ){
                    param_type_916=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_864,i_915));
                    param_name_917=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_865,i_915));
                    default_parametor_918=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_866,i_915));
                    if(                    default_parametor_918) {
                        buffer_append_format(header_912,"extern %s %s=%s",((char*)(__right_value972=make_come_type_name_string_no_solved(param_type_916,(_Bool)0,info))),param_name_917,default_parametor_918);
                        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_912,"extern %s %s",((char*)(__right_value973=make_come_type_name_string_no_solved(param_type_916,(_Bool)0,info))),param_name_917);
                        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_915!=list$1sTypeph_length(param_types_864)-1) {
                        buffer_append_str(header_912,",");
                    }
                    come_call_finalizer3(param_type_916,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_917 = come_decrement_ref_count2(param_name_917, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_918 = come_decrement_ref_count2(default_parametor_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_912,");\n");
                name_914 = come_decrement_ref_count2(name_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_864)==1) {
                impl_name_919=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_920=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_849,(_Bool)0,info));
                buffer_append_format(header_912,"extern %s %s*::%s(%s* self);\n",result_type_name_920,impl_name_919,base_fun_name_860,impl_name_919);
                impl_name_919 = come_decrement_ref_count2(impl_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_920 = come_decrement_ref_count2(result_type_name_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_921=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_922=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_849,(_Bool)0,info));
                buffer_append_format(header_912,"extern %s %s*::%s(%s* self, ",result_type_name_922,impl_name_921,base_fun_name_860,impl_name_921);
                for(                i_923=1;                i_923<list$1sTypeph_length(param_types_864);                i_923++                ){
                    param_type_924=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_864,i_923));
                    param_name_925=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_865,i_923));
                    default_parametor_926=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_866,i_923));
                    if(                    default_parametor_926) {
                        buffer_append_format(header_912,"extern %s %s=%s",((char*)(__right_value981=make_come_type_name_string_no_solved(param_type_924,(_Bool)0,info))),param_name_925,default_parametor_926);
                        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_912,"extern %s %s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_924,(_Bool)0,info))),param_name_925);
                        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_923!=list$1sTypeph_length(param_types_864)-1) {
                        buffer_append_str(header_912,",");
                    }
                    come_call_finalizer3(param_type_924,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_925 = come_decrement_ref_count2(param_name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_926 = come_decrement_ref_count2(default_parametor_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_912,");\n");
                impl_name_921 = come_decrement_ref_count2(impl_name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_922 = come_decrement_ref_count2(result_type_name_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_912,source_head_847,source_tail_911-source_head_847);
            buffer_append_str(header_912,";\n");
        }
        if(        !result_type_849->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value983=buffer_to_string(header_912))));
                __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_927=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__851,(_Bool)1));
        static_fun_928=(_Bool)0;
        if(        result_type_849->mStatic) {
            result_type_849->mStatic=(_Bool)0;
            result_type_849->mUniq=(_Bool)0;
            static_fun_928=(_Bool)1;
        }
        inline_fun_929=(_Bool)0;
        if(        result_type_849->mInline) {
            result_type_849->mInline=(_Bool)0;
            result_type_849->mUniq=(_Bool)0;
            inline_fun_929=(_Bool)1;
        }
        uniq_fun_930=(_Bool)0;
        if(        result_type_849->mUniq) {
            result_type_849->mUniq=(_Bool)0;
            result_type_849->mInline=(_Bool)0;
            result_type_849->mStatic=(_Bool)0;
            uniq_fun_930=(_Bool)1;
        }
        if(        version_870>0) {
            new_fun_name_931=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value985=__builtin_string(fun_name_859))),version_870));
            __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj267=fun_name_859;
            fun_name_859=(char*)come_increment_ref_count(__builtin_string(new_fun_name_931));
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_931 = come_decrement_ref_count2(new_fun_name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_932=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),(_Bool)0,var_args_867,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_927)),static_fun_928,(char*)come_increment_ref_count(buffer_to_string(header_buf_869)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_929,uniq_fun_930,(char*)come_increment_ref_count(attribute_848),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_859)),(struct sFun*)come_increment_ref_count(fun_932));
        }
        else {
            fun2_933=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value996=__builtin_string(fun_name_859)))));
            __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_933==((void*)0)||fun2_933->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_859)),(struct sFun*)come_increment_ref_count(fun_932));
            }
            come_call_finalizer3(fun2_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2816, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1000=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2816, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_932),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1001=_inf_value6));
        come_call_finalizer3(header_912,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_927,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1000,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1001) { __right_value1001 = come_decrement_ref_count2(__right_value1001, ((struct sNode*)__right_value1001)->finalize, ((struct sNode*)__right_value1001)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result386__;
        come_call_finalizer3(header_912,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_927,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_870>0) {
            new_fun_name_934=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_859,version_870));
            __dec_obj268=fun_name_859;
            fun_name_859=(char*)come_increment_ref_count(__builtin_string(new_fun_name_934));
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_934 = come_decrement_ref_count2(new_fun_name_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_935=info->p;
            header_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2829, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_936,source_head_847,source_tail_935-source_head_847);
            skip_spaces_and_lf(info);
            result_type_static_937=result_type_849->mStatic;
            result_type_849->mStatic=(_Bool)0;
            result_type_849->mUniq=(_Bool)0;
            result_type_849->mInline=(_Bool)0;
            fun_938=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2839, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),(_Bool)1,var_args_867,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_869)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_848),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_939=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1012=__builtin_string(fun_name_859)))));
            __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_939==((void*)0)||fun2_939->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_859)),(struct sFun*)come_increment_ref_count(fun_938));
            }
            if(            !result_type_static_937) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1015=buffer_to_string(header_936))));
                    __right_value1015 = come_decrement_ref_count2(__right_value1015, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1017=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_938),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1018=_inf_value7));
            come_call_finalizer3(header_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_938,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_939,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1017,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1018) { __right_value1018 = come_decrement_ref_count2(__right_value1018, ((struct sNode*)__right_value1018)->finalize, ((struct sNode*)__right_value1018)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result387__;
            come_call_finalizer3(header_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_938,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_939,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1019=parse_function_attribute(info)));
            asm_fun_940=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_941=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1019,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_940,"")) {
                __dec_obj269=fun_name_859;
                fun_name_859=(char*)come_increment_ref_count(__builtin_string(asm_fun_940));
                __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_942=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2867, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_943=info->p;
                buffer_append(header_942,source_head_847,source_tail_943-source_head_847);
                skip_spaces_and_lf(info);
            }
            result_type_static_944=result_type_849->mStatic;
            result_type_849->mStatic=(_Bool)0;
            result_type_849->mUniq=(_Bool)0;
            result_type_849->mInline=(_Bool)0;
            fun_945=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2880, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(param_types_864),(struct list$1charph*)come_increment_ref_count(param_names_865),(struct list$1charph*)come_increment_ref_count(param_default_parametors_866),(_Bool)1,var_args_867,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_869)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_848),(char*)come_increment_ref_count(fun_attribute_941)));
            fun2_946=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1028=__builtin_string(fun_name_859)))));
            __right_value1028 = come_decrement_ref_count2(__right_value1028, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_946==((void*)0)||fun2_946->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_859)),(struct sFun*)come_increment_ref_count(fun_945));
            }
            if(            !result_type_static_944) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1031=buffer_to_string(header_942))));
                    __right_value1031 = come_decrement_ref_count2(__right_value1031, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1033=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2899, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_945),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1034=_inf_value8));
            asm_fun_940 = come_decrement_ref_count2(asm_fun_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_941 = come_decrement_ref_count2(fun_attribute_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_942,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_945,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_946,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1033,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1034) { __right_value1034 = come_decrement_ref_count2(__right_value1034, ((struct sNode*)__right_value1034)->finalize, ((struct sNode*)__right_value1034)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            asm_fun_940 = come_decrement_ref_count2(asm_fun_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_941 = come_decrement_ref_count2(fun_attribute_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_942,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_945,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_946,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_872;
    __result389__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_848 = come_decrement_ref_count2(attribute_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_850 = come_decrement_ref_count2(var_name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_860 = come_decrement_ref_count2(base_fun_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_864,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_865,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_866,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_869,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
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
struct sLambdaNode* __result370__;
void* __right_value935 = (void*)0;
struct sLambdaNode* result_878;
void* __right_value936 = (void*)0;
char* __dec_obj266;
struct sLambdaNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_878=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_878->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_878->sname;
        result_878->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_878->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_878->mFun=self->mFun;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_878;
    come_call_finalizer3(result_878,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_902;
unsigned int it_903;
_Bool same_key_exist_904;
char* it2_905;
struct map$2charphsGenericsFunph* __result383__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_902=charp_get_hash_key(key)%self->size;
    it_903=hash_902;
    while((_Bool)1) {
        if(        self->item_existance[it_903]) {
            if(            charp_equals(self->keys[it_903],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_903]);
                    self->keys[it_903] = come_decrement_ref_count2(self->keys[it_903], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_903]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_903]);
                    self->keys[it_903]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_903],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_903]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_903]=item;
                }
                break;
            }
            it_903++;
            if(            it_903>=self->size) {
                it_903=0;
            }
            else if(            it_903==hash_902) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_903]=(_Bool)1;
            if(            1) {
                self->keys[it_903]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_903]=key;
            }
            if(            1) {
                self->items[it_903]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_903]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_904=(_Bool)0;
    for(    it2_905=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_905=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_905,key)) {
            same_key_exist_904=(_Bool)1;
        }
    }
    if(    !same_key_exist_904) {
        list$1charp_push_back(self->key_list,key);
    }
    __result383__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_885;
void* __right_value948 = (void*)0;
char** keys_886;
void* __right_value949 = (void*)0;
struct sGenericsFun** items_887;
void* __right_value950 = (void*)0;
_Bool* item_existance_888;
int len_889;
char* it_892;
struct sGenericsFun* default_value_895;
void* __right_value951 = (void*)0;
struct sGenericsFun* it2_896;
unsigned int hash_899;
int n_900;
struct sGenericsFun* default_value_901;
void* __right_value952 = (void*)0;
default_value_895 = (void*)0;
default_value_901 = (void*)0;
    size_885=self->size*10;
    keys_886=(char**)come_increment_ref_count(((char**)(__right_value948=(char**)come_calloc(1, sizeof(char*)*(1*(size_885)), "./comelang.h", 2708, "char**", (void*)0, (void*)0))));
    items_887=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value949=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_885)), "./comelang.h", 2709, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_888=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value950=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_885)), "./comelang.h", 2710, "_Bool*", (void*)0, (void*)0))));
    len_889=0;
    for(    it_892=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_892=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_895,0,sizeof(struct sGenericsFun*));
        it2_896=((struct sGenericsFun*)(__right_value951=map$2charphsGenericsFunph_at(self,it_892,default_value_895)));
        come_call_finalizer3(__right_value951,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_899=charp_get_hash_key(it_892)%size_885;
        n_900=hash_899;
        while((_Bool)1) {
            if(            item_existance_888[n_900]) {
                n_900++;
                if(                n_900>=size_885) {
                    n_900=0;
                }
                else if(                n_900==hash_899) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_888[n_900]=(_Bool)1;
                keys_886[n_900]=it_892;
                items_887[n_900]=((struct sGenericsFun*)(__right_value952=map$2charphsGenericsFunph_at(self,it_892,default_value_901)));
                come_call_finalizer3(__right_value952,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_889++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_886;
    self->items=items_887;
    self->item_existance=item_existance_888;
    self->size=size_885;
    self->len=len_889;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_890;
char* __result373__;
char* __result374__;
char* result_891;
char* __result375__;
result_890 = (void*)0;
result_891 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_890,0,sizeof(char*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_890;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_891,0,sizeof(char*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_891;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_893;
char* __result376__;
char* __result377__;
char* result_894;
char* __result378__;
result_893 = (void*)0;
result_894 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_893,0,sizeof(char*));
        __result376__ = gComeFunResultObject = __result_obj__ = result_893;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result377__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    memset(&result_894,0,sizeof(char*));
    __result378__ = gComeFunResultObject = __result_obj__ = result_894;
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_897;
unsigned int it_898;
struct sGenericsFun* __result379__;
struct sGenericsFun* __result380__;
struct sGenericsFun* __result381__;
struct sGenericsFun* __result382__;
    hash_897=charp_get_hash_key(((char*)key))%self->size;
    it_898=hash_897;
    while((_Bool)1) {
        if(        self->item_existance[it_898]) {
            if(            charp_equals(self->keys[it_898],key)) {
                __result379__ = gComeFunResultObject = __result_obj__ = self->items[it_898];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result379__;
            }
            it_898++;
            if(            it_898>=self->size) {
                it_898=0;
            }
            else if(            it_898==hash_897) {
                __result380__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result380__;
            }
        }
        else {
            __result381__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
    }
    __result382__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_947;
char* __dec_obj270;
char* last_code2_948;
char* __dec_obj271;
_Bool comma_instead_of_semicolon_949;
struct sClass* current_stack_frame_struct_950;
struct sFun* finalizer_951;
void* __right_value1035 = (void*)0;
char* real_fun_name_952;
void* __right_value1036 = (void*)0;
char* user_real_fun_name_953;
void* __right_value1037 = (void*)0;
struct sFun* user_finalizer_954;
void* __right_value1038 = (void*)0;
struct sType* type2_955;
struct sClass* klass_956;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct buffer* source_957;
void* __right_value1041 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_966;
struct tuple2$2charphsTypeph* it_969;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_972=0;
struct sType* field_type_973=0;
char* p_976;
int sline_977;
char* sname_978;
char* head_979;
struct buffer* source3_980;
struct buffer* __dec_obj280;
void* __right_value1042 = (void*)0;
char* __dec_obj281;
void* __right_value1043 = (void*)0;
struct sBlock* block_981;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sType* result_type_982;
void* __right_value1046 = (void*)0;
char* name_983;
void* __right_value1047 = (void*)0;
struct sType* self_type_984;
struct sType* __list_values21___986[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1sTypeph* param_types_985;
void* __right_value1050 = (void*)0;
char* __list_values22___987[1];
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct list$1charph* param_names_988;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1charph* param_default_parametors_989;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct buffer* header_buf_990;
void* __right_value1057 = (void*)0;
int i_991;
void* __right_value1058 = (void*)0;
struct sType* param_type_992;
void* __right_value1059 = (void*)0;
char* param_name_993;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sFun* fun2_994;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sFun* fun_995;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1072 = (void*)0;
struct sNode* node_996;
_Bool Value_997;
struct buffer* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct tuple2$2sFunpcharph* __result401__;
    last_code_947=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_948=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_949=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_950=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_951=((void*)0);
    real_fun_name_952=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_953=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_954=((struct sFun*)(__right_value1037=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_953)));
    come_call_finalizer3(__right_value1037,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_955=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_955;
    klass_956=type->mClass;
    if(    type->mPointerNum>0&&klass_956->mStruct||type->mAllocaValue) {
        source_957=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2940, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_957,123);
        if(        user_finalizer_954) {
            char source2_958[1024];
            memset(&source2_958, 0, sizeof(char)            *(1024)            );
            snprintf(source2_958,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_953);
            buffer_append_str(source_957,source2_958);
        }
        klass_956=((struct sClass*)(__right_value1041=map$2charphsClassphp_operator_load_element(info->classes,klass_956->mName)));
        come_call_finalizer3(__right_value1041,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_966=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_956->mFields)),it_969=list$1tuple2$2charphsTypephph_begin((o2_saved_966));        !list$1tuple2$2charphsTypephph_end((o2_saved_966));        it_969=list$1tuple2$2charphsTypephph_next((o2_saved_966))        ){
            multiple_assign_var11=it_969;
            name_972=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_973=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            field_type_973->mHeap) {
                char source2_974[1024];
                memset(&source2_974, 0, sizeof(char)                *(1024)                );
                snprintf(source2_974,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_972,name_972,name_972,name_972);
                buffer_append_str(source_957,source2_974);
            }
            else if(            field_type_973->mChannel) {
                char source2_975[1024];
                memset(&source2_975, 0, sizeof(char)                *(1024)                );
                snprintf(source2_975,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_972,name_972);
                buffer_append_str(source_957,source2_975);
                snprintf(source2_975,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_972,name_972);
                buffer_append_str(source_957,source2_975);
            }
            name_972 = come_decrement_ref_count2(name_972, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_973,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_966,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_957,125);
        p_976=info->p;
        sline_977=info->sline;
        sname_978=(char*)come_increment_ref_count(info->sname);
        head_979=info->head;
        source3_980=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj280=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_957);
        come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_957->buf;
        info->head=source_957->buf;
        __dec_obj281=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_952));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_981=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_982=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2997, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        name_983=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_952));
        self_type_984=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_984->mHeap=(_Bool)0;
        if(        self_type_984->mPointerNum==0) {
            self_type_984->mPointerNum=1;
        }
        if(        self_type_984->mPointerNum>1) {
            self_type_984->mPointerNum=1;
        }
        param_types_985=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___986[0]=(struct sType*)come_increment_ref_count(self_type_984),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3007, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values21___986)));
        param_names_988=(struct list$1charph*)come_increment_ref_count((__list_values22___987[0]=(char*)come_increment_ref_count(((char*)(__right_value1050=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3008, "struct list$1charph", (void*)0, (void*)0)),1,__list_values22___987)));
        __right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_989=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3009, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_989,((void*)0));
        header_buf_990=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3012, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_990,((char*)(__right_value1057=make_come_type_name_string(result_type_982,info))));
        __right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_990," ");
        buffer_append_str(header_buf_990,real_fun_name_952);
        buffer_append_str(header_buf_990,"(");
        for(        i_991=0;        i_991<list$1sTypeph_length(param_types_985);        i_991++        ){
            param_type_992=((struct sType*)come_null_check(((struct sType*)(__right_value1058=list$1sTypephp_operator_load_element(param_types_985,i_991))), "05function.c", 3020, 7));
            come_call_finalizer3(__right_value1058,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_993=((char*)come_null_check(((char*)(__right_value1059=list$1charphp_operator_load_element(param_names_988,i_991))), "05function.c", 3021, 8));
            __right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_990,((char*)(__right_value1060=make_come_type_name_string(param_type_992,info))));
            __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_990," ");
            buffer_append_str(header_buf_990,param_name_993);
            if(            i_991!=list$1sTypeph_length(param_types_985)-1) {
                buffer_append_str(header_buf_990,",");
            }
        }
        buffer_append_str(header_buf_990,")");
        result_type_982->mStatic=(_Bool)0;
        result_type_982->mUniq=(_Bool)0;
        result_type_982->mInline=(_Bool)0;
        fun2_994=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1061=__builtin_string(name_983)))));
        __right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_994==((void*)0)||fun2_994->mExternal) {
            fun_995=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3039, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_983),(struct sType*)come_increment_ref_count(result_type_982),(struct list$1sTypeph*)come_increment_ref_count(param_types_985),(struct list$1charph*)come_increment_ref_count(param_names_988),(struct list$1charph*)come_increment_ref_count(param_default_parametors_989),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_981),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_990)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_983)),(struct sFun*)come_increment_ref_count(fun_995));
            finalizer_951=fun_995;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3051, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1071=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3051, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_995),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            node_996=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value1071,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_997=node_compile(node_996,info);
            if(            !Value_997) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_995,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_996) { node_996 = come_decrement_ref_count2(node_996, ((struct sNode*)node_996)->finalize, ((struct sNode*)node_996)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            finalizer_951=fun2_994;
        }
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_980);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_976;
        info->head=head_979;
        info->sline=sline_977;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_978);
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_957,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_978 = come_decrement_ref_count2(sname_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_980,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_981,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_982,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_983 = come_decrement_ref_count2(name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_984,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_985,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_988,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_989,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_990,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_994,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_950;
    __dec_obj284=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_947);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_948);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_949;
    __result401__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1074=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3075, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),finalizer_951,(char*)come_increment_ref_count(real_fun_name_952))));
    last_code_947 = come_decrement_ref_count2(last_code_947, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_948 = come_decrement_ref_count2(last_code2_948, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_952 = come_decrement_ref_count2(real_fun_name_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_953 = come_decrement_ref_count2(user_real_fun_name_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_955,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1074,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_959;
unsigned int hash_960;
unsigned int it_961;
struct sClass* __result390__;
struct sClass* __result391__;
struct sClass* __result392__;
struct sClass* __result393__;
default_value_959 = (void*)0;
    memset(&default_value_959,0,sizeof(struct sClass*));
    hash_960=charp_get_hash_key(((char*)key))%self->size;
    it_961=hash_960;
    while((_Bool)1) {
        if(        self->item_existance[it_961]) {
            if(            charp_equals(self->keys[it_961],key)) {
                __result390__ = gComeFunResultObject = __result_obj__ = self->items[it_961];
                come_call_finalizer3(default_value_959,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result390__;
            }
            it_961++;
            if(            it_961>=self->size) {
                it_961=0;
            }
            else if(            it_961==hash_960) {
                __result391__ = gComeFunResultObject = __result_obj__ = default_value_959;
                come_call_finalizer3(default_value_959,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result391__;
            }
        }
        else {
            __result392__ = gComeFunResultObject = __result_obj__ = default_value_959;
            come_call_finalizer3(default_value_959,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result392__;
        }
    }
    __result393__ = gComeFunResultObject = __result_obj__ = default_value_959;
    come_call_finalizer3(default_value_959,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
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
struct list_item$1tuple2$2charphsTypephph* it_962;
struct list_item$1tuple2$2charphsTypephph* prev_it_963;
    it_962=self->head;
    while(it_962!=((void*)0)) {
        prev_it_963=it_962;
        it_962=it_962->next;
        come_call_finalizer3(prev_it_963,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_964;
struct list_item$1tuple2$2charphsTypephph* prev_it_965;
    it_964=self->head;
    while(it_964!=((void*)0)) {
        prev_it_965=it_964;
        it_964=it_964->next;
        come_call_finalizer3(prev_it_965,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_967;
struct tuple2$2charphsTypeph* __result394__;
struct tuple2$2charphsTypeph* __result395__;
struct tuple2$2charphsTypeph* result_968;
struct tuple2$2charphsTypeph* __result396__;
result_967 = (void*)0;
result_968 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_967,0,sizeof(struct tuple2$2charphsTypeph*));
        __result394__ = gComeFunResultObject = __result_obj__ = result_967;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    self->it=self->head;
    if(    self->it) {
        __result395__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    memset(&result_968,0,sizeof(struct tuple2$2charphsTypeph*));
    __result396__ = gComeFunResultObject = __result_obj__ = result_968;
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_970;
struct tuple2$2charphsTypeph* __result397__;
struct tuple2$2charphsTypeph* __result398__;
struct tuple2$2charphsTypeph* result_971;
struct tuple2$2charphsTypeph* __result399__;
result_970 = (void*)0;
result_971 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_970,0,sizeof(struct tuple2$2charphsTypeph*));
        __result397__ = gComeFunResultObject = __result_obj__ = result_970;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result398__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result398__;
    }
    memset(&result_971,0,sizeof(struct tuple2$2charphsTypeph*));
    __result399__ = gComeFunResultObject = __result_obj__ = result_971;
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj286;
struct tuple2$2sFunpcharph* __result400__;
    self->v1=v1;
    __dec_obj286=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result400__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
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
char* last_code_998;
char* __dec_obj288;
char* last_code2_999;
char* __dec_obj289;
_Bool comma_instead_of_semicolon_1000;
struct sClass* current_stack_frame_struct_1001;
struct sFun* equaler_1002;
void* __right_value1075 = (void*)0;
char* real_fun_name_1003;
void* __right_value1076 = (void*)0;
struct sType* type2_1004;
struct sClass* klass_1005;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct buffer* source_1006;
char* name_1007;
void* __right_value1079 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1009;
struct tuple2$2charphsTypeph* it_1010;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1011=0;
struct sType* field_type_1012=0;
char* p_1014;
int sline_1015;
char* sname_1016;
char* head_1017;
struct buffer* source3_1018;
struct buffer* __dec_obj290;
void* __right_value1080 = (void*)0;
char* __dec_obj291;
void* __right_value1081 = (void*)0;
struct sBlock* block_1019;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct sType* result_type_1020;
void* __right_value1084 = (void*)0;
char* name_1021;
void* __right_value1085 = (void*)0;
struct sType* left_type_1022;
void* __right_value1086 = (void*)0;
struct sType* right_type_1023;
struct sType* __list_values23___1025[2];
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1sTypeph* param_types_1024;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
char* __list_values24___1026[2];
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
struct list$1charph* param_names_1027;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1charph* param_default_parametors_1028;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct buffer* header_buf_1029;
void* __right_value1097 = (void*)0;
int i_1030;
void* __right_value1098 = (void*)0;
struct sType* param_type_1031;
void* __right_value1099 = (void*)0;
char* param_name_1032;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sFun* fun2_1033;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sFun* fun_1034;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1112 = (void*)0;
struct sNode* node_1035;
_Bool Value_1036;
struct buffer* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct tuple2$2sFunpcharph* __result402__;
    last_code_998=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj288=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_999=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj289=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1000=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1001=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1002=((void*)0);
    real_fun_name_1003=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1004=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1004;
    klass_1005=type->mClass;
    if(    type->mPointerNum>0&&!klass_1005->mNumber) {
        source_1006=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3101, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1006,123);
        if(        klass_1005->mProtocol) {
            name_1007="_protocol_obj";
            char source2_1008[1024];
            memset(&source2_1008, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1008,1024,"return left.%s.equals(right.%s);\n",name_1007,name_1007);
            buffer_append_str(source_1006,source2_1008);
        }
        else {
            klass_1005=((struct sClass*)(__right_value1079=map$2charphsClassphp_operator_load_element(info->classes,klass_1005->mName)));
            come_call_finalizer3(__right_value1079,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1009=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1005->mFields)),it_1010=list$1tuple2$2charphsTypephph_begin((o2_saved_1009));            !list$1tuple2$2charphsTypephph_end((o2_saved_1009));            it_1010=list$1tuple2$2charphsTypephph_next((o2_saved_1009))            ){
                multiple_assign_var12=it_1010;
                name_1011=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1012=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                char source2_1013[1024];
                memset(&source2_1013, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1013,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1011,name_1011,name_1011);
                buffer_append_str(source_1006,source2_1013);
                name_1011 = come_decrement_ref_count2(name_1011, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1012,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1009,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1006,"return true;");
        buffer_append_char(source_1006,125);
        p_1014=info->p;
        sline_1015=info->sline;
        sname_1016=(char*)come_increment_ref_count(info->sname);
        head_1017=info->head;
        source3_1018=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj290=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1006);
        come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1006->buf;
        info->head=source_1006->buf;
        __dec_obj291=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1003));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1019=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1020=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3149, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1021=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1003));
        left_type_1022=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1022->mHeap=(_Bool)0;
        right_type_1023=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1023->mHeap=(_Bool)0;
        param_types_1024=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1025[0]=(struct sType*)come_increment_ref_count(left_type_1022),
__list_values23___1025[1]=(struct sType*)come_increment_ref_count(right_type_1023),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3155, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values23___1025)));
        param_names_1027=(struct list$1charph*)come_increment_ref_count((__list_values24___1026[0]=(char*)come_increment_ref_count(((char*)(__right_value1089=__builtin_string("left")))),
__list_values24___1026[1]=(char*)come_increment_ref_count(((char*)(__right_value1090=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3156, "struct list$1charph", (void*)0, (void*)0)),2,__list_values24___1026)));
        __right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1028=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3157, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1028,((void*)0));
        list$1charph_push_back(param_default_parametors_1028,((void*)0));
        header_buf_1029=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3161, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1029,((char*)(__right_value1097=make_come_type_name_string(result_type_1020,info))));
        __right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1029," ");
        buffer_append_str(header_buf_1029,real_fun_name_1003);
        buffer_append_str(header_buf_1029,"(");
        for(        i_1030=0;        i_1030<list$1sTypeph_length(param_types_1024);        i_1030++        ){
            param_type_1031=((struct sType*)come_null_check(((struct sType*)(__right_value1098=list$1sTypephp_operator_load_element(param_types_1024,i_1030))), "05function.c", 3169, 9));
            come_call_finalizer3(__right_value1098,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1032=((char*)come_null_check(((char*)(__right_value1099=list$1charphp_operator_load_element(param_names_1027,i_1030))), "05function.c", 3170, 10));
            __right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1029,((char*)(__right_value1100=make_come_type_name_string(param_type_1031,info))));
            __right_value1100 = come_decrement_ref_count2(__right_value1100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1029," ");
            buffer_append_str(header_buf_1029,param_name_1032);
            if(            i_1030!=list$1sTypeph_length(param_types_1024)-1) {
                buffer_append_str(header_buf_1029,",");
            }
        }
        buffer_append_str(header_buf_1029,")");
        result_type_1020->mStatic=(_Bool)0;
        result_type_1020->mUniq=(_Bool)0;
        result_type_1020->mInline=(_Bool)0;
        fun2_1033=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1101=__builtin_string(name_1021)))));
        __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1033==((void*)0)||fun2_1033->mExternal) {
            fun_1034=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3188, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1021),(struct sType*)come_increment_ref_count(result_type_1020),(struct list$1sTypeph*)come_increment_ref_count(param_types_1024),(struct list$1charph*)come_increment_ref_count(param_names_1027),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1028),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1019),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1029)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1021)),(struct sFun*)come_increment_ref_count(fun_1034));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3198, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1111=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3198, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1034),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1035=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1111,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1036=node_compile(node_1035,info);
            if(            !Value_1036) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1002=fun_1034;
            come_call_finalizer3(fun_1034,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1035) { node_1035 = come_decrement_ref_count2(node_1035, ((struct sNode*)node_1035)->finalize, ((struct sNode*)node_1035)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1002=fun2_1033;
        }
        __dec_obj292=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1018);
        come_call_finalizer3(__dec_obj292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1014;
        info->head=head_1017;
        info->sline=sline_1015;
        __dec_obj293=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1016);
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1006,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1016 = come_decrement_ref_count2(sname_1016, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1018,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1019,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1020,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1021 = come_decrement_ref_count2(name_1021, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1022,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1023,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1024,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1027,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1028,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1029,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1033,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1001;
    __dec_obj294=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_998);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj295=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_999);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1000;
    __result402__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1114=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3224, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1002,(char*)come_increment_ref_count(real_fun_name_1003))));
    last_code_998 = come_decrement_ref_count2(last_code_998, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_999 = come_decrement_ref_count2(last_code2_999, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1003 = come_decrement_ref_count2(real_fun_name_1003, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1004,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1114,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1037;
char* __dec_obj296;
char* last_code2_1038;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_1039;
struct sClass* current_stack_frame_struct_1040;
struct sFun* equaler_1041;
void* __right_value1115 = (void*)0;
char* real_fun_name_1042;
void* __right_value1116 = (void*)0;
struct sType* type2_1043;
struct sClass* klass_1044;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct buffer* source_1045;
char* name_1046;
int i_1049;
void* __right_value1119 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1050;
struct tuple2$2charphsTypeph* it_1051;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1052=0;
struct sType* field_type_1053=0;
char* p_1057;
int sline_1058;
char* sname_1059;
char* head_1060;
struct buffer* source3_1061;
struct buffer* __dec_obj298;
void* __right_value1120 = (void*)0;
char* __dec_obj299;
void* __right_value1121 = (void*)0;
struct sBlock* block_1062;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct sType* result_type_1063;
void* __right_value1124 = (void*)0;
char* name_1064;
void* __right_value1125 = (void*)0;
struct sType* left_type_1065;
void* __right_value1126 = (void*)0;
struct sType* right_type_1066;
struct sType* __list_values25___1068[2];
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
struct list$1sTypeph* param_types_1067;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
char* __list_values26___1069[2];
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1charph* param_names_1070;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct list$1charph* param_default_parametors_1071;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct buffer* header_buf_1072;
void* __right_value1137 = (void*)0;
int i_1073;
void* __right_value1138 = (void*)0;
struct sType* param_type_1074;
void* __right_value1139 = (void*)0;
char* param_name_1075;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
struct sFun* fun2_1076;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct sFun* fun_1077;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1152 = (void*)0;
struct sNode* node_1078;
_Bool Value_1079;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct tuple2$2sFunpcharph* __result403__;
    last_code_1037=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1038=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1039=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1040=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1041=((void*)0);
    real_fun_name_1042=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1043=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1043;
    klass_1044=type->mClass;
    if(    type->mPointerNum>0&&!klass_1044->mNumber) {
        source_1045=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3249, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1045,123);
        if(        klass_1044->mProtocol) {
            name_1046="_protocol_obj";
            char source2_1047[1024];
            memset(&source2_1047, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1047,1024,"return left.%s !== right.%s;\n",name_1046,name_1046);
            buffer_append_str(source_1045,source2_1047);
        }
        else {
            char source2_1048[1024];
            memset(&source2_1048, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1048,1024,"return !(");
            buffer_append_str(source_1045,source2_1048);
            snprintf(source2_1048,1024,"( ");
            buffer_append_str(source_1045,source2_1048);
            i_1049=0;
            klass_1044=((struct sClass*)(__right_value1119=map$2charphsClassphp_operator_load_element(info->classes,klass_1044->mName)));
            come_call_finalizer3(__right_value1119,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1050=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1044->mFields)),it_1051=list$1tuple2$2charphsTypephph_begin((o2_saved_1050));            !list$1tuple2$2charphsTypephph_end((o2_saved_1050));            it_1051=list$1tuple2$2charphsTypephph_next((o2_saved_1050))            ){
                multiple_assign_var13=it_1051;
                name_1052=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1053=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1054[1024];
                memset(&source2_1054, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1054,1024,"(left.%s === right.%s)",name_1052,name_1052,name_1052);
                buffer_append_str(source_1045,source2_1054);
                if(                i_1049==list$1tuple2$2charphsTypephph_length(klass_1044->mFields)-1) {
                    char source2_1055[1024];
                    memset(&source2_1055, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1055,1024,"));");
                    buffer_append_str(source_1045,source2_1055);
                }
                else {
                    char source2_1056[1024];
                    memset(&source2_1056, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1056,1024," && ");
                    buffer_append_str(source_1045,source2_1056);
                }
                i_1049++;
                name_1052 = come_decrement_ref_count2(name_1052, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1053,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1050,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1045,125);
        p_1057=info->p;
        sline_1058=info->sline;
        sname_1059=(char*)come_increment_ref_count(info->sname);
        head_1060=info->head;
        source3_1061=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1045);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1045->buf;
        info->head=source_1045->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1042));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1062=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1063=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3317, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1064=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1042));
        left_type_1065=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1065->mHeap=(_Bool)0;
        right_type_1066=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1066->mHeap=(_Bool)0;
        param_types_1067=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1068[0]=(struct sType*)come_increment_ref_count(left_type_1065),
__list_values25___1068[1]=(struct sType*)come_increment_ref_count(right_type_1066),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3323, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values25___1068)));
        param_names_1070=(struct list$1charph*)come_increment_ref_count((__list_values26___1069[0]=(char*)come_increment_ref_count(((char*)(__right_value1129=__builtin_string("left")))),
__list_values26___1069[1]=(char*)come_increment_ref_count(((char*)(__right_value1130=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3324, "struct list$1charph", (void*)0, (void*)0)),2,__list_values26___1069)));
        __right_value1129 = come_decrement_ref_count2(__right_value1129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1130 = come_decrement_ref_count2(__right_value1130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1071=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3325, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1071,((void*)0));
        list$1charph_push_back(param_default_parametors_1071,((void*)0));
        header_buf_1072=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3329, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1072,((char*)(__right_value1137=make_come_type_name_string(result_type_1063,info))));
        __right_value1137 = come_decrement_ref_count2(__right_value1137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1072," ");
        buffer_append_str(header_buf_1072,real_fun_name_1042);
        buffer_append_str(header_buf_1072,"(");
        for(        i_1073=0;        i_1073<list$1sTypeph_length(param_types_1067);        i_1073++        ){
            param_type_1074=((struct sType*)come_null_check(((struct sType*)(__right_value1138=list$1sTypephp_operator_load_element(param_types_1067,i_1073))), "05function.c", 3337, 11));
            come_call_finalizer3(__right_value1138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1075=((char*)come_null_check(((char*)(__right_value1139=list$1charphp_operator_load_element(param_names_1070,i_1073))), "05function.c", 3338, 12));
            __right_value1139 = come_decrement_ref_count2(__right_value1139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1072,((char*)(__right_value1140=make_come_type_name_string(param_type_1074,info))));
            __right_value1140 = come_decrement_ref_count2(__right_value1140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1072," ");
            buffer_append_str(header_buf_1072,param_name_1075);
            if(            i_1073!=list$1sTypeph_length(param_types_1067)-1) {
                buffer_append_str(header_buf_1072,",");
            }
        }
        buffer_append_str(header_buf_1072,")");
        result_type_1063->mStatic=(_Bool)0;
        result_type_1063->mUniq=(_Bool)0;
        result_type_1063->mInline=(_Bool)0;
        fun2_1076=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1141=__builtin_string(name_1064)))));
        __right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1076==((void*)0)||fun2_1076->mExternal) {
            fun_1077=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3356, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1064),(struct sType*)come_increment_ref_count(result_type_1063),(struct list$1sTypeph*)come_increment_ref_count(param_types_1067),(struct list$1charph*)come_increment_ref_count(param_names_1070),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1071),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1062),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1072)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1064)),(struct sFun*)come_increment_ref_count(fun_1077));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3366, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1151=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3366, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1077),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1078=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1151,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1079=node_compile(node_1078,info);
            if(            !Value_1079) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1041=fun_1077;
            come_call_finalizer3(fun_1077,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1078) { node_1078 = come_decrement_ref_count2(node_1078, ((struct sNode*)node_1078)->finalize, ((struct sNode*)node_1078)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1041=fun2_1076;
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1061);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1057;
        info->head=head_1060;
        info->sline=sline_1058;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1059);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1045,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1059 = come_decrement_ref_count2(sname_1059, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1061,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1062,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1063,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1064 = come_decrement_ref_count2(name_1064, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1065,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1066,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1067,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1070,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1071,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1072,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1076,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1040;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1037);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1038);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1039;
    __result403__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1154=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3392, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1041,(char*)come_increment_ref_count(real_fun_name_1042))));
    last_code_1037 = come_decrement_ref_count2(last_code_1037, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1038 = come_decrement_ref_count2(last_code2_1038, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1042 = come_decrement_ref_count2(real_fun_name_1042, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1043,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1154,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1080;
char* __dec_obj304;
char* last_code2_1081;
char* __dec_obj305;
_Bool comma_instead_of_semicolon_1082;
struct sClass* current_stack_frame_struct_1083;
struct sFun* equaler_1084;
void* __right_value1155 = (void*)0;
char* real_fun_name_1085;
void* __right_value1156 = (void*)0;
struct sType* type2_1086;
struct sClass* klass_1087;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* source_1088;
char* name_1089;
int i_1092;
void* __right_value1159 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1093;
struct tuple2$2charphsTypeph* it_1094;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1095=0;
struct sType* field_type_1096=0;
char* p_1100;
int sline_1101;
char* sname_1102;
char* head_1103;
struct buffer* source3_1104;
struct buffer* __dec_obj306;
void* __right_value1160 = (void*)0;
char* __dec_obj307;
void* __right_value1161 = (void*)0;
struct sBlock* block_1105;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sType* result_type_1106;
void* __right_value1164 = (void*)0;
char* name_1107;
void* __right_value1165 = (void*)0;
struct sType* left_type_1108;
void* __right_value1166 = (void*)0;
struct sType* right_type_1109;
struct sType* __list_values27___1111[2];
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct list$1sTypeph* param_types_1110;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
char* __list_values28___1112[2];
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct list$1charph* param_names_1113;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
struct list$1charph* param_default_parametors_1114;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct buffer* header_buf_1115;
void* __right_value1177 = (void*)0;
int i_1116;
void* __right_value1178 = (void*)0;
struct sType* param_type_1117;
void* __right_value1179 = (void*)0;
char* param_name_1118;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct sFun* fun2_1119;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct sFun* fun_1120;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1192 = (void*)0;
struct sNode* node_1121;
_Bool Value_1122;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct tuple2$2sFunpcharph* __result404__;
    last_code_1080=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1081=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1082=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1083=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1084=((void*)0);
    real_fun_name_1085=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1086=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1086;
    klass_1087=type->mClass;
    if(    type->mPointerNum>0&&!klass_1087->mNumber) {
        source_1088=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3417, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1088,123);
        if(        klass_1087->mProtocol) {
            name_1089="_protocol_obj";
            char source2_1090[1024];
            memset(&source2_1090, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1090,1024,"return !left.%s.equals(right.%s);\n",name_1089,name_1089);
            buffer_append_str(source_1088,source2_1090);
        }
        else {
            char source2_1091[1024];
            memset(&source2_1091, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1091,1024,"return !(");
            buffer_append_str(source_1088,source2_1091);
            i_1092=0;
            klass_1087=((struct sClass*)(__right_value1159=map$2charphsClassphp_operator_load_element(info->classes,klass_1087->mName)));
            come_call_finalizer3(__right_value1159,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1093=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1087->mFields)),it_1094=list$1tuple2$2charphsTypephph_begin((o2_saved_1093));            !list$1tuple2$2charphsTypephph_end((o2_saved_1093));            it_1094=list$1tuple2$2charphsTypephph_next((o2_saved_1093))            ){
                multiple_assign_var14=it_1094;
                name_1095=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1096=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1097[1024];
                memset(&source2_1097, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1097,1024,"left.%s.equals(right.%s)",name_1095,name_1095);
                buffer_append_str(source_1088,source2_1097);
                if(                i_1092==list$1tuple2$2charphsTypephph_length(klass_1087->mFields)-1) {
                    char source2_1098[1024];
                    memset(&source2_1098, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1098,1024,");");
                    buffer_append_str(source_1088,source2_1098);
                }
                else {
                    char source2_1099[1024];
                    memset(&source2_1099, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1099,1024," && ");
                    buffer_append_str(source_1088,source2_1099);
                }
                i_1092++;
                name_1095 = come_decrement_ref_count2(name_1095, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1096,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1093,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1088,125);
        p_1100=info->p;
        sline_1101=info->sline;
        sname_1102=(char*)come_increment_ref_count(info->sname);
        head_1103=info->head;
        source3_1104=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1088);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1088->buf;
        info->head=source_1088->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1085));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1105=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1106=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3482, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1107=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1085));
        left_type_1108=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1108->mHeap=(_Bool)0;
        right_type_1109=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1109->mHeap=(_Bool)0;
        param_types_1110=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1111[0]=(struct sType*)come_increment_ref_count(left_type_1108),
__list_values27___1111[1]=(struct sType*)come_increment_ref_count(right_type_1109),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3488, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values27___1111)));
        param_names_1113=(struct list$1charph*)come_increment_ref_count((__list_values28___1112[0]=(char*)come_increment_ref_count(((char*)(__right_value1169=__builtin_string("left")))),
__list_values28___1112[1]=(char*)come_increment_ref_count(((char*)(__right_value1170=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3489, "struct list$1charph", (void*)0, (void*)0)),2,__list_values28___1112)));
        __right_value1169 = come_decrement_ref_count2(__right_value1169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1114=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3490, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1114,((void*)0));
        list$1charph_push_back(param_default_parametors_1114,((void*)0));
        header_buf_1115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3494, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1115,((char*)(__right_value1177=make_come_type_name_string(result_type_1106,info))));
        __right_value1177 = come_decrement_ref_count2(__right_value1177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1115," ");
        buffer_append_str(header_buf_1115,real_fun_name_1085);
        buffer_append_str(header_buf_1115,"(");
        for(        i_1116=0;        i_1116<list$1sTypeph_length(param_types_1110);        i_1116++        ){
            param_type_1117=((struct sType*)come_null_check(((struct sType*)(__right_value1178=list$1sTypephp_operator_load_element(param_types_1110,i_1116))), "05function.c", 3502, 13));
            come_call_finalizer3(__right_value1178,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1118=((char*)come_null_check(((char*)(__right_value1179=list$1charphp_operator_load_element(param_names_1113,i_1116))), "05function.c", 3503, 14));
            __right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1115,((char*)(__right_value1180=make_come_type_name_string(param_type_1117,info))));
            __right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1115," ");
            buffer_append_str(header_buf_1115,param_name_1118);
            if(            i_1116!=list$1sTypeph_length(param_types_1110)-1) {
                buffer_append_str(header_buf_1115,",");
            }
        }
        buffer_append_str(header_buf_1115,")");
        result_type_1106->mStatic=(_Bool)0;
        result_type_1106->mUniq=(_Bool)0;
        result_type_1106->mInline=(_Bool)0;
        fun2_1119=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1181=__builtin_string(name_1107)))));
        __right_value1181 = come_decrement_ref_count2(__right_value1181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1119==((void*)0)||fun2_1119->mExternal) {
            fun_1120=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3521, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1107),(struct sType*)come_increment_ref_count(result_type_1106),(struct list$1sTypeph*)come_increment_ref_count(param_types_1110),(struct list$1charph*)come_increment_ref_count(param_names_1113),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1114),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1105),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1115)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1107)),(struct sFun*)come_increment_ref_count(fun_1120));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3531, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1191=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3531, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1120),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1121=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1191,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1122=node_compile(node_1121,info);
            if(            !Value_1122) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1084=fun_1120;
            come_call_finalizer3(fun_1120,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1121) { node_1121 = come_decrement_ref_count2(node_1121, ((struct sNode*)node_1121)->finalize, ((struct sNode*)node_1121)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1084=fun2_1119;
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1104);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1100;
        info->head=head_1103;
        info->sline=sline_1101;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1102);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1088,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1102 = come_decrement_ref_count2(sname_1102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1104,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1105,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1106,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1107 = come_decrement_ref_count2(name_1107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1109,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1110,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1113,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1114,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1115,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1119,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1083;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1080);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1081);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1082;
    __result404__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1194=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3557, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1084,(char*)come_increment_ref_count(real_fun_name_1085))));
    last_code_1080 = come_decrement_ref_count2(last_code_1080, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1081 = come_decrement_ref_count2(last_code2_1081, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1085 = come_decrement_ref_count2(real_fun_name_1085, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1086,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1194,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1123;
char* __dec_obj312;
char* last_code2_1124;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_1125;
struct sClass* current_stack_frame_struct_1126;
struct sFun* equaler_1127;
void* __right_value1195 = (void*)0;
char* real_fun_name_1128;
void* __right_value1196 = (void*)0;
struct sType* type2_1129;
struct sClass* klass_1130;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct buffer* source_1131;
char* name_1132;
void* __right_value1199 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1135;
struct tuple2$2charphsTypeph* it_1136;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1137=0;
struct sType* field_type_1138=0;
char* p_1140;
int sline_1141;
char* sname_1142;
char* head_1143;
struct buffer* source3_1144;
struct buffer* __dec_obj314;
void* __right_value1200 = (void*)0;
char* __dec_obj315;
void* __right_value1201 = (void*)0;
struct sBlock* block_1145;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
struct sType* result_type_1146;
void* __right_value1204 = (void*)0;
char* name_1147;
void* __right_value1205 = (void*)0;
struct sType* left_type_1148;
void* __right_value1206 = (void*)0;
struct sType* right_type_1149;
struct sType* __list_values29___1151[2];
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
struct list$1sTypeph* param_types_1150;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
char* __list_values30___1152[2];
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1charph* param_names_1153;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct list$1charph* param_default_parametors_1154;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct buffer* header_buf_1155;
void* __right_value1217 = (void*)0;
int i_1156;
void* __right_value1218 = (void*)0;
struct sType* param_type_1157;
void* __right_value1219 = (void*)0;
char* param_name_1158;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct sFun* fun2_1159;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
struct sFun* fun_1160;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1232 = (void*)0;
struct sNode* node_1161;
_Bool Value_1162;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct tuple2$2sFunpcharph* __result405__;
    last_code_1123=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1124=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1125=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1126=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1127=((void*)0);
    real_fun_name_1128=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1129=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1129;
    klass_1130=type->mClass;
    if(    type->mPointerNum>0&&!klass_1130->mNumber) {
        source_1131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3582, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1131,123);
        if(        klass_1130->mProtocol) {
            name_1132="_protocol_obj";
            char source2_1133[1024];
            memset(&source2_1133, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1133,1024,"return left.%s === right.%s;\n",name_1132,name_1132);
            buffer_append_str(source_1131,source2_1133);
        }
        else {
            char source2_1134[1024];
            memset(&source2_1134, 0, sizeof(char)            *(1024)            );
            klass_1130=((struct sClass*)(__right_value1199=map$2charphsClassphp_operator_load_element(info->classes,klass_1130->mName)));
            come_call_finalizer3(__right_value1199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1135=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1130->mFields)),it_1136=list$1tuple2$2charphsTypephph_begin((o2_saved_1135));            !list$1tuple2$2charphsTypephph_end((o2_saved_1135));            it_1136=list$1tuple2$2charphsTypephph_next((o2_saved_1135))            ){
                multiple_assign_var15=it_1136;
                name_1137=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1138=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1139[1024];
                memset(&source2_1139, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1139,1024,"if(left.%s !== right.%s) { return false; }\n",name_1137,name_1137,name_1137);
                buffer_append_str(source_1131,source2_1139);
                name_1137 = come_decrement_ref_count2(name_1137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1138,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1135,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1131,"return true;\n");
        buffer_append_char(source_1131,125);
        p_1140=info->p;
        sline_1141=info->sline;
        sname_1142=(char*)come_increment_ref_count(info->sname);
        head_1143=info->head;
        source3_1144=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1131);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1131->buf;
        info->head=source_1131->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1128));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1145=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1146=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3632, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1147=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1128));
        left_type_1148=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1148->mHeap=(_Bool)0;
        right_type_1149=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1149->mHeap=(_Bool)0;
        param_types_1150=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1151[0]=(struct sType*)come_increment_ref_count(left_type_1148),
__list_values29___1151[1]=(struct sType*)come_increment_ref_count(right_type_1149),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3638, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values29___1151)));
        param_names_1153=(struct list$1charph*)come_increment_ref_count((__list_values30___1152[0]=(char*)come_increment_ref_count(((char*)(__right_value1209=__builtin_string("left")))),
__list_values30___1152[1]=(char*)come_increment_ref_count(((char*)(__right_value1210=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3639, "struct list$1charph", (void*)0, (void*)0)),2,__list_values30___1152)));
        __right_value1209 = come_decrement_ref_count2(__right_value1209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1210 = come_decrement_ref_count2(__right_value1210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1154=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3640, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1154,((void*)0));
        list$1charph_push_back(param_default_parametors_1154,((void*)0));
        header_buf_1155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3644, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1155,((char*)(__right_value1217=make_come_type_name_string(result_type_1146,info))));
        __right_value1217 = come_decrement_ref_count2(__right_value1217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1155," ");
        buffer_append_str(header_buf_1155,real_fun_name_1128);
        buffer_append_str(header_buf_1155,"(");
        for(        i_1156=0;        i_1156<list$1sTypeph_length(param_types_1150);        i_1156++        ){
            param_type_1157=((struct sType*)come_null_check(((struct sType*)(__right_value1218=list$1sTypephp_operator_load_element(param_types_1150,i_1156))), "05function.c", 3652, 15));
            come_call_finalizer3(__right_value1218,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1158=((char*)come_null_check(((char*)(__right_value1219=list$1charphp_operator_load_element(param_names_1153,i_1156))), "05function.c", 3653, 16));
            __right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1155,((char*)(__right_value1220=make_come_type_name_string(param_type_1157,info))));
            __right_value1220 = come_decrement_ref_count2(__right_value1220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1155," ");
            buffer_append_str(header_buf_1155,param_name_1158);
            if(            i_1156!=list$1sTypeph_length(param_types_1150)-1) {
                buffer_append_str(header_buf_1155,",");
            }
        }
        buffer_append_str(header_buf_1155,")");
        result_type_1146->mStatic=(_Bool)0;
        result_type_1146->mUniq=(_Bool)0;
        result_type_1146->mInline=(_Bool)0;
        fun2_1159=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1221=__builtin_string(name_1147)))));
        __right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1159==((void*)0)||fun2_1159->mExternal) {
            fun_1160=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3671, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1147),(struct sType*)come_increment_ref_count(result_type_1146),(struct list$1sTypeph*)come_increment_ref_count(param_types_1150),(struct list$1charph*)come_increment_ref_count(param_names_1153),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1154),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1145),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1155)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1147)),(struct sFun*)come_increment_ref_count(fun_1160));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3681, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1231=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3681, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1160),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1161=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1231,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1162=node_compile(node_1161,info);
            if(            !Value_1162) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1127=fun_1160;
            come_call_finalizer3(fun_1160,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1161) { node_1161 = come_decrement_ref_count2(node_1161, ((struct sNode*)node_1161)->finalize, ((struct sNode*)node_1161)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1127=fun2_1159;
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
        come_call_finalizer3(source_1131,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    info->current_stack_frame_struct=current_stack_frame_struct_1126;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1123);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1124);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1125;
    __result405__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1234=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3707, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1127,(char*)come_increment_ref_count(real_fun_name_1128))));
    last_code_1123 = come_decrement_ref_count2(last_code_1123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1124 = come_decrement_ref_count2(last_code2_1124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1128 = come_decrement_ref_count2(real_fun_name_1128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1234,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1163;
char* __dec_obj320;
char* last_code2_1164;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_1165;
struct sClass* current_stack_frame_struct_1166;
struct sFun* cloner_1167;
void* __right_value1235 = (void*)0;
char* real_fun_name_1168;
void* __right_value1236 = (void*)0;
struct sType* type2_1169;
struct sClass* klass_1170;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct buffer* source_1171;
void* __right_value1239 = (void*)0;
char* name_1172;
void* __right_value1240 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1174;
struct tuple2$2charphsTypeph* it_1175;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1176=0;
struct sType* field_type_1177=0;
void* __right_value1241 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1180;
struct tuple2$2charphsTypeph* it_1181;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1182=0;
struct sType* field_type_1183=0;
char* p_1187;
int sline_1188;
char* sname_1189;
struct buffer* source3_1190;
char* head_1191;
struct buffer* __dec_obj322;
void* __right_value1242 = (void*)0;
char* __dec_obj323;
void* __right_value1243 = (void*)0;
struct sBlock* block_1192;
void* __right_value1244 = (void*)0;
struct sType* result_type_1193;
void* __right_value1245 = (void*)0;
char* name_1194;
void* __right_value1246 = (void*)0;
struct sType* self_type_1195;
struct sType* __list_values31___1197[1];
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
struct list$1sTypeph* param_types_1196;
void* __right_value1249 = (void*)0;
char* __list_values32___1198[1];
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
struct list$1charph* param_names_1199;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct list$1charph* param_default_parametors_1200;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct buffer* header_buf_1201;
void* __right_value1256 = (void*)0;
int i_1202;
void* __right_value1257 = (void*)0;
struct sType* param_type_1203;
void* __right_value1258 = (void*)0;
char* param_name_1204;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sFun* fun2_1205;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
struct sFun* fun_1206;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1271 = (void*)0;
struct sNode* node_1207;
_Bool Value_1208;
char* __dec_obj324;
struct buffer* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
void* __right_value1272 = (void*)0;
void* __right_value1273 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
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
    cloner_1167=((void*)0);
    real_fun_name_1168=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1169=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1169;
    klass_1170=type->mClass;
    if(    type->mPointerNum>0&&!klass_1170->mNumber) {
        source_1171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3732, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1171,"{\n");
        buffer_append_str(source_1171,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1171,"var result = new %s;\n",((char*)(__right_value1239=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1170->mProtocol) {
            name_1172="_protocol_obj";
            char source2_1173[1024];
            memset(&source2_1173, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1173,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1171,source2_1173);
            klass_1170=((struct sClass*)(__right_value1240=map$2charphsClassphp_operator_load_element(info->classes,klass_1170->mName)));
            come_call_finalizer3(__right_value1240,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1174=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1170->mFields)),it_1175=list$1tuple2$2charphsTypephph_begin((o2_saved_1174));            !list$1tuple2$2charphsTypephph_end((o2_saved_1174));            it_1175=list$1tuple2$2charphsTypephph_next((o2_saved_1174))            ){
                multiple_assign_var16=it_1175;
                name_1176=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1177=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(name_1176,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1177->mArrayNum)>0) {
                    char source2_1178[1024];
                    memset(&source2_1178, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1178,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1176,name_1176,name_1176);
                    buffer_append_str(source_1171,source2_1178);
                }
                else {
                    char source2_1179[1024];
                    memset(&source2_1179, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1179,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1176,name_1176);
                    buffer_append_str(source_1171,source2_1179);
                }
                name_1176 = come_decrement_ref_count2(name_1176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1174,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1170=((struct sClass*)(__right_value1241=map$2charphsClassphp_operator_load_element(info->classes,klass_1170->mName)));
            come_call_finalizer3(__right_value1241,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1170->mFields)),it_1181=list$1tuple2$2charphsTypephph_begin((o2_saved_1180));            !list$1tuple2$2charphsTypephph_end((o2_saved_1180));            it_1181=list$1tuple2$2charphsTypephph_next((o2_saved_1180))            ){
                multiple_assign_var17=it_1181;
                name_1182=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1183=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                field_type_1183->mHeap) {
                    char source2_1184[1024];
                    memset(&source2_1184, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1184,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1182,name_1182,name_1182);
                    buffer_append_str(source_1171,source2_1184);
                }
                else if(                list$1sNodeph_length(field_type_1183->mArrayNum)>0) {
                    char source2_1185[1024];
                    memset(&source2_1185, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1185,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1182,name_1182,name_1182);
                    buffer_append_str(source_1171,source2_1185);
                }
                else {
                    char source2_1186[1024];
                    memset(&source2_1186, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1186,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1182,name_1182);
                    buffer_append_str(source_1171,source2_1186);
                }
                name_1182 = come_decrement_ref_count2(name_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1180,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1171,"return result;");
        buffer_append_char(source_1171,125);
        p_1187=info->p;
        sline_1188=info->sline;
        sname_1189=(char*)come_increment_ref_count(info->sname);
        source3_1190=(struct buffer*)come_increment_ref_count(info->source);
        head_1191=info->head;
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1171);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1168));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1192=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1193=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1194=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1168));
        self_type_1195=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1195->mHeap=(_Bool)0;
        param_types_1196=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1197[0]=(struct sType*)come_increment_ref_count(self_type_1195),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3830, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values31___1197)));
        param_names_1199=(struct list$1charph*)come_increment_ref_count((__list_values32___1198[0]=(char*)come_increment_ref_count(((char*)(__right_value1249=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3831, "struct list$1charph", (void*)0, (void*)0)),1,__list_values32___1198)));
        __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1200=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3832, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1200,((void*)0));
        header_buf_1201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3835, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1201,((char*)(__right_value1256=make_come_type_name_string(result_type_1193,info))));
        __right_value1256 = come_decrement_ref_count2(__right_value1256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1201," ");
        buffer_append_str(header_buf_1201,real_fun_name_1168);
        buffer_append_str(header_buf_1201,"(");
        for(        i_1202=0;        i_1202<list$1sTypeph_length(param_types_1196);        i_1202++        ){
            param_type_1203=((struct sType*)come_null_check(((struct sType*)(__right_value1257=list$1sTypephp_operator_load_element(param_types_1196,i_1202))), "05function.c", 3843, 17));
            come_call_finalizer3(__right_value1257,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1204=((char*)come_null_check(((char*)(__right_value1258=list$1charphp_operator_load_element(param_names_1199,i_1202))), "05function.c", 3844, 18));
            __right_value1258 = come_decrement_ref_count2(__right_value1258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1201,((char*)(__right_value1259=make_come_type_name_string(param_type_1203,info))));
            __right_value1259 = come_decrement_ref_count2(__right_value1259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1201," ");
            buffer_append_str(header_buf_1201,param_name_1204);
            if(            i_1202!=list$1sTypeph_length(param_types_1196)-1) {
                buffer_append_str(header_buf_1201,",");
            }
        }
        buffer_append_str(header_buf_1201,")");
        result_type_1193->mStatic=(_Bool)0;
        result_type_1193->mUniq=(_Bool)0;
        result_type_1193->mInline=(_Bool)0;
        fun2_1205=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1260=__builtin_string(name_1194)))));
        __right_value1260 = come_decrement_ref_count2(__right_value1260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1205==((void*)0)||fun2_1205->mExternal) {
            fun_1206=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3863, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1194),(struct sType*)come_increment_ref_count(result_type_1193),(struct list$1sTypeph*)come_increment_ref_count(param_types_1196),(struct list$1charph*)come_increment_ref_count(param_names_1199),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1200),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1192),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1201)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1206->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1194)),(struct sFun*)come_increment_ref_count(fun_1206));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3875, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1270=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3875, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1206),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1207=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1270,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1208=node_compile(node_1207,info);
            if(            !Value_1208) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1167=fun_1206;
            come_call_finalizer3(fun_1206,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1207) { node_1207 = come_decrement_ref_count2(node_1207, ((struct sNode*)node_1207)->finalize, ((struct sNode*)node_1207)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1167=fun2_1205;
        }
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1189);
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1188;
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1190);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1187;
        info->head=head_1191;
        info->sline=sline_1188;
        come_call_finalizer3(source_1171,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1189 = come_decrement_ref_count2(sname_1189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1190,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1192,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1193,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1194 = come_decrement_ref_count2(name_1194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1195,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1196,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1199,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1200,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1201,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1205,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1166;
    __dec_obj326=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1163);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj327=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1164);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1165;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1273=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3903, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1167,(char*)come_increment_ref_count(real_fun_name_1168))));
    last_code_1163 = come_decrement_ref_count2(last_code_1163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1164 = come_decrement_ref_count2(last_code2_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1168 = come_decrement_ref_count2(real_fun_name_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1273,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1209;
char* __dec_obj328;
char* last_code2_1210;
char* __dec_obj329;
_Bool comma_instead_of_semicolon_1211;
struct sClass* current_stack_frame_struct_1212;
struct sFun* cloner_1213;
void* __right_value1274 = (void*)0;
char* real_fun_name_1214;
void* __right_value1275 = (void*)0;
struct sType* type2_1215;
struct sClass* klass_1216;
void* __right_value1276 = (void*)0;
void* __right_value1277 = (void*)0;
struct buffer* source_1217;
int i_1218;
void* __right_value1278 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1219;
struct tuple2$2charphsTypeph* it_1220;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1221=0;
struct sType* field_type_1222=0;
char* p_1225;
int sline_1226;
char* sname_1227;
struct buffer* source3_1228;
char* head_1229;
struct buffer* __dec_obj330;
void* __right_value1279 = (void*)0;
char* __dec_obj331;
void* __right_value1280 = (void*)0;
struct sBlock* block_1230;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
struct sType* result_type_1231;
void* __right_value1283 = (void*)0;
char* name_1232;
void* __right_value1284 = (void*)0;
struct sType* self_type_1233;
struct sType* __list_values33___1235[1];
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct list$1sTypeph* param_types_1234;
void* __right_value1287 = (void*)0;
char* __list_values34___1236[1];
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct list$1charph* param_names_1237;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct list$1charph* param_default_parametors_1238;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct buffer* header_buf_1239;
void* __right_value1294 = (void*)0;
int i_1240;
void* __right_value1295 = (void*)0;
struct sType* param_type_1241;
void* __right_value1296 = (void*)0;
char* param_name_1242;
void* __right_value1297 = (void*)0;
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct sFun* fun2_1243;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
struct sFun* fun_1244;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
void* __right_value1308 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1309 = (void*)0;
struct sNode* node_1245;
_Bool Value_1246;
char* __dec_obj332;
struct buffer* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
struct tuple2$2sFunpcharph* __result407__;
    last_code_1209=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1210=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1211=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1212=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1213=((void*)0);
    real_fun_name_1214=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1215=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1215;
    klass_1216=type->mClass;
    if(    type->mPointerNum>0&&!klass_1216->mNumber) {
        source_1217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3928, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1217,"{\n");
        buffer_append_str(source_1217,"var result = new buffer();\n");
        buffer_append_format(source_1217,"result.append_str(\"%s {\");\n",klass_1216->mName);
        i_1218=0;
        klass_1216=((struct sClass*)(__right_value1278=map$2charphsClassphp_operator_load_element(info->classes,klass_1216->mName)));
        come_call_finalizer3(__right_value1278,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1219=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1216->mFields)),it_1220=list$1tuple2$2charphsTypephph_begin((o2_saved_1219));        !list$1tuple2$2charphsTypephph_end((o2_saved_1219));        it_1220=list$1tuple2$2charphsTypephph_next((o2_saved_1219))        ){
            multiple_assign_var18=it_1220;
            name_1221=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1222=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            i_1218==list$1tuple2$2charphsTypephph_length(klass_1216->mFields)-1) {
                char source2_1223[1024];
                memset(&source2_1223, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1223,1024,"result.append_str(\"%s:\");\n",name_1221);
                buffer_append_str(source_1217,source2_1223);
                snprintf(source2_1223,1024,"result.append_str(self.%s.to_string());\n",name_1221);
                buffer_append_str(source_1217,source2_1223);
            }
            else {
                char source2_1224[1024];
                memset(&source2_1224, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1224,1024,"result.append_str(\"%s:\");\n",name_1221);
                buffer_append_str(source_1217,source2_1224);
                snprintf(source2_1224,1024,"result.append_str(self.%s.to_string());\n",name_1221);
                buffer_append_str(source_1217,source2_1224);
                snprintf(source2_1224,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1217,source2_1224);
            }
            i_1218++;
            name_1221 = come_decrement_ref_count2(name_1221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1222,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1219,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1217,"result.append_str(\"}\");\n");
        buffer_append_format(source_1217,"return result.to_string();\n");
        buffer_append_char(source_1217,125);
        p_1225=info->p;
        sline_1226=info->sline;
        sname_1227=(char*)come_increment_ref_count(info->sname);
        source3_1228=(struct buffer*)come_increment_ref_count(info->source);
        head_1229=info->head;
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1217);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1214));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1230=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1231=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3997, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        result_type_1231->mHeap=(_Bool)1;
        name_1232=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1214));
        self_type_1233=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1233->mHeap=(_Bool)0;
        param_types_1234=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1235[0]=(struct sType*)come_increment_ref_count(self_type_1233),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4002, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values33___1235)));
        param_names_1237=(struct list$1charph*)come_increment_ref_count((__list_values34___1236[0]=(char*)come_increment_ref_count(((char*)(__right_value1287=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4003, "struct list$1charph", (void*)0, (void*)0)),1,__list_values34___1236)));
        __right_value1287 = come_decrement_ref_count2(__right_value1287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1238=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4004, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charph_push_back(param_default_parametors_1238,((void*)0));
        header_buf_1239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4007, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1239,((char*)(__right_value1294=make_come_type_name_string(result_type_1231,info))));
        __right_value1294 = come_decrement_ref_count2(__right_value1294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1239," ");
        buffer_append_str(header_buf_1239,real_fun_name_1214);
        buffer_append_str(header_buf_1239,"(");
        for(        i_1240=0;        i_1240<list$1sTypeph_length(param_types_1234);        i_1240++        ){
            param_type_1241=((struct sType*)come_null_check(((struct sType*)(__right_value1295=list$1sTypephp_operator_load_element(param_types_1234,i_1240))), "05function.c", 4015, 19));
            come_call_finalizer3(__right_value1295,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1242=((char*)come_null_check(((char*)(__right_value1296=list$1charphp_operator_load_element(param_names_1237,i_1240))), "05function.c", 4016, 20));
            __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1239,((char*)(__right_value1297=make_come_type_name_string(param_type_1241,info))));
            __right_value1297 = come_decrement_ref_count2(__right_value1297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1239," ");
            buffer_append_str(header_buf_1239,param_name_1242);
            if(            i_1240!=list$1sTypeph_length(param_types_1234)-1) {
                buffer_append_str(header_buf_1239,",");
            }
        }
        buffer_append_str(header_buf_1239,")");
        result_type_1231->mStatic=(_Bool)0;
        result_type_1231->mUniq=(_Bool)0;
        result_type_1231->mInline=(_Bool)0;
        fun2_1243=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1298=__builtin_string(name_1232)))));
        __right_value1298 = come_decrement_ref_count2(__right_value1298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1243==((void*)0)||fun2_1243->mExternal) {
            fun_1244=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4034, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1232),(struct sType*)come_increment_ref_count(result_type_1231),(struct list$1sTypeph*)come_increment_ref_count(param_types_1234),(struct list$1charph*)come_increment_ref_count(param_names_1237),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1238),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1230),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1239)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1244->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1232)),(struct sFun*)come_increment_ref_count(fun_1244));
            cloner_1213=fun_1244;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4048, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1308=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4048, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1244),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1245=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1308,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1246=node_compile(node_1245,info);
            if(            !Value_1246) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1244,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1245) { node_1245 = come_decrement_ref_count2(node_1245, ((struct sNode*)node_1245)->finalize, ((struct sNode*)node_1245)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1213=fun2_1243;
        }
        __dec_obj332=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1227);
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1226;
        __dec_obj333=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1228);
        come_call_finalizer3(__dec_obj333,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1225;
        info->head=head_1229;
        info->sline=sline_1226;
        come_call_finalizer3(source_1217,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1227 = come_decrement_ref_count2(sname_1227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1228,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1230,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1232 = come_decrement_ref_count2(name_1232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1233,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1234,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1237,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1238,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1239,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1243,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1212;
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1209);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1210);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1211;
    __result407__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1311=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4074, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1213,(char*)come_increment_ref_count(real_fun_name_1214))));
    last_code_1209 = come_decrement_ref_count2(last_code_1209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1210 = come_decrement_ref_count2(last_code2_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1214 = come_decrement_ref_count2(real_fun_name_1214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1215,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

