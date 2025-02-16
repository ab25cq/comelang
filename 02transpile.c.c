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

_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";
struct __current_stack2__
{
    int* n_318;
    char** msg2_312;
    char** p_314;
    char** last_lf_315;
    struct sInfo** info;
    char** msg;
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
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static struct list$1charph* list$1charphp_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charphp_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block2_02transpilec(struct __current_stack2__* parent, char* it);
static char* list$1charphp_join(struct list$1charph* self, char* sep);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1charphp_length(struct list$1charph* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void sType_finalize(struct sType* self);
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
static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
void create_pico_version_header();
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphbufferph* map$2charphbufferphp_initialize(struct map$2charphbufferph* self);
static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self);
static void map$2charphbufferph_finalize(struct map$2charphbufferph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModulephp_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static struct map$2charphint* map$2charphintp_initialize(struct map$2charphint* self);
static void map$2charphintp_finalize(struct map$2charphint* self);
static void map$2charphint_finalize(struct map$2charphint* self);
static void sInfo_finalize(struct sInfo* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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

static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value252=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value250=int_to_string(info->sline))),((char*)(__right_value251=string_to_string(info->sname)))))));
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value253 = (void*)0;
char* sname_308;
int sline_309;
int sline_real_310;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* __dec_obj31;
_Bool result_311;
void* __right_value256 = (void*)0;
char* __dec_obj32;
_Bool __result229__;
    sname_308=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_309=info->sline;
    sline_real_310=info->sline_real;
    __dec_obj31=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value254=node->sname(node->_protocol_obj)))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_311=node->compile(node->_protocol_obj,info);
    __dec_obj32=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_308));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_309;
    info->sline_real=sline_real_310;
    __result229__ = result_311;
    sname_308 = come_decrement_ref_count2(sname_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result229__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_312;
va_list args_313;
char* p_314;
char* last_lf_315;
int col_316;
int col_317;
int n_318;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value261 = (void*)0;
struct __current_stack2__ __current_stack2__;
void* __right_value266 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
msg2_312 = (void*)0;
memset(&args_313, 0, sizeof(va_list));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(    !info->no_output_err) {
        __builtin_va_start(args_313,msg);
        vasprintf(&msg2_312,msg,args_313);
        __builtin_va_end(args_313);
        p_314=info->p;
        last_lf_315=((void*)0);
        while(p_314>=info->head) {
            if(            *p_314==10) {
                last_lf_315=p_314;
                break;
            }
            p_314--;
        }
        if(        last_lf_315) {
            col_316=info->p-last_lf_315;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_316,msg2_312);
        }
        else {
            col_317=info->p-info->head;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_317,msg2_312);
        }
        info->err_num++;
        stackframe();
        if(        info->come_fun) {
            n_318=info->sline-5;
            __current_stack2__.n_318 = &n_318;
            __current_stack2__.msg2_312 = &msg2_312;
            __current_stack2__.p_314 = &p_314;
            __current_stack2__.last_lf_315 = &last_lf_315;
            __current_stack2__.info = &info;
            __current_stack2__.msg = &msg;
            ((char*)(__right_value271=charp_puts(((char*)(__right_value270=list$1charphp_join(((struct list$1charph*)(__right_value266=list$1charphp_map(((struct list$1charph*)(__right_value261=list$1charphp_sublist(((struct list$1charph*)(__right_value258=charp_split_char(((char*)(__right_value257=buffer_to_string(info->original_source))),10))),n_318,n_318+10))),&__current_stack2__,(void*)method_block2_02transpilec))),"\n"))))));
            __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value258,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value261,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value266,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_312);
        come_call_finalizer3((&args_313),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* result_319;
struct list_item$1charph* it_320;
int i_321;
struct list$1charph* __result230__;
    result_319=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1835, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    begin<0) {
        begin+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    begin<0) {
        begin=0;
    }
    if(    tail>=self->len) {
        tail=self->len;
    }
    it_320=self->head;
    i_321=0;
    while(it_320!=((void*)0)) {
        if(        i_321>=begin&&i_321<tail) {
            list$1charphp_push_back(result_319,(char*)come_increment_ref_count(it_320->item));
        }
        it_320=it_320->next;
        i_321++;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_319;
    come_call_finalizer3(result_319,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1charph* list$1charphp_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1charph* result_328;
struct list_item$1charph* it_329;
void* __right_value264 = (void*)0;
char* item_330;
struct list$1charph* __result235__;
    result_328=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 2045, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        item_330=(char*)come_increment_ref_count(block(parent,it_329->item));
        list$1charphp_push_back(result_328,(char*)come_increment_ref_count(item_330));
        it_329=it_329->next;
        item_330 = come_decrement_ref_count2(item_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* method_block2_02transpilec(struct __current_stack2__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value265=xsprintf("%d %s",++(*(parent->n_318)),it)));
    __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static char* list$1charphp_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct buffer* buf_331;
int n_332;
char* it_335;
void* __right_value269 = (void*)0;
char* __result243__;
    buf_331=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2155, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_332=0;
    for(    it_335=list$1charphp_begin(self);    !list$1charphp_end(self);    it_335=list$1charphp_next(self)    ){
        buffer_append_str(buf_331,it_335);
        if(        n_332<list$1charphp_length(self)-1) {
            buffer_append_str(buf_331,sep);
        }
        n_332++;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=buffer_to_string(buf_331)));
    come_call_finalizer3(buf_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_333;
char* __result237__;
char* __result238__;
char* result_334;
char* __result239__;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_333;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_334,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_334;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_336;
char* __result240__;
char* __result241__;
char* result_337;
char* __result242__;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(char*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_336;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_337,0,sizeof(char*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_337;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value272 = (void*)0;
char* output_file_name_338;
void* __right_value273 = (void*)0;
_Bool __result244__;
    output_file_name_338=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    charp_write(((char*)(__right_value273=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_338,(_Bool)0);
    __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result244__ = (_Bool)1;
    output_file_name_338 = come_decrement_ref_count2(output_file_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result244__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_339;
void* __right_value274 = (void*)0;
    input_file_name_339=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_339!=((void*)0)&&string_operator_not_equals(input_file_name_339,"")) {
        system(((char*)(__right_value274=xsprintf("%s %s.*",RM,input_file_name_339))));
        __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_339 = come_decrement_ref_count2(input_file_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_340;
void* __right_value275 = (void*)0;
    input_file_name_340=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_340!=((void*)0)&&string_operator_not_equals(input_file_name_340,"")) {
        system(((char*)(__right_value275=xsprintf("%s %s.i* %s.c*",RM,input_file_name_340,input_file_name_340))));
        __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_340 = come_decrement_ref_count2(input_file_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_341;
void* __right_value276 = (void*)0;
    input_file_name_341=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_341!=((void*)0)&&string_operator_not_equals(input_file_name_341,"")) {
        system(((char*)(__right_value276=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_341,input_file_name_341))));
        __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_341 = come_decrement_ref_count2(input_file_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_342;
char* output_file_name_343;
void* __right_value277 = (void*)0;
char* __dec_obj33;
void* __right_value278 = (void*)0;
char* __dec_obj34;
_Bool exist_common_h_344;
struct _IO_FILE* Value_345;
int is_mac_346;
int is_android_347;
int is_debian_348;
int is_m5stack_349;
int is_pico_350;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* cmd3_351;
int rc_352;
void* __right_value281 = (void*)0;
char* command2_353;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* cmd2_354;
int rc_355;
void* __right_value284 = (void*)0;
char* command2_356;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
char* cmd2_357;
int rc_358;
void* __right_value287 = (void*)0;
char* command2_359;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
char* cmd2_360;
int rc_361;
void* __right_value290 = (void*)0;
char* command2_362;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
char* cmd3_363;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj35;
int rc_364;
void* __right_value295 = (void*)0;
char* command2_365;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* cmd4_366;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* __dec_obj36;
void* __right_value300 = (void*)0;
char* command_367;
int rc_368;
void* __right_value301 = (void*)0;
char* __dec_obj37;
void* __right_value302 = (void*)0;
char* command2_369;
_Bool __result245__;
output_file_name_343 = (void*)0;
    input_file_name_342=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj33=output_file_name_343;
        output_file_name_343=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj34=output_file_name_343;
        output_file_name_343=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_344=(_Bool)0;
    {
        Value_345=fopen("common.h","r");
        if(        Value_345) {
            exist_common_h_344=(_Bool)1;
            fclose(Value_345);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_344=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_344=(_Bool)0;
        }
    }
    is_mac_346=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    is_android_347=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    is_debian_348=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
    is_m5stack_349=info->m5stack_cpp;
    is_pico_350=info->pico_cpp;
    if(    is_android_347==0) {
        cmd3_351=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value279=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
        __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd3_351);
        }
        rc_352=system(cmd3_351);
        command2_353=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
        if(        info->verbose) {
            puts(command2_353);
        }
        (void)system(command2_353);
        if(        rc_352!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        cmd3_351 = come_decrement_ref_count2(cmd3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_353 = come_decrement_ref_count2(command2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_m5stack_349) {
        cmd2_354=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value282=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_354);
        }
        rc_355=system(cmd2_354);
        if(        rc_355!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_354);
            exit(5);
        }
        command2_356=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
        if(        info->verbose) {
            puts(command2_356);
        }
        (void)system(command2_356);
        cmd2_354 = come_decrement_ref_count2(cmd2_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_356 = come_decrement_ref_count2(command2_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_pico_350) {
        cmd2_357=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value285=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
        __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_357);
        }
        rc_358=system(cmd2_357);
        if(        rc_358!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_357);
            exit(5);
        }
        command2_359=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
        if(        info->verbose) {
            puts(command2_359);
        }
        (void)system(command2_359);
        cmd2_357 = come_decrement_ref_count2(cmd2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_359 = come_decrement_ref_count2(command2_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_mac_346==0) {
        cmd2_360=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value288=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
        __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_360);
        }
        rc_361=system(cmd2_360);
        if(        rc_361!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_360);
            exit(5);
        }
        command2_362=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
        if(        info->verbose) {
            puts(command2_362);
        }
        (void)system(command2_362);
        cmd2_360 = come_decrement_ref_count2(cmd2_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_362 = come_decrement_ref_count2(command2_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_363=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value291=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        is_debian_348==0) {
            __dec_obj35=cmd3_363;
            cmd3_363=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value293=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(        info->verbose) {
            puts(cmd3_363);
        }
        rc_364=system(cmd3_363);
        command2_365=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
        if(        info->verbose) {
            puts(command2_365);
        }
        (void)system(command2_365);
        if(        rc_364!=0) {
            cmd4_366=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value296=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
            __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            is_debian_348==0) {
                __dec_obj36=cmd4_366;
                cmd4_366=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_344)?(((char*)(__right_value298=__builtin_string(" -include common.h ")))):("")),input_file_name_342,output_file_name_343,output_file_name_343));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            command_367=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_343,input_file_name_342,info->clang_option,input_file_name_342));
            if(            info->verbose) {
                puts(cmd4_366);
            }
            rc_368=system(cmd4_366);
            if(            rc_368!=0) {
                __dec_obj37=command_367;
                command_367=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_343,input_file_name_342,info->clang_option,input_file_name_342));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                info->verbose) {
                    puts(cmd4_366);
                }
                rc_368=system(cmd4_366);
                if(                rc_368!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_366);
                    exit(5);
                }
            }
            command2_369=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_343));
            if(            info->verbose) {
                puts(command2_369);
            }
            (void)system(command2_369);
            cmd4_366 = come_decrement_ref_count2(cmd4_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_367 = come_decrement_ref_count2(command_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_369 = come_decrement_ref_count2(command2_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_363 = come_decrement_ref_count2(cmd3_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_365 = come_decrement_ref_count2(command2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result245__ = (_Bool)1;
    input_file_name_342 = come_decrement_ref_count2(input_file_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_343 = come_decrement_ref_count2(output_file_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result245__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value303 = (void*)0;
char* input_file_name_370;
char* output_file_name_371;
void* __right_value304 = (void*)0;
char* __dec_obj38;
void* __right_value305 = (void*)0;
char* __dec_obj39;
void* __right_value306 = (void*)0;
char* command_372;
int rc_373;
void* __right_value307 = (void*)0;
char* __dec_obj40;
int rc_374;
void* __right_value308 = (void*)0;
char* command2_375;
_Bool __result246__;
void* __right_value312 = (void*)0;
_Bool __result249__;
output_file_name_371 = (void*)0;
    input_file_name_370=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj38=output_file_name_371;
        output_file_name_371=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj39=output_file_name_371;
        output_file_name_371=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_372=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_371,input_file_name_370,info->clang_option,input_file_name_370));
    if(    info->verbose) {
        puts(command_372);
    }
    rc_373=system(command_372);
    if(    rc_373!=0) {
        __dec_obj40=command_372;
        command_372=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_371,input_file_name_370,info->clang_option,input_file_name_370));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->verbose) {
            puts(command_372);
        }
        rc_374=system(command_372);
        if(        rc_374!=0) {
            printf("%s %d: %s is faild\n",info->sname,info->sline,CC);
            command2_375=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_370));
            if(            info->verbose) {
                puts(command2_375);
            }
            (void)system(command2_375);
            __result246__ = (_Bool)0;
            command2_375 = come_decrement_ref_count2(command2_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            input_file_name_370 = come_decrement_ref_count2(input_file_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            output_file_name_371 = come_decrement_ref_count2(output_file_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_372 = come_decrement_ref_count2(command_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result246__;
            command2_375 = come_decrement_ref_count2(command2_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    !output_object_file) {
        list$1charphp_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_371)));
    }
    __result249__ = (_Bool)1;
    input_file_name_370 = come_decrement_ref_count2(input_file_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_371 = come_decrement_ref_count2(output_file_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_372 = come_decrement_ref_count2(command_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result249__;
}

static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_376;
int i_377;
char* default_value_378;
struct list$1charph* __result247__;
void* __right_value309 = (void*)0;
struct list_item$1charph* litem_379;
char* __dec_obj41;
void* __right_value310 = (void*)0;
struct list_item$1charph* litem_380;
char* __dec_obj42;
struct list_item$1charph* it_381;
int i_382;
void* __right_value311 = (void*)0;
struct list_item$1charph* litem_383;
char* __dec_obj43;
struct list$1charph* __result248__;
default_value_378 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_376=self->len;
        for(        i_377=0;        i_377<position-len_376;        i_377++        ){
            memset(&default_value_378,0,sizeof(char*));
            list$1charphp_push_back(self,(char*)come_increment_ref_count(default_value_378));
            default_value_378 = come_decrement_ref_count2(default_value_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
        __result247__ = gComeFunResultObject = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    if(    position==0) {
        litem_379=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value309=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1565, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=self->head;
        __dec_obj41=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_379;
        self->head=litem_379;
        self->len++;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1577, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=self->tail;
        __dec_obj42=litem_380->item;
        litem_380->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_380;
        self->head->next=litem_380;
        self->len++;
    }
    else {
        it_381=self->head;
        i_382=0;
        while(it_381!=((void*)0)) {
            if(            position==i_382) {
                litem_383=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value311=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1593, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                litem_383->prev=it_381->prev;
                litem_383->next=it_381;
                __dec_obj43=litem_383->item;
                litem_383->item=(char*)come_increment_ref_count(item);
                __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_381->prev->next=litem_383;
                it_381->prev=litem_383;
                self->len++;
            }
            it_381=it_381->next;
            i_382++;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_384;
void* __right_value313 = (void*)0;
char* __dec_obj44;
void* __right_value314 = (void*)0;
char* __dec_obj45;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct buffer* command_385;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* o2_saved_386;
char* it_387;
int is_mac_388;
void* __right_value319 = (void*)0;
char* cmd_389;
int rc_390;
void* __right_value320 = (void*)0;
char* cmd_391;
int rc_392;
void* __right_value321 = (void*)0;
char* cmd_393;
int rc_394;
int is_apline_395;
int is_debian_396;
int is_android_397;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* str_398;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
int Value_399;
_Bool _if_conditional1;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* str_400;
int Value_401;
_Bool __result250__;
_Bool __result251__;
    output_file_name_384=((void*)0);
    if(    info->output_file_name) {
        __dec_obj44=output_file_name_384;
        output_file_name_384=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj45=output_file_name_384;
        output_file_name_384=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_385=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 346, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(command_385,"%s -o %s ",CC,output_file_name_384);
    buffer_append_str(command_385,((char*)(__right_value318=charp_operator_add(" ",((char*)(__right_value317=string_operator_add(info->linker_option," ")))))));
    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_386=(object_files),it_387=list$1charphp_begin((o2_saved_386));    !list$1charphp_end((o2_saved_386));    it_387=list$1charphp_next((o2_saved_386))    ){
        buffer_append_format(command_385,"%s ",it_387);
    }
    is_mac_388=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_388==0) {
        buffer_append_str(command_385," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_389=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_390=system(cmd_389);
    if(    rc_390==0) {
        buffer_append_str(command_385," -L. -L/usr/local/lib ");
    }
    cmd_389 = come_decrement_ref_count2(cmd_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_391=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_392=system(cmd_391);
    if(    rc_392==0) {
        buffer_append_format(command_385," -L%s/lib ",getenv("HOME"));
    }
    cmd_391 = come_decrement_ref_count2(cmd_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_393=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_394=system(cmd_393);
    if(    rc_394==0) {
        buffer_append_format(command_385," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_385," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_385," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_385," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_385," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_395=system("which apk 1> /dev/null 2>/dev/null");
        is_debian_396=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        is_android_397=system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        if(        is_android_397==0) {
            buffer_append_str(command_385," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_395==0||is_debian_396==0) {
            buffer_append_str(command_385," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_388==0) {
            buffer_append_format(command_385," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_385," -lssl `mysql_config --cflags --libs`");
        }
    }
    str_398=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value322=xsprintf("gcc"))),((char*)(__right_value324=charp_substring(((char*)(__right_value323=buffer_to_string(command_385))),strlen(CC),-1)))));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->verbose) {
        puts(((char*)(__right_value326=buffer_to_string(command_385))));
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_399=system(((char*)(__right_value327=buffer_to_string(command_385))));
    if(    (_if_conditional1=(Value_399)),    (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional1) {
        str_400=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value328=xsprintf("gcc"))),((char*)(__right_value330=charp_substring(((char*)(__right_value329=buffer_to_string(command_385))),strlen(CC),-1)))));
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        Value_401=system(str_400);
        if(        Value_401) {
            printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
            __result250__ = (_Bool)0;
            str_400 = come_decrement_ref_count2(str_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            output_file_name_384 = come_decrement_ref_count2(output_file_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(command_385,buffer_finalize, 0, 0, 0, 0, (void*)0);
            cmd_393 = come_decrement_ref_count2(cmd_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            str_398 = come_decrement_ref_count2(str_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result250__;
        }
        else {
        }
        str_400 = come_decrement_ref_count2(str_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
    }
    __result251__ = (_Bool)1;
    output_file_name_384 = come_decrement_ref_count2(output_file_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_385,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_393 = come_decrement_ref_count2(cmd_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    str_398 = come_decrement_ref_count2(str_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result251__;
}

_Bool new_project(int argc, char** argv){
void* __right_value332 = (void*)0;
char* project_name_402;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* project_name_debug_403;
void* __right_value336 = (void*)0;
char* cc_404;
void* __right_value337 = (void*)0;
char* install_405;
void* __right_value338 = (void*)0;
char* libs_406;
void* __right_value339 = (void*)0;
char* os_407;
void* __right_value340 = (void*)0;
char* prefix_408;
void* __right_value341 = (void*)0;
char* cflags_409;
void* __right_value342 = (void*)0;
char* cflags_debug_410;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
int Value_411;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
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
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
_Bool __result252__;
    project_name_402=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_403=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value333=__builtin_string(argv[2]))),((char*)(__right_value334=__builtin_string("-debug")))));
    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_404=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_405=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_406=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_407=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_408=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_409=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_410=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_411=system(((char*)(__right_value344=xsprintf("mkdir \%s",((char*)(__right_value343=string_to_string(project_name_402)))))));
    if(    (_if_conditional2=(Value_411<0)),    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 437, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value370=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value345=string_to_string(project_name_402))),((char*)(__right_value346=string_to_string(project_name_402))),((char*)(__right_value347=string_to_string(project_name_402))),((char*)(__right_value348=string_to_string(project_name_402))),((char*)(__right_value349=string_to_string(cc_404))),((char*)(__right_value350=string_to_string(install_405))),((char*)(__right_value351=string_to_string(cflags_409))),((char*)(__right_value352=string_to_string(cflags_debug_410))),((char*)(__right_value353=string_to_string(libs_406))),((char*)(__right_value354=string_to_string(os_407))),((char*)(__right_value355=string_to_string(prefix_408))),((char*)(__right_value356=string_to_string(project_name_402))),((char*)(__right_value357=string_to_string(project_name_debug_403))),((char*)(__right_value358=string_to_string(project_name_402))),((char*)(__right_value359=string_to_string(project_name_402))),((char*)(__right_value360=string_to_string(project_name_402))),((char*)(__right_value361=string_to_string(project_name_402))),((char*)(__right_value362=string_to_string(project_name_debug_403))),((char*)(__right_value363=string_to_string(project_name_402))),((char*)(__right_value364=string_to_string(project_name_402))),((char*)(__right_value365=string_to_string(project_name_402))),((char*)(__right_value366=string_to_string(project_name_402))),((char*)(__right_value367=string_to_string(project_name_402))),((char*)(__right_value368=string_to_string(project_name_debug_403))),((char*)(__right_value369=string_to_string(project_name_debug_403)))))),((char*)(__right_value372=xsprintf("\%s/Makefile",((char*)(__right_value371=string_to_string(project_name_402)))))),(_Bool)0);
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result252__ = (_Bool)1;
    project_name_402 = come_decrement_ref_count2(project_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_403 = come_decrement_ref_count2(project_name_debug_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_404 = come_decrement_ref_count2(cc_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_405 = come_decrement_ref_count2(install_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_406 = come_decrement_ref_count2(libs_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_407 = come_decrement_ref_count2(os_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_408 = come_decrement_ref_count2(prefix_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_409 = come_decrement_ref_count2(cflags_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_410 = come_decrement_ref_count2(cflags_debug_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result252__;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_412;
int Value_413;
_Bool __exception_result_var_b2;
int Value_414;
_Bool __exception_result_var_b3;
    Value_412=fopen("common.h","r");
    if(    Value_412) {
        fclose(Value_412);
    }
    else {
        Value_413=system("make header");
        if(        Value_413<0) {
            (come_push_stackframe("02transpile.c", 543, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_414=system("make run");
    if(    Value_414<0) {
        (come_push_stackframe("02transpile.c", 548, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_415;
_Bool __exception_result_var_b4;
    Value_415=system("make header");
    if(    Value_415<0) {
        (come_push_stackframe("02transpile.c", 557, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_416;
int Value_417;
_Bool __exception_result_var_b5;
int Value_418;
_Bool __exception_result_var_b6;
    Value_416=fopen("common.h","r");
    if(    Value_416) {
        fclose(Value_416);
    }
    else {
        Value_417=system("make header");
        if(        Value_417<0) {
            (come_push_stackframe("02transpile.c", 570, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_418=system("make compile");
    if(    Value_418<0) {
        (come_push_stackframe("02transpile.c", 574, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_419;
int Value_420;
_Bool __exception_result_var_b7;
int Value_421;
_Bool __exception_result_var_b8;
    Value_419=fopen("common.h","r");
    if(    Value_419) {
        fclose(Value_419);
    }
    else {
        Value_420=system("make header");
        if(        Value_420<0) {
            (come_push_stackframe("02transpile.c", 587, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_421=system("make debug");
    if(    Value_421<0) {
        (come_push_stackframe("02transpile.c", 591, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_422;
_Bool __exception_result_var_b9;
    Value_422=system("make clean");
    if(    Value_422<0) {
        (come_push_stackframe("02transpile.c", 600, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
int Value_423;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_423=system(((char*)(__right_value374=xsprintf("make install DESTDIR=\%s",((char*)(__right_value373=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_423<0)),    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 609, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
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
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
int i_469;
void* __right_value419 = (void*)0;
char* generics_type_470;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
int i_471;
void* __right_value422 = (void*)0;
char* generics_type_472;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
int is_mac_473;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
char* type_name_474;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* type_475;
void* __right_value468 = (void*)0;
char* __dec_obj96;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sClass* klass_528;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 617, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 618, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 619, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 620, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 622, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 623, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 624, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 626, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"_Float16",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 627, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 628, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 629, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_469=0;    i_469<12;    i_469++    ){
        generics_type_470=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_469));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(generics_type_470),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 632, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),generics_type_470,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_469,-1,(_Bool)0,info)));
        generics_type_470 = come_decrement_ref_count2(generics_type_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_471=0;    i_471<7;    i_471++    ){
        generics_type_472=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_471));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(generics_type_472),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 636, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),generics_type_472,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_471,(_Bool)0,info)));
        generics_type_472 = come_decrement_ref_count2(generics_type_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    is_mac_473=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_473==0) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 641, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_474=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 645, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"__builtin_va_list",(_Bool)0,info));
        __dec_obj96=type_475->mOriginalTypeName;
        type_475->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_474)),(struct sType*)come_increment_ref_count(type_475));
        type_name_474 = come_decrement_ref_count2(type_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_528=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 651, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1voidphp_push_back(klass_528->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 653, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 653, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_528->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 654, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 654, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_528->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 655, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 655, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_528->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 656, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 656, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_528->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 657, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 657, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_528));
        come_call_finalizer3(klass_528,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_445;
unsigned int it_446;
_Bool same_key_exist_463;
char* it2_466;
struct map$2charphsClassph* __result273__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_445=string_get_hash_key(((char*)key))%self->size;
    it_446=hash_445;
    while((_Bool)1) {
        if(        self->item_existance[it_446]) {
            if(            string_equals(self->keys[it_446],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_446]);
                    self->keys[it_446] = come_decrement_ref_count2(self->keys[it_446], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_446]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_446]);
                    self->keys[it_446]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_446],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_446]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_446]=item;
                }
                break;
            }
            it_446++;
            if(            it_446>=self->size) {
                it_446=0;
            }
            else if(            it_446==hash_445) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_446]=(_Bool)1;
            if(            1) {
                self->keys[it_446]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_446]=key;
            }
            if(            1) {
                self->items[it_446]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_446]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_463=(_Bool)0;
    for(    it2_466=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_466=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_466,key)) {
            same_key_exist_463=(_Bool)1;
        }
    }
    if(    !same_key_exist_463) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_424;
void* __right_value375 = (void*)0;
char** keys_425;
void* __right_value376 = (void*)0;
struct sClass** items_426;
void* __right_value377 = (void*)0;
_Bool* item_existance_427;
int len_428;
char* it_431;
struct sClass* default_value_434;
void* __right_value378 = (void*)0;
struct sClass* it2_435;
unsigned int hash_442;
int n_443;
struct sClass* default_value_444;
void* __right_value379 = (void*)0;
default_value_434 = (void*)0;
default_value_444 = (void*)0;
    size_424=self->size*10;
    keys_425=(char**)come_increment_ref_count(((char**)(__right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(size_424)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_426=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value376=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_424)), "./comelang.h", 2809, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_427=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_424)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_428=0;
    for(    it_431=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_431=map$2charphsClassphp_next(self)    ){
        memset(&default_value_434,0,sizeof(struct sClass*));
        it2_435=((struct sClass*)(__right_value378=map$2charphsClassphp_at(self,it_431,default_value_434)));
        come_call_finalizer3(__right_value378,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_442=string_get_hash_key(((char*)it_431))%size_424;
        n_443=hash_442;
        while((_Bool)1) {
            if(            item_existance_427[n_443]) {
                n_443++;
                if(                n_443>=size_424) {
                    n_443=0;
                }
                else if(                n_443==hash_442) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_427[n_443]=(_Bool)1;
                keys_425[n_443]=it_431;
                items_426[n_443]=((struct sClass*)(__right_value379=map$2charphsClassphp_at(self,it_431,default_value_444)));
                come_call_finalizer3(__right_value379,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_428++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_425;
    self->items=items_426;
    self->item_existance=item_existance_427;
    self->size=size_424;
    self->len=len_428;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_429;
char* __result253__;
char* __result254__;
char* result_430;
char* __result255__;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_429,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_429;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_430,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_430;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_432;
char* __result256__;
char* __result257__;
char* result_433;
char* __result258__;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_432,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_432;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_433,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_436;
unsigned int it_437;
struct sClass* __result259__;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
    hash_436=string_get_hash_key(((char*)key))%self->size;
    it_437=hash_436;
    while((_Bool)1) {
        if(        self->item_existance[it_437]) {
            if(            string_equals(self->keys[it_437],key)) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_437];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_437++;
            if(            it_437>=self->size) {
                it_437=0;
            }
            else if(            it_437==hash_436) {
                __result260__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj46;
struct list$1voidph* __dec_obj47;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj46=self->mName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj47=self->mFields;
            come_call_finalizer3(__dec_obj47,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj49=self->mDeclareSName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj50=self->mParentClassName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_438;
struct list_item$1voidph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            come_call_finalizer3(__dec_obj48,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_440;
struct list_item$1voidph* prev_it_441;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        prev_it_441=it_440;
        it_440=it_440->next;
        come_call_finalizer3(prev_it_441,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_447;
struct list_item$1charp* it_448;
struct list$1charp* __result266__;
    it2_447=0;
    it_448=self->head;
    while(it_448!=((void*)0)) {
        if(        charp_equals(it_448->item,item)) {
            list$1charpp_delete(self,it2_447,it2_447+1);
            break;
        }
        it2_447++;
        it_448=it_448->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_449;
struct list$1charp* __result263__;
struct list_item$1charp* it_452;
int i_453;
struct list_item$1charp* prev_it_454;
struct list_item$1charp* it_455;
int i_456;
struct list_item$1charp* prev_it_457;
struct list_item$1charp* it_458;
struct list_item$1charp* head_prev_it_459;
struct list_item$1charp* tail_it_460;
int i_461;
struct list_item$1charp* prev_it_462;
struct list$1charp* __result265__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_449=tail;
        tail=head;
        head=tmp_449;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result263__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_452=self->head;
        i_453=0;
        while(it_452!=((void*)0)) {
            if(            i_453<tail) {
                prev_it_454=it_452;
                it_452=it_452->next;
                i_453++;
                come_call_finalizer3(prev_it_454,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_453==tail) {
                self->head=it_452;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_452=it_452->next;
                i_453++;
            }
        }
    }
    else if(    tail==self->len) {
        it_455=self->head;
        i_456=0;
        while(it_455!=((void*)0)) {
            if(            i_456==head) {
                self->tail=it_455->prev;
                self->tail->next=((void*)0);
            }
            if(            i_456>=head) {
                prev_it_457=it_455;
                it_455=it_455->next;
                i_456++;
                come_call_finalizer3(prev_it_457,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_455=it_455->next;
                i_456++;
            }
        }
    }
    else {
        it_458=self->head;
        head_prev_it_459=((void*)0);
        tail_it_460=((void*)0);
        i_461=0;
        while(it_458!=((void*)0)) {
            if(            i_461==head) {
                head_prev_it_459=it_458->prev;
            }
            if(            i_461==tail) {
                tail_it_460=it_458;
            }
            if(            i_461>=head&&i_461<tail) {
                prev_it_462=it_458;
                it_458=it_458->next;
                i_461++;
                come_call_finalizer3(prev_it_462,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_458=it_458->next;
                i_461++;
            }
        }
        if(        head_prev_it_459!=((void*)0)) {
            head_prev_it_459->next=tail_it_460;
        }
        if(        tail_it_460!=((void*)0)) {
            tail_it_460->prev=head_prev_it_459;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_450;
struct list_item$1charp* prev_it_451;
struct list$1charp* __result264__;
    it_450=self->head;
    while(it_450!=((void*)0)) {
        prev_it_451=it_450;
        it_450=it_450->next;
        come_call_finalizer3(prev_it_451,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_464;
char* __result267__;
char* __result268__;
char* result_465;
char* __result269__;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_464,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_464;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->head;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_465,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_465;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_467;
char* __result270__;
char* __result271__;
char* result_468;
char* __result272__;
result_467 = (void*)0;
result_468 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_467,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_467;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_468,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_468;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj52;
struct sType* __dec_obj53;
struct sType* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
struct list$1voidph* __dec_obj57;
struct list$1sNodeph* __dec_obj58;
struct list$1voidph* __dec_obj60;
struct list$1charph* __dec_obj61;
struct sType* __dec_obj62;
struct sNode* __dec_obj63;
struct sType* __dec_obj64;
struct sNode* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj52=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj53=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj54=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj55=self->mInterfaceName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj56=self->mGenericsName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj57=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj57,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj58=self->mArrayNum;
            come_call_finalizer3(__dec_obj58,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj60=self->mParamTypes;
            come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj61=self->mParamNames;
            come_call_finalizer3(__dec_obj61,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj62=self->mResultType;
            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj63=self->mAlignas;
            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj64=self->mChannelType;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj65=self->mSizeNum;
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj66=self->mOriginalTypeName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj67=self->mAsmName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj68=self->mTupleName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj69=self->mAttribute;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_476;
struct list_item$1sNodeph* prev_it_477;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer3(prev_it_477,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj59;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj59=self->item;
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_478;
struct list_item$1sNodeph* prev_it_479;
    it_478=self->head;
    while(it_478!=((void*)0)) {
        prev_it_479=it_478;
        it_478=it_478->next;
        come_call_finalizer3(prev_it_479,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_480;
struct list_item$1charph* prev_it_481;
    it_480=self->head;
    while(it_480!=((void*)0)) {
        prev_it_481=it_480;
        it_480=it_480->next;
        come_call_finalizer3(prev_it_481,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result274__;
void* __right_value429 = (void*)0;
struct sType* result_489;
void* __right_value430 = (void*)0;
struct sType* __dec_obj70;
void* __right_value431 = (void*)0;
struct sType* __dec_obj71;
void* __right_value432 = (void*)0;
struct sType* __dec_obj72;
void* __right_value433 = (void*)0;
char* __dec_obj73;
void* __right_value434 = (void*)0;
char* __dec_obj74;
void* __right_value441 = (void*)0;
struct list$1voidph* __dec_obj78;
void* __right_value449 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value450 = (void*)0;
struct list$1voidph* __dec_obj83;
void* __right_value457 = (void*)0;
struct list$1charph* __dec_obj87;
void* __right_value458 = (void*)0;
struct sType* __dec_obj88;
void* __right_value459 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value460 = (void*)0;
struct sType* __dec_obj90;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value462 = (void*)0;
char* __dec_obj92;
void* __right_value463 = (void*)0;
char* __dec_obj93;
void* __right_value464 = (void*)0;
char* __dec_obj94;
void* __right_value465 = (void*)0;
char* __dec_obj95;
struct sType* __result288__;
    if(    self==(void*)0) {
        __result274__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    result_489=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_489->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_489->mNoSolvedGenericsType;
        result_489->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_489->mOriginalLoadVarType;
        result_489->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj72=result_489->mAnyOriginalType;
        result_489->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj73=result_489->mInterfaceName;
        result_489->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj74=result_489->mGenericsName;
        result_489->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_489->mGenericsTypes;
        result_489->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj82=result_489->mArrayNum;
        result_489->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj83=result_489->mParamTypes;
        result_489->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj87=result_489->mParamNames;
        result_489->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj88=result_489->mResultType;
        result_489->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj89=result_489->mAlignas;
        result_489->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj90=result_489->mChannelType;
        result_489->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_489->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_489->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_489->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_489->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_489->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_489->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_489->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_489->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_489->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_489->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_489->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_489->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_489->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_489->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_489->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_489->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_489->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_489->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_489->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_489->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_489->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_489->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_489->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj91=result_489->mSizeNum;
        result_489->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_489->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj92=result_489->mOriginalTypeName;
        result_489->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_489->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_489->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_489->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_489->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_489->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_489->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_489->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj93=result_489->mAsmName;
        result_489->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_489->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_489->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_489->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_489->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_489->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj94=result_489->mTupleName;
        result_489->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj95=result_489->mAttribute;
        result_489->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_489->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_489->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_489->mCreateVTable=self->mCreateVTable;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_489;
    come_call_finalizer3(result_489,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_482;
    result_482=0;
    result_482+=int_get_hash_key(((int)self->mClass));
    result_482+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_482+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_482+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_482+=int_get_hash_key(((int)self->mAnyClass));
    result_482+=int_get_hash_key(((int)self->mInterfaceName));
    result_482+=int_get_hash_key(((int)self->mGenericsName));
    result_482+=int_get_hash_key(((int)self->mGenericsTypes));
    result_482+=int_get_hash_key(((int)self->mArrayNum));
    result_482+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_482+=int_get_hash_key(((int)self->mParamTypes));
    result_482+=int_get_hash_key(((int)self->mParamNames));
    result_482+=int_get_hash_key(((int)self->mResultType));
    result_482+=int_get_hash_key(((int)self->mVarArgs));
    result_482+=int_get_hash_key(((int)self->mAlignas));
    result_482+=int_get_hash_key(((int)self->mChannelType));
    result_482+=int_get_hash_key(((int)self->mUnsigned));
    result_482+=int_get_hash_key(((int)self->mShort));
    result_482+=int_get_hash_key(((int)self->mLong));
    result_482+=int_get_hash_key(((int)self->mLongLong));
    result_482+=int_get_hash_key(((int)self->mConstant));
    result_482+=int_get_hash_key(((int)self->mAtomic));
    result_482+=int_get_hash_key(((int)self->mRegister));
    result_482+=int_get_hash_key(((int)self->mVolatile));
    result_482+=int_get_hash_key(((int)self->mStatic));
    result_482+=int_get_hash_key(((int)self->mUniq));
    result_482+=int_get_hash_key(((int)self->mRecord));
    result_482+=int_get_hash_key(((int)self->mExtern));
    result_482+=int_get_hash_key(((int)self->mRestrict));
    result_482+=int_get_hash_key(((int)self->mImmutable));
    result_482+=int_get_hash_key(((int)self->mHeap));
    result_482+=int_get_hash_key(((int)self->mChannel));
    result_482+=int_get_hash_key(((int)self->mNoHeap));
    result_482+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_482+=int_get_hash_key(((int)self->mException));
    result_482+=int_get_hash_key(((int)self->mPointerNum));
    result_482+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_482+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_482+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_482+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_482+=int_get_hash_key(((int)self->mSizeNum));
    result_482+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_482+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_482+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_482+=int_get_hash_key(((int)self->mFunctionParam));
    result_482+=int_get_hash_key(((int)self->mAllocaValue));
    result_482+=int_get_hash_key(((int)self->mGenericsStruct));
    result_482+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_482+=int_get_hash_key(((int)self->mInline));
    result_482+=int_get_hash_key(((int)self->mNullValue));
    result_482+=int_get_hash_key(((int)self->mGuardValue));
    result_482+=int_get_hash_key(((int)self->mAsmName));
    result_482+=int_get_hash_key(((int)self->mArrayPointerType));
    result_482+=int_get_hash_key(((int)self->mLambdaArray));
    result_482+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_482+=int_get_hash_key(((int)self->mTypedef));
    result_482+=int_get_hash_key(((int)self->mMultipleTypes));
    result_482+=int_get_hash_key(((int)self->mOriginIsArray));
    result_482+=int_get_hash_key(((int)self->mTupleName));
    result_482+=int_get_hash_key(((int)self->mAttribute));
    result_482+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_482+=int_get_hash_key(((int)self->mGenerate));
    result_482+=int_get_hash_key(((int)self->mCreateVTable));
    return result_482;
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
struct list_item$1voidph* it_483;
struct list_item$1voidph* it2_484;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_483=left->head;
    it2_484=right->head;
    while(it_483!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_483->item, it2_484->item)) {
            return (_Bool)0;
        }
        it_483=it_483->next;
        it2_484=it2_484->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_485;
struct list_item$1sNodeph* it2_486;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_485=left->head;
    it2_486=right->head;
    while(it_485!=((void*)0)) {
        if(        !sNode_equals(it_485->item,it2_486->item)) {
            return (_Bool)0;
        }
        it_485=it_485->next;
        it2_486=it2_486->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_487;
struct list_item$1charph* it2_488;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_487=left->head;
    it2_488=right->head;
    while(it_487!=((void*)0)) {
        if(        !string_equals(it_487->item,it2_488->item)) {
            return (_Bool)0;
        }
        it_487=it_487->next;
        it2_488=it2_488->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result275__;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1voidph* result_491;
struct list_item$1voidph* it_492;
void* __right_value440 = (void*)0;
struct list$1voidph* __result278__;
    if(    self==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_491=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_492=self->head;
    while(it_492!=((void*)0)) {
        list$1voidphp_add(result_491,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_492->item)));
        it_492=it_492->next;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_491;
    come_call_finalizer3(result_491,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_490;
    result_490=0;
    result_490+=int_get_hash_key(((int)self->head));
    result_490+=int_get_hash_key(((int)self->tail));
    result_490+=int_get_hash_key(((int)self->len));
    result_490+=int_get_hash_key(((int)self->it));
    return result_490;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result276__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
struct list_item$1voidph* litem_493;
void* __dec_obj75;
void* __right_value438 = (void*)0;
struct list_item$1voidph* litem_494;
void* __dec_obj76;
void* __right_value439 = (void*)0;
struct list_item$1voidph* litem_495;
void* __dec_obj77;
struct list$1voidph* __result277__;
    if(    self->len==0) {
        litem_493=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value437=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_493->prev=((void*)0);
        litem_493->next=((void*)0);
        __dec_obj75=litem_493->item;
        litem_493->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_493;
        self->head=litem_493;
    }
    else if(    self->len==1) {
        litem_494=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value438=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_494->prev=self->head;
        litem_494->next=((void*)0);
        __dec_obj76=litem_494->item;
        litem_494->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_494;
        self->head->next=litem_494;
    }
    else {
        litem_495=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value439=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_495->prev=self->tail;
        litem_495->next=((void*)0);
        __dec_obj77=litem_495->item;
        litem_495->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_495;
        self->tail=litem_495;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result279__;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sNodeph* result_496;
struct list_item$1sNodeph* it_497;
void* __right_value448 = (void*)0;
struct list$1sNodeph* __result284__;
    if(    self==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_496=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_497=self->head;
    while(it_497!=((void*)0)) {
        list$1sNodephp_add(result_496,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_497->item)));
        it_497=it_497->next;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_496;
    come_call_finalizer3(result_496,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
struct list_item$1sNodeph* litem_498;
struct sNode* __dec_obj79;
void* __right_value445 = (void*)0;
struct list_item$1sNodeph* litem_499;
struct sNode* __dec_obj80;
void* __right_value446 = (void*)0;
struct list_item$1sNodeph* litem_500;
struct sNode* __dec_obj81;
struct list$1sNodeph* __result281__;
    if(    self->len==0) {
        litem_498=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value444=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_498->prev=((void*)0);
        litem_498->next=((void*)0);
        __dec_obj79=litem_498->item;
        litem_498->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_498;
        self->head=litem_498;
    }
    else if(    self->len==1) {
        litem_499=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value445=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_499->prev=self->head;
        litem_499->next=((void*)0);
        __dec_obj80=litem_499->item;
        litem_499->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_499;
        self->head->next=litem_499;
    }
    else {
        litem_500=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value446=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_500->prev=self->tail;
        litem_500->next=((void*)0);
        __dec_obj81=litem_500->item;
        litem_500->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_500;
        self->tail=litem_500;
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
void* __right_value447 = (void*)0;
struct sNode* result_501;
struct sNode* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_501=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_501->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_501->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_501->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_501->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_501->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_501->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_501->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_501->kind=self->kind;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_501;
    come_call_finalizer2((void*)0, result_501, result_501 ? ((struct sNode*)result_501)->finalize:(void*)0, result_501 ? ((struct sNode*)result_501)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result285__;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* result_502;
struct list_item$1charph* it_503;
void* __right_value456 = (void*)0;
struct list$1charph* __result287__;
    if(    self==((void*)0)) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_502=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_503=self->head;
    while(it_503!=((void*)0)) {
        list$1charphp_add(result_502,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_503->item)));
        it_503=it_503->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_502;
    come_call_finalizer3(result_502,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value453 = (void*)0;
struct list_item$1charph* litem_504;
char* __dec_obj84;
void* __right_value454 = (void*)0;
struct list_item$1charph* litem_505;
char* __dec_obj85;
void* __right_value455 = (void*)0;
struct list_item$1charph* litem_506;
char* __dec_obj86;
struct list$1charph* __result286__;
    if(    self->len==0) {
        litem_504=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value453=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_504->prev=((void*)0);
        litem_504->next=((void*)0);
        __dec_obj84=litem_504->item;
        litem_504->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_504;
        self->head=litem_504;
    }
    else if(    self->len==1) {
        litem_505=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value454=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_505->prev=self->head;
        litem_505->next=((void*)0);
        __dec_obj85=litem_505->item;
        litem_505->item=(char*)come_increment_ref_count(item);
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_505;
        self->head->next=litem_505;
    }
    else {
        litem_506=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value455=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_506->prev=self->tail;
        litem_506->next=((void*)0);
        __dec_obj86=litem_506->item;
        litem_506->item=(char*)come_increment_ref_count(item);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_506;
        self->tail=litem_506;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_524;
unsigned int it_525;
_Bool same_key_exist_526;
char* it2_527;
struct map$2charphsTypeph* __result299__;
    if(    self->len*10>=self->size) {
        map$2charphsTypephp_rehash(self);
    }
    hash_524=string_get_hash_key(((char*)key))%self->size;
    it_525=hash_524;
    while((_Bool)1) {
        if(        self->item_existance[it_525]) {
            if(            string_equals(self->keys[it_525],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_525]);
                    self->keys[it_525] = come_decrement_ref_count2(self->keys[it_525], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_525]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_525]);
                    self->keys[it_525]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_525],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_525]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_525]=item;
                }
                break;
            }
            it_525++;
            if(            it_525>=self->size) {
                it_525=0;
            }
            else if(            it_525==hash_524) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_525]=(_Bool)1;
            if(            1) {
                self->keys[it_525]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_525]=key;
            }
            if(            1) {
                self->items[it_525]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_525]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_526=(_Bool)0;
    for(    it2_527=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_527=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_527,key)) {
            same_key_exist_526=(_Bool)1;
        }
    }
    if(    !same_key_exist_526) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_507;
void* __right_value469 = (void*)0;
char** keys_508;
void* __right_value470 = (void*)0;
struct sType** items_509;
void* __right_value471 = (void*)0;
_Bool* item_existance_510;
int len_511;
char* it_514;
struct sType* default_value_517;
void* __right_value472 = (void*)0;
struct sType* it2_518;
unsigned int hash_521;
int n_522;
struct sType* default_value_523;
void* __right_value473 = (void*)0;
default_value_517 = (void*)0;
default_value_523 = (void*)0;
    size_507=self->size*10;
    keys_508=(char**)come_increment_ref_count(((char**)(__right_value469=(char**)come_calloc(1, sizeof(char*)*(1*(size_507)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_509=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value470=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_507)), "./comelang.h", 2809, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_510=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value471=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_507)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_511=0;
    for(    it_514=map$2charphsTypephp_begin(self);    !map$2charphsTypephp_end(self);    it_514=map$2charphsTypephp_next(self)    ){
        memset(&default_value_517,0,sizeof(struct sType*));
        it2_518=((struct sType*)(__right_value472=map$2charphsTypephp_at(self,it_514,default_value_517)));
        come_call_finalizer3(__right_value472,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_521=string_get_hash_key(((char*)it_514))%size_507;
        n_522=hash_521;
        while((_Bool)1) {
            if(            item_existance_510[n_522]) {
                n_522++;
                if(                n_522>=size_507) {
                    n_522=0;
                }
                else if(                n_522==hash_521) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_510[n_522]=(_Bool)1;
                keys_508[n_522]=it_514;
                items_509[n_522]=((struct sType*)(__right_value473=map$2charphsTypephp_at(self,it_514,default_value_523)));
                come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_511++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_508;
    self->items=items_509;
    self->item_existance=item_existance_510;
    self->size=size_507;
    self->len=len_511;
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_512;
char* __result289__;
char* __result290__;
char* result_513;
char* __result291__;
result_512 = (void*)0;
result_513 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_512,0,sizeof(char*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_512;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_513,0,sizeof(char*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_513;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_515;
char* __result292__;
char* __result293__;
char* result_516;
char* __result294__;
result_515 = (void*)0;
result_516 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_515,0,sizeof(char*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_515;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_516,0,sizeof(char*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_516;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_519;
unsigned int it_520;
struct sType* __result295__;
struct sType* __result296__;
struct sType* __result297__;
struct sType* __result298__;
    hash_519=string_get_hash_key(((char*)key))%self->size;
    it_520=hash_519;
    while((_Bool)1) {
        if(        self->item_existance[it_520]) {
            if(            string_equals(self->keys[it_520],key)) {
                __result295__ = gComeFunResultObject = __result_obj__ = self->items[it_520];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            it_520++;
            if(            it_520>=self->size) {
                it_520=0;
            }
            else if(            it_520==hash_519) {
                __result296__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
        }
        else {
            __result297__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
    }
    __result298__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value477 = (void*)0;
struct list_item$1voidph* litem_529;
void* __dec_obj97;
void* __right_value478 = (void*)0;
struct list_item$1voidph* litem_530;
void* __dec_obj98;
void* __right_value479 = (void*)0;
struct list_item$1voidph* litem_531;
void* __dec_obj99;
struct list$1voidph* __result300__;
    if(    self->len==0) {
        litem_529=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value477=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_529->prev=((void*)0);
        litem_529->next=((void*)0);
        __dec_obj97=litem_529->item;
        litem_529->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_529;
        self->head=litem_529;
    }
    else if(    self->len==1) {
        litem_530=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value478=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_530->prev=self->head;
        litem_530->next=((void*)0);
        __dec_obj98=litem_530->item;
        litem_530->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_530;
        self->head->next=litem_530;
    }
    else {
        litem_531=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value479=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_531->prev=self->tail;
        litem_531->next=((void*)0);
        __dec_obj99=litem_531->item;
        litem_531->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_531;
        self->tail=litem_531;
    }
    self->len++;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj100;
struct sType* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj100=self->v1;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj101=self->v2;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result301__;
void* __right_value483 = (void*)0;
struct tuple2$2charphsTypeph* result_533;
void* __right_value484 = (void*)0;
char* __dec_obj102;
void* __right_value485 = (void*)0;
struct sType* __dec_obj103;
struct tuple2$2charphsTypeph* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_533=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj102=result_533->v1;
        result_533->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj103=result_533->v2;
        result_533->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_533;
    come_call_finalizer3(result_533,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_532;
    result_532=0;
    result_532+=int_get_hash_key(((int)self->v1));
    result_532+=int_get_hash_key(((int)self->v2));
    return result_532;
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
char* __dec_obj104;
struct sType* __dec_obj105;
struct tuple2$2charphsTypeph* __result303__;
    __dec_obj104=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj106;
struct sType* __dec_obj107;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj106=self->v1;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj107=self->v2;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void create_pico_version_header(){
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* Value_534;
_Bool _if_conditional4;
int version_major_535;
char* p_536;
int version_miner_537;
char* p_538;
int version_revision_539;
char* p_540;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* version_string_541;
int Value_542;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_534=(char*)come_increment_ref_count(charp_read((((char*)(__right_value509=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_534)),        (__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            version_major_535=0;
            p_536=strstr(Value_534,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_536) {
                p_536+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_536==32||*p_536==9) {
                    p_536++;
                }
                while(xisdigit(*p_536)) {
                    version_major_535=version_major_535*10+(*p_536-48);
                    p_536++;
                }
            }
            version_miner_537=0;
            p_538=strstr(Value_534,"set(PICO_SDK_VERSION_MINOR");
            if(            p_538) {
                p_538+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_538==32||*p_538==9) {
                    p_538++;
                }
                while(xisdigit(*p_538)) {
                    version_miner_537=version_miner_537*10+*p_538-48;
                    p_538++;
                }
            }
            version_revision_539=0;
            p_540=strstr(Value_534,"set(PICO_SDK_VERSION_REVISION");
            if(            p_540) {
                p_540+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_540==32||*p_540==9) {
                    p_540++;
                }
                while(xisdigit(*p_540)) {
                    version_revision_539=version_revision_539*10+*p_540-48;
                    p_540++;
                }
            }
            version_string_541=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value511=int_to_string(version_major_535))),((char*)(__right_value512=int_to_string(version_miner_537))),((char*)(__right_value513=int_to_string(version_revision_539)))));
            __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            Value_542=system("mkdir -p pico");
            if(            !Value_542) {
                charp_write(((char*)(__right_value519=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value515=int_to_string(version_major_535))),((char*)(__right_value516=int_to_string(version_miner_537))),((char*)(__right_value517=int_to_string(version_revision_539))),((char*)(__right_value518=string_to_string(version_string_541)))))),"pico/version.h",(_Bool)0);
                __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
            }
            version_string_541 = come_decrement_ref_count2(version_string_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
        }
        Value_534 = come_decrement_ref_count2(Value_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main_v2(int argc, char** argv){
int start_num_543;
void* __right_value520 = (void*)0;
char* output_file_name_str_544;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct buffer* clang_option_545;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct buffer* linker_option_546;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct buffer* cpp_option_547;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1charph* files_548;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1charph* object_files_549;
_Bool output_object_file_550;
_Bool output_cpp_file_551;
_Bool output_source_file_flag_552;
_Bool output_object_file_flag_553;
char* output_file_name_554;
_Bool verbose_555;
_Bool come_debug_556;
_Bool come_malloc_557;
_Bool m5stack_cpp_558;
_Bool pico_cpp_559;
_Bool gcc_compiler_560;
int i_561;
void* __right_value531 = (void*)0;
char* ext_name_562;
void* __right_value532 = (void*)0;
char* __dec_obj108;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* env_563;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct buffer* __dec_obj109;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* env_564;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct buffer* __dec_obj110;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool _elif_conditional1;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
_Bool _elif_conditional2;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
_Bool _elif_conditional3;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
int Value_565;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct _IO_FILE* Value_566;
_Bool __exception_result_var_b12;
void* __right_value618 = (void*)0;
char* tmp_file_567;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
int Value_568;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_569;
void* __right_value623 = (void*)0;
char* __dec_obj111;
void* __right_value624 = (void*)0;
char* __dec_obj112;
void* __right_value625 = (void*)0;
char* __dec_obj113;
void* __right_value626 = (void*)0;
char* __dec_obj114;
void* __right_value627 = (void*)0;
char* __dec_obj115;
void* __right_value628 = (void*)0;
void* __right_value634 = (void*)0;
struct map$2charphsFunph* __dec_obj134;
void* __right_value635 = (void*)0;
void* __right_value641 = (void*)0;
struct map$2charphbufferph* __dec_obj136;
void* __right_value642 = (void*)0;
void* __right_value648 = (void*)0;
struct map$2charphcharph* __dec_obj138;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct map$2charphbufferph* __dec_obj139;
void* __right_value651 = (void*)0;
void* __right_value657 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj151;
void* __right_value658 = (void*)0;
void* __right_value664 = (void*)0;
struct map$2charphsClassph* __dec_obj153;
void* __right_value665 = (void*)0;
void* __right_value671 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj159;
void* __right_value672 = (void*)0;
void* __right_value678 = (void*)0;
struct map$2charphsTypeph* __dec_obj161;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sModule* __dec_obj162;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1voidph* __dec_obj168;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1CVALUEph* __dec_obj174;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sVarTable* __dec_obj175;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sVarTable* lv_table_609;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1charph* __dec_obj176;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1charph* __dec_obj177;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct map$2charphsClassph* __dec_obj178;
void* __right_value695 = (void*)0;
void* __right_value701 = (void*)0;
struct map$2charphint* __dec_obj180;
void* __right_value702 = (void*)0;
char* __dec_obj181;
_Bool Value_616;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct buffer* __dec_obj183;
_Bool Value_617;
_Bool Value_618;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
_Bool Value_619;
_Bool Value_620;
_Bool Value_621;
_Bool Value_622;
_Bool Value_623;
_Bool Value_624;
_Bool Value_625;
_Bool Value_626;
int start_num_627;
char* output_file_name_str_628;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct buffer* clang_option_629;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct buffer* linker_option_630;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct buffer* cpp_option_631;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1charph* files_632;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1charph* object_files_633;
_Bool output_object_file_634;
_Bool output_cpp_file_635;
_Bool output_source_file_flag_636;
_Bool output_object_file_flag_637;
char* output_file_name_638;
_Bool verbose_639;
_Bool come_debug_640;
_Bool come_malloc_641;
_Bool m5stack_cpp_642;
_Bool pico_cpp_643;
_Bool gcc_compiler_644;
int i_645;
void* __right_value722 = (void*)0;
char* ext_name_646;
void* __right_value723 = (void*)0;
char* __dec_obj221;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
char* env_647;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* env_648;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* __dec_obj223;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
_Bool _elif_conditional4;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
_Bool _elif_conditional5;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
_Bool _elif_conditional6;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1charph* o2_saved_649;
char* it_650;
struct sInfo info_651;
struct _IO_FILE* Value_652;
void* __right_value808 = (void*)0;
char* __dec_obj224;
void* __right_value809 = (void*)0;
char* __dec_obj225;
void* __right_value810 = (void*)0;
char* __dec_obj226;
void* __right_value811 = (void*)0;
char* __dec_obj227;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct map$2charphsFunph* __dec_obj228;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct map$2charphbufferph* __dec_obj229;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct map$2charphcharph* __dec_obj230;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct map$2charphbufferph* __dec_obj231;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj232;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct map$2charphsClassph* __dec_obj233;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj234;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct map$2charphsTypeph* __dec_obj235;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sModule* __dec_obj236;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1voidph* __dec_obj237;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct list$1CVALUEph* __dec_obj238;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sVarTable* __dec_obj239;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sVarTable* lv_table_653;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct list$1charph* __dec_obj240;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct list$1charph* __dec_obj241;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct map$2charphsClassph* __dec_obj242;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct map$2charphint* __dec_obj243;
_Bool Value_654;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct buffer* __dec_obj244;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct buffer* __dec_obj245;
void* __right_value852 = (void*)0;
char* __dec_obj246;
char* __dec_obj247;
_Bool Value_655;
_Bool Value_656;
_Bool Value_657;
_Bool Value_658;
struct sInfo info_659;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
char* __dec_obj248;
void* __right_value855 = (void*)0;
char* __dec_obj249;
void* __right_value856 = (void*)0;
char* __dec_obj250;
void* __right_value857 = (void*)0;
char* __dec_obj251;
char* __dec_obj252;
_Bool Value_663;
memset(&info_569, 0, sizeof(struct sInfo));
memset(&info_651, 0, sizeof(struct sInfo));
memset(&info_659, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        start_num_543=2;
        output_file_name_str_544=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_545=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 728, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_547,"-U__GNUC__");
        files_548=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 730, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_549=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 731, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_550=(_Bool)0;
        output_cpp_file_551=(_Bool)0;
        output_source_file_flag_552=(_Bool)0;
        output_object_file_flag_553=(_Bool)1;
        output_file_name_554=(char*)come_increment_ref_count(output_file_name_str_544);
        verbose_555=(_Bool)0;
        come_debug_556=(_Bool)0;
        come_malloc_557=(_Bool)0;
        m5stack_cpp_558=(_Bool)0;
        pico_cpp_559=(_Bool)0;
        gcc_compiler_560=(_Bool)0;
        for(        i_561=start_num_543;        i_561<argc;        i_561++        ){
            ext_name_562=(char*)come_increment_ref_count(xextname(argv[i_561]));
            if(            charp_operator_equals(argv[i_561],"-o")&&i_561+1<argc) {
                __dec_obj108=output_file_name_554;
                output_file_name_554=(char*)come_increment_ref_count(__builtin_string(argv[i_561+1]));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_561++;
            }
            else if(            charp_operator_equals(argv[i_561],"-e")&&i_561+1<argc) {
                buffer_append_str(linker_option_546,((char*)(__right_value534=xsprintf("-e \%s",((char*)(__right_value533=charp_to_string(argv[i_561+1])))))));
                __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            charp_operator_equals(argv[i_561],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_547,((char*)(__right_value535=xsprintf(" -DENABLE_GC "))));
                __right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-gcc")) {
                gcc_compiler_560=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_561],"-pico")) {
                output_source_file_flag_552=(_Bool)1;
                output_object_file_flag_553=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_563=getenv("PICO_SDK_PATH");
                __dec_obj109=cpp_option_547;
                cpp_option_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 773, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_547,((char*)(__right_value540=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value538=charp_to_string(env_563))),((char*)(__right_value539=charp_to_string(env_563)))))));
                __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
                pico_cpp_559=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-m5stack")) {
                m5stack_cpp_558=(_Bool)1;
                output_source_file_flag_552=(_Bool)1;
                output_object_file_flag_553=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_564=getenv("IDF_PATH");
                __dec_obj110=cpp_option_547;
                cpp_option_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 784, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj110,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_547,((char*)(__right_value564=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value543=charp_to_string(getenv("HOME")))),((char*)(__right_value544=charp_to_string(env_564))),((char*)(__right_value545=charp_to_string(env_564))),((char*)(__right_value546=charp_to_string(env_564))),((char*)(__right_value547=charp_to_string(env_564))),((char*)(__right_value548=charp_to_string(env_564))),((char*)(__right_value549=charp_to_string(env_564))),((char*)(__right_value550=charp_to_string(env_564))),((char*)(__right_value551=charp_to_string(env_564))),((char*)(__right_value552=charp_to_string(env_564))),((char*)(__right_value553=charp_to_string(env_564))),((char*)(__right_value554=charp_to_string(env_564))),((char*)(__right_value555=charp_to_string(env_564))),((char*)(__right_value556=charp_to_string(env_564))),((char*)(__right_value557=charp_to_string(env_564))),((char*)(__right_value558=charp_to_string(env_564))),((char*)(__right_value559=charp_to_string(env_564))),((char*)(__right_value560=charp_to_string(env_564))),((char*)(__right_value561=charp_to_string(env_564))),((char*)(__right_value562=charp_to_string(env_564))),((char*)(__right_value563=charp_to_string(env_564)))))),"/usr/local/");
                __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-target")) {
                buffer_append_str(clang_option_545,((char*)(__right_value566=xsprintf("-target \%s",((char*)(__right_value565=charp_to_string(argv[i_561+1])))))));
                __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-T")) {
                buffer_append_str(clang_option_545,((char*)(__right_value568=xsprintf(" -T \%s ",((char*)(__right_value567=charp_to_string(argv[i_561+1])))))));
                __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            charp_operator_equals(argv[i_561],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-cg")) {
                come_debug_556=(_Bool)1;
                buffer_append_str(clang_option_545,"-g ");
            }
            else if(            charp_operator_equals(argv[i_561],"-C")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value570=xsprintf("\%s ",((char*)(__right_value569=charp_to_string(argv[i_561])))))));
                __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-M")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value572=xsprintf("\%s ",((char*)(__right_value571=charp_to_string(argv[i_561])))))));
                __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-MM")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value574=xsprintf("\%s ",((char*)(__right_value573=charp_to_string(argv[i_561])))))));
                __right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-dM")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value576=xsprintf("\%s ",((char*)(__right_value575=charp_to_string(argv[i_561])))))));
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-dD")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value578=xsprintf("\%s ",((char*)(__right_value577=charp_to_string(argv[i_561])))))));
                __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-H")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value580=xsprintf("\%s ",((char*)(__right_value579=charp_to_string(argv[i_561])))))));
                __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-P")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value582=xsprintf("\%s ",((char*)(__right_value581=charp_to_string(argv[i_561])))))));
                __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-nostdinc")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value584=xsprintf("\%s ",((char*)(__right_value583=charp_to_string(argv[i_561])))))));
                __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-CC")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value586=xsprintf("\%s ",((char*)(__right_value585=charp_to_string(argv[i_561])))))));
                __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-target")) {
                buffer_append_str(clang_option_545,((char*)(__right_value588=xsprintf("-target \%s",((char*)(__right_value587=charp_to_string(argv[i_561+1])))))));
                __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-include")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value590=xsprintf("-iclude \%s",((char*)(__right_value589=charp_to_string(argv[i_561+1])))))));
                __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-isystem")) {
                buffer_append_str(cpp_option_547,((char*)(__right_value592=xsprintf("-isystem \%s",((char*)(__right_value591=charp_to_string(argv[i_561+1])))))));
                __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_545,((char*)(__right_value594=xsprintf("-isystem \%s",((char*)(__right_value593=charp_to_string(argv[i_561+1])))))));
                __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            i_561+1<argc&&charp_operator_equals(argv[i_561],"-T")) {
                buffer_append_str(clang_option_545,((char*)(__right_value596=xsprintf(" -T \%s ",((char*)(__right_value595=charp_to_string(argv[i_561+1])))))));
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_561++;
            }
            else if(            charp_operator_equals(argv[i_561],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value597=charp_operator_load_range_element(argv[i_561],0,2))),"-O"))),            (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_545,((char*)(__right_value599=xsprintf(" \%s ",((char*)(__right_value598=charp_to_string(argv[i_561])))))));
                __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_556=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value600=charp_operator_load_range_element(argv[i_561],0,2))),"-D"))),            (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_547,((char*)(__right_value602=xsprintf(" \%s ",((char*)(__right_value601=charp_to_string(argv[i_561])))))));
                __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_545,((char*)(__right_value604=xsprintf(" \%s ",((char*)(__right_value603=charp_to_string(argv[i_561])))))));
                __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value605=charp_operator_load_range_element(argv[i_561],0,2))),"-U"))),            (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_547,((char*)(__right_value607=xsprintf(" \%s ",((char*)(__right_value606=charp_to_string(argv[i_561])))))));
                __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_545,((char*)(__right_value609=xsprintf(" \%s ",((char*)(__right_value608=charp_to_string(argv[i_561])))))));
                __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-g")) {
                buffer_append_str(clang_option_545,"-g ");
            }
            else if(            charp_operator_equals(argv[i_561],"-v")) {
                buffer_append_str(clang_option_545,"-v ");
                buffer_append_str(cpp_option_547,"-v ");
                verbose_555=(_Bool)1;
            }
            else if(            strlen(argv[i_561])>=2&&memcmp(argv[i_561],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_547,((char*)(__right_value611=charp_operator_add(" ",((char*)(__right_value610=charp_operator_add(argv[i_561]," ")))))));
                __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_561],"-gdwarf-4")) {
                buffer_append_str(clang_option_545,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_561],"-s")||charp_operator_equals(argv[i_561],"-S")) {
                output_source_file_flag_552=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_561],"-c")) {
                output_object_file_550=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_561],"-E")) {
                output_cpp_file_551=(_Bool)1;
            }
            else if(            argv[i_561][0]==45) {
                buffer_append_str(clang_option_545,((char*)(__right_value612=charp_operator_add(argv[i_561]," "))));
                __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_561])>2&&memcmp(argv[i_561]+strlen(argv[i_561])-2,".o",2)==0) {
                list$1charphp_push_back(object_files_549,(char*)come_increment_ref_count(__builtin_string(argv[i_561])));
            }
            else if(            strlen(argv[i_561])>2&&memcmp(argv[i_561]+strlen(argv[i_561])-2,".a",2)==0) {
                list$1charphp_push_back(object_files_549,(char*)come_increment_ref_count(__builtin_string(argv[i_561])));
            }
            else if(            string_operator_equals(ext_name_562,"c")) {
                list$1charphp_push_back(files_548,(char*)come_increment_ref_count(__builtin_string(argv[i_561])));
            }
            else {
                buffer_append_str(clang_option_545,((char*)(__right_value616=charp_operator_add(argv[i_561]," "))));
                __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            ext_name_562 = come_decrement_ref_count2(ext_name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        gComeDebug=come_debug_556;
        gComeMalloc=come_malloc_557;
        Value_565=system(((char*)(__right_value617=xsprintf("%s %s",RM,output_file_name_554))));
        if(        (_if_conditional5=(Value_565<0)),        (__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 925, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_566=fopen(output_file_name_554,"w");
        if(        Value_566) {
            fclose(Value_566);
        }
        else {
            (come_push_stackframe("02transpile.c", 932, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_567=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_568=system(((char*)(__right_value622=xsprintf("cat \%s > \%s",((char*)(__right_value620=string_to_string(((char*)(__right_value619=list$1charphp_join(files_548," ")))))),((char*)(__right_value621=string_to_string(tmp_file_567)))))));
        if(        (_if_conditional6=(Value_568<0)),        (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 938, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_569,0,sizeof(struct sInfo));
        __dec_obj111=info_569.base_sname;
        info_569.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_567));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj112=info_569.sname;
        info_569.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_567));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_569.sline=1;
        info_569.err_num=0;
        __dec_obj113=info_569.clang_option;
        info_569.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_545));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=info_569.cpp_option;
        info_569.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_547));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj115=info_569.linker_option;
        info_569.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_546));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_569.no_output_err=(_Bool)0;
        __dec_obj134=info_569.funcs;
        info_569.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunphp_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 953, "struct map$2charphsFunph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj134,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj136=info_569.struct_definition;
        info_569.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 954, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj136,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj138=info_569.uniq_definition;
        info_569.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 955, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj138,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj139=info_569.previous_struct_definition;
        info_569.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 956, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj139,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj151=info_569.generics_funcs;
        info_569.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunphp_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 957, "struct map$2charphsGenericsFunph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj151,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj153=info_569.classes;
        info_569.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 958, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj153,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj159=info_569.modules;
        info_569.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModulephp_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 959, "struct map$2charphsClassModuleph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj159,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj161=info_569.types;
        info_569.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypephp_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 960, "struct map$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj161,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj162=info_569.module;
        info_569.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 961, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj162,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj168=info_569.right_value_objects;
        info_569.right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "02transpile.c", 962, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj174=info_569.stack;
        info_569.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 963, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj174,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj175=info_569.gv_table;
        info_569.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 964, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj175,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_609=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 965, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
        info_569.lv_table=lv_table_609;
        __dec_obj176=info_569.generics_type_names;
        info_569.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 967, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj176,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj177=info_569.method_generics_type_names;
        info_569.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 968, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj177,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj178=info_569.generics_classes;
        info_569.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 969, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj178,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_569.verbose=verbose_555;
        info_569.output_header_file=(_Bool)1;
        __dec_obj180=info_569.outputed_class;
        info_569.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphintp_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 972, "struct map$2charphint*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj180,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
        static int n_615=0;
        info_569.num_source_files=n_615++;
        info_569.max_source_files=list$1charphp_length(files_548);
        __dec_obj181=info_569.output_file_name;
        info_569.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_554));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_569);
        clear_tmp_file(&info_569);
        Value_616=cpp(&info_569);
        if(        !Value_616) {
            printf("%s %d: transpile failed\n",info_569.sname,info_569.sline);
            system(((char*)(__right_value703=xsprintf("%s %s*",RM,tmp_file_567))));
            __right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exit(2);
        }
        else {
        }
        __dec_obj182=info_569.original_source;
        info_569.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value705=charp_read(((char*)(__right_value704=xsprintf("%s",tmp_file_567))))))));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj183=info_569.source;
        info_569.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value708=charp_read(((char*)(__right_value707=xsprintf("%s.i",tmp_file_567))))))));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value708 = come_decrement_ref_count2(__right_value708, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_569.p=info_569.source->buf;
        info_569.head=info_569.source->buf;
        Value_617=output_cpp_file_551;
        if(        !Value_617) {
            transpile_v5(&info_569);
            Value_618=output_header_file(&info_569);
            if(            !Value_618) {
                printf("%s %d: output source file faield\n",info_569.sname,info_569.sline);
                system(((char*)(__right_value710=xsprintf("%s %s*",RM,tmp_file_567))));
                __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value711=xsprintf("%s %s*",RM,tmp_file_567))));
        __right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        output_file_name_str_544 = come_decrement_ref_count2(output_file_name_str_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_554 = come_decrement_ref_count2(output_file_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_567 = come_decrement_ref_count2(tmp_file_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_569),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_609,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_619=new_project(argc,argv);
        if(        !Value_619) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_620=run_project(argc,argv);
        if(        !Value_620) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_621=make_header_project(argc,argv);
        if(        !Value_621) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_622=compile_project(argc,argv);
        if(        !Value_622) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_623=debug_run_project(argc,argv);
        if(        !Value_623) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_624=clean_project(argc,argv);
        if(        !Value_624) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_625=install_project(argc,argv,"/usr/local");
            if(            !Value_625) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_626=install_project(argc,argv,argv[2]);
            if(            !Value_626) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        gProgramName=argv[0];
        start_num_627=1;
        output_file_name_str_628=((void*)0);
        clang_option_629=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        linker_option_630=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        cpp_option_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 728, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_631,"-U__GNUC__");
        files_632=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 730, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        object_files_633=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 731, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        output_object_file_634=(_Bool)0;
        output_cpp_file_635=(_Bool)0;
        output_source_file_flag_636=(_Bool)0;
        output_object_file_flag_637=(_Bool)1;
        output_file_name_638=(char*)come_increment_ref_count(output_file_name_str_628);
        verbose_639=(_Bool)0;
        come_debug_640=(_Bool)0;
        come_malloc_641=(_Bool)0;
        m5stack_cpp_642=(_Bool)0;
        pico_cpp_643=(_Bool)0;
        gcc_compiler_644=(_Bool)0;
        for(        i_645=start_num_627;        i_645<argc;        i_645++        ){
            ext_name_646=(char*)come_increment_ref_count(xextname(argv[i_645]));
            if(            charp_operator_equals(argv[i_645],"-o")&&i_645+1<argc) {
                __dec_obj221=output_file_name_638;
                output_file_name_638=(char*)come_increment_ref_count(__builtin_string(argv[i_645+1]));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_645++;
            }
            else if(            charp_operator_equals(argv[i_645],"-e")&&i_645+1<argc) {
                buffer_append_str(linker_option_630,((char*)(__right_value725=xsprintf("-e \%s",((char*)(__right_value724=charp_to_string(argv[i_645+1])))))));
                __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            charp_operator_equals(argv[i_645],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_631,((char*)(__right_value726=xsprintf(" -DENABLE_GC "))));
                __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-gcc")) {
                gcc_compiler_644=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_645],"-pico")) {
                output_source_file_flag_636=(_Bool)1;
                output_object_file_flag_637=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_647=getenv("PICO_SDK_PATH");
                __dec_obj222=cpp_option_631;
                cpp_option_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 773, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_631,((char*)(__right_value731=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value729=charp_to_string(env_647))),((char*)(__right_value730=charp_to_string(env_647)))))));
                __right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
                pico_cpp_643=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-m5stack")) {
                m5stack_cpp_642=(_Bool)1;
                output_source_file_flag_636=(_Bool)1;
                output_object_file_flag_637=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_648=getenv("IDF_PATH");
                __dec_obj223=cpp_option_631;
                cpp_option_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 784, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj223,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_631,((char*)(__right_value755=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value734=charp_to_string(getenv("HOME")))),((char*)(__right_value735=charp_to_string(env_648))),((char*)(__right_value736=charp_to_string(env_648))),((char*)(__right_value737=charp_to_string(env_648))),((char*)(__right_value738=charp_to_string(env_648))),((char*)(__right_value739=charp_to_string(env_648))),((char*)(__right_value740=charp_to_string(env_648))),((char*)(__right_value741=charp_to_string(env_648))),((char*)(__right_value742=charp_to_string(env_648))),((char*)(__right_value743=charp_to_string(env_648))),((char*)(__right_value744=charp_to_string(env_648))),((char*)(__right_value745=charp_to_string(env_648))),((char*)(__right_value746=charp_to_string(env_648))),((char*)(__right_value747=charp_to_string(env_648))),((char*)(__right_value748=charp_to_string(env_648))),((char*)(__right_value749=charp_to_string(env_648))),((char*)(__right_value750=charp_to_string(env_648))),((char*)(__right_value751=charp_to_string(env_648))),((char*)(__right_value752=charp_to_string(env_648))),((char*)(__right_value753=charp_to_string(env_648))),((char*)(__right_value754=charp_to_string(env_648)))))),"/usr/local/");
                __right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-target")) {
                buffer_append_str(clang_option_629,((char*)(__right_value757=xsprintf("-target \%s",((char*)(__right_value756=charp_to_string(argv[i_645+1])))))));
                __right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-T")) {
                buffer_append_str(clang_option_629,((char*)(__right_value759=xsprintf(" -T \%s ",((char*)(__right_value758=charp_to_string(argv[i_645+1])))))));
                __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            charp_operator_equals(argv[i_645],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-cg")) {
                come_debug_640=(_Bool)1;
                buffer_append_str(clang_option_629,"-g ");
            }
            else if(            charp_operator_equals(argv[i_645],"-C")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value761=xsprintf("\%s ",((char*)(__right_value760=charp_to_string(argv[i_645])))))));
                __right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-M")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value763=xsprintf("\%s ",((char*)(__right_value762=charp_to_string(argv[i_645])))))));
                __right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-MM")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value765=xsprintf("\%s ",((char*)(__right_value764=charp_to_string(argv[i_645])))))));
                __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-dM")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value767=xsprintf("\%s ",((char*)(__right_value766=charp_to_string(argv[i_645])))))));
                __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-dD")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value769=xsprintf("\%s ",((char*)(__right_value768=charp_to_string(argv[i_645])))))));
                __right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-H")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value771=xsprintf("\%s ",((char*)(__right_value770=charp_to_string(argv[i_645])))))));
                __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-P")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value773=xsprintf("\%s ",((char*)(__right_value772=charp_to_string(argv[i_645])))))));
                __right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-nostdinc")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value775=xsprintf("\%s ",((char*)(__right_value774=charp_to_string(argv[i_645])))))));
                __right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-CC")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value777=xsprintf("\%s ",((char*)(__right_value776=charp_to_string(argv[i_645])))))));
                __right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-target")) {
                buffer_append_str(clang_option_629,((char*)(__right_value779=xsprintf("-target \%s",((char*)(__right_value778=charp_to_string(argv[i_645+1])))))));
                __right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-include")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value781=xsprintf("-iclude \%s",((char*)(__right_value780=charp_to_string(argv[i_645+1])))))));
                __right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-isystem")) {
                buffer_append_str(cpp_option_631,((char*)(__right_value783=xsprintf("-isystem \%s",((char*)(__right_value782=charp_to_string(argv[i_645+1])))))));
                __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_629,((char*)(__right_value785=xsprintf("-isystem \%s",((char*)(__right_value784=charp_to_string(argv[i_645+1])))))));
                __right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            i_645+1<argc&&charp_operator_equals(argv[i_645],"-T")) {
                buffer_append_str(clang_option_629,((char*)(__right_value787=xsprintf(" -T \%s ",((char*)(__right_value786=charp_to_string(argv[i_645+1])))))));
                __right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_645++;
            }
            else if(            charp_operator_equals(argv[i_645],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value788=charp_operator_load_range_element(argv[i_645],0,2))),"-O"))),            (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_629,((char*)(__right_value790=xsprintf(" \%s ",((char*)(__right_value789=charp_to_string(argv[i_645])))))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_640=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value791=charp_operator_load_range_element(argv[i_645],0,2))),"-D"))),            (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_631,((char*)(__right_value793=xsprintf(" \%s ",((char*)(__right_value792=charp_to_string(argv[i_645])))))));
                __right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_629,((char*)(__right_value795=xsprintf(" \%s ",((char*)(__right_value794=charp_to_string(argv[i_645])))))));
                __right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value796=charp_operator_load_range_element(argv[i_645],0,2))),"-U"))),            (__right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_631,((char*)(__right_value798=xsprintf(" \%s ",((char*)(__right_value797=charp_to_string(argv[i_645])))))));
                __right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_629,((char*)(__right_value800=xsprintf(" \%s ",((char*)(__right_value799=charp_to_string(argv[i_645])))))));
                __right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-g")) {
                buffer_append_str(clang_option_629,"-g ");
            }
            else if(            charp_operator_equals(argv[i_645],"-v")) {
                buffer_append_str(clang_option_629,"-v ");
                buffer_append_str(cpp_option_631,"-v ");
                verbose_639=(_Bool)1;
            }
            else if(            strlen(argv[i_645])>=2&&memcmp(argv[i_645],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_631,((char*)(__right_value802=charp_operator_add(" ",((char*)(__right_value801=charp_operator_add(argv[i_645]," ")))))));
                __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_645],"-gdwarf-4")) {
                buffer_append_str(clang_option_629,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_645],"-s")||charp_operator_equals(argv[i_645],"-S")) {
                output_source_file_flag_636=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_645],"-c")) {
                output_object_file_634=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_645],"-E")) {
                output_cpp_file_635=(_Bool)1;
            }
            else if(            argv[i_645][0]==45) {
                buffer_append_str(clang_option_629,((char*)(__right_value803=charp_operator_add(argv[i_645]," "))));
                __right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_645])>2&&memcmp(argv[i_645]+strlen(argv[i_645])-2,".o",2)==0) {
                list$1charphp_push_back(object_files_633,(char*)come_increment_ref_count(__builtin_string(argv[i_645])));
            }
            else if(            strlen(argv[i_645])>2&&memcmp(argv[i_645]+strlen(argv[i_645])-2,".a",2)==0) {
                list$1charphp_push_back(object_files_633,(char*)come_increment_ref_count(__builtin_string(argv[i_645])));
            }
            else if(            string_operator_equals(ext_name_646,"c")) {
                list$1charphp_push_back(files_632,(char*)come_increment_ref_count(__builtin_string(argv[i_645])));
            }
            else {
                buffer_append_str(clang_option_629,((char*)(__right_value807=charp_operator_add(argv[i_645]," "))));
                __right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            ext_name_646 = come_decrement_ref_count2(ext_name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        gComeDebug=come_debug_640;
        gComeMalloc=come_malloc_641;
        for(        o2_saved_649=(struct list$1charph*)come_increment_ref_count((files_632)),it_650=list$1charphp_begin((o2_saved_649));        !list$1charphp_end((o2_saved_649));        it_650=list$1charphp_next((o2_saved_649))        ){
            memset(&info_651,0,sizeof(struct sInfo));
            Value_652=fopen(it_650,"r");
            if(            Value_652) {
                fclose(Value_652);
            }
            else {
                come_call_finalizer3((&info_651),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj224=info_651.sname;
            info_651.sname=(char*)come_increment_ref_count(__builtin_string(it_650));
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_651.sline=1;
            info_651.err_num=0;
            __dec_obj225=info_651.clang_option;
            info_651.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_629));
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj226=info_651.cpp_option;
            info_651.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_631));
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj227=info_651.linker_option;
            info_651.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_630));
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_651.no_output_err=(_Bool)0;
            __dec_obj228=info_651.funcs;
            info_651.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunphp_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 1075, "struct map$2charphsFunph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj228,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj229=info_651.struct_definition;
            info_651.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1076, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj229,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj230=info_651.uniq_definition;
            info_651.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 1077, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj230,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj231=info_651.previous_struct_definition;
            info_651.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1078, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj231,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj232=info_651.generics_funcs;
            info_651.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunphp_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 1079, "struct map$2charphsGenericsFunph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj232,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj233=info_651.classes;
            info_651.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1080, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj233,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj234=info_651.modules;
            info_651.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModulephp_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 1081, "struct map$2charphsClassModuleph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj234,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj235=info_651.types;
            info_651.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypephp_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 1082, "struct map$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj235,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj236=info_651.module;
            info_651.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1083, "struct sModule*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj236,sModule_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj237=info_651.right_value_objects;
            info_651.right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "02transpile.c", 1084, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj237,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj238=info_651.stack;
            info_651.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 1085, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj238,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj239=info_651.gv_table;
            info_651.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1086, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj239,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            lv_table_653=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1087, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
            info_651.lv_table=lv_table_653;
            __dec_obj240=info_651.generics_type_names;
            info_651.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1089, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj241=info_651.method_generics_type_names;
            info_651.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1090, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj242=info_651.generics_classes;
            info_651.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1091, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj242,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            info_651.verbose=verbose_639;
            __dec_obj243=info_651.outputed_class;
            info_651.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphintp_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 1093, "struct map$2charphint*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj243,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
            info_651.m5stack_cpp=m5stack_cpp_642;
            info_651.pico_cpp=pico_cpp_643;
            info_651.gcc_compiler=gcc_compiler_644;
            init_classes(&info_651);
            clear_tmp_file(&info_651);
            Value_654=cpp(&info_651);
            if(            !Value_654) {
                printf("%s %d: transpile failed\n",info_651.sname,info_651.sline);
                exit(2);
            }
            else {
            }
            __dec_obj244=info_651.original_source;
            info_651.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value847=charp_read(((char*)(__right_value846=xsprintf("%s",it_650))))))));
            come_call_finalizer3(__dec_obj244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value847 = come_decrement_ref_count2(__right_value847, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj245=info_651.source;
            info_651.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value850=charp_read(((char*)(__right_value849=xsprintf("%s.i",it_650))))))));
            come_call_finalizer3(__dec_obj245,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value849 = come_decrement_ref_count2(__right_value849, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value850 = come_decrement_ref_count2(__right_value850, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info_651.p=info_651.source->buf;
            info_651.head=info_651.source->buf;
            if(            output_file_name_638) {
                __dec_obj246=info_651.output_file_name;
                info_651.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_638));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj247=info_651.output_file_name;
                info_651.output_file_name=((void*)0);
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_655=output_cpp_file_635;
            if(            !Value_655) {
                transpile_v5(&info_651);
                Value_656=output_source_file_v3(&info_651);
                if(                !Value_656) {
                    printf("%s %d: output source file faield\n",info_651.sname,info_651.sline);
                    exit(2);
                }
                else {
                }
                if(                info_651.err_num>0) {
                    printf("transpile error. err num %d\n",info_651.err_num);
                    exit(2);
                }
                else {
                    Value_657=output_object_file_flag_637;
                    if(                    Value_657) {
                        Value_658=compile(&info_651,output_object_file_634,object_files_633);
                        if(                        !Value_658) {
                            printf("%s %d: compile faield\n",info_651.sname,info_651.sline);
                            exit(27);
                        }
                        else {
                        }
                    }
                    else {
                    }
                }
            }
            else {
            }
            if(            output_cpp_file_635) {
            }
            else if(            info_651.err_num>0) {
            }
            else if(            output_source_file_flag_636) {
                clear_tmp_file_without_object_file_and_ccfile(&info_651);
            }
            else {
                clear_tmp_file_without_object_file(&info_651);
            }
            come_call_finalizer3((&info_651),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3(lv_table_653,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_634&&!output_cpp_file_635&&(list$1charphp_length(files_632)>0||list$1charphp_length(object_files_633)>0)) {
            memset(&info_659,0,sizeof(struct sInfo));
            __dec_obj248=info_659.sname;
            info_659.sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value853=list$1charphp_operator_load_element(files_632,0)))));
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value853 = come_decrement_ref_count2(__right_value853, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj249=info_659.clang_option;
            info_659.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_629));
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj250=info_659.linker_option;
            info_659.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_630));
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_659.verbose=verbose_639;
            if(            output_file_name_638) {
                __dec_obj251=info_659.output_file_name;
                info_659.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_638));
                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj252=info_659.output_file_name;
                info_659.output_file_name=((void*)0);
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_637) {
                Value_663=linker(&info_659,object_files_633);
                if(                !Value_663) {
                    printf("%s %d: linker faield\n",info_659.sname,info_659.sline);
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_635&&!output_source_file_flag_636) {
                clear_tmp_file(&info_659);
            }
            come_call_finalizer3((&info_659),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        output_file_name_str_628 = come_decrement_ref_count2(output_file_name_str_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_629,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_630,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_633,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_638 = come_decrement_ref_count2(output_file_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
int i_570;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1charp* __dec_obj116;
struct map$2charphsFunph* __result305__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value629=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value630=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 2581, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value631=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_570=0;    i_570<128;    i_570++    ){
        self->item_existance[i_570]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj116=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj116,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result304__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_571;
int i_572;
    for(    i_571=0;    i_571<self->size;    i_571++    ){
        if(        self->item_existance[i_571]) {
            if(            1) {
                come_call_finalizer3(self->items[i_571],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_572=0;    i_572<self->size;    i_572++    ){
        if(        self->item_existance[i_572]) {
            if(            1) {
                self->keys[i_572] = come_decrement_ref_count2(self->keys[i_572], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj117;
struct sType* __dec_obj118;
struct list$1voidph* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
struct sType* __dec_obj122;
struct sBlock* __dec_obj123;
struct buffer* __dec_obj126;
struct buffer* __dec_obj127;
struct buffer* __dec_obj128;
struct buffer* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj118=self->mResultType;
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj119=self->mParamTypes;
            come_call_finalizer3(__dec_obj119,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj120=self->mParamNames;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj121=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj122=self->mLambdaType;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj123=self->mBlock;
            come_call_finalizer3(__dec_obj123,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj126=self->mSource;
            come_call_finalizer3(__dec_obj126,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj127=self->mSourceHead;
            come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj128=self->mSourceHead2;
            come_call_finalizer3(__dec_obj128,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj129=self->mSourceDefer;
            come_call_finalizer3(__dec_obj129,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj130=self->mComeHeader;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj131=self->mDeclareSName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj132=self->mAttribute;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj133=self->mFunAttribute;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj124;
struct sVarTable* __dec_obj125;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj124=self->mNodes;
            come_call_finalizer3(__dec_obj124,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj125=self->mVarTable;
            come_call_finalizer3(__dec_obj125,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_573;
int i_574;
    for(    i_573=0;    i_573<self->size;    i_573++    ){
        if(        self->item_existance[i_573]) {
            if(            1) {
                come_call_finalizer3(self->items[i_573],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_574=0;    i_574<self->size;    i_574++    ){
        if(        self->item_existance[i_574]) {
            if(            1) {
                self->keys[i_574] = come_decrement_ref_count2(self->keys[i_574], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphbufferph* map$2charphbufferphp_initialize(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
int i_575;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1charp* __dec_obj135;
struct map$2charphbufferph* __result306__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value636=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value637=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 2581, "struct buffer**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value638=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_575=0;    i_575<128;    i_575++    ){
        self->item_existance[i_575]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj135=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj135,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphbufferphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self){
int i_576;
int i_577;
    for(    i_576=0;    i_576<self->size;    i_576++    ){
        if(        self->item_existance[i_576]) {
            if(            1) {
                come_call_finalizer3(self->items[i_576],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_577=0;    i_577<self->size;    i_577++    ){
        if(        self->item_existance[i_577]) {
            if(            1) {
                self->keys[i_577] = come_decrement_ref_count2(self->keys[i_577], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphbufferph_finalize(struct map$2charphbufferph* self){
int i_578;
int i_579;
    for(    i_578=0;    i_578<self->size;    i_578++    ){
        if(        self->item_existance[i_578]) {
            if(            1) {
                come_call_finalizer3(self->items[i_578],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_579=0;    i_579<self->size;    i_579++    ){
        if(        self->item_existance[i_579]) {
            if(            1) {
                self->keys[i_579] = come_decrement_ref_count2(self->keys[i_579], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
int i_580;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1charp* __dec_obj137;
struct map$2charphcharph* __result307__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value643=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value644=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2581, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value645=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_580=0;    i_580<128;    i_580++    ){
        self->item_existance[i_580]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj137=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj137,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_581;
int i_582;
    for(    i_581=0;    i_581<self->size;    i_581++    ){
        if(        self->item_existance[i_581]) {
            if(            1) {
                self->items[i_581] = come_decrement_ref_count2(self->items[i_581], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_582=0;    i_582<self->size;    i_582++    ){
        if(        self->item_existance[i_582]) {
            if(            1) {
                self->keys[i_582] = come_decrement_ref_count2(self->keys[i_582], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_583;
int i_584;
    for(    i_583=0;    i_583<self->size;    i_583++    ){
        if(        self->item_existance[i_583]) {
            if(            1) {
                self->items[i_583] = come_decrement_ref_count2(self->items[i_583], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_584=0;    i_584<self->size;    i_584++    ){
        if(        self->item_existance[i_584]) {
            if(            1) {
                self->keys[i_584] = come_decrement_ref_count2(self->keys[i_584], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
int i_585;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charp* __dec_obj140;
struct map$2charphsGenericsFunph* __result308__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value652=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value653=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 2581, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value654=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_585=0;    i_585<128;    i_585++    ){
        self->item_existance[i_585]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj140,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_586;
int i_587;
    for(    i_586=0;    i_586<self->size;    i_586++    ){
        if(        self->item_existance[i_586]) {
            if(            1) {
                come_call_finalizer3(self->items[i_586],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_587=0;    i_587<self->size;    i_587++    ){
        if(        self->item_existance[i_587]) {
            if(            1) {
                self->keys[i_587] = come_decrement_ref_count2(self->keys[i_587], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj141;
struct list$1charph* __dec_obj142;
struct list$1charph* __dec_obj143;
char* __dec_obj144;
struct sType* __dec_obj145;
struct list$1voidph* __dec_obj146;
struct list$1charph* __dec_obj147;
struct list$1charph* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj141=self->mImplType;
            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj142=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj142,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj143=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj143,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj144=self->mName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj145=self->mResultType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj146=self->mParamTypes;
            come_call_finalizer3(__dec_obj146,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj147=self->mParamNames;
            come_call_finalizer3(__dec_obj147,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj148=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj148,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj149=self->mBlock;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj150=self->mGenericsSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_588;
int i_589;
    for(    i_588=0;    i_588<self->size;    i_588++    ){
        if(        self->item_existance[i_588]) {
            if(            1) {
                come_call_finalizer3(self->items[i_588],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_589=0;    i_589<self->size;    i_589++    ){
        if(        self->item_existance[i_589]) {
            if(            1) {
                self->keys[i_589] = come_decrement_ref_count2(self->keys[i_589], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
int i_590;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charp* __dec_obj152;
struct map$2charphsClassph* __result309__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value659=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value660=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 2581, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value661=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_590=0;    i_590<128;    i_590++    ){
        self->item_existance[i_590]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj152=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj152,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_591;
int i_592;
    for(    i_591=0;    i_591<self->size;    i_591++    ){
        if(        self->item_existance[i_591]) {
            if(            1) {
                come_call_finalizer3(self->items[i_591],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_592=0;    i_592<self->size;    i_592++    ){
        if(        self->item_existance[i_592]) {
            if(            1) {
                self->keys[i_592] = come_decrement_ref_count2(self->keys[i_592], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_593;
int i_594;
    for(    i_593=0;    i_593<self->size;    i_593++    ){
        if(        self->item_existance[i_593]) {
            if(            1) {
                come_call_finalizer3(self->items[i_593],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_594=0;    i_594<self->size;    i_594++    ){
        if(        self->item_existance[i_594]) {
            if(            1) {
                self->keys[i_594] = come_decrement_ref_count2(self->keys[i_594], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModulephp_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
int i_595;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charp* __dec_obj154;
struct map$2charphsClassModuleph* __result310__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value666=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value667=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 2581, "struct sClassModule**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value668=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_595=0;    i_595<128;    i_595++    ){
        self->item_existance[i_595]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj154=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj154,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_596;
int i_597;
    for(    i_596=0;    i_596<self->size;    i_596++    ){
        if(        self->item_existance[i_596]) {
            if(            1) {
                come_call_finalizer3(self->items[i_596],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_597=0;    i_597<self->size;    i_597++    ){
        if(        self->item_existance[i_597]) {
            if(            1) {
                self->keys[i_597] = come_decrement_ref_count2(self->keys[i_597], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj155;
char* __dec_obj156;
struct list$1charph* __dec_obj157;
char* __dec_obj158;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj155=self->mName;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj156=self->mText;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj157=self->mParams;
            come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj158=self->mSName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_598;
int i_599;
    for(    i_598=0;    i_598<self->size;    i_598++    ){
        if(        self->item_existance[i_598]) {
            if(            1) {
                come_call_finalizer3(self->items[i_598],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_599=0;    i_599<self->size;    i_599++    ){
        if(        self->item_existance[i_599]) {
            if(            1) {
                self->keys[i_599] = come_decrement_ref_count2(self->keys[i_599], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
int i_600;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1charp* __dec_obj160;
struct map$2charphsTypeph* __result311__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value673=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value674=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 2581, "struct sType**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value675=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_600=0;    i_600<128;    i_600++    ){
        self->item_existance[i_600]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj160=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj160,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_601;
int i_602;
    for(    i_601=0;    i_601<self->size;    i_601++    ){
        if(        self->item_existance[i_601]) {
            if(            1) {
                come_call_finalizer3(self->items[i_601],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_602=0;    i_602<self->size;    i_602++    ){
        if(        self->item_existance[i_602]) {
            if(            1) {
                self->keys[i_602] = come_decrement_ref_count2(self->keys[i_602], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_603;
int i_604;
    for(    i_603=0;    i_603<self->size;    i_603++    ){
        if(        self->item_existance[i_603]) {
            if(            1) {
                come_call_finalizer3(self->items[i_603],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_604=0;    i_604<self->size;    i_604++    ){
        if(        self->item_existance[i_604]) {
            if(            1) {
                self->keys[i_604] = come_decrement_ref_count2(self->keys[i_604], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj163;
struct buffer* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
struct buffer* __dec_obj167;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj163=self->mSourceHead;
            come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj164=self->mSource;
            come_call_finalizer3(__dec_obj164,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj165=self->mLastCode;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj166=self->mLastCode2;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj167=self->mHeader;
            come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_605;
struct list_item$1CVALUEph* prev_it_606;
    it_605=self->head;
    while(it_605!=((void*)0)) {
        prev_it_606=it_605;
        it_605=it_605->next;
        come_call_finalizer3(prev_it_606,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj169;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj169=self->item;
            come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj170;
struct sType* __dec_obj171;
char* __dec_obj172;
char* __dec_obj173;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj170=self->c_value;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj171=self->type;
            come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj172=self->c_value_without_right_value_objects;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj173=self->c_value_without_cast_object_value;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_607;
struct list_item$1CVALUEph* prev_it_608;
    it_607=self->head;
    while(it_607!=((void*)0)) {
        prev_it_608=it_607;
        it_607=it_607->next;
        come_call_finalizer3(prev_it_608,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphint* map$2charphintp_initialize(struct map$2charphint* self){
void* __result_obj__=(void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
int i_610;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1charp* __dec_obj179;
struct map$2charphint* __result313__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value696=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(int*)come_increment_ref_count(((int*)(__right_value697=(int*)come_calloc(1, sizeof(int)*(1*(128)), "./comelang.h", 2581, "int*", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value698=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_610=0;    i_610<128;    i_610++    ){
        self->item_existance[i_610]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj179=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj179,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphintp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void map$2charphintp_finalize(struct map$2charphint* self){
int i_611;
int i_612;
    for(    i_611=0;    i_611<self->size;    i_611++    ){
        if(        self->item_existance[i_611]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_612=0;    i_612<self->size;    i_612++    ){
        if(        self->item_existance[i_612]) {
            if(            1) {
                self->keys[i_612] = come_decrement_ref_count2(self->keys[i_612], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphint_finalize(struct map$2charphint* self){
int i_613;
int i_614;
    for(    i_613=0;    i_613<self->size;    i_613++    ){
        if(        self->item_existance[i_613]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_614=0;    i_614<self->size;    i_614++    ){
        if(        self->item_existance[i_614]) {
            if(            1) {
                self->keys[i_614] = come_decrement_ref_count2(self->keys[i_614], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj184;
struct buffer* __dec_obj185;
char* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
struct map$2charphsFunph* __dec_obj194;
struct map$2charphsGenericsFunph* __dec_obj195;
struct map$2charphsClassph* __dec_obj196;
struct map$2charphsClassModuleph* __dec_obj197;
struct map$2charphsTypeph* __dec_obj198;
struct map$2charphsClassph* __dec_obj199;
struct map$2charphbufferph* __dec_obj200;
struct map$2charphbufferph* __dec_obj201;
struct sModule* __dec_obj202;
struct sType* __dec_obj203;
struct list$1voidph* __dec_obj204;
struct sType* __dec_obj205;
struct list$1voidph* __dec_obj206;
struct list$1CVALUEph* __dec_obj207;
struct sType* __dec_obj208;
struct sType* __dec_obj209;
struct sVarTable* __dec_obj210;
struct list$1charph* __dec_obj211;
struct list$1charph* __dec_obj212;
struct sType* __dec_obj213;
char* __dec_obj214;
struct sType* __dec_obj215;
struct map$2charphcharph* __dec_obj216;
char* __dec_obj217;
struct list$1voidph* __dec_obj218;
struct map$2charphint* __dec_obj219;
struct map$2charphcharph* __dec_obj220;
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(        self->original_source==gComeFunResultObject) {
            __dec_obj184=self->original_source;
            come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj185=self->source;
            come_call_finalizer3(__dec_obj185,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        if(        self->sname_at_head==gComeFunResultObject) {
            __dec_obj187=self->sname_at_head;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(        self->base_sname==gComeFunResultObject) {
            __dec_obj188=self->base_sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(        self->err_line==gComeFunResultObject) {
            __dec_obj189=self->err_line;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(        self->clang_option==gComeFunResultObject) {
            __dec_obj190=self->clang_option;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(        self->cpp_option==gComeFunResultObject) {
            __dec_obj191=self->cpp_option;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        if(        self->linker_option==gComeFunResultObject) {
            __dec_obj192=self->linker_option;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(        self->come_fun_name==gComeFunResultObject) {
            __dec_obj193=self->come_fun_name;
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(        self->funcs==gComeFunResultObject) {
            __dec_obj194=self->funcs;
            come_call_finalizer3(__dec_obj194,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(        self->generics_funcs==gComeFunResultObject) {
            __dec_obj195=self->generics_funcs;
            come_call_finalizer3(__dec_obj195,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        if(        self->classes==gComeFunResultObject) {
            __dec_obj196=self->classes;
            come_call_finalizer3(__dec_obj196,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        if(        self->modules==gComeFunResultObject) {
            __dec_obj197=self->modules;
            come_call_finalizer3(__dec_obj197,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        if(        self->types==gComeFunResultObject) {
            __dec_obj198=self->types;
            come_call_finalizer3(__dec_obj198,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(        self->generics_classes==gComeFunResultObject) {
            __dec_obj199=self->generics_classes;
            come_call_finalizer3(__dec_obj199,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        if(        self->struct_definition==gComeFunResultObject) {
            __dec_obj200=self->struct_definition;
            come_call_finalizer3(__dec_obj200,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        if(        self->previous_struct_definition==gComeFunResultObject) {
            __dec_obj201=self->previous_struct_definition;
            come_call_finalizer3(__dec_obj201,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->previous_struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        if(        self->module==gComeFunResultObject) {
            __dec_obj202=self->module;
            come_call_finalizer3(__dec_obj202,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj203=self->type;
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(        self->right_value_objects==gComeFunResultObject) {
            __dec_obj204=self->right_value_objects;
            come_call_finalizer3(__dec_obj204,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->right_value_objects,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(        self->generics_type==gComeFunResultObject) {
            __dec_obj205=self->generics_type;
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj206=self->method_generics_types;
            come_call_finalizer3(__dec_obj206,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        if(        self->stack==gComeFunResultObject) {
            __dec_obj207=self->stack;
            come_call_finalizer3(__dec_obj207,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(        self->come_function_result_type==gComeFunResultObject) {
            __dec_obj208=self->come_function_result_type;
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(        self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj209=self->come_method_block_function_result_type;
            come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(        self->gv_table==gComeFunResultObject) {
            __dec_obj210=self->gv_table;
            come_call_finalizer3(__dec_obj210,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(        self->generics_type_names==gComeFunResultObject) {
            __dec_obj211=self->generics_type_names;
            come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(        self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj212=self->method_generics_type_names;
            come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(        self->impl_type==gComeFunResultObject) {
            __dec_obj213=self->impl_type;
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(        self->output_file_name==gComeFunResultObject) {
            __dec_obj214=self->output_file_name;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(        self->function_result_type==gComeFunResultObject) {
            __dec_obj215=self->function_result_type;
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(        self->module_params==gComeFunResultObject) {
            __dec_obj216=self->module_params;
            come_call_finalizer3(__dec_obj216,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        if(        self->if_result_var_name==gComeFunResultObject) {
            __dec_obj217=self->if_result_var_name;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        if(        self->match_it_var==gComeFunResultObject) {
            __dec_obj218=self->match_it_var;
            come_call_finalizer3(__dec_obj218,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->match_it_var,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->outputed_class!=((void*)0)) {
        if(        self->outputed_class==gComeFunResultObject) {
            __dec_obj219=self->outputed_class;
            come_call_finalizer3(__dec_obj219,map$2charphint_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->outputed_class,map$2charphintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        if(        self->uniq_definition==gComeFunResultObject) {
            __dec_obj220=self->uniq_definition;
            come_call_finalizer3(__dec_obj220,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->uniq_definition,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_660;
int i_661;
char* __result314__;
char* default_value_662;
char* __result315__;
default_value_662 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_660=self->head;
    i_661=0;
    while(it_660!=((void*)0)) {
        if(        position==i_661) {
            __result314__ = gComeFunResultObject = __result_obj__ = it_660->item;
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
        it_660=it_660->next;
        i_661++;
    }
    memset(&default_value_662,0,sizeof(char*));
    __result315__ = gComeFunResultObject = __result_obj__ = default_value_662;
    default_value_662 = come_decrement_ref_count2(default_value_662, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

