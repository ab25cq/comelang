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
    char* sname;
    int sline;
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
    _Bool mDynamic;
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
    _Bool mDynamic;
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

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
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
    struct map$2voidphvoidph* module_params;
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
    struct map$2voidphvoidph* uniq_definition;
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

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
_Bool buffer_equals(struct buffer* left, struct buffer* right);
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
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static int list$1charphp_length(struct list$1charph* self);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item);
static void list$1voidp_finalize(struct list$1voidp* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static struct map$2voidphvoidph* map$2voidphvoidphp_clone(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item);
static struct sVar* sVar_clone(struct sVar* self);
static void sVar_finalize(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self);
static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self);
static _Bool tuple2$2charphcharph_equals(struct tuple2$2charphcharph* left, struct tuple2$2charphcharph* right);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
static struct sFun* sFun_clone(struct sFun* self);
static unsigned int sFun_get_hash_key(struct sFun* self);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static struct sBlock* sBlock_clone(struct sBlock* self);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self);
static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self);
static _Bool tuple2$2charphbool_equals(struct tuple2$2charphbool* left, struct tuple2$2charphbool* right);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self);
static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static int list$1voidphp_length(struct list$1voidph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self);
static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self);
static _Bool tuple2$2sFunpcharph_equals(struct tuple2$2sFunpcharph* left, struct tuple2$2sFunpcharph* right);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
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
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
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
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
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
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
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
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
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
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
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
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct sSemicolonNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string("sSemicolonNode")));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
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
void* __right_value254 = (void*)0;
struct sLambdaNode* __result232__;
    ((struct sNodeBase*)(__right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value254,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
char* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value255=__builtin_string("sLambdaNode")));
    __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_317;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* result_type_318;
void* __right_value295 = (void*)0;
int block_level_354;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_355;
void* __right_value298 = (void*)0;
char* __dec_obj79;
void* __right_value299 = (void*)0;
struct sType* __dec_obj80;
_Bool __result250__;
    come_fun_317=info->come_fun;
    info->come_fun=self->mFun;
    result_type_318=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value295=make_define_var(result_type_318,"__result_obj__",(_Bool)0,info))));
        __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_354=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_354;
    come_value_355=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj79=come_value_355->c_value;
    come_value_355->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_355->type;
    come_value_355->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_355->var=((void*)0);
    add_come_last_code(info,"%s",come_value_355->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_355));
    info->come_fun=come_fun_317;
    __result250__ = (_Bool)1;
    come_call_finalizer3(result_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result250__;
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

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1voidph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1voidph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct sType* __dec_obj45;
struct sNode* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj46=self->mAlignas;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj47=self->mChannelType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_319;
struct list_item$1voidph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_321;
struct list_item$1voidph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_323;
struct list_item$1sNodeph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_325;
struct list_item$1sNodeph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_327;
struct list_item$1charph* prev_it_328;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result234__;
void* __right_value256 = (void*)0;
struct sType* result_336;
void* __right_value257 = (void*)0;
struct sType* __dec_obj53;
void* __right_value258 = (void*)0;
struct sType* __dec_obj54;
void* __right_value259 = (void*)0;
struct sType* __dec_obj55;
void* __right_value260 = (void*)0;
char* __dec_obj56;
void* __right_value261 = (void*)0;
char* __dec_obj57;
void* __right_value268 = (void*)0;
struct list$1voidph* __dec_obj61;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value277 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value285 = (void*)0;
struct sType* __dec_obj71;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value287 = (void*)0;
struct sType* __dec_obj73;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value289 = (void*)0;
char* __dec_obj75;
void* __right_value290 = (void*)0;
char* __dec_obj76;
void* __right_value291 = (void*)0;
char* __dec_obj77;
void* __right_value292 = (void*)0;
char* __dec_obj78;
struct sType* __result248__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_336=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_336->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_336->mNoSolvedGenericsType;
        result_336->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_336->mOriginalLoadVarType;
        result_336->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_336->mAnyOriginalType;
        result_336->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj56=result_336->mInterfaceName;
        result_336->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj57=result_336->mGenericsName;
        result_336->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj61=result_336->mGenericsTypes;
        result_336->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_336->mArrayNum;
        result_336->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_336->mParamTypes;
        result_336->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_336->mParamNames;
        result_336->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_336->mResultType;
        result_336->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_336->mAlignas;
        result_336->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_336->mChannelType;
        result_336->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_336->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_336->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_336->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_336->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_336->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_336->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_336->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_336->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_336->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_336->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_336->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_336->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_336->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_336->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_336->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_336->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_336->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_336->mSizeNum;
        result_336->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_336->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_336->mOriginalTypeName;
        result_336->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_336->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_336->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_336->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_336->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_336->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_336->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_336->mAsmName;
        result_336->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_336->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_336->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_336->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_336->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_336->mTupleName;
        result_336->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_336->mAttribute;
        result_336->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_336->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_336->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_336->mDynamic=self->mDynamic;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_336;
    come_call_finalizer3(result_336,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_329;
    result_329=0;
    result_329+=int_get_hash_key(((int)self->mClass));
    result_329+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_329+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_329+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_329+=int_get_hash_key(((int)self->mAnyClass));
    result_329+=int_get_hash_key(((int)self->mInterfaceName));
    result_329+=int_get_hash_key(((int)self->mGenericsName));
    result_329+=int_get_hash_key(((int)self->mGenericsTypes));
    result_329+=int_get_hash_key(((int)self->mArrayNum));
    result_329+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_329+=int_get_hash_key(((int)self->mParamTypes));
    result_329+=int_get_hash_key(((int)self->mParamNames));
    result_329+=int_get_hash_key(((int)self->mResultType));
    result_329+=int_get_hash_key(((int)self->mVarArgs));
    result_329+=int_get_hash_key(((int)self->mAlignas));
    result_329+=int_get_hash_key(((int)self->mChannelType));
    result_329+=int_get_hash_key(((int)self->mUnsigned));
    result_329+=int_get_hash_key(((int)self->mShort));
    result_329+=int_get_hash_key(((int)self->mLong));
    result_329+=int_get_hash_key(((int)self->mLongLong));
    result_329+=int_get_hash_key(((int)self->mConstant));
    result_329+=int_get_hash_key(((int)self->mAtomic));
    result_329+=int_get_hash_key(((int)self->mRegister));
    result_329+=int_get_hash_key(((int)self->mVolatile));
    result_329+=int_get_hash_key(((int)self->mStatic));
    result_329+=int_get_hash_key(((int)self->mUniq));
    result_329+=int_get_hash_key(((int)self->mRecord));
    result_329+=int_get_hash_key(((int)self->mExtern));
    result_329+=int_get_hash_key(((int)self->mRestrict));
    result_329+=int_get_hash_key(((int)self->mImmutable));
    result_329+=int_get_hash_key(((int)self->mHeap));
    result_329+=int_get_hash_key(((int)self->mChannel));
    result_329+=int_get_hash_key(((int)self->mNoHeap));
    result_329+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_329+=int_get_hash_key(((int)self->mException));
    result_329+=int_get_hash_key(((int)self->mPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_329+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_329+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mSizeNum));
    result_329+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_329+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mFunctionParam));
    result_329+=int_get_hash_key(((int)self->mAllocaValue));
    result_329+=int_get_hash_key(((int)self->mGenericsStruct));
    result_329+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_329+=int_get_hash_key(((int)self->mInline));
    result_329+=int_get_hash_key(((int)self->mNullValue));
    result_329+=int_get_hash_key(((int)self->mGuardValue));
    result_329+=int_get_hash_key(((int)self->mAsmName));
    result_329+=int_get_hash_key(((int)self->mArrayPointerType));
    result_329+=int_get_hash_key(((int)self->mLambdaArray));
    result_329+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_329+=int_get_hash_key(((int)self->mTypedef));
    result_329+=int_get_hash_key(((int)self->mMultipleTypes));
    result_329+=int_get_hash_key(((int)self->mOriginIsArray));
    result_329+=int_get_hash_key(((int)self->mTupleName));
    result_329+=int_get_hash_key(((int)self->mAttribute));
    result_329+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_329+=int_get_hash_key(((int)self->mGenerate));
    result_329+=int_get_hash_key(((int)self->mCreateVTable));
    result_329+=int_get_hash_key(((int)self->mDynamic));
    return result_329;
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
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_330;
struct list_item$1voidph* it2_331;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_330=left->head;
    it2_331=right->head;
    while(it_330!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_330->item, it2_331->item)) {
            return (_Bool)0;
        }
        it_330=it_330->next;
        it2_331=it2_331->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_332;
struct list_item$1sNodeph* it2_333;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_332=left->head;
    it2_333=right->head;
    while(it_332!=((void*)0)) {
        if(        !sNode_equals(it_332->item,it2_333->item)) {
            return (_Bool)0;
        }
        it_332=it_332->next;
        it2_333=it2_333->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_334;
struct list_item$1charph* it2_335;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_334=left->head;
    it2_335=right->head;
    while(it_334!=((void*)0)) {
        if(        !string_equals(it_334->item,it2_335->item)) {
            return (_Bool)0;
        }
        it_334=it_334->next;
        it2_335=it2_335->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1voidph* result_338;
struct list_item$1voidph* it_339;
void* __right_value267 = (void*)0;
struct list$1voidph* __result238__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_338=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_339=self->head;
    while(it_339!=((void*)0)) {
        list$1voidphp_add(result_338,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_339->item)));
        it_339=it_339->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_337;
    result_337=0;
    result_337+=int_get_hash_key(((int)self->head));
    result_337+=int_get_hash_key(((int)self->tail));
    result_337+=int_get_hash_key(((int)self->len));
    result_337+=int_get_hash_key(((int)self->it));
    return result_337;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj58;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj59;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_342;
void* __dec_obj60;
struct list$1voidph* __result237__;
    if(    self->len==0) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj58=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj59=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj60=litem_342->item;
        litem_342->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_343;
struct list_item$1sNodeph* it_344;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result244__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_343=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_344=self->head;
    while(it_344!=((void*)0)) {
        list$1sNodephp_add(result_343,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_344->item)));
        it_344=it_344->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result240__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj62;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj63;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj62=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj63=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj64=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_347;
        self->tail=litem_347;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result242__;
void* __right_value274 = (void*)0;
struct sNode* result_348;
struct sNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_348=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_348->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_348->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_348->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_348->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_348->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_348->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_348->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_348->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_348->kind=self->kind;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_348;
    if(result_348) { result_348 = come_decrement_ref_count2(result_348, ((struct sNode*)result_348)->finalize, ((struct sNode*)result_348)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result245__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_349;
struct list_item$1charph* it_350;
void* __right_value283 = (void*)0;
struct list$1charph* __result247__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_349=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_350=self->head;
    while(it_350!=((void*)0)) {
        list$1charphp_add(result_349,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_350->item)));
        it_350=it_350->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj67;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj68;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_353;
char* __dec_obj69;
struct list$1charph* __result246__;
    if(    self->len==0) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj67=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj68=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj69=litem_353->item;
        litem_353->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj81;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_357;
struct CVALUE* __dec_obj86;
void* __right_value302 = (void*)0;
struct list_item$1CVALUEph* litem_358;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result249__;
    if(    self->len==0) {
        litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj81=litem_356->item;
        litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj86=litem_357->item;
        litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value302=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj87=litem_358->item;
        litem_358->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj82;
struct sType* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj82=self->c_value;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj83=self->type;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj84=self->c_value_without_right_value_objects;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_cast_object_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result251__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sFunNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_359;
char* come_fun_name_360;
void* __right_value305 = (void*)0;
char* __dec_obj108;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* result_type_361;
void* __right_value308 = (void*)0;
int block_level_362;
void* __right_value309 = (void*)0;
char* __dec_obj109;
_Bool __result253__;
    come_fun_359=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_360=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj108=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_361=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value308=make_define_var(result_type_361,"__result_obj__",(_Bool)0,info))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_362=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_362;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value309=xsprintf("come_heap_final();\n"))));
            __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_359;
    __dec_obj109=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_360);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result253__ = (_Bool)1;
    come_fun_name_360 = come_decrement_ref_count2(come_fun_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result253__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1voidph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct sType* __dec_obj94;
struct sBlock* __dec_obj95;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            come_call_finalizer3(__dec_obj91,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj104=self->mAttribute;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj105=self->mFunAttribute;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj96;
struct sVarTable* __dec_obj97;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj96=self->mNodes;
            come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj106;
struct sFun* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj107=self->mFun;
            come_call_finalizer3(__dec_obj107,sFun_finalize, 0, 0, 1, 0, (void*)0);
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
struct list$1sNodeph* __dec_obj110;
struct sBlock* __result254__;
    __dec_obj110=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj111;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj112;
void* __right_value314 = (void*)0;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1voidph* __dec_obj116;
struct list$1charph* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
void* __right_value315 = (void*)0;
char* __dec_obj120;
struct sGenericsFun* __result255__;
    __dec_obj111=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj113=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj116,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj119=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj120=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj121;
struct list$1charph* __dec_obj122;
struct list$1charph* __dec_obj123;
char* __dec_obj124;
struct sType* __dec_obj125;
struct list$1voidph* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj121=self->mImplType;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj122=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj122,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj123=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj124=self->mName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj125=self->mResultType;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj126=self->mParamTypes;
            come_call_finalizer3(__dec_obj126,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj127=self->mParamNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj128=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj129=self->mBlock;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj130=self->mGenericsSName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sBlock* result_363;
int sline_top_364;
int block_level_365;
char* p_saved_366;
int sline_saved_367;
char* sname_saved_368;
void* __right_value318 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
struct map$2voidphvoidph* __dec_obj133;
char* p_373;
int sline_374;
void* __right_value319 = (void*)0;
char* sname_375;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* module_name_376;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1charph* params_377;
void* __right_value324 = (void*)0;
char* word_378;
void* __right_value325 = (void*)0;
char* __dec_obj134;
void* __right_value326 = (void*)0;
char* __dec_obj135;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result260__;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sClassModule* module_382;
void* __right_value338 = (void*)0;
void* __right_value344 = (void*)0;
struct map$2voidphvoidph* __dec_obj138;
int i_396;
struct list$1charph* o2_saved_397;
char* it_400;
void* __right_value345 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __dec_obj139;
void* __right_value357 = (void*)0;
struct sNode* node_450;
void* __right_value358 = (void*)0;
char* __dec_obj140;
_Bool omit_semicolon_454;
void* __right_value362 = (void*)0;
char* __dec_obj144;
char* head_469;
void* __right_value363 = (void*)0;
struct sNode* value_470;
char* tail_471;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* node_473;
void* __right_value367 = (void*)0;
char* __dec_obj146;
struct sNode* node_474;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj149;
_Bool omit_semicolon_476;
char* p_477;
char* head_478;
void* __right_value374 = (void*)0;
char* source_479;
void* __right_value375 = (void*)0;
struct sNode* node_480;
struct sBlock* __result305__;
node_474 = (void*)0;
    result_363=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_364=info->sline_top;
    info->sline_top=info->sline;
    block_level_365=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_366=((void*)0);
        sline_saved_367=0;
        sname_saved_368=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_366) {
                if(                *info->p==0) {
                    info->p=p_saved_366;
                    info->sline=sline_saved_367;
                    __dec_obj131=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_368));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_366=((void*)0);
                    sline_saved_367=0;
                    __dec_obj132=sname_saved_368;
                    sname_saved_368=((void*)0);
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj133=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj133,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
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
            p_373=info->p;
            sline_374=info->sline;
            sname_375=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_374;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value320=parse_word(info)));
                __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_376=(char*)come_increment_ref_count(parse_word(info));
                params_377=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_378=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_377,(char*)come_increment_ref_count(word_378));
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
                            word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_366=info->p;
                sline_saved_367=info->sline;
                __dec_obj134=sname_saved_368;
                sname_saved_368=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_376));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value328=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value327=__builtin_string(module_name_376)))))))==((void*)0))),                (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                come_call_finalizer3(__right_value328,(void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result260__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_376 = come_decrement_ref_count2(module_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_368 = come_decrement_ref_count2(sname_saved_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_363,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result260__;
                }
                module_382=((struct sClassModule*)((void*)(__right_value330=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value329=__builtin_string(module_name_376)))))));
                __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value330,(void*)0, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_382->mParams)!=list$1charphp_length(params_377)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj138=info->module_params;
                info->module_params=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "05function.c", 277, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
                come_call_finalizer3(__dec_obj138,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
                i_396=0;
                for(                o2_saved_397=(struct list$1charph*)come_increment_ref_count((module_382->mParams)),it_400=list$1charphp_begin((o2_saved_397));                !list$1charphp_end((o2_saved_397));                it_400=list$1charphp_next((o2_saved_397))                ){
                    map$2voidphvoidphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_400)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value354=list$1charphp_operator_load_element(params_377,i_396))))));
                    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_396++;
                }
                come_call_finalizer3(o2_saved_397,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_382->mText;
                info->sline=module_382->mSLine;
                __dec_obj139=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_382->mSName));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_376 = come_decrement_ref_count2(module_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_450=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj140=info->sname;
            info->sname=(char*)come_increment_ref_count(node_450->sname(node_450->_protocol_obj));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_450->sline(node_450->_protocol_obj);
            if(            node_450==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_450));
            parse_sharp_v5(info);
            if(            node_450->terminated(node_450->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_454=(_Bool)1;
            if(            node_450->terminated(node_450->_protocol_obj)) {
                omit_semicolon_454=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_454=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_363->mOmitSemicolon=omit_semicolon_454;
                if(                omit_semicolon_454&&in_function) {
                    list$1sNodephp_delete(result_363->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_373;
                    info->sline=sline_374;
                    __dec_obj144=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_375));
                    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_469=info->p;
                    value_470=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_471=info->p;
                    __dec_obj145=value_470;
                    value_470=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_470),info));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_472[tail_471-head_469+1];
                    memset(&buf_472, 0, sizeof(char)                    *(tail_471-head_469+1)                    );
                    memcpy(buf_472,head_469,tail_471-head_469);
                    buf_472[tail_471-head_469]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_473=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_470),(char*)come_increment_ref_count(__builtin_string(buf_472)),info));
                    list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_473));
                    if(value_470) { value_470 = come_decrement_ref_count2(value_470, ((struct sNode*)value_470)->finalize, ((struct sNode*)value_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_470) { value_470 = come_decrement_ref_count2(value_470, ((struct sNode*)value_470)->finalize, ((struct sNode*)value_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_366) {
            if(            info->p==0) {
                info->p=p_saved_366;
                info->sline=sline_saved_367;
                __dec_obj146=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_368));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_366=((void*)0);
                sline_saved_367=0;
            }
        }
        sname_saved_368 = come_decrement_ref_count2(sname_saved_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value369=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj148=node_474;
            node_474=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value369,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_474));
        }
        else {
            __dec_obj149=node_474;
            node_474=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_474==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_474->terminated(node_474->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_476=(_Bool)1;
            if(            node_474->terminated(node_474->_protocol_obj)) {
                omit_semicolon_476=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_476=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_363->mOmitSemicolon=omit_semicolon_476;
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_474));
        }
        if(node_474) { node_474 = come_decrement_ref_count2(node_474, ((struct sNode*)node_474)->finalize, ((struct sNode*)node_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_477=info->p;
        head_478=info->head;
        source_479=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_479;
        info->head=source_479;
        node_480=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_480==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_480));
        info->p=p_477;
        info->head=head_478;
        source_479 = come_decrement_ref_count2(source_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_480) { node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_365;
    __result305__ = gComeFunResultObject = __result_obj__ = result_363;
    come_call_finalizer3(result_363,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
int i_369;
int i_370;
    for(    i_369=0;    i_369<self->size;    i_369++    ){
        if(        self->item_existance[i_369]) {
            if(            1) {
                come_call_finalizer3(self->items[i_369], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_370=0;    i_370<self->size;    i_370++    ){
        if(        self->item_existance[i_370]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_370], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_371;
struct list_item$1voidp* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_379;
unsigned int hash_380;
unsigned int it_381;
void* __result256__;
void* __result257__;
void* __result258__;
void* __result259__;
default_value_379 = (void*)0;
    memset(&default_value_379,0,sizeof(void*));
    hash_380=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_381=hash_380;
    while((_Bool)1) {
        if(        self->item_existance[it_381]) {
            if(            come_call_equals((void*)0, self->keys[it_381], ((char*)key))) {
                __result256__ = gComeFunResultObject = __result_obj__ = self->items[it_381];
                come_call_finalizer3(default_value_379, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
            it_381++;
            if(            it_381>=self->size) {
                it_381=0;
            }
            else if(            it_381==hash_380) {
                __result257__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_379);
                come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
        }
        else {
            __result258__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_379);
            come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result258__;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_379);
    come_call_finalizer3(default_value_379, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_383;
int i_384;
    for(    i_383=0;    i_383<self->size;    i_383++    ){
        if(        self->item_existance[i_383]) {
            if(            1) {
                come_call_finalizer3(self->items[i_383], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_384=0;    i_384<self->size;    i_384++    ){
        if(        self->item_existance[i_384]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_384], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result261__;
void* __right_value331 = (void*)0;
struct map$2voidphvoidph* result_385;
void* __right_value337 = (void*)0;
struct list$1voidp* __dec_obj136;
struct map$2voidphvoidph* __result266__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_385=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_385->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_385->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_385->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_385->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_385->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj136=result_385->key_list;
        result_385->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj136,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_385->it=self->it;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_385;
    come_call_finalizer3(result_385,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result262__;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1voidp* result_387;
struct list_item$1voidp* it_388;
struct list$1voidp* __result265__;
    if(    self==((void*)0)) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_387=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_388=self->head;
    while(it_388!=((void*)0)) {
        list$1voidpp_add(result_387,it_388->item);
        it_388=it_388->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_387;
    come_call_finalizer3(result_387,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_386;
    result_386=0;
    result_386+=int_get_hash_key(((int)self->head));
    result_386+=int_get_hash_key(((int)self->tail));
    result_386+=int_get_hash_key(((int)self->len));
    result_386+=int_get_hash_key(((int)self->it));
    return result_386;
}

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result263__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
struct list_item$1voidp* litem_389;
void* __right_value335 = (void*)0;
struct list_item$1voidp* litem_390;
void* __right_value336 = (void*)0;
struct list_item$1voidp* litem_391;
struct list$1voidp* __result264__;
    if(    self->len==0) {
        litem_389=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value334=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        litem_389->item=item;
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value335=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        litem_390->item=item;
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value336=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        litem_391->item=item;
        self->tail->next=litem_391;
        self->tail=litem_391;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_392;
struct list_item$1voidp* prev_it_393;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        come_call_finalizer3(prev_it_393,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_394;
    result_394=0;
    result_394+=int_get_hash_key(((int)self->keys));
    result_394+=int_get_hash_key(((int)self->item_existance));
    result_394+=int_get_hash_key(((int)self->items));
    result_394+=int_get_hash_key(((int)self->size));
    result_394+=int_get_hash_key(((int)self->len));
    result_394+=int_get_hash_key(((int)self->key_list));
    result_394+=int_get_hash_key(((int)self->it));
    return result_394;
}

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
    if(    !come_call_equals((void*)0, left->keys, right->keys)) {
        return (_Bool)0;
    }
    if(    !boolp_equals(left->item_existance,right->item_existance)) {
        return (_Bool)0;
    }
    if(    !come_call_equals((void*)0, left->items, right->items)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list$1voidpp_equals(left->key_list,right->key_list)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool voidpp_equals(void** left, void** right){
    return (_Bool)1;
}

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
int i_395;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1voidp* __dec_obj137;
struct map$2voidphvoidph* __result268__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value339=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value340=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value341=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_395=0;    i_395<128;    i_395++    ){
        self->item_existance[i_395]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj137=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj137,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result267__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_398;
char* __result269__;
char* __result270__;
char* result_399;
char* __result271__;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_398,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_398;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_399,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_399;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_401;
char* __result272__;
char* __result273__;
char* result_402;
char* __result274__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_401,0,sizeof(char*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_402,0,sizeof(char*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item){
    map$2voidphvoidphp_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_420;
unsigned int it_421;
_Bool same_key_exist_438;
char* it2_441;
struct map$2voidphvoidph* __result296__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_420=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_421=hash_420;
    while((_Bool)1) {
        if(        self->item_existance[it_421]) {
            if(            come_call_equals((void*)0, self->keys[it_421], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_421]);
                    come_call_finalizer3(self->keys[it_421], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_421]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_421]);
                    self->keys[it_421]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_421], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_421]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_421]=item;
                }
                break;
            }
            it_421++;
            if(            it_421>=self->size) {
                it_421=0;
            }
            else if(            it_421==hash_420) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_421]=(_Bool)1;
            if(            1) {
                self->keys[it_421]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_421]=key;
            }
            if(            1) {
                self->items[it_421]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_421]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_438=(_Bool)0;
    for(    it2_441=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_441=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_441, key)) {
            same_key_exist_438=(_Bool)1;
        }
    }
    if(    !same_key_exist_438) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_403;
void* __right_value346 = (void*)0;
void** keys_404;
void* __right_value347 = (void*)0;
void** items_405;
void* __right_value348 = (void*)0;
_Bool* item_existance_406;
int len_407;
void* it_410;
void* default_value_413;
void* __right_value349 = (void*)0;
void* it2_414;
unsigned int hash_417;
int n_418;
void* default_value_419;
void* __right_value350 = (void*)0;
default_value_413 = (void*)0;
default_value_419 = (void*)0;
    size_403=self->size*10;
    keys_404=(void**)come_increment_ref_count(((void**)(__right_value346=(void**)come_calloc(1, sizeof(void*)*(1*(size_403)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_405=(void**)come_increment_ref_count(((void**)(__right_value347=(void**)come_calloc(1, sizeof(void*)*(1*(size_403)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_406=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value348=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_403)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_407=0;
    for(    it_410=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_410=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_413,0,sizeof(void*));
        it2_414=((void*)(__right_value349=map$2voidphvoidphp_at(self,it_410,default_value_413)));
        come_call_finalizer3(__right_value349,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_417=come_call_get_hash_key((void*)0, ((void*)it_410))%size_403;
        n_418=hash_417;
        while((_Bool)1) {
            if(            item_existance_406[n_418]) {
                n_418++;
                if(                n_418>=size_403) {
                    n_418=0;
                }
                else if(                n_418==hash_417) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_406[n_418]=(_Bool)1;
                keys_404[n_418]=it_410;
                items_405[n_418]=((void*)(__right_value350=map$2voidphvoidphp_at(self,it_410,default_value_419)));
                come_call_finalizer3(__right_value350,(void*)0, 0, 1, 0, 0, (void*)0);
                len_407++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_404;
    self->items=items_405;
    self->item_existance=item_existance_406;
    self->size=size_403;
    self->len=len_407;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_408;
void* __result275__;
void* __result276__;
void* result_409;
void* __result277__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_408,0,sizeof(void*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_409,0,sizeof(void*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_411;
void* __result278__;
void* __result279__;
void* result_412;
void* __result280__;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_411,0,sizeof(void*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_411;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_412,0,sizeof(void*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_412;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_415;
unsigned int it_416;
void* __result281__;
void* __result282__;
void* __result283__;
void* __result284__;
    hash_415=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(        self->item_existance[it_416]) {
            if(            come_call_equals((void*)0, self->keys[it_416], key)) {
                __result281__ = gComeFunResultObject = __result_obj__ = self->items[it_416];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
            it_416++;
            if(            it_416>=self->size) {
                it_416=0;
            }
            else if(            it_416==hash_415) {
                __result282__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
        }
        else {
            __result283__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
    }
    __result284__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_422;
struct list_item$1voidp* it_423;
struct list$1voidp* __result288__;
    it2_422=0;
    it_423=self->head;
    while(it_423!=((void*)0)) {
        if(        come_call_equals((void*)0, it_423->item, item)) {
            list$1voidpp_delete(self,it2_422,it2_422+1);
            break;
        }
        it2_422++;
        it_423=it_423->next;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_424;
struct list$1voidp* __result285__;
struct list_item$1voidp* it_427;
int i_428;
struct list_item$1voidp* prev_it_429;
struct list_item$1voidp* it_430;
int i_431;
struct list_item$1voidp* prev_it_432;
struct list_item$1voidp* it_433;
struct list_item$1voidp* head_prev_it_434;
struct list_item$1voidp* tail_it_435;
int i_436;
struct list_item$1voidp* prev_it_437;
struct list$1voidp* __result287__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_424=tail;
        tail=head;
        head=tmp_424;
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
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_427=self->head;
        i_428=0;
        while(it_427!=((void*)0)) {
            if(            i_428<tail) {
                prev_it_429=it_427;
                it_427=it_427->next;
                i_428++;
                come_call_finalizer3(prev_it_429,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_428==tail) {
                self->head=it_427;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_427=it_427->next;
                i_428++;
            }
        }
    }
    else if(    tail==self->len) {
        it_430=self->head;
        i_431=0;
        while(it_430!=((void*)0)) {
            if(            i_431==head) {
                self->tail=it_430->prev;
                self->tail->next=((void*)0);
            }
            if(            i_431>=head) {
                prev_it_432=it_430;
                it_430=it_430->next;
                i_431++;
                come_call_finalizer3(prev_it_432,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_430=it_430->next;
                i_431++;
            }
        }
    }
    else {
        it_433=self->head;
        head_prev_it_434=((void*)0);
        tail_it_435=((void*)0);
        i_436=0;
        while(it_433!=((void*)0)) {
            if(            i_436==head) {
                head_prev_it_434=it_433->prev;
            }
            if(            i_436==tail) {
                tail_it_435=it_433;
            }
            if(            i_436>=head&&i_436<tail) {
                prev_it_437=it_433;
                it_433=it_433->next;
                i_436++;
                come_call_finalizer3(prev_it_437,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_433=it_433->next;
                i_436++;
            }
        }
        if(        head_prev_it_434!=((void*)0)) {
            head_prev_it_434->next=tail_it_435;
        }
        if(        tail_it_435!=((void*)0)) {
            tail_it_435->prev=head_prev_it_434;
        }
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_425;
struct list_item$1voidp* prev_it_426;
struct list$1voidp* __result286__;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        come_call_finalizer3(prev_it_426,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_439;
void* __result289__;
void* __result290__;
void* result_440;
void* __result291__;
result_439 = (void*)0;
result_440 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_439,0,sizeof(void*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_439;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->head;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_440,0,sizeof(void*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_440;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_442;
void* __result292__;
void* __result293__;
void* result_443;
void* __result294__;
result_442 = (void*)0;
result_443 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_442,0,sizeof(void*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_442;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_443,0,sizeof(void*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_443;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
struct list_item$1voidp* litem_444;
void* __right_value352 = (void*)0;
struct list_item$1voidp* litem_445;
void* __right_value353 = (void*)0;
struct list_item$1voidp* litem_446;
struct list$1voidp* __result295__;
    if(    self->len==0) {
        litem_444=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value351=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=((void*)0);
        litem_444->next=((void*)0);
        litem_444->item=item;
        self->tail=litem_444;
        self->head=litem_444;
    }
    else if(    self->len==1) {
        litem_445=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value352=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=self->head;
        litem_445->next=((void*)0);
        litem_445->item=item;
        self->tail=litem_445;
        self->head->next=litem_445;
    }
    else {
        litem_446=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value353=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_446->prev=self->tail;
        litem_446->next=((void*)0);
        litem_446->item=item;
        self->tail->next=litem_446;
        self->tail=litem_446;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_447;
int i_448;
char* __result297__;
char* default_value_449;
char* __result298__;
default_value_449 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_447=self->head;
    i_448=0;
    while(it_447!=((void*)0)) {
        if(        position==i_448) {
            __result297__ = gComeFunResultObject = __result_obj__ = it_447->item;
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
        it_447=it_447->next;
        i_448++;
    }
    memset(&default_value_449,0,sizeof(char*));
    __result298__ = gComeFunResultObject = __result_obj__ = default_value_449;
    default_value_449 = come_decrement_ref_count2(default_value_449, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct list_item$1sNodeph* litem_451;
struct sNode* __dec_obj141;
void* __right_value360 = (void*)0;
struct list_item$1sNodeph* litem_452;
struct sNode* __dec_obj142;
void* __right_value361 = (void*)0;
struct list_item$1sNodeph* litem_453;
struct sNode* __dec_obj143;
struct list$1sNodeph* __result299__;
    if(    self->len==0) {
        litem_451=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value359=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        __dec_obj141=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_451;
        self->head=litem_451;
    }
    else if(    self->len==1) {
        litem_452=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value360=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->head;
        litem_452->next=((void*)0);
        __dec_obj142=litem_452->item;
        litem_452->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_452;
        self->head->next=litem_452;
    }
    else {
        litem_453=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value361=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_453->prev=self->tail;
        litem_453->next=((void*)0);
        __dec_obj143=litem_453->item;
        litem_453->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_453;
        self->tail=litem_453;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_455;
struct list$1sNodeph* __result300__;
struct list_item$1sNodeph* it_458;
int i_459;
struct list_item$1sNodeph* prev_it_460;
struct list_item$1sNodeph* it_461;
int i_462;
struct list_item$1sNodeph* prev_it_463;
struct list_item$1sNodeph* it_464;
struct list_item$1sNodeph* head_prev_it_465;
struct list_item$1sNodeph* tail_it_466;
int i_467;
struct list_item$1sNodeph* prev_it_468;
struct list$1sNodeph* __result302__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_455=tail;
        tail=head;
        head=tmp_455;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result300__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_458=self->head;
        i_459=0;
        while(it_458!=((void*)0)) {
            if(            i_459<tail) {
                prev_it_460=it_458;
                it_458=it_458->next;
                i_459++;
                come_call_finalizer3(prev_it_460,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_459==tail) {
                self->head=it_458;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_458=it_458->next;
                i_459++;
            }
        }
    }
    else if(    tail==self->len) {
        it_461=self->head;
        i_462=0;
        while(it_461!=((void*)0)) {
            if(            i_462==head) {
                self->tail=it_461->prev;
                self->tail->next=((void*)0);
            }
            if(            i_462>=head) {
                prev_it_463=it_461;
                it_461=it_461->next;
                i_462++;
                come_call_finalizer3(prev_it_463,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_461=it_461->next;
                i_462++;
            }
        }
    }
    else {
        it_464=self->head;
        head_prev_it_465=((void*)0);
        tail_it_466=((void*)0);
        i_467=0;
        while(it_464!=((void*)0)) {
            if(            i_467==head) {
                head_prev_it_465=it_464->prev;
            }
            if(            i_467==tail) {
                tail_it_466=it_464;
            }
            if(            i_467>=head&&i_467<tail) {
                prev_it_468=it_464;
                it_464=it_464->next;
                i_467++;
                come_call_finalizer3(prev_it_468,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_464=it_464->next;
                i_467++;
            }
        }
        if(        head_prev_it_465!=((void*)0)) {
            head_prev_it_465->next=tail_it_466;
        }
        if(        tail_it_466!=((void*)0)) {
            tail_it_466->prev=head_prev_it_465;
        }
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_456;
struct list_item$1sNodeph* prev_it_457;
struct list$1sNodeph* __result301__;
    it_456=self->head;
    while(it_456!=((void*)0)) {
        prev_it_457=it_456;
        it_456=it_456->next;
        come_call_finalizer3(prev_it_457,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result303__;
void* __right_value370 = (void*)0;
struct sSemicolonNode* result_475;
void* __right_value371 = (void*)0;
char* __dec_obj147;
struct sSemicolonNode* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_475=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_475->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result_475->sname;
        result_475->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_475->sline_real=self->sline_real;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_475;
    come_call_finalizer3(result_475,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_481;
struct sVarTable* old_table_482;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sVarTable* __dec_obj160;
struct sVarTable* current_loop_vtable_495;
struct list$1voidph* param_types__496;
struct list$1charph* param_names__497;
int i_498;
struct list$1charph* o2_saved_499;
char* name_500;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* type_501;
void* __right_value393 = (void*)0;
int block_level_505;
int i_506;
struct list$1sNodeph* o2_saved_507;
struct sNode* node_510;
struct list$1voidph* right_value_objects_513;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1voidph* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
int stack_num_before_514;
int sline_515;
void* __right_value396 = (void*)0;
char* sname_516;
void* __right_value397 = (void*)0;
char* __dec_obj164;
_Bool Value_517;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value404 = (void*)0;
struct CVALUE* come_value2_519;
void* __right_value405 = (void*)0;
char* __dec_obj169;
void* __right_value406 = (void*)0;
struct CVALUE* come_value2_521;
struct sVar* var__522;
void* __right_value407 = (void*)0;
struct CVALUE* come_value3_523;
void* __right_value408 = (void*)0;
_Bool _if_conditional2;
void* __right_value409 = (void*)0;
struct sType* __dec_obj170;
void* __right_value410 = (void*)0;
char* c_value_526;
void* __right_value411 = (void*)0;
char* __dec_obj171;
void* __right_value412 = (void*)0;
char* __dec_obj172;
void* __right_value413 = (void*)0;
char* __dec_obj173;
_Bool Value_527;
void* __right_value414 = (void*)0;
char* __dec_obj174;
struct list$1voidph* __dec_obj175;
void* __if_result__0_530 = (void*)0;
struct list$1voidph* o2_saved_531;
struct sVar* it_534;
struct list$1voidph* __dec_obj176;
memset(&i_498, 0, sizeof(int));
memset(&i_506, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_481=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_482=info->lv_table;
    if(    !no_var_table) {
        __dec_obj160=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_482));
        come_call_finalizer3(__dec_obj160,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_495=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__496=info->param_types;
    param_names__497=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_499=(param_names),name_500=list$1charphp_begin((o2_saved_499));        !list$1charphp_end((o2_saved_499));        name_500=list$1charphp_next((o2_saved_499))        ){
            type_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value391=list$1voidphp_operator_load_element(param_types,i_498))))));
            come_call_finalizer3(__right_value391,(void*)0, 0, 1, 0, 0, (void*)0);
            type_501->mFunctionParam=(_Bool)1;
            type_501->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_500,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_501)),info);
            i_498++;
            come_call_finalizer3(type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_505=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_507=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_510=list$1sNodephp_begin((o2_saved_507));        !list$1sNodephp_end((o2_saved_507));        node_510=list$1sNodephp_next((o2_saved_507))        ){
            right_value_objects_513=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj161=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 492, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj161,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj162=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj163=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_514=list$1CVALUEphp_length(info->stack);
            sline_515=info->sline;
            sname_516=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_510->sline(node_510->_protocol_obj);
            __dec_obj164=info->sname;
            info->sname=(char*)come_increment_ref_count(node_510->sname(node_510->_protocol_obj));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_506==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_517=node_compile(node_510,info);
                if(                !Value_517) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_514+1) {
                    come_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_518->type->mClass->mName,"void")&&come_value_518->type->mPointerNum==0) {
                        come_value2_519=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_518));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_519));
                        __dec_obj169=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_519->c_value));
                        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_521=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_518));
                        var__522=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__522) {
                            come_value3_523=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__522->mType->mClass=="void"&&var__522->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__522->mType,((struct sType*)(__right_value408=come_call_cloner(sType_clone, come_value_518->type))),come_value3_523,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj170=var__522->mType;
                            var__522->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_518->type));
                            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_518->type->mHeap) {
                                c_value_526=(char*)come_increment_ref_count(increment_ref_count_object(come_value_518->type,come_value_518->c_value,info));
                                __dec_obj171=come_value2_521->c_value;
                                come_value2_521->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__522->mCValueName,c_value_526));
                                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_526 = come_decrement_ref_count2(c_value_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj172=come_value2_521->c_value;
                                come_value2_521->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__522->mCValueName,come_value_518->c_value));
                                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_521));
                        __dec_obj173=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_521->c_value));
                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_521,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_527=node_compile(node_510,info);
                if(                !Value_527) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_515;
            __dec_obj174=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_516));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_514);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj175=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_513);
            come_call_finalizer3(__dec_obj175,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_506++;
            come_call_finalizer3(right_value_objects_513,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_516 = come_decrement_ref_count2(sname_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_507,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_505==0) {
            for(            o2_saved_531=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_534=((struct sVar*)list$1voidphp_begin((o2_saved_531)));            !list$1voidphp_end((o2_saved_531));            it_534=((struct sVar*)list$1voidphp_next((o2_saved_531)))            ){
                free_object(it_534->mType,it_534->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_531,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj176=info->match_it_var;
            __if_result__0_530=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj176,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_482;
    info->block_level=block_level_505;
    info->param_types=param_types__496;
    info->param_names=param_names__497;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_495;
    info->inhibits_output_code=inhibits_output_code_481;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result306__;
void* __right_value376 = (void*)0;
struct sVarTable* result_484;
void* __right_value388 = (void*)0;
struct map$2voidphvoidph* __dec_obj159;
struct sVarTable* __result312__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_484=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj159=result_484->mVars;
        result_484->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj159,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_484->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_484->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_484->mID=self->mID;
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_484;
    come_call_finalizer3(result_484,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_483;
    result_483=0;
    result_483+=int_get_hash_key(((int)self->mVars));
    result_483+=int_get_hash_key(((int)self->mGlobal));
    result_483+=int_get_hash_key(((int)self->mParent));
    result_483+=int_get_hash_key(((int)self->mID));
    return result_483;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2voidphvoidphp_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result307__;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct map$2voidphvoidph* result_485;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1voidp* __dec_obj150;
char* it_486;
void* default_value_487;
void* __right_value381 = (void*)0;
struct sVar* it2_488;
void* __right_value387 = (void*)0;
struct map$2voidphvoidph* __result311__;
default_value_487 = (void*)0;
    if(    self==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_485=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidphp_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj150=result_485->key_list;
    result_485->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj150,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_486=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_486=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_487,0,sizeof(void*));
        it2_488=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_486,((struct sVar*)default_value_487)));
        map$2voidphvoidphp_put(result_485,it_486,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_488)));
        come_call_finalizer3(it2_488,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_485;
    come_call_finalizer3(result_485,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_489;
int it_490;
_Bool same_key_exist_491;
char* it2_492;
struct map$2voidphvoidph* __result308__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_489=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_490=hash_489;
    while((_Bool)1) {
        if(        self->item_existance[it_490]) {
            if(            come_call_equals((void*)0, self->keys[it_490], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_490], (void*)0, 0, 0, 0, 0, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_490]);
                    self->keys[it_490]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_490]);
                    self->keys[it_490]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_490], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_490]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_490]=item;
                }
                break;
            }
            it_490++;
            if(            it_490>=self->size) {
                it_490=0;
            }
            else if(            it_490==hash_489) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_490]=(_Bool)1;
            if(            1) {
                self->keys[it_490]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_490]=key;
            }
            if(            1) {
                self->items[it_490]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_490]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_491=(_Bool)0;
    for(    it2_492=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_492=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_492, key)) {
            same_key_exist_491=(_Bool)1;
        }
    }
    if(    !same_key_exist_491) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result309__;
void* __right_value382 = (void*)0;
struct sVar* result_494;
void* __right_value383 = (void*)0;
char* __dec_obj155;
void* __right_value384 = (void*)0;
char* __dec_obj156;
void* __right_value385 = (void*)0;
struct sType* __dec_obj157;
void* __right_value386 = (void*)0;
char* __dec_obj158;
struct sVar* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_494=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj155=result_494->mName;
        result_494->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj156=result_494->mCValueName;
        result_494->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj157=result_494->mType;
        result_494->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_494->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_494->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_494->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_494->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_494->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj158=result_494->mFunName;
        result_494->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_494;
    come_call_finalizer3(result_494,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj151;
char* __dec_obj152;
struct sType* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj151=self->mName;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj152=self->mCValueName;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj153=self->mType;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj154=self->mFunName;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_493;
    result_493=0;
    result_493+=int_get_hash_key(((int)self->mName));
    result_493+=int_get_hash_key(((int)self->mCValueName));
    result_493+=int_get_hash_key(((int)self->mType));
    result_493+=int_get_hash_key(((int)self->mBlockLevel));
    result_493+=int_get_hash_key(((int)self->mGlobal));
    result_493+=int_get_hash_key(((int)self->mAllocaValue));
    result_493+=int_get_hash_key(((int)self->mFunctionParam));
    result_493+=int_get_hash_key(((int)self->mNoFree));
    result_493+=int_get_hash_key(((int)self->mFunName));
    return result_493;
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

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_502;
int i_503;
void* __result313__;
void* default_value_504;
void* __result314__;
default_value_504 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_502=self->head;
    i_503=0;
    while(it_502!=((void*)0)) {
        if(        position==i_503) {
            __result313__ = gComeFunResultObject = __result_obj__ = it_502->item;
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
        it_502=it_502->next;
        i_503++;
    }
    memset(&default_value_504,0,sizeof(void*));
    __result314__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_504);
    come_call_finalizer3(default_value_504, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_508;
struct sNode* __result315__;
struct sNode* __result316__;
struct sNode* result_509;
struct sNode* __result317__;
result_508 = (void*)0;
result_509 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_508,0,sizeof(struct sNode*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_508;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->head;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_509,0,sizeof(struct sNode*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_509;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_511;
struct sNode* __result318__;
struct sNode* __result319__;
struct sNode* result_512;
struct sNode* __result320__;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_511,0,sizeof(struct sNode*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_511;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_512,0,sizeof(struct sNode*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_512;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result321__;
void* __right_value399 = (void*)0;
struct CVALUE* result_520;
void* __right_value400 = (void*)0;
char* __dec_obj165;
void* __right_value401 = (void*)0;
struct sType* __dec_obj166;
void* __right_value402 = (void*)0;
char* __dec_obj167;
void* __right_value403 = (void*)0;
char* __dec_obj168;
struct CVALUE* __result322__;
    if(    self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_520=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj165=result_520->c_value;
        result_520->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_520->type;
        result_520->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_520->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_520->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj167=result_520->c_value_without_right_value_objects;
        result_520->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj168=result_520->c_value_without_cast_object_value;
        result_520->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_520;
    come_call_finalizer3(result_520,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
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
    if(    list$1voidphp_operator_not_equals(left->mFields,right->mFields)) {
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
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right){
    return !list$1voidphp_operator_equals(left,right);
}

static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_524;
struct list_item$1voidph* it2_525;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_524=left->head;
    it2_525=right->head;
    while(it_524!=((void*)0)) {
        if(        !(voidp_operator_equals(it_524->item,it2_525->item))) {
            return (_Bool)0;
        }
        it_524=it_524->next;
        it2_525=it2_525->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_528;
struct list_item$1voidph* prev_it_529;
struct list$1voidph* __result323__;
    it_528=self->head;
    while(it_528!=((void*)0)) {
        prev_it_529=it_528;
        it_528=it_528->next;
        come_call_finalizer3(prev_it_529,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_532;
void* __result324__;
void* __result325__;
void* result_533;
void* __result326__;
result_532 = (void*)0;
result_533 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_532,0,sizeof(void*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_532;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_533,0,sizeof(void*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_533;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_535;
void* __result327__;
void* __result328__;
void* result_536;
void* __result329__;
result_535 = (void*)0;
result_536 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_535,0,sizeof(void*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_535;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_536,0,sizeof(void*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_536;
    gComeFunResultObject = (void*)0;
    return __result329__;
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
char* head_537;
_Bool dquort_538;
_Bool squort_539;
int sline_540;
int nest_541;
char* tail_542;
void* __right_value415 = (void*)0;
char* buf_543;
void* __right_value416 = (void*)0;
char* __result330__;
    head_537=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_538=(_Bool)0;
        squort_539=(_Bool)0;
        sline_540=0;
        nest_541=0;
        while(1) {
            if(            dquort_538) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_538=!dquort_538;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                }
            }
            else if(            squort_539) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_539=!squort_539;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_540);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_540=info->sline;
                info->p++;
                squort_539=!squort_539;
            }
            else if(            *info->p==34) {
                sline_540=info->sline;
                info->p++;
                dquort_538=!dquort_538;
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
                nest_541++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_541==0) {
                    break;
                }
                nest_541--;
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
    tail_542=info->p;
    buf_543=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_542-head_537+1)), "05function.c", 765, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_543,head_537,tail_542-head_537);
    buf_543[tail_542-head_537]=0;
    skip_spaces_and_lf(info);
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value416=__builtin_string(buf_543)));
    buf_543 = come_decrement_ref_count2(buf_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_544;
char* p3_545;
int i_546;
    terminated_544=(_Bool)0;
    p3_545=p;
    for(    i_546=0;    i_546<strlen(p2);    i_546++    ){
        if(        *p3_545==0) {
            terminated_544=(_Bool)1;
            break;
        }
        p3_545++;
    }
    return !terminated_544&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* asm_fun_name_547;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* result_548;
char* head_549;
int brace_num_550;
char* tail_551;
char* head_552;
int brace_num_553;
char* tail_554;
char* head_555;
char* tail_556;
char* head_557;
char* tail_558;
int len_559;
_Bool in_dquort_560;
int brace_num_561;
char* head_562;
char* tail_563;
char* head_564;
char* tail_565;
char* head_566;
char* tail_567;
char* head_568;
int nest_569;
char* tail_570;
char* head_571;
int nest_572;
char* tail_573;
char* head_574;
int nest_575;
char* tail_576;
char* head_577;
int nest_578;
char* tail_579;
char* head_580;
int nest_581;
char* tail_582;
char* head_583;
char* tail_584;
char* head_585;
char* tail_586;
char* head_587;
char* tail_588;
char* head_589;
char* tail_590;
char* head_591;
char* tail_592;
char* head_593;
int brace_num_594;
char* tail_595;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2charphcharph* __result334__;
    asm_fun_name_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_549=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_550=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_550--;
                        if(                        brace_num_550==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_551=info->p;
            buffer_append(result_548,head_549,tail_551-head_549);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_552=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_553=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_553++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_553--;
                        if(                        brace_num_553==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_554=info->p;
            buffer_append(result_548,head_552,tail_554-head_552);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_555=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_556=info->p;
            buffer_append(result_548,head_555,tail_556-head_555);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_557=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_558=info->p;
            buffer_append(result_548,head_557,tail_558-head_557);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_559=0;
            if(            *info->p==40) {
                in_dquort_560=(_Bool)0;
                brace_num_561=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_560=!in_dquort_560;
                    }
                    else if(                    in_dquort_560) {
                        buffer_append_char(asm_fun_name_547,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_561++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_561--;
                        if(                        brace_num_561==0) {
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
            head_562=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_563=info->p;
            buffer_append(result_548,head_562,tail_563-head_562);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_564=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_565=info->p;
            buffer_append(result_548,head_564,tail_565-head_564);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_566=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_567=info->p;
            buffer_append(result_548,head_566,tail_567-head_566);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_568=info->p;
            info->p+=strlen("__alloc_size2");
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
            tail_570=info->p;
            buffer_append(result_548,head_568,tail_570-head_568);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_571=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_572=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_572++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_572--;
                        if(                        nest_572==0) {
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
            tail_573=info->p;
            buffer_append(result_548,head_571,tail_573-head_571);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_574=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_575=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_575++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_575--;
                        if(                        nest_575==0) {
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
            tail_576=info->p;
            buffer_append(result_548,head_574,tail_576-head_574);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_577=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_578=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_578++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_578--;
                        if(                        nest_578==0) {
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
            tail_579=info->p;
            buffer_append(result_548,head_577,tail_579-head_577);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_580=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_581=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_581++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_581--;
                        if(                        nest_581==0) {
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
            tail_582=info->p;
            buffer_append(result_548,head_580,tail_582-head_580);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_583=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_584=info->p;
            buffer_append(result_548,head_583,tail_584-head_583);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_585=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_586=info->p;
            buffer_append(result_548,head_585,tail_586-head_585);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_587=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_588=info->p;
            buffer_append(result_548,head_587,tail_588-head_587);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_589=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_590=info->p;
            buffer_append(result_548,head_589,tail_590-head_589);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_591=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_592=info->p;
            buffer_append(result_548,head_591,tail_592-head_591);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_593=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_594=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_594++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_594--;
                        if(                        brace_num_594==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_595=info->p;
            buffer_append(result_548,head_593,tail_595-head_593);
        }
        else {
            break;
        }
    }
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value427=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_547)),(char*)come_increment_ref_count(buffer_to_string(result_548)))));
    come_call_finalizer3(asm_fun_name_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value427,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj177;
char* __dec_obj178;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj177=self->v1;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj178=self->v2;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result331__;
void* __right_value423 = (void*)0;
struct tuple2$2charphcharph* result_596;
void* __right_value424 = (void*)0;
char* __dec_obj179;
void* __right_value425 = (void*)0;
char* __dec_obj180;
struct tuple2$2charphcharph* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_596=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj179=result_596->v1;
        result_596->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj180=result_596->v2;
        result_596->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_596;
    come_call_finalizer3(result_596,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_597;
    result_597=0;
    result_597+=int_get_hash_key(((int)self->v1));
    result_597+=int_get_hash_key(((int)self->v2));
    return result_597;
}

static _Bool tuple2$2charphcharph_equals(struct tuple2$2charphcharph* left, struct tuple2$2charphcharph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj181;
char* __dec_obj182;
struct tuple2$2charphcharph* __result333__;
    __dec_obj181=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj182=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj183;
char* __dec_obj184;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj183=self->v1;
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj184=self->v2;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct buffer* asm_fun_name_598;
void* __right_value430 = (void*)0;
char* attribute_599;
int nest_600;
int nest_601;
int nest_602;
int nest_603;
int nest_604;
void* __right_value431 = (void*)0;
char* __dec_obj185;
int len_605;
_Bool in_dquort_606;
int brace_num_607;
int brace_num_608;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct tuple2$2charphcharph* __result335__;
    asm_fun_name_598=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_599=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_600=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_600++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_600--;
                        if(                        nest_600==0) {
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
                nest_601=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_601++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_601--;
                        if(                        nest_601==0) {
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
                nest_602=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_602++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_602--;
                        if(                        nest_602==0) {
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
                nest_603=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_603++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_603--;
                        if(                        nest_603==0) {
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
                nest_604=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_604++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_604--;
                        if(                        nest_604==0) {
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
            __dec_obj185=attribute_599;
            attribute_599=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_605=0;
            if(            *info->p==40) {
                in_dquort_606=(_Bool)0;
                brace_num_607=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_606=!in_dquort_606;
                    }
                    else if(                    in_dquort_606) {
                        buffer_append_char(asm_fun_name_598,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_607++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_607--;
                        if(                        brace_num_607==0) {
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
                brace_num_608=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_608++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_608--;
                        if(                        brace_num_608==0) {
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
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value434=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_598)),(char*)come_increment_ref_count(attribute_599))));
    come_call_finalizer3(asm_fun_name_598,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_599 = come_decrement_ref_count2(attribute_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value434,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value435 = (void*)0;
char* __dec_obj186;
char* head_609;
int head_sline_610;
void* __right_value436 = (void*)0;
char* buf_611;
void* __right_value437 = (void*)0;
struct sNode* node_612;
_Bool Value_613;
    while(*info->p) {
        __dec_obj186=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_609=info->p;
        head_sline_610=info->sline;
        buf_611=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_611 = come_decrement_ref_count2(buf_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_612=(struct sNode*)come_increment_ref_count(top_level_v99(buf_611,head_609,head_sline_610,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_612!=((void*)0)) {
            Value_613=node_compile(node_612,info);
            if(            !Value_613) {
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
            buf_611 = come_decrement_ref_count2(buf_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_612) { node_612 = come_decrement_ref_count2(node_612, ((struct sNode*)node_612)->finalize, ((struct sNode*)node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_611 = come_decrement_ref_count2(buf_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_612) { node_612 = come_decrement_ref_count2(node_612, ((struct sNode*)node_612)->finalize, ((struct sNode*)node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value438 = (void*)0;
char* name_614;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* result_type_615;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* __list_values1___616[9];
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sTypeph* param_types_627;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __list_values2___628[9];
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1charph* param_names_632;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_default_parametors_633;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sFun* main_fun_637;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* name_638;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* result_type_639;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __list_values3___640[1];
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1sTypeph* param_types_641;
void* __right_value515 = (void*)0;
char* __list_values4___642[1];
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1charph* param_names_643;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1charph* param_default_parametors_644;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sFun* main_fun_645;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* name_646;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* result_type_647;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __list_values5___648[7];
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sTypeph* param_types_649;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* __list_values6___650[7];
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_651;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charph* param_default_parametors_652;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sFun* main_fun_653;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* name_654;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type_655;
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
struct sType* __list_values7___656[5];
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sTypeph* param_types_657;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* __list_values8___658[5];
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1charph* param_names_659;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1charph* param_default_parametors_660;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sFun* main_fun_661;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* name_662;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* result_type_663;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* __list_values9___664[1];
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1sTypeph* param_types_665;
void* __right_value602 = (void*)0;
char* __list_values10___666[1];
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charph* param_names_667;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1charph* param_default_parametors_668;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* main_fun_669;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* name_670;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* result_type_671;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __list_values11___672[4];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1sTypeph* param_types_673;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* __list_values12___674[4];
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* param_names_675;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1charph* param_default_parametors_676;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sFun* main_fun_677;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
char* name_678;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* result_type_679;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* __list_values13___680[3];
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1sTypeph* param_types_681;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* __list_values14___682[3];
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* param_names_683;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_684;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sFun* main_fun_685;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
char* name_686;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sType* result_type_687;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* __list_values15___688[1];
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1sTypeph* param_types_689;
void* __right_value677 = (void*)0;
char* __list_values16___690[1];
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1charph* param_names_691;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1charph* param_default_parametors_692;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sFun* main_fun_693;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* name_694;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sType* result_type_695;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* __list_values17___696[3];
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1sTypeph* param_types_697;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
char* __list_values18___698[3];
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1charph* param_names_699;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1charph* param_default_parametors_700;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* main_fun_701;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
char* name_702;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sType* result_type_703;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct list$1voidph* param_types_704;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1charph* param_names_705;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1charph* param_default_parametors_706;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sFun* main_fun_707;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* name_708;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sType* result_type_709;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sType* __list_values19___710[4];
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct list$1sTypeph* param_types_711;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* __list_values20___712[4];
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct list$1charph* param_names_713;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1charph* param_default_parametors_714;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sFun* main_fun_715;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
char* name_716;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sType* result_type_717;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1voidph* param_types_718;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct list$1charph* param_names_719;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1charph* param_default_parametors_720;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sFun* fun_721;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
char* name_722;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sType* result_type_723;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct list$1voidph* param_types_724;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1charph* param_names_725;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1charph* param_default_parametors_726;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun_727;
void* __right_value789 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_614=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_615=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_627=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___616[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value442=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___616[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value444=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___616[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value446=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___616[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value448=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___616[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value450=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___616[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value452=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___616[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value454=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___616[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value456=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___616[8]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value458=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),9,__list_values1___616)));
        come_call_finalizer3(__right_value442,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value446,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value452,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value456,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value458,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_632=(struct list$1charph*)come_increment_ref_count((__list_values2___628[0]=(char*)come_increment_ref_count(((char*)(__right_value465=__builtin_string("count")))),
__list_values2___628[1]=(char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("size")))),
__list_values2___628[2]=(char*)come_increment_ref_count(((char*)(__right_value467=__builtin_string("sname")))),
__list_values2___628[3]=(char*)come_increment_ref_count(((char*)(__right_value468=__builtin_string("sline")))),
__list_values2___628[4]=(char*)come_increment_ref_count(((char*)(__right_value469=__builtin_string("class_name")))),
__list_values2___628[5]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("finalizer_fun")))),
__list_values2___628[6]=(char*)come_increment_ref_count(((char*)(__right_value471=__builtin_string("cloner_fun")))),
__list_values2___628[7]=(char*)come_increment_ref_count(((char*)(__right_value472=__builtin_string("get_hash_key_fun")))),
__list_values2___628[8]=(char*)come_increment_ref_count(((char*)(__right_value473=__builtin_string("equaler_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),9,__list_values2___628)));
        __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_633=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_633,((void*)0));
        list$1charphp_push_back(param_default_parametors_633,((void*)0));
        list$1charphp_push_back(param_default_parametors_633,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_633,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_633,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_637=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_614),(struct sType*)come_increment_ref_count(result_type_615),(struct list$1sTypeph*)come_increment_ref_count(param_types_627),(struct list$1charph*)come_increment_ref_count(param_names_632),(struct list$1charph*)come_increment_ref_count(param_default_parametors_633),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equler_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_614)),(struct sFun*)come_increment_ref_count(main_fun_637));
        name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_627,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_633,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_637,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_638=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_639=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_641=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___640[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value512=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___640)));
        come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_643=(struct list$1charph*)come_increment_ref_count((__list_values4___642[0]=(char*)come_increment_ref_count(((char*)(__right_value515=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___642)));
        __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_644=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_645=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_638),(struct sType*)come_increment_ref_count(result_type_639),(struct list$1sTypeph*)come_increment_ref_count(param_types_641),(struct list$1charph*)come_increment_ref_count(param_names_643),(struct list$1charph*)come_increment_ref_count(param_default_parametors_644),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_638)),(struct sFun*)come_increment_ref_count(main_fun_645));
        name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_641,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_644,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_645,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_646=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_649=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___648[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___648[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value533=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___648[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value535=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___648[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value537=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___648[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value539=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___648[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value541=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___648[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value543=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),7,__list_values5___648)));
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value535,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value537,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value539,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_651=(struct list$1charph*)come_increment_ref_count((__list_values6___650[0]=(char*)come_increment_ref_count(((char*)(__right_value546=__builtin_string("fun")))),
__list_values6___650[1]=(char*)come_increment_ref_count(((char*)(__right_value547=__builtin_string("mem")))),
__list_values6___650[2]=(char*)come_increment_ref_count(((char*)(__right_value548=__builtin_string("protocol_fun")))),
__list_values6___650[3]=(char*)come_increment_ref_count(((char*)(__right_value549=__builtin_string("protocol_obj")))),
__list_values6___650[4]=(char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("call_finalizer_only")))),
__list_values6___650[5]=(char*)come_increment_ref_count(((char*)(__right_value551=__builtin_string("no_decrement")))),
__list_values6___650[6]=(char*)come_increment_ref_count(((char*)(__right_value552=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),7,__list_values6___650)));
        __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_652=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_653=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_646),(struct sType*)come_increment_ref_count(result_type_647),(struct list$1sTypeph*)come_increment_ref_count(param_types_649),(struct list$1charph*)come_increment_ref_count(param_names_651),(struct list$1charph*)come_increment_ref_count(param_default_parametors_652),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_646)),(struct sFun*)come_increment_ref_count(main_fun_653));
        name_646 = come_decrement_ref_count2(name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_653,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_654=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_655=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_657=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___656[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___656[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___656[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___656[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value574=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
__list_values7___656[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value576=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),5,__list_values7___656)));
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_659=(struct list$1charph*)come_increment_ref_count((__list_values8___658[0]=(char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("mem")))),
__list_values8___658[1]=(char*)come_increment_ref_count(((char*)(__right_value580=__builtin_string("protocol_fun")))),
__list_values8___658[2]=(char*)come_increment_ref_count(((char*)(__right_value581=__builtin_string("protocol_obj")))),
__list_values8___658[3]=(char*)come_increment_ref_count(((char*)(__right_value582=__builtin_string("no_decrement")))),
__list_values8___658[4]=(char*)come_increment_ref_count(((char*)(__right_value583=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),5,__list_values8___658)));
        __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_660=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_661=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_654),(struct sType*)come_increment_ref_count(result_type_655),(struct list$1sTypeph*)come_increment_ref_count(param_types_657),(struct list$1charph*)come_increment_ref_count(param_names_659),(struct list$1charph*)come_increment_ref_count(param_default_parametors_660),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_654)),(struct sFun*)come_increment_ref_count(main_fun_661));
        name_654 = come_decrement_ref_count2(name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_657,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_660,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_661,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_662=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_663=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_665=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___664[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values9___664)));
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_667=(struct list$1charph*)come_increment_ref_count((__list_values10___666[0]=(char*)come_increment_ref_count(((char*)(__right_value602=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values10___666)));
        __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_668=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_669=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_662),(struct sType*)come_increment_ref_count(result_type_663),(struct list$1sTypeph*)come_increment_ref_count(param_types_665),(struct list$1charph*)come_increment_ref_count(param_names_667),(struct list$1charph*)come_increment_ref_count(param_default_parametors_668),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_662)),(struct sFun*)come_increment_ref_count(main_fun_669));
        name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_665,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_667,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_669,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_670=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_671=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_673=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___672[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value618=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values11___672[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value620=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values11___672[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value622=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values11___672[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value624=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values11___672)));
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_675=(struct list$1charph*)come_increment_ref_count((__list_values12___674[0]=(char*)come_increment_ref_count(((char*)(__right_value627=__builtin_string("block")))),
__list_values12___674[1]=(char*)come_increment_ref_count(((char*)(__right_value628=__builtin_string("sname")))),
__list_values12___674[2]=(char*)come_increment_ref_count(((char*)(__right_value629=__builtin_string("sline")))),
__list_values12___674[3]=(char*)come_increment_ref_count(((char*)(__right_value630=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values12___674)));
        __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_676=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_676,((void*)0));
        list$1charphp_push_back(param_default_parametors_676,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_676,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_676,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_677=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_670),(struct sType*)come_increment_ref_count(result_type_671),(struct list$1sTypeph*)come_increment_ref_count(param_types_673),(struct list$1charph*)come_increment_ref_count(param_names_675),(struct list$1charph*)come_increment_ref_count(param_default_parametors_676),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_670)),(struct sFun*)come_increment_ref_count(main_fun_677));
        name_670 = come_decrement_ref_count2(name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_677,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_678=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_679=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_681=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___680[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value649=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values13___680[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value651=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values13___680[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value653=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values13___680)));
        come_call_finalizer3(__right_value649,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value651,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value653,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_683=(struct list$1charph*)come_increment_ref_count((__list_values14___682[0]=(char*)come_increment_ref_count(((char*)(__right_value656=__builtin_string("b")))),
__list_values14___682[1]=(char*)come_increment_ref_count(((char*)(__right_value657=__builtin_string("c")))),
__list_values14___682[2]=(char*)come_increment_ref_count(((char*)(__right_value658=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values14___682)));
        __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_684=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_685=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_678),(struct sType*)come_increment_ref_count(result_type_679),(struct list$1sTypeph*)come_increment_ref_count(param_types_681),(struct list$1charph*)come_increment_ref_count(param_names_683),(struct list$1charph*)come_increment_ref_count(param_default_parametors_684),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_678)),(struct sFun*)come_increment_ref_count(main_fun_685));
        name_678 = come_decrement_ref_count2(name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_681,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_685,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_686=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_687=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_689=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___688[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value674=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values15___688)));
        come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_691=(struct list$1charph*)come_increment_ref_count((__list_values16___690[0]=(char*)come_increment_ref_count(((char*)(__right_value677=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values16___690)));
        __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_692=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_693=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_686),(struct sType*)come_increment_ref_count(result_type_687),(struct list$1sTypeph*)come_increment_ref_count(param_types_689),(struct list$1charph*)come_increment_ref_count(param_names_691),(struct list$1charph*)come_increment_ref_count(param_default_parametors_692),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_686)),(struct sFun*)come_increment_ref_count(main_fun_693));
        name_686 = come_decrement_ref_count2(name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_687,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_689,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_691,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_692,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_693,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_694=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_695=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_697=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___696[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value693=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___696[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value695=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___696[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value697=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values17___696)));
        come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value695,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_699=(struct list$1charph*)come_increment_ref_count((__list_values18___698[0]=(char*)come_increment_ref_count(((char*)(__right_value700=xsprintf("come_malloc")))),
__list_values18___698[1]=(char*)come_increment_ref_count(((char*)(__right_value701=xsprintf("come_debug")))),
__list_values18___698[2]=(char*)come_increment_ref_count(((char*)(__right_value702=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values18___698)));
        __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_700=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_700,((void*)0));
        main_fun_701=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_694),(struct sType*)come_increment_ref_count(result_type_695),(struct list$1sTypeph*)come_increment_ref_count(param_types_697),(struct list$1charph*)come_increment_ref_count(param_names_699),(struct list$1charph*)come_increment_ref_count(param_default_parametors_700),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_694)),(struct sFun*)come_increment_ref_count(main_fun_701));
        name_694 = come_decrement_ref_count2(name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_695,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_697,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_700,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_701,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_702=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_703=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_704=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1728, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_705=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_706=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_707=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_702),(struct sType*)come_increment_ref_count(result_type_703),(struct list$1voidph*)come_increment_ref_count(param_types_704),(struct list$1charph*)come_increment_ref_count(param_names_705),(struct list$1charph*)come_increment_ref_count(param_default_parametors_706),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_702)),(struct sFun*)come_increment_ref_count(main_fun_707));
        name_702 = come_decrement_ref_count2(name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_704,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_707,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_708=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_709=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_711=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___710[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value734=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values19___710[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value736=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values19___710[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value738=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values19___710[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value740=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values19___710)));
        come_call_finalizer3(__right_value734,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value736,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value738,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value740,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_713=(struct list$1charph*)come_increment_ref_count((__list_values20___712[0]=(char*)come_increment_ref_count(((char*)(__right_value743=__builtin_string("mem")))),
__list_values20___712[1]=(char*)come_increment_ref_count(((char*)(__right_value744=__builtin_string("sname")))),
__list_values20___712[2]=(char*)come_increment_ref_count(((char*)(__right_value745=__builtin_string("sline")))),
__list_values20___712[3]=(char*)come_increment_ref_count(((char*)(__right_value746=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values20___712)));
        __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_714=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_715=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_708),(struct sType*)come_increment_ref_count(result_type_709),(struct list$1sTypeph*)come_increment_ref_count(param_types_711),(struct list$1charph*)come_increment_ref_count(param_names_713),(struct list$1charph*)come_increment_ref_count(param_default_parametors_714),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_708)),(struct sFun*)come_increment_ref_count(main_fun_715));
        name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_711,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_713,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_714,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_715,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_716=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_717=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_718=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1758, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_719=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_720=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_721=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_716),(struct sType*)come_increment_ref_count(result_type_717),(struct list$1voidph*)come_increment_ref_count(param_types_718),(struct list$1charph*)come_increment_ref_count(param_names_719),(struct list$1charph*)come_increment_ref_count(param_default_parametors_720),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_716)),(struct sFun*)come_increment_ref_count(fun_721));
        name_716 = come_decrement_ref_count2(name_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_718,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_719,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_720,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_721,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_722=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_723=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_724=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1790, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_725=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_726=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_727=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_722),(struct sType*)come_increment_ref_count(result_type_723),(struct list$1voidph*)come_increment_ref_count(param_types_724),(struct list$1charph*)come_increment_ref_count(param_names_725),(struct list$1charph*)come_increment_ref_count(param_default_parametors_726),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_722)),(struct sFun*)come_increment_ref_count(fun_727));
        name_722 = come_decrement_ref_count2(name_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_724,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_725,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_727,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_617;
struct list$1sTypeph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_617=0;    i_617<num_value;    i_617++    ){
        list$1sTypephp_push_back(self,values[i_617]);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
struct list_item$1sTypeph* litem_618;
struct sType* __dec_obj187;
void* __right_value460 = (void*)0;
struct list_item$1sTypeph* litem_619;
struct sType* __dec_obj188;
void* __right_value461 = (void*)0;
struct list_item$1sTypeph* litem_620;
struct sType* __dec_obj189;
struct list$1sTypeph* __result336__;
    if(    self->len==0) {
        litem_618=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value459=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1452, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_618->prev=((void*)0);
        litem_618->next=((void*)0);
        __dec_obj187=litem_618->item;
        litem_618->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_618;
        self->head=litem_618;
    }
    else if(    self->len==1) {
        litem_619=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value460=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1462, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_619->prev=self->head;
        litem_619->next=((void*)0);
        __dec_obj188=litem_619->item;
        litem_619->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_619;
        self->head->next=litem_619;
    }
    else {
        litem_620=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value461=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1472, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_620->prev=self->tail;
        litem_620->next=((void*)0);
        __dec_obj189=litem_620->item;
        litem_620->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_620;
        self->tail=litem_620;
    }
    self->len++;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_621;
struct list_item$1sTypeph* prev_it_622;
    it_621=self->head;
    while(it_621!=((void*)0)) {
        prev_it_622=it_621;
        it_621=it_621->next;
        come_call_finalizer3(prev_it_622,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj190;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj190=self->item;
            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_623;
struct list_item$1sTypeph* prev_it_624;
    it_623=self->head;
    while(it_623!=((void*)0)) {
        prev_it_624=it_623;
        it_623=it_623->next;
        come_call_finalizer3(prev_it_624,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result338__;
void* __right_value462 = (void*)0;
struct list$1sTypeph* result_625;
struct list$1sTypeph* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_625=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_625->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_625->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_625->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_625->it=self->it;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_625;
    come_call_finalizer3(result_625,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_626;
    result_626=0;
    result_626+=int_get_hash_key(((int)self->head));
    result_626+=int_get_hash_key(((int)self->tail));
    result_626+=int_get_hash_key(((int)self->len));
    result_626+=int_get_hash_key(((int)self->it));
    return result_626;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    if(    !list_item$1sTypeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_629;
struct list$1charph* __result340__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_629=0;    i_629<num_value;    i_629++    ){
        list$1charphp_push_back(self,values[i_629]);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result341__;
void* __right_value474 = (void*)0;
struct list$1charph* result_630;
struct list$1charph* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_630=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_630->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_630->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_630->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_630->it=self->it;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_630;
    come_call_finalizer3(result_630,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_631;
    result_631=0;
    result_631+=int_get_hash_key(((int)self->head));
    result_631+=int_get_hash_key(((int)self->tail));
    result_631+=int_get_hash_key(((int)self->len));
    result_631+=int_get_hash_key(((int)self->it));
    return result_631;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
    if(    !list_item$1charph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result343__;
void* __right_value482 = (void*)0;
struct sFun* result_635;
void* __right_value483 = (void*)0;
char* __dec_obj191;
void* __right_value484 = (void*)0;
struct sType* __dec_obj192;
void* __right_value485 = (void*)0;
struct list$1voidph* __dec_obj193;
void* __right_value486 = (void*)0;
struct list$1charph* __dec_obj194;
void* __right_value487 = (void*)0;
struct list$1charph* __dec_obj195;
void* __right_value488 = (void*)0;
struct sType* __dec_obj196;
void* __right_value492 = (void*)0;
struct sBlock* __dec_obj199;
void* __right_value493 = (void*)0;
struct buffer* __dec_obj200;
void* __right_value494 = (void*)0;
struct buffer* __dec_obj201;
void* __right_value495 = (void*)0;
struct buffer* __dec_obj202;
void* __right_value496 = (void*)0;
struct buffer* __dec_obj203;
void* __right_value497 = (void*)0;
char* __dec_obj204;
void* __right_value498 = (void*)0;
char* __dec_obj205;
void* __right_value499 = (void*)0;
char* __dec_obj206;
void* __right_value500 = (void*)0;
char* __dec_obj207;
struct sFun* __result346__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_635=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj191=result_635->mName;
        result_635->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj192=result_635->mResultType;
        result_635->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj193=result_635->mParamTypes;
        result_635->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj193,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj194=result_635->mParamNames;
        result_635->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj194,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj195=result_635->mParamDefaultParametors;
        result_635->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj195,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj196=result_635->mLambdaType;
        result_635->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj199=result_635->mBlock;
        result_635->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj199,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_635->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj200=result_635->mSource;
        result_635->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj201=result_635->mSourceHead;
        result_635->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj202=result_635->mSourceHead2;
        result_635->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj203=result_635->mSourceDefer;
        result_635->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_635->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_635->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_635->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj204=result_635->mComeHeader;
        result_635->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj205=result_635->mDeclareSName;
        result_635->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_635->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_635->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_635->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj206=result_635->mAttribute;
        result_635->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj207=result_635->mFunAttribute;
        result_635->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_635;
    come_call_finalizer3(result_635,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_634;
    result_634=0;
    result_634+=int_get_hash_key(((int)self->mName));
    result_634+=int_get_hash_key(((int)self->mResultType));
    result_634+=int_get_hash_key(((int)self->mParamTypes));
    result_634+=int_get_hash_key(((int)self->mParamNames));
    result_634+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_634+=int_get_hash_key(((int)self->mLambdaType));
    result_634+=int_get_hash_key(((int)self->mBlock));
    result_634+=int_get_hash_key(((int)self->mExternal));
    result_634+=int_get_hash_key(((int)self->mVarArgs));
    result_634+=int_get_hash_key(((int)self->mSource));
    result_634+=int_get_hash_key(((int)self->mSourceHead));
    result_634+=int_get_hash_key(((int)self->mSourceHead2));
    result_634+=int_get_hash_key(((int)self->mSourceDefer));
    result_634+=int_get_hash_key(((int)self->mStatic));
    result_634+=int_get_hash_key(((int)self->mInline));
    result_634+=int_get_hash_key(((int)self->mUniq));
    result_634+=int_get_hash_key(((int)self->mGenerate));
    result_634+=int_get_hash_key(((int)self->mComeHeader));
    result_634+=int_get_hash_key(((int)self->mCloner));
    result_634+=int_get_hash_key(((int)self->mDeclareSName));
    result_634+=int_get_hash_key(((int)self->mNoResultType));
    result_634+=int_get_hash_key(((int)self->mDeclaredResultObject));
    result_634+=int_get_hash_key(((int)self->no_output_come_code2));
    result_634+=int_get_hash_key(((int)self->mAttribute));
    result_634+=int_get_hash_key(((int)self->mFunAttribute));
    return result_634;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mComeHeader,right->mComeHeader)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCloner,right->mCloner)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDeclaredResultObject,right->mDeclaredResultObject)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->no_output_come_code2,right->no_output_come_code2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNodephp_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result344__;
void* __right_value489 = (void*)0;
struct sBlock* result_636;
void* __right_value490 = (void*)0;
struct list$1sNodeph* __dec_obj197;
void* __right_value491 = (void*)0;
struct sVarTable* __dec_obj198;
struct sBlock* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_636=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj197=result_636->mNodes;
        result_636->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj198=result_636->mVarTable;
        result_636->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj198,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_728;
_Bool is_type_name_flag_729;
int sline_730;
_Bool define_struct_nobody_731;
char* p_732;
int sline_733;
void* __right_value790 = (void*)0;
char* word_734;
_Bool define_function_pointer_result_function_735;
_Bool define_variable_between_brace_736;
char* p_737;
void* __right_value791 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_738=0;
char* fun_name_739=0;
_Bool err_740=0;
void* __right_value792 = (void*)0;
char* word_741;
_Bool define_function_flag_742;
char* p_743;
void* __right_value793 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_744=0;
char* fun_name_745=0;
_Bool err_746=0;
char* word_747;
void* __right_value794 = (void*)0;
char* __dec_obj210;
void* __right_value795 = (void*)0;
char* __dec_obj211;
char* __dec_obj212;
void* __right_value796 = (void*)0;
char* __dec_obj213;
_Bool define_variable_748;
char* p_749;
void* __right_value797 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_750=0;
char* fun_name_751=0;
_Bool err_752=0;
void* __right_value798 = (void*)0;
char* word_753;
void* __right_value799 = (void*)0;
char* word_754;
char* p_755;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
char* word_756;
void* __right_value803 = (void*)0;
char* __dec_obj214;
void* __right_value804 = (void*)0;
char* word_757;
void* __right_value805 = (void*)0;
char* word_760;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* node_761;
struct sNode* __result348__;
void* __right_value808 = (void*)0;
struct sNode* __result349__;
char* header_head_762;
void* __right_value809 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_763=0;
char* fun_name_764=0;
_Bool err_765=0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1voidph* param_types_766;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1charph* param_names_767;
void* __right_value814 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_768=0;
char* param_name_769=0;
_Bool err_770=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1voidph* param_types2_775;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1charph* param_names2_776;
void* __right_value824 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_777=0;
char* param_name_778=0;
_Bool err_779=0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* header_tail_781;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sType* result_type2_782;
struct sType* __dec_obj218;
void* __right_value829 = (void*)0;
struct list$1voidph* __dec_obj219;
void* __right_value830 = (void*)0;
struct list$1charph* __dec_obj220;
_Bool var_args_783;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct buffer* header_buf_784;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct list$1charph* param_default_parametors_785;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sFun* fun_786;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sFun* fun2_787;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value850 = (void*)0;
struct sNode* __result353__;
void* __right_value851 = (void*)0;
struct sNode* node_789;
struct sNode* __result354__;
void* __right_value852 = (void*)0;
struct sNode* node_790;
struct sNode* __result355__;
void* __right_value853 = (void*)0;
struct sNode* node_791;
char* source_tail_792;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct buffer* header_793;
struct sNode* __result356__;
void* __right_value856 = (void*)0;
char* buf2_794;
void* __right_value857 = (void*)0;
struct sNode* __result357__;
    info->in_top_level=(_Bool)1;
    source_head_728=info->p;
    is_type_name_flag_729=is_type_name(buf,info);
    sline_730=info->sline;
    define_struct_nobody_731=(_Bool)0;
    {
        p_732=info->p;
        sline_733=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_734=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_731=(_Bool)1;
                }
                word_734 = come_decrement_ref_count2(word_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_733;
    }
    define_function_pointer_result_function_735=(_Bool)0;
    define_variable_between_brace_736=(_Bool)0;
    if(    is_type_name_flag_729) {
        p_737=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value791=backtrace_parse_type((_Bool)0,info)));
            result_type_738=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_739=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_740=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value791,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_735=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_741=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_741,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_736=(_Bool)1;
                            }
                        }
                        word_741 = come_decrement_ref_count2(word_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_738,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_739 = come_decrement_ref_count2(fun_name_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_730;
    }
    define_function_flag_742=(_Bool)0;
    if(    is_type_name_flag_729&&!define_function_pointer_result_function_735&&charp_operator_not_equals(buf,"__typeof__")) {
        p_743=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value793=backtrace_parse_type((_Bool)0,info)));
            result_type_744=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_745=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_746=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value793,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_745 = come_decrement_ref_count2(fun_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_747=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj210=word_747;
                word_747=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_747,"extern")) {
                    __dec_obj211=word_747;
                    word_747=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj212=word_747;
                word_747=((void*)0);
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_747) {
                if(                is_type_name(word_747,info)) {
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
                        __dec_obj213=word_747;
                        word_747=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_747)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_729) {
                        define_function_flag_742=(_Bool)1;
                    }
                }
            }
            word_747 = come_decrement_ref_count2(word_747, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_743;
        info->sline=sline_730;
    }
    define_variable_748=(_Bool)1;
    if(    is_type_name_flag_729&&!define_function_pointer_result_function_735) {
        p_749=info->p;
        info->p=head;
        if(        !is_type_name_flag_729) {
            define_variable_748=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value797=backtrace_parse_type((_Bool)0,info)));
            result_type_750=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_751=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_752=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value797,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_753=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_748=(_Bool)1;
                            }
                        }
                        word_753 = come_decrement_ref_count2(word_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_754=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_754,info)&&*info->p!=40) {
                            define_variable_748=(_Bool)1;
                        }
                    }
                    word_754 = come_decrement_ref_count2(word_754, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_751 = come_decrement_ref_count2(fun_name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_748=(_Bool)0;
        }
        else if(        define_variable_748) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_748=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_748=(_Bool)0;
            }
        }
        info->p=p_749;
        info->sline=sline_730;
    }
    else {
        define_variable_748=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_735) {
        p_755=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value800=parse_struct_attribute(info)));
            __right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value801=parse_word(info)));
                __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_756=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj214=word_756;
                        word_756=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_756,"extends")) {
                            define_variable_748=(_Bool)0;
                        }
                    }
                    word_756 = come_decrement_ref_count2(word_756, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_748=(_Bool)0;
        }
        else if(        define_variable_748) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_748=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_748=(_Bool)0;
            }
        }
        info->p=p_755;
        info->sline=sline_730;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_757=(char*)come_increment_ref_count(parse_word(info));
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
                    word_760=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_760)));
                    word_760 = come_decrement_ref_count2(word_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_761=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result348__ = gComeFunResultObject = __result_obj__ = node_761;
            if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_757 = come_decrement_ref_count2(word_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result348__;
            if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_757 = come_decrement_ref_count2(word_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_731) {
    }
    else if(    define_variable_between_brace_736) {
        info->p=head;
        info->sline=sline_730;
        __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=parse_global_variable(info)));
        if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    else if(    define_function_pointer_result_function_735) {
        header_head_762=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value809=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_763=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_764=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_765=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value809,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_766=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2119, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            param_names_767=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value814=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_768=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_769=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_770=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value814,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_770) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_766,(struct sType*)come_increment_ref_count(param_type_768));
                    static int num_function_pointer_result_var_name_a_774=0;
                    list$1charphp_push_back(param_names_767,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_774)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value819=parse_word(info)));
                        __right_value819 = come_decrement_ref_count2(__right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_769 = come_decrement_ref_count2(param_name_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_769 = come_decrement_ref_count2(param_name_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_775=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2166, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
                param_names2_776=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value824=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_777=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_778=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_779=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value824,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_779) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_775,(struct sType*)come_increment_ref_count(param_type_777));
                        static int num_function_pointer_result_var_name_b_780=0;
                        list$1charphp_push_back(param_names2_776,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_780)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value826=parse_word(info)));
                            __right_value826 = come_decrement_ref_count2(__right_value826, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_777,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_778 = come_decrement_ref_count2(param_name_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_777,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_778 = come_decrement_ref_count2(param_name_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_781=info->p;
                result_type2_782=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj218=result_type2_782->mResultType;
                result_type2_782->mResultType=(struct sType*)come_increment_ref_count(result_type_763);
                come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj219=result_type2_782->mParamTypes;
                result_type2_782->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_775));
                come_call_finalizer3(__dec_obj219,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj220=result_type2_782->mParamNames;
                result_type2_782->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_776));
                come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_782->mVarArgs=(_Bool)0;
                result_type2_782->mStatic=(_Bool)0;
                var_args_783=(_Bool)0;
                header_buf_784=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                buffer_append(header_buf_784,header_head_762,header_tail_781-header_head_762);
                buffer_append_char(header_buf_784,0);
                param_default_parametors_785=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_786=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_764)),(struct sType*)come_increment_ref_count(result_type2_782),(struct list$1voidph*)come_increment_ref_count(param_types_766),(struct list$1charph*)come_increment_ref_count(param_names_767),(struct list$1charph*)come_increment_ref_count(param_default_parametors_785),(_Bool)1,var_args_783,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_784)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_787=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value842=__builtin_string(fun_name_764)))));
                __right_value842 = come_decrement_ref_count2(__right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_787==((void*)0)||fun2_787->mExternal) {
                    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_764)),(struct sFun*)come_increment_ref_count(fun_786));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value846=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_786),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value850=_inf_value2));
                come_call_finalizer3(param_types2_775,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_776,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_782,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_785,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_786,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_787,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_766,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_767,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_763,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_764 = come_decrement_ref_count2(fun_name_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value846,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value850) { __right_value850 = come_decrement_ref_count2(__right_value850, ((struct sNode*)__right_value850)->finalize, ((struct sNode*)__right_value850)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result353__;
                come_call_finalizer3(param_types2_775,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_776,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_782,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_784,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_785,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_786,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_787,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_766,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_767,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_763,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_764 = come_decrement_ref_count2(fun_name_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_730;
        node_789=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_789;
        if(node_789) { node_789 = come_decrement_ref_count2(node_789, ((struct sNode*)node_789)->finalize, ((struct sNode*)node_789)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        if(node_789) { node_789 = come_decrement_ref_count2(node_789, ((struct sNode*)node_789)->finalize, ((struct sNode*)node_789)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_742) {
        info->p=head;
        info->sline=sline_730;
        node_790=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result355__ = gComeFunResultObject = __result_obj__ = node_790;
        if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result355__;
        if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_748) {
        info->p=head;
        info->sline=sline_730;
        node_791=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_792=info->p;
        header_793=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_793,source_head_728,source_tail_792-source_head_728);
        __result356__ = gComeFunResultObject = __result_obj__ = node_791;
        if(node_791) { node_791 = come_decrement_ref_count2(node_791, ((struct sNode*)node_791)->finalize, ((struct sNode*)node_791)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result356__;
        if(node_791) { node_791 = come_decrement_ref_count2(node_791, ((struct sNode*)node_791)->finalize, ((struct sNode*)node_791)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_793,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_730;
    buf2_794=(char*)come_increment_ref_count(parse_word(info));
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value857=top_level_v98(buf2_794,head,head_sline,info)));
    buf2_794 = come_decrement_ref_count2(buf2_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value857) { __right_value857 = come_decrement_ref_count2(__right_value857, ((struct sNode*)__right_value857)->finalize, ((struct sNode*)__right_value857)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj208;
char* __dec_obj209;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj208=self->v1;
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj209=self->v2;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_758;
struct list_item$1charph* prev_it_759;
struct list$1charph* __result347__;
    it_758=self->head;
    while(it_758!=((void*)0)) {
        prev_it_759=it_758;
        it_758=it_758->next;
        come_call_finalizer3(prev_it_759,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value815 = (void*)0;
struct list_item$1voidph* litem_771;
void* __dec_obj215;
void* __right_value816 = (void*)0;
struct list_item$1voidph* litem_772;
void* __dec_obj216;
void* __right_value817 = (void*)0;
struct list_item$1voidph* litem_773;
void* __dec_obj217;
struct list$1voidph* __result350__;
    if(    self->len==0) {
        litem_771=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value815=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_771->prev=((void*)0);
        litem_771->next=((void*)0);
        __dec_obj215=litem_771->item;
        litem_771->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_771;
        self->head=litem_771;
    }
    else if(    self->len==1) {
        litem_772=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value816=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_772->prev=self->head;
        litem_772->next=((void*)0);
        __dec_obj216=litem_772->item;
        litem_772->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj216,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_772;
        self->head->next=litem_772;
    }
    else {
        litem_773=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value817=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_773->prev=self->tail;
        litem_773->next=((void*)0);
        __dec_obj217=litem_773->item;
        litem_773->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj217,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_773;
        self->tail=litem_773;
    }
    self->len++;
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result351__;
void* __right_value847 = (void*)0;
struct sFunNode* result_788;
void* __right_value848 = (void*)0;
char* __dec_obj221;
void* __right_value849 = (void*)0;
struct sFun* __dec_obj222;
struct sFunNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_788=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_788->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_788->sname;
        result_788->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_788->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj222=result_788->mFun;
        result_788->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj222,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_788;
    come_call_finalizer3(result_788,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_795;
int caller_line_796;
char* caller_sname_797;
_Bool comma_instead_of_semicolon_798;
char* last_code_799;
char* __dec_obj223;
char* last_code2_800;
char* __dec_obj224;
void* __right_value858 = (void*)0;
char* sname_top_801;
int sline_top_802;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sFun* funX_803;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct tuple2$2charphbool* __result361__;
void* __right_value865 = (void*)0;
struct sType* result_type_806;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1voidph* param_types_807;
struct list$1voidph* o2_saved_808;
struct sType* it_809;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sType* param_type_810;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1charph* param_names_811;
void* __right_value872 = (void*)0;
struct list$1charph* param_default_parametors_812;
char* p_813;
int sline_814;
char* sname_815;
char* head_816;
struct buffer* source_817;
void* __right_value873 = (void*)0;
struct buffer* __dec_obj229;
struct sType* generics_type_saved_818;
void* __right_value874 = (void*)0;
struct sType* __dec_obj230;
struct list$1charph* method_generics_type_names_819;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct list$1charph* __dec_obj231;
struct list$1charph* o2_saved_820;
char* it_821;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1charph* __dec_obj232;
char* __dec_obj233;
void* __right_value879 = (void*)0;
struct sBlock* block_822;
struct buffer* __dec_obj234;
char* __dec_obj235;
_Bool var_args_823;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sFun* fun_824;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value889 = (void*)0;
struct sNode* node_825;
_Bool in_generics_fun_826;
_Bool Value_827;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct tuple2$2charphbool* __result362__;
struct sType* __dec_obj236;
struct list$1charph* __dec_obj237;
void* __right_value893 = (void*)0;
char* __dec_obj238;
char* __dec_obj239;
char* __dec_obj240;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct tuple2$2charphbool* __result363__;
    caller_fun_795=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_796=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_797=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_798=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_799=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj223=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_800=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj224=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_801=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_802=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_803=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value859=__builtin_string(fun_name)))));
    __right_value859 = come_decrement_ref_count2(__right_value859, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(    funX_803) {
        __result361__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value864=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_803,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value864,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_type_806=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_807=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2316, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_808=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_809=((struct sType*)list$1voidphp_begin((o2_saved_808)));    !list$1voidphp_end((o2_saved_808));    it_809=((struct sType*)list$1voidphp_next((o2_saved_808)))    ){
        param_type_810=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value868=come_call_cloner(sType_clone, it_809))),generics_type,info));
        come_call_finalizer3(__right_value868,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_810->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_807,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_810)));
        come_call_finalizer3(param_type_810,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_808,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_811=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_812=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_813=info->p;
    sline_814=info->sline;
    sname_815=(char*)come_increment_ref_count(info->sname);
    head_816=info->head;
    source_817=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj229=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_818=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj230=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_819=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj231=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_820=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_821=list$1charphp_begin((o2_saved_820));    !list$1charphp_end((o2_saved_820));    it_821=list$1charphp_next((o2_saved_820))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_821)));
    }
    come_call_finalizer3(o2_saved_820,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj232=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj232,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj233=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_822=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_816;
    __dec_obj234=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_817);
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_813;
    info->sline=sline_814;
    __dec_obj235=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_815);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_806->mInline=(_Bool)0;
    result_type_806->mStatic=(_Bool)0;
    result_type_806->mUniq=(_Bool)0;
    var_args_823=generics_fun->mVarArgs;
    fun_824=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_806),(struct list$1voidph*)come_increment_ref_count(param_types_807),(struct list$1charph*)come_increment_ref_count(param_names_811),(struct list$1charph*)come_increment_ref_count(param_default_parametors_812),(_Bool)0,var_args_823,(struct sBlock*)come_increment_ref_count(block_822),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_824));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value888=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_824),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_825=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value888,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_826=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_827=node_compile(node_825,info);
    if(    !Value_827) {
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value892=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_803,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_806,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_807,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_811,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_812,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_815 = come_decrement_ref_count2(sname_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_817,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_818,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_822,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_824,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_825) { node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value892,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_826;
    __dec_obj236=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_818);
    come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj237=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_819);
    come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_801));
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_802;
    __dec_obj239=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_799);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_800);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_795;
    info->caller_line=caller_line_796;
    info->caller_sname=caller_sname_797;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_798;
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value896=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_803,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_806,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_807,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_811,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_812,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_815 = come_decrement_ref_count2(sname_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_817,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_818,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_822,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_824,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_825) { node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value896,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj225;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj225=self->v1;
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result358__;
void* __right_value861 = (void*)0;
struct tuple2$2charphbool* result_804;
void* __right_value862 = (void*)0;
char* __dec_obj226;
struct tuple2$2charphbool* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_804=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj226=result_804->v1;
        result_804->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_804->v2=self->v2;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_804;
    come_call_finalizer3(result_804,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_805;
    result_805=0;
    result_805+=int_get_hash_key(((int)self->v1));
    result_805+=int_get_hash_key(((int)self->v2));
    return result_805;
}

static _Bool tuple2$2charphbool_equals(struct tuple2$2charphbool* left, struct tuple2$2charphbool* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj227;
struct tuple2$2charphbool* __result360__;
    __dec_obj227=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj228;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj228=self->v1;
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_828;
int caller_line_829;
char* caller_sname_830;
_Bool comma_instead_of_semicolon_831;
char* last_code_832;
char* __dec_obj241;
char* last_code2_833;
char* __dec_obj242;
void* __right_value897 = (void*)0;
char* sname_top_834;
int sline_top_835;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sFun* funX_836;
_Bool __result364__;
void* __right_value900 = (void*)0;
struct sType* result_type_837;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct list$1voidph* param_types_838;
struct list$1voidph* o2_saved_839;
struct sType* it_840;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sType* param_type_841;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct list$1charph* param_names_842;
void* __right_value907 = (void*)0;
struct list$1charph* param_default_parametors_843;
char* p_844;
int sline_845;
char* sname_846;
char* head_847;
struct buffer* source_848;
void* __right_value908 = (void*)0;
struct buffer* __dec_obj243;
struct list$1charph* method_generics_type_names_849;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct list$1charph* __dec_obj244;
struct list$1charph* o2_saved_850;
char* it_851;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct list$1charph* __dec_obj245;
char* __dec_obj246;
void* __right_value913 = (void*)0;
struct sBlock* block_852;
struct buffer* __dec_obj247;
char* __dec_obj248;
_Bool generate__853;
_Bool var_args_854;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct sFun* fun_855;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value924 = (void*)0;
struct sNode* node_856;
_Bool Value_857;
void* __if_result__1_858 = (void*)0;
_Bool __result365__;
struct list$1charph* __dec_obj249;
void* __right_value925 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
char* __dec_obj252;
_Bool __result366__;
    caller_fun_828=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_829=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_830=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_831=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_832=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj241=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_833=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj242=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_834=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_835=info->sline;
    funX_836=((struct sFun*)((void*)(__right_value899=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value898=__builtin_string(fun_name)))))));
    __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value899,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    funX_836) {
        __result364__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_832 = come_decrement_ref_count2(last_code_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_833 = come_decrement_ref_count2(last_code2_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_834 = come_decrement_ref_count2(sname_top_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result364__;
    }
    result_type_837=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_838=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2431, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_839=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_840=((struct sType*)list$1voidphp_begin((o2_saved_839)));    !list$1voidphp_end((o2_saved_839));    it_840=((struct sType*)list$1voidphp_next((o2_saved_839)))    ){
        param_type_841=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value903=come_call_cloner(sType_clone, it_840))),info));
        come_call_finalizer3(__right_value903,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_841->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_838,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_841)));
        come_call_finalizer3(param_type_841,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_839,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_842=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_843=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_844=info->p;
    sline_845=info->sline;
    sname_846=(char*)come_increment_ref_count(info->sname);
    head_847=info->head;
    source_848=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj243=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_849=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj244=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_850=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_851=list$1charphp_begin((o2_saved_850));    !list$1charphp_end((o2_saved_850));    it_851=list$1charphp_next((o2_saved_850))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_851)));
    }
    come_call_finalizer3(o2_saved_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj245=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj245,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj246=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_852=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_847;
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_848);
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_844;
    info->sline=sline_845;
    __dec_obj248=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_846);
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_837->mInline=(_Bool)0;
    result_type_837->mStatic=(_Bool)0;
    result_type_837->mUniq=(_Bool)0;
    generate__853=(_Bool)0;
    if(    result_type_837->mGenerate) {
        result_type_837->mGenerate=(_Bool)0;
        generate__853=(_Bool)1;
    }
    var_args_854=generics_fun->mVarArgs;
    fun_855=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_837),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_838)),(struct list$1charph*)come_increment_ref_count(param_names_842),(struct list$1charph*)come_increment_ref_count(param_default_parametors_843),(_Bool)0,var_args_854,(struct sBlock*)come_increment_ref_count(block_852),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__853,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_855));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value923=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_855),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_856=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value923,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_857=node_compile(node_856,info);
    if(    !Value_857) {
        __result365__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_832 = come_decrement_ref_count2(last_code_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_833 = come_decrement_ref_count2(last_code2_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_834 = come_decrement_ref_count2(sname_top_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_837,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_838,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_842,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_843,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_846 = come_decrement_ref_count2(sname_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_848,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_852,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_855,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_856) { node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result365__;
    }
    else {
        __if_result__1_858=(void*)(Value_857);
;
    }
    __dec_obj249=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_849);
    come_call_finalizer3(__dec_obj249,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj250=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_834));
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_835;
    __dec_obj251=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_832);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj252=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_833);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_828;
    info->caller_line=caller_line_829;
    info->caller_sname=caller_sname_830;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_831;
    __result366__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_832 = come_decrement_ref_count2(last_code_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_833 = come_decrement_ref_count2(last_code2_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_834 = come_decrement_ref_count2(sname_top_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_837,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_838,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_842,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_843,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_846 = come_decrement_ref_count2(sname_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_848,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_852,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_855,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_856) { node_856 = come_decrement_ref_count2(node_856, ((struct sNode*)node_856)->finalize, ((struct sNode*)node_856)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result366__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_859;
char* source_head_860;
void* __right_value926 = (void*)0;
char* attribute_861;
struct sType* result_type_862;
char* var_name_863;
_Bool constructor__864;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sType* __dec_obj253;
void* __right_value929 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_865=0;
char* var_name2_866=0;
_Bool err_867=0;
struct sType* __dec_obj254;
char* __dec_obj255;
_Bool method_definition_868;
char* p_869;
int sline_870;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct buffer* buf2_871;
char* fun_name_872;
char* base_fun_name_873;
void* __right_value932 = (void*)0;
char* __dec_obj256;
void* __right_value933 = (void*)0;
char* __dec_obj257;
void* __right_value934 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_874=0;
char* name_875=0;
_Bool err_876=0;
void* __right_value935 = (void*)0;
char* __dec_obj258;
void* __right_value936 = (void*)0;
char* __dec_obj259;
void* __right_value937 = (void*)0;
char* __dec_obj260;
void* __right_value938 = (void*)0;
char* __dec_obj261;
void* __right_value939 = (void*)0;
char* __dec_obj262;
void* __right_value940 = (void*)0;
char* __dec_obj263;
void* __right_value941 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1voidph* param_types_877=0;
struct list$1charph* param_names_878=0;
struct list$1charph* param_default_parametors_879=0;
_Bool var_args_880=0;
char* header_tail_881;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct buffer* header_buf_882;
int version_883;
int n_884;
_Bool in_top_level_885;
void* __right_value944 = (void*)0;
struct sBlock* block_886;
void* __right_value945 = (void*)0;
char* fun_name_888;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sFun* fun_889;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sFun* fun2_890;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value960 = (void*)0;
struct sNode* __result369__;
void* __right_value961 = (void*)0;
char* none_generics_name_892;
void* __right_value962 = (void*)0;
char* generics_sname_893;
int generics_sline_894;
void* __right_value963 = (void*)0;
char* block_895;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sGenericsFun* fun_898;
void* __right_value981 = (void*)0;
char* fun_name3_899;
void* __right_value982 = (void*)0;
struct sNode* __result372__;
void* __right_value983 = (void*)0;
char* generics_sname_900;
int generics_sline_901;
void* __right_value984 = (void*)0;
char* block_902;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sGenericsFun* fun_903;
void* __right_value991 = (void*)0;
char* fun_name3_904;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sNode* __result373__;
char* source_tail_905;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct buffer* header_906;
void* __right_value996 = (void*)0;
char* name_907;
void* __right_value997 = (void*)0;
char* name_908;
int i_909;
void* __right_value998 = (void*)0;
struct sType* param_type_910;
void* __right_value999 = (void*)0;
char* param_name_911;
void* __right_value1000 = (void*)0;
char* default_parametor_912;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
char* impl_name_913;
void* __right_value1004 = (void*)0;
char* result_type_name_914;
void* __right_value1005 = (void*)0;
char* impl_name_915;
void* __right_value1006 = (void*)0;
char* result_type_name_916;
int i_917;
void* __right_value1007 = (void*)0;
struct sType* param_type_918;
void* __right_value1008 = (void*)0;
char* param_name_919;
void* __right_value1009 = (void*)0;
char* default_parametor_920;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sBlock* block_921;
_Bool static_fun_922;
_Bool inline_fun_923;
_Bool uniq_fun_924;
_Bool generate_fun_925;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
char* new_fun_name_926;
void* __right_value1016 = (void*)0;
char* __dec_obj278;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct sFun* fun_927;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sFun* fun2_928;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1030 = (void*)0;
struct sNode* __result374__;
void* __right_value1031 = (void*)0;
char* new_fun_name_929;
void* __right_value1032 = (void*)0;
char* __dec_obj279;
char* source_tail_930;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct buffer* header_931;
_Bool result_type_static_932;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sFun* fun_933;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sFun* fun2_934;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1047 = (void*)0;
struct sNode* __result375__;
void* __right_value1048 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_935=0;
char* fun_attribute_936=0;
void* __right_value1049 = (void*)0;
char* __dec_obj280;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct buffer* header_937;
char* source_tail_938;
_Bool result_type_static_939;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct sFun* fun_940;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct sFun* fun2_941;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1063 = (void*)0;
struct sNode* __result376__;
struct sNode* __result377__;
fun_name_872 = (void*)0;
    header_head_859=info->p;
    source_head_860=info->p;
    attribute_861=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_862=((void*)0);
    var_name_863=((void*)0);
    constructor__864=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value927=parse_word(info)));
        __right_value927 = come_decrement_ref_count2(__right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj253=result_type_862;
        result_type_862=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_862->mHeap=(_Bool)1;
        constructor__864=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value929=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_865=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_866=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_867=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value929,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj254=result_type_862;
        result_type_862=(struct sType*)come_increment_ref_count(result_type2_865);
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj255=var_name_863;
        var_name_863=(char*)come_increment_ref_count(var_name2_866);
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_867) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_865,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_866 = come_decrement_ref_count2(var_name2_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_868=(_Bool)0;
    {
        p_869=info->p;
        sline_870=info->sline;
        buf2_871=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_871,*info->p);
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
        if(        buffer_length(buf2_871)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_868=(_Bool)1;
        }
        info->p=p_869;
        info->sline=sline_870;
        come_call_finalizer3(buf2_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_873=((void*)0);
    if(    constructor__864) {
        __dec_obj256=base_fun_name_873;
        base_fun_name_873=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=fun_name_872;
        fun_name_872=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_873,info,(_Bool)1));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_868) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value934=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_874=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_875=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_876=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value934,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_876) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj258=base_fun_name_873;
        base_fun_name_873=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj259=fun_name_872;
        fun_name_872=(char*)come_increment_ref_count(create_method_name(obj_type_874,(_Bool)0,base_fun_name_873,info,(_Bool)1));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_875 = come_decrement_ref_count2(name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj260=base_fun_name_873;
        base_fun_name_873=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=fun_name_872;
        fun_name_872=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_873,info,(_Bool)1));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj262=fun_name_872;
        fun_name_872=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj263=base_fun_name_873;
        base_fun_name_873=(char*)come_increment_ref_count(__builtin_string(fun_name_872));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_873,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value941=parse_params(info,constructor__864)));
    param_types_877=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_878=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_879=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_880=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value941,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_881=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_873,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_882=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(header_buf_882,header_head_859,header_tail_881-header_head_859);
    buffer_append_char(header_buf_882,0);
    version_883=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_884=0;
        while(xisdigit(*info->p)) {
            n_884=n_884*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_883=n_884;
    }
    in_top_level_885=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_873,"lambda")) {
        block_886=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_887=0;
        lambda_num_887++;
        fun_name_888=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_887));
        result_type_862->mInline=(_Bool)0;
        result_type_862->mStatic=(_Bool)0;
        result_type_862->mUniq=(_Bool)0;
        result_type_862->mGenerate=(_Bool)0;
        fun_889=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_888)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),(_Bool)0,var_args_880,(struct sBlock*)come_increment_ref_count(block_886),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_882)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_890=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value953=__builtin_string(fun_name_888)))));
        __right_value953 = come_decrement_ref_count2(__right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_890==((void*)0)||fun2_890->mExternal) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_888)),(struct sFun*)come_increment_ref_count(fun_889));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value957=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_889,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value960=_inf_value5));
        come_call_finalizer3(block_886,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_888 = come_decrement_ref_count2(fun_name_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_889,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_890,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value957,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value960) { __right_value960 = come_decrement_ref_count2(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(block_886,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_888 = come_decrement_ref_count2(fun_name_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_889,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_890,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_892=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_893=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_894=info->sline;
        block_895=(char*)come_increment_ref_count(skip_block(info));
        fun_898=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value976=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value977=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),var_args_880,(char*)come_increment_ref_count(block_895),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_893)),generics_sline_894));
        come_call_finalizer3(__right_value976,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value977,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_899=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_892,base_fun_name_873));
        map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_899)),(struct sGenericsFun*)come_increment_ref_count(fun_898));
        __result372__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_892 = come_decrement_ref_count2(none_generics_name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_893 = come_decrement_ref_count2(generics_sname_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_895 = come_decrement_ref_count2(block_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_898,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_899 = come_decrement_ref_count2(fun_name3_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
        none_generics_name_892 = come_decrement_ref_count2(none_generics_name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_893 = come_decrement_ref_count2(generics_sname_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_895 = come_decrement_ref_count2(block_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_898,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_899 = come_decrement_ref_count2(fun_name3_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_900=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_901=info->sline;
        block_902=(char*)come_increment_ref_count(skip_block(info));
        fun_903=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value986=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value987=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),var_args_880,(char*)come_increment_ref_count(block_902),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_900)),generics_sline_901));
        come_call_finalizer3(__right_value986,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value987,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_904=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_873));
        if(        method_definition_868) {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sGenericsFun*)come_increment_ref_count(fun_903));
        }
        else {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_904)),(struct sGenericsFun*)come_increment_ref_count(fun_903));
        }
        __result373__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_900 = come_decrement_ref_count2(generics_sname_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_902 = come_decrement_ref_count2(block_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_903,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_904 = come_decrement_ref_count2(fun_name3_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result373__;
        generics_sname_900 = come_decrement_ref_count2(generics_sname_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_902 = come_decrement_ref_count2(block_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_903,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_904 = come_decrement_ref_count2(fun_name3_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_905=info->p-1;
        header_906=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__864) {
            if(            list$1voidphp_length(param_types_877)==1) {
                name_907=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_906,"extern %s*%% %s*::initialize(%s*%% self);\n",name_907,name_907,name_907);
                name_907 = come_decrement_ref_count2(name_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_908=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_906,"extern %s*%% %s*::initialize(%s*%% self, ",name_908,name_908,name_908);
                for(                i_909=1;                i_909<list$1voidphp_length(param_types_877);                i_909++                ){
                    param_type_910=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_877,i_909));
                    param_name_911=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_878,i_909));
                    default_parametor_912=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_879,i_909));
                    if(                    default_parametor_912) {
                        buffer_append_format(header_906,"extern %s %s=%s",((char*)(__right_value1001=make_come_type_name_string_no_solved(param_type_910,(_Bool)0,info))),param_name_911,default_parametor_912);
                        __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_906,"extern %s %s",((char*)(__right_value1002=make_come_type_name_string_no_solved(param_type_910,(_Bool)0,info))),param_name_911);
                        __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_909!=list$1voidphp_length(param_types_877)-1) {
                        buffer_append_str(header_906,",");
                    }
                    come_call_finalizer3(param_type_910,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_911 = come_decrement_ref_count2(param_name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_912 = come_decrement_ref_count2(default_parametor_912, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_906,");\n");
                name_908 = come_decrement_ref_count2(name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_877)==1) {
                impl_name_913=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_914=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_862,(_Bool)0,info));
                buffer_append_format(header_906,"extern %s %s*::%s(%s* self);\n",result_type_name_914,impl_name_913,base_fun_name_873,impl_name_913);
                impl_name_913 = come_decrement_ref_count2(impl_name_913, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_914 = come_decrement_ref_count2(result_type_name_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_915=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_916=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_862,(_Bool)0,info));
                buffer_append_format(header_906,"extern %s %s*::%s(%s* self, ",result_type_name_916,impl_name_915,base_fun_name_873,impl_name_915);
                for(                i_917=1;                i_917<list$1voidphp_length(param_types_877);                i_917++                ){
                    param_type_918=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_877,i_917));
                    param_name_919=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_878,i_917));
                    default_parametor_920=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_879,i_917));
                    if(                    default_parametor_920) {
                        buffer_append_format(header_906,"extern %s %s=%s",((char*)(__right_value1010=make_come_type_name_string_no_solved(param_type_918,(_Bool)0,info))),param_name_919,default_parametor_920);
                        __right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_906,"extern %s %s",((char*)(__right_value1011=make_come_type_name_string_no_solved(param_type_918,(_Bool)0,info))),param_name_919);
                        __right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_917!=list$1voidphp_length(param_types_877)-1) {
                        buffer_append_str(header_906,",");
                    }
                    come_call_finalizer3(param_type_918,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_919 = come_decrement_ref_count2(param_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_920 = come_decrement_ref_count2(default_parametor_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_906,");\n");
                impl_name_915 = come_decrement_ref_count2(impl_name_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_916 = come_decrement_ref_count2(result_type_name_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_906,source_head_860,source_tail_905-source_head_860);
            buffer_append_str(header_906,";\n");
        }
        if(        !result_type_862->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value1012=buffer_to_string(header_906))));
                __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_921=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__864,(_Bool)1));
        static_fun_922=(_Bool)0;
        if(        result_type_862->mStatic) {
            result_type_862->mStatic=(_Bool)0;
            result_type_862->mUniq=(_Bool)0;
            static_fun_922=(_Bool)1;
        }
        inline_fun_923=(_Bool)0;
        if(        result_type_862->mInline) {
            result_type_862->mInline=(_Bool)0;
            result_type_862->mUniq=(_Bool)0;
            inline_fun_923=(_Bool)1;
        }
        uniq_fun_924=(_Bool)0;
        if(        result_type_862->mUniq) {
            result_type_862->mUniq=(_Bool)0;
            result_type_862->mInline=(_Bool)0;
            result_type_862->mStatic=(_Bool)0;
            uniq_fun_924=(_Bool)1;
        }
        generate_fun_925=(_Bool)0;
        if(        result_type_862->mUniq) {
            result_type_862->mUniq=(_Bool)0;
            result_type_862->mInline=(_Bool)0;
            result_type_862->mStatic=(_Bool)0;
            generate_fun_925=(_Bool)1;
        }
        if(        version_883>0) {
            new_fun_name_926=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1014=__builtin_string(fun_name_872))),version_883));
            __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj278=fun_name_872;
            fun_name_872=(char*)come_increment_ref_count(__builtin_string(new_fun_name_926));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_926 = come_decrement_ref_count2(new_fun_name_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_927=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),(_Bool)0,var_args_880,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_921)),static_fun_922,(char*)come_increment_ref_count(buffer_to_string(header_buf_882)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_923,uniq_fun_924,generate_fun_925,(char*)come_increment_ref_count(attribute_861),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sFun*)come_increment_ref_count(fun_927));
        }
        else {
            fun2_928=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1025=__builtin_string(fun_name_872)))));
            __right_value1025 = come_decrement_ref_count2(__right_value1025, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_928==((void*)0)||fun2_928->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sFun*)come_increment_ref_count(fun_927));
            }
            come_call_finalizer3(fun2_928,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1029=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_927),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1030=_inf_value6));
        come_call_finalizer3(header_906,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_921,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_927,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1029,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1030) { __right_value1030 = come_decrement_ref_count2(__right_value1030, ((struct sNode*)__right_value1030)->finalize, ((struct sNode*)__right_value1030)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(header_906,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_921,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_927,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_883>0) {
            new_fun_name_929=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_872,version_883));
            __dec_obj279=fun_name_872;
            fun_name_872=(char*)come_increment_ref_count(__builtin_string(new_fun_name_929));
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_929 = come_decrement_ref_count2(new_fun_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_930=info->p;
            header_931=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_931,source_head_860,source_tail_930-source_head_860);
            skip_spaces_and_lf(info);
            result_type_static_932=result_type_862->mStatic;
            result_type_862->mStatic=(_Bool)0;
            result_type_862->mUniq=(_Bool)0;
            result_type_862->mInline=(_Bool)0;
            result_type_862->mGenerate=(_Bool)0;
            fun_933=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),(_Bool)1,var_args_880,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_882)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_861),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_934=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1041=__builtin_string(fun_name_872)))));
            __right_value1041 = come_decrement_ref_count2(__right_value1041, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_934==((void*)0)||fun2_934->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sFun*)come_increment_ref_count(fun_933));
            }
            if(            !result_type_static_932) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1044=buffer_to_string(header_931))));
                    __right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1046=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_933),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1047=_inf_value7));
            come_call_finalizer3(header_931,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_934,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1046,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1047) { __right_value1047 = come_decrement_ref_count2(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
            come_call_finalizer3(header_931,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_934,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1048=parse_function_attribute(info)));
            asm_fun_935=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_936=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1048,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_935,"")) {
                __dec_obj280=fun_name_872;
                fun_name_872=(char*)come_increment_ref_count(__builtin_string(asm_fun_935));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_937=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_938=info->p;
                buffer_append(header_937,source_head_860,source_tail_938-source_head_860);
                skip_spaces_and_lf(info);
            }
            result_type_static_939=result_type_862->mStatic;
            result_type_862->mStatic=(_Bool)0;
            result_type_862->mUniq=(_Bool)0;
            result_type_862->mInline=(_Bool)0;
            result_type_862->mGenerate=(_Bool)0;
            fun_940=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sType*)come_increment_ref_count(result_type_862),(struct list$1voidph*)come_increment_ref_count(param_types_877),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),(_Bool)1,var_args_880,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_882)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_861),(char*)come_increment_ref_count(fun_attribute_936)));
            fun2_941=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1057=__builtin_string(fun_name_872)))));
            __right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_941==((void*)0)||fun2_941->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_872)),(struct sFun*)come_increment_ref_count(fun_940));
            }
            if(            !result_type_static_939) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1060=buffer_to_string(header_937))));
                    __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1062=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_940),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1063=_inf_value8));
            asm_fun_935 = come_decrement_ref_count2(asm_fun_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_936 = come_decrement_ref_count2(fun_attribute_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_937,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_941,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1062,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1063) { __right_value1063 = come_decrement_ref_count2(__right_value1063, ((struct sNode*)__right_value1063)->finalize, ((struct sNode*)__right_value1063)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            asm_fun_935 = come_decrement_ref_count2(asm_fun_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_936 = come_decrement_ref_count2(fun_attribute_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_937,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_941,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_885;
    __result377__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_861 = come_decrement_ref_count2(attribute_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_862,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_863 = come_decrement_ref_count2(var_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_873 = come_decrement_ref_count2(base_fun_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_877,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_882,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj264;
struct list$1charph* __dec_obj265;
struct list$1charph* __dec_obj266;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj264=self->v1;
            come_call_finalizer3(__dec_obj264,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj265=self->v2;
            come_call_finalizer3(__dec_obj265,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj266=self->v3;
            come_call_finalizer3(__dec_obj266,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result367__;
void* __right_value958 = (void*)0;
struct sLambdaNode* result_891;
void* __right_value959 = (void*)0;
char* __dec_obj267;
struct sLambdaNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_891=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_891->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_891->sname;
        result_891->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_891->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_891->mFun=self->mFun;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_891;
    come_call_finalizer3(result_891,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
void* __result_obj__=(void*)0;
struct sGenericsFun* __result370__;
void* __right_value964 = (void*)0;
struct sGenericsFun* result_897;
void* __right_value965 = (void*)0;
struct sType* __dec_obj268;
void* __right_value966 = (void*)0;
struct list$1charph* __dec_obj269;
void* __right_value967 = (void*)0;
struct list$1charph* __dec_obj270;
void* __right_value968 = (void*)0;
char* __dec_obj271;
void* __right_value969 = (void*)0;
struct sType* __dec_obj272;
void* __right_value970 = (void*)0;
struct list$1voidph* __dec_obj273;
void* __right_value971 = (void*)0;
struct list$1charph* __dec_obj274;
void* __right_value972 = (void*)0;
struct list$1charph* __dec_obj275;
void* __right_value973 = (void*)0;
char* __dec_obj276;
void* __right_value974 = (void*)0;
char* __dec_obj277;
struct sGenericsFun* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_897=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj268=result_897->mImplType;
        result_897->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj269=result_897->mGenericsTypeNames;
        result_897->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj269,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj270=result_897->mMethodGenericsTypeNames;
        result_897->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj270,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj271=result_897->mName;
        result_897->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj272=result_897->mResultType;
        result_897->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj273=result_897->mParamTypes;
        result_897->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj273,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj274=result_897->mParamNames;
        result_897->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj274,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj275=result_897->mParamDefaultParametors;
        result_897->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj275,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj276=result_897->mBlock;
        result_897->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_897->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_897->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_897->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj277=result_897->mGenericsSName;
        result_897->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_897->mGenericsSLine=self->mGenericsSLine;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_897;
    come_call_finalizer3(result_897,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_896;
    result_896=0;
    result_896+=int_get_hash_key(((int)self->mImplType));
    result_896+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_896+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_896+=int_get_hash_key(((int)self->mName));
    result_896+=int_get_hash_key(((int)self->mResultType));
    result_896+=int_get_hash_key(((int)self->mParamTypes));
    result_896+=int_get_hash_key(((int)self->mParamNames));
    result_896+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_896+=int_get_hash_key(((int)self->mBlock));
    result_896+=int_get_hash_key(((int)self->mSLine));
    result_896+=int_get_hash_key(((int)self->mVarArgs));
    result_896+=int_get_hash_key(((int)self->mGenerate));
    result_896+=int_get_hash_key(((int)self->mGenericsSName));
    result_896+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_896;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
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

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_942;
char* __dec_obj281;
char* last_code2_943;
char* __dec_obj282;
_Bool comma_instead_of_semicolon_944;
struct sClass* current_stack_frame_struct_945;
char* real_fun_name_946;
struct sFun* finalizer_947;
void* __right_value1064 = (void*)0;
struct sType* type_before_948;
void* __right_value1065 = (void*)0;
struct sType* type2_949;
void* __right_value1066 = (void*)0;
char* fun_name2_950;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
char* none_generics_name_951;
void* __right_value1069 = (void*)0;
char* generics_fun_name_952;
void* __right_value1070 = (void*)0;
struct sGenericsFun* generics_fun_953;
void* __right_value1071 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_954=0;
_Bool err_955=0;
void* __right_value1072 = (void*)0;
char* __dec_obj283;
int i_956;
void* __right_value1073 = (void*)0;
char* new_fun_name_957;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
char* __dec_obj284;
void* __right_value1076 = (void*)0;
char* __dec_obj285;
void* __right_value1077 = (void*)0;
char* __dec_obj286;
void* __right_value1078 = (void*)0;
char* user_real_fun_name_958;
void* __right_value1079 = (void*)0;
struct sFun* user_finalizer_959;
void* __right_value1080 = (void*)0;
struct sType* type2_960;
struct sClass* klass_961;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct buffer* source_962;
void* __right_value1083 = (void*)0;
struct list$1voidph* o2_saved_964;
struct tuple2$2charphsTypeph* it_965;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_966=0;
struct sType* field_type_967=0;
char* p_970;
int sline_971;
char* sname_972;
char* head_973;
struct buffer* source3_974;
struct buffer* __dec_obj287;
void* __right_value1084 = (void*)0;
char* __dec_obj288;
void* __right_value1085 = (void*)0;
struct sBlock* block_975;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sType* result_type_976;
void* __right_value1088 = (void*)0;
char* name_977;
void* __right_value1089 = (void*)0;
struct sType* self_type_978;
struct sType* __list_values21___980[1];
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct list$1voidph* param_types_979;
void* __right_value1092 = (void*)0;
char* __list_values22___981[1];
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1charph* param_names_982;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct list$1charph* param_default_parametors_983;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct buffer* header_buf_984;
void* __right_value1099 = (void*)0;
int i_985;
void* __right_value1100 = (void*)0;
struct sType* param_type_986;
void* __right_value1101 = (void*)0;
char* param_name_987;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sFun* fun2_988;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sFun* fun_989;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1114 = (void*)0;
struct sNode* node_990;
_Bool Value_991;
struct buffer* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct tuple2$2sFunpcharph* __result381__;
memset(&i_956, 0, sizeof(int));
    last_code_942=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj281=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_943=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj282=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_944=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_945=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_946=((void*)0);
    finalizer_947=((void*)0);
    type_before_948=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_949=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_949->mHeap=(_Bool)0;
    fun_name2_950=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_947=((struct sFun*)((void*)(__right_value1067=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_950))));
        come_call_finalizer3(__right_value1067,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_947==((void*)0)) {
            none_generics_name_951=(char*)come_increment_ref_count(get_none_generics_name(type2_949->mClass->mName));
            generics_fun_name_952=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_951,fun_name));
            generics_fun_953=((struct sGenericsFun*)((void*)(__right_value1070=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_952))));
            come_call_finalizer3(__right_value1070,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_953) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1071=create_generics_fun((char*)come_increment_ref_count(fun_name2_950),generics_fun_953,type,info)));
                name_954=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_955=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1071,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_955) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_947=((struct sFun*)((void*)(__right_value1072=map$2voidphvoidphp_operator_load_element(info->funcs,name_954))));
                come_call_finalizer3(__right_value1072,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_954 = come_decrement_ref_count2(name_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_951 = come_decrement_ref_count2(none_generics_name_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_952 = come_decrement_ref_count2(generics_fun_name_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj283=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(fun_name2_950);
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_956=128-1;        i_956>=1;        i_956--        ){
            new_fun_name_957=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_950,i_956));
            finalizer_947=((struct sFun*)((void*)(__right_value1074=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_957))));
            come_call_finalizer3(__right_value1074,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_947) {
                __dec_obj284=fun_name2_950;
                fun_name2_950=(char*)come_increment_ref_count(__builtin_string(new_fun_name_957));
                __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_957 = come_decrement_ref_count2(new_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_957 = come_decrement_ref_count2(new_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_947==((void*)0)) {
            finalizer_947=((struct sFun*)((void*)(__right_value1076=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_950))));
            come_call_finalizer3(__right_value1076,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj285=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(fun_name2_950);
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_947==((void*)0)) {
        type=type_before_948;
        __dec_obj286=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_958=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_959=((struct sFun*)((void*)(__right_value1079=map$2voidphvoidphp_operator_load_element(info->funcs,user_real_fun_name_958))));
        come_call_finalizer3(__right_value1079,(void*)0, 0, 1, 0, 0, __result_obj__);
        type2_960=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_960;
        klass_961=type->mClass;
        if(        type->mPointerNum>0&&klass_961->mStruct||type->mAllocaValue) {
            source_962=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_962,123);
            if(            user_finalizer_959) {
                char source2_963[1024];
                memset(&source2_963, 0, sizeof(char)                *(1024)                );
                snprintf(source2_963,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_958);
                buffer_append_str(source_962,source2_963);
            }
            klass_961=((struct sClass*)((void*)(__right_value1083=map$2voidphvoidphp_operator_load_element(info->classes,klass_961->mName))));
            come_call_finalizer3(__right_value1083,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_964=(struct list$1voidph*)come_increment_ref_count((klass_961->mFields)),it_965=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_964)));            !list$1voidphp_end((o2_saved_964));            it_965=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_964)))            ){
                multiple_assign_var12=it_965;
                name_966=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_967=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_967->mHeap) {
                    char source2_968[1024];
                    memset(&source2_968, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_968,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_966,name_966,name_966,name_966);
                    buffer_append_str(source_962,source2_968);
                }
                else if(                field_type_967->mChannel) {
                    char source2_969[1024];
                    memset(&source2_969, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_969,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_966,name_966);
                    buffer_append_str(source_962,source2_969);
                    snprintf(source2_969,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_966,name_966);
                    buffer_append_str(source_962,source2_969);
                }
                name_966 = come_decrement_ref_count2(name_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_967,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_964,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_962,125);
            p_970=info->p;
            sline_971=info->sline;
            sname_972=(char*)come_increment_ref_count(info->sname);
            head_973=info->head;
            source3_974=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj287=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_962);
            come_call_finalizer3(__dec_obj287,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_962->buf;
            info->head=source_962->buf;
            __dec_obj288=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_946));
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_975=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_976=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_977=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_946));
            self_type_978=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_978->mHeap=(_Bool)0;
            if(            self_type_978->mPointerNum==0) {
                self_type_978->mPointerNum=1;
            }
            if(            self_type_978->mPointerNum>1) {
                self_type_978->mPointerNum=1;
            }
            param_types_979=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___980[0]=(struct sType*)come_increment_ref_count(self_type_978),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values21___980)));
            param_names_982=(struct list$1charph*)come_increment_ref_count((__list_values22___981[0]=(char*)come_increment_ref_count(((char*)(__right_value1092=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values22___981)));
            __right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_983=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_983,((void*)0));
            header_buf_984=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(header_buf_984,((char*)(__right_value1099=make_come_type_name_string(result_type_976,info))));
            __right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_984," ");
            buffer_append_str(header_buf_984,real_fun_name_946);
            buffer_append_str(header_buf_984,"(");
            for(            i_985=0;            i_985<list$1voidphp_length(param_types_979);            i_985++            ){
                param_type_986=((struct sType*)((void*)(__right_value1100=list$1voidphp_operator_load_element(param_types_979,i_985))));
                come_call_finalizer3(__right_value1100,(void*)0, 0, 1, 0, 0, __result_obj__);
                param_name_987=((char*)(__right_value1101=list$1charphp_operator_load_element(param_names_982,i_985)));
                __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_984,((char*)(__right_value1102=make_come_type_name_string(param_type_986,info))));
                __right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_984," ");
                buffer_append_str(header_buf_984,param_name_987);
                if(                i_985!=list$1voidphp_length(param_types_979)-1) {
                    buffer_append_str(header_buf_984,",");
                }
            }
            buffer_append_str(header_buf_984,")");
            result_type_976->mStatic=(_Bool)0;
            result_type_976->mUniq=(_Bool)0;
            result_type_976->mInline=(_Bool)0;
            result_type_976->mGenerate=(_Bool)0;
            fun2_988=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1103=__builtin_string(name_977)))));
            __right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_988==((void*)0)||fun2_988->mExternal) {
                fun_989=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_977),(struct sType*)come_increment_ref_count(result_type_976),(struct list$1voidph*)come_increment_ref_count(param_types_979),(struct list$1charph*)come_increment_ref_count(param_names_982),(struct list$1charph*)come_increment_ref_count(param_default_parametors_983),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_975),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_984)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_977)),(struct sFun*)come_increment_ref_count(fun_989));
                finalizer_947=fun_989;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1113=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_989),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_990=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1113,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_991=node_compile(node_990,info);
                if(                !Value_991) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_989,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_990) { node_990 = come_decrement_ref_count2(node_990, ((struct sNode*)node_990)->finalize, ((struct sNode*)node_990)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_947=fun2_988;
            }
            __dec_obj289=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_974);
            come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_970;
            info->head=head_973;
            info->sline=sline_971;
            __dec_obj290=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_972);
            __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_962,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_972 = come_decrement_ref_count2(sname_972, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_974,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_975,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_976,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_977 = come_decrement_ref_count2(name_977, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_978,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_979,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_982,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_983,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_984,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_988,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_958 = come_decrement_ref_count2(user_real_fun_name_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_960,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_945;
    __dec_obj291=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_942);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_943);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_944;
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1118=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),finalizer_947,(char*)come_increment_ref_count(real_fun_name_946))));
    last_code_942 = come_decrement_ref_count2(last_code_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_943 = come_decrement_ref_count2(last_code2_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_946 = come_decrement_ref_count2(real_fun_name_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_948,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_949,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_950 = come_decrement_ref_count2(fun_name2_950, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1118,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj293;
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

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result378__;
void* __right_value1115 = (void*)0;
struct tuple2$2sFunpcharph* result_992;
void* __right_value1116 = (void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_992=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_992->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj294=result_992->v2;
        result_992->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_992;
    come_call_finalizer3(result_992,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_993;
    result_993=0;
    result_993+=int_get_hash_key(((int)self->v1));
    result_993+=int_get_hash_key(((int)self->v2));
    return result_993;
}

static _Bool tuple2$2sFunpcharph_equals(struct tuple2$2sFunpcharph* left, struct tuple2$2sFunpcharph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj295;
struct tuple2$2sFunpcharph* __result380__;
    self->v1=v1;
    __dec_obj295=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj296;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj296=self->v2;
            __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_994;
char* __dec_obj297;
char* last_code2_995;
char* __dec_obj298;
_Bool comma_instead_of_semicolon_996;
struct sClass* current_stack_frame_struct_997;
struct sFun* equaler_998;
void* __right_value1119 = (void*)0;
char* real_fun_name_999;
void* __right_value1120 = (void*)0;
struct sType* type2_1000;
struct sClass* klass_1001;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct buffer* source_1002;
char* name_1003;
void* __right_value1123 = (void*)0;
struct list$1voidph* o2_saved_1005;
struct tuple2$2charphsTypeph* it_1006;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1007=0;
struct sType* field_type_1008=0;
char* p_1010;
int sline_1011;
char* sname_1012;
char* head_1013;
struct buffer* source3_1014;
struct buffer* __dec_obj299;
void* __right_value1124 = (void*)0;
char* __dec_obj300;
void* __right_value1125 = (void*)0;
struct sBlock* block_1015;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sType* result_type_1016;
void* __right_value1128 = (void*)0;
char* name_1017;
void* __right_value1129 = (void*)0;
struct sType* left_type_1018;
void* __right_value1130 = (void*)0;
struct sType* right_type_1019;
struct sType* __list_values23___1021[2];
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1voidph* param_types_1020;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
char* __list_values24___1022[2];
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct list$1charph* param_names_1023;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct list$1charph* param_default_parametors_1024;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct buffer* header_buf_1025;
void* __right_value1141 = (void*)0;
int i_1026;
void* __right_value1142 = (void*)0;
struct sType* param_type_1027;
void* __right_value1143 = (void*)0;
char* param_name_1028;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct sFun* fun2_1029;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct sFun* fun_1030;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
void* __right_value1155 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1156 = (void*)0;
struct sNode* node_1031;
_Bool Value_1032;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct tuple2$2sFunpcharph* __result382__;
    last_code_994=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj297=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_995=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj298=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_996=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_997=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_998=((void*)0);
    real_fun_name_999=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1000=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1000;
    klass_1001=type->mClass;
    if(    type->mPointerNum>0&&!klass_1001->mNumber) {
        source_1002=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1002,123);
        if(        klass_1001->mProtocol) {
            name_1003="_protocol_obj";
            char source2_1004[1024];
            memset(&source2_1004, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1004,1024,"return left.%s.equals(right.%s);\n",name_1003,name_1003);
            buffer_append_str(source_1002,source2_1004);
        }
        else {
            klass_1001=((struct sClass*)((void*)(__right_value1123=map$2voidphvoidphp_operator_load_element(info->classes,klass_1001->mName))));
            come_call_finalizer3(__right_value1123,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1005=(struct list$1voidph*)come_increment_ref_count((klass_1001->mFields)),it_1006=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1005)));            !list$1voidphp_end((o2_saved_1005));            it_1006=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1005)))            ){
                multiple_assign_var13=it_1006;
                name_1007=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1008=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1009[1024];
                memset(&source2_1009, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1009,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1007,name_1007,name_1007);
                buffer_append_str(source_1002,source2_1009);
                name_1007 = come_decrement_ref_count2(name_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1005,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1002,"return true;");
        buffer_append_char(source_1002,125);
        p_1010=info->p;
        sline_1011=info->sline;
        sname_1012=(char*)come_increment_ref_count(info->sname);
        head_1013=info->head;
        source3_1014=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1002);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1002->buf;
        info->head=source_1002->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_999));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1015=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1016=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1017=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_999));
        left_type_1018=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1018->mHeap=(_Bool)0;
        right_type_1019=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1019->mHeap=(_Bool)0;
        param_types_1020=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1021[0]=(struct sType*)come_increment_ref_count(left_type_1018),
__list_values23___1021[1]=(struct sType*)come_increment_ref_count(right_type_1019),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values23___1021)));
        param_names_1023=(struct list$1charph*)come_increment_ref_count((__list_values24___1022[0]=(char*)come_increment_ref_count(((char*)(__right_value1133=__builtin_string("left")))),
__list_values24___1022[1]=(char*)come_increment_ref_count(((char*)(__right_value1134=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values24___1022)));
        __right_value1133 = come_decrement_ref_count2(__right_value1133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1134 = come_decrement_ref_count2(__right_value1134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1024=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1024,((void*)0));
        list$1charphp_push_back(param_default_parametors_1024,((void*)0));
        header_buf_1025=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1025,((char*)(__right_value1141=make_come_type_name_string(result_type_1016,info))));
        __right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1025," ");
        buffer_append_str(header_buf_1025,real_fun_name_999);
        buffer_append_str(header_buf_1025,"(");
        for(        i_1026=0;        i_1026<list$1voidphp_length(param_types_1020);        i_1026++        ){
            param_type_1027=((struct sType*)((void*)(__right_value1142=list$1voidphp_operator_load_element(param_types_1020,i_1026))));
            come_call_finalizer3(__right_value1142,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1028=((char*)(__right_value1143=list$1charphp_operator_load_element(param_names_1023,i_1026)));
            __right_value1143 = come_decrement_ref_count2(__right_value1143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1025,((char*)(__right_value1144=make_come_type_name_string(param_type_1027,info))));
            __right_value1144 = come_decrement_ref_count2(__right_value1144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1025," ");
            buffer_append_str(header_buf_1025,param_name_1028);
            if(            i_1026!=list$1voidphp_length(param_types_1020)-1) {
                buffer_append_str(header_buf_1025,",");
            }
        }
        buffer_append_str(header_buf_1025,")");
        result_type_1016->mStatic=(_Bool)0;
        result_type_1016->mUniq=(_Bool)0;
        result_type_1016->mInline=(_Bool)0;
        result_type_1016->mGenerate=(_Bool)0;
        fun2_1029=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1145=__builtin_string(name_1017)))));
        __right_value1145 = come_decrement_ref_count2(__right_value1145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1029==((void*)0)||fun2_1029->mExternal) {
            fun_1030=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1017),(struct sType*)come_increment_ref_count(result_type_1016),(struct list$1voidph*)come_increment_ref_count(param_types_1020),(struct list$1charph*)come_increment_ref_count(param_names_1023),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1024),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1015),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1025)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1017)),(struct sFun*)come_increment_ref_count(fun_1030));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1155=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1030),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1031=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1155,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1032=node_compile(node_1031,info);
            if(            !Value_1032) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_998=fun_1030;
            come_call_finalizer3(fun_1030,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1031) { node_1031 = come_decrement_ref_count2(node_1031, ((struct sNode*)node_1031)->finalize, ((struct sNode*)node_1031)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_998=fun2_1029;
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1014);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1010;
        info->head=head_1013;
        info->sline=sline_1011;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1012);
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1002,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1012 = come_decrement_ref_count2(sname_1012, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1014,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1015,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1016,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1017 = come_decrement_ref_count2(name_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1018,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1019,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1020,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1023,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1024,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1025,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1029,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_997;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_994);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_995);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_996;
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1158=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_998,(char*)come_increment_ref_count(real_fun_name_999))));
    last_code_994 = come_decrement_ref_count2(last_code_994, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_995 = come_decrement_ref_count2(last_code2_995, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_999 = come_decrement_ref_count2(real_fun_name_999, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1000,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1158,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1033;
char* __dec_obj305;
char* last_code2_1034;
char* __dec_obj306;
_Bool comma_instead_of_semicolon_1035;
struct sClass* current_stack_frame_struct_1036;
struct sFun* equaler_1037;
void* __right_value1159 = (void*)0;
char* real_fun_name_1038;
void* __right_value1160 = (void*)0;
struct sType* type2_1039;
struct sClass* klass_1040;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct buffer* source_1041;
char* name_1042;
int i_1045;
void* __right_value1163 = (void*)0;
struct list$1voidph* o2_saved_1046;
struct tuple2$2charphsTypeph* it_1047;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1048=0;
struct sType* field_type_1049=0;
char* p_1053;
int sline_1054;
char* sname_1055;
char* head_1056;
struct buffer* source3_1057;
struct buffer* __dec_obj307;
void* __right_value1164 = (void*)0;
char* __dec_obj308;
void* __right_value1165 = (void*)0;
struct sBlock* block_1058;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct sType* result_type_1059;
void* __right_value1168 = (void*)0;
char* name_1060;
void* __right_value1169 = (void*)0;
struct sType* left_type_1061;
void* __right_value1170 = (void*)0;
struct sType* right_type_1062;
struct sType* __list_values25___1064[2];
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct list$1voidph* param_types_1063;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
char* __list_values26___1065[2];
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct list$1charph* param_names_1066;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct list$1charph* param_default_parametors_1067;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
struct buffer* header_buf_1068;
void* __right_value1181 = (void*)0;
int i_1069;
void* __right_value1182 = (void*)0;
struct sType* param_type_1070;
void* __right_value1183 = (void*)0;
char* param_name_1071;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct sFun* fun2_1072;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct sFun* fun_1073;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1196 = (void*)0;
struct sNode* node_1074;
_Bool Value_1075;
struct buffer* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct tuple2$2sFunpcharph* __result383__;
    last_code_1033=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1034=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1035=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1036=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1037=((void*)0);
    real_fun_name_1038=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1039=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1039;
    klass_1040=type->mClass;
    if(    type->mPointerNum>0&&!klass_1040->mNumber) {
        source_1041=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1041,123);
        if(        klass_1040->mProtocol) {
            name_1042="_protocol_obj";
            char source2_1043[1024];
            memset(&source2_1043, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1043,1024,"return left.%s !== right.%s;\n",name_1042,name_1042);
            buffer_append_str(source_1041,source2_1043);
        }
        else {
            char source2_1044[1024];
            memset(&source2_1044, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1044,1024,"return !(");
            buffer_append_str(source_1041,source2_1044);
            snprintf(source2_1044,1024,"( ");
            buffer_append_str(source_1041,source2_1044);
            i_1045=0;
            klass_1040=((struct sClass*)((void*)(__right_value1163=map$2voidphvoidphp_operator_load_element(info->classes,klass_1040->mName))));
            come_call_finalizer3(__right_value1163,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1046=(struct list$1voidph*)come_increment_ref_count((klass_1040->mFields)),it_1047=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1046)));            !list$1voidphp_end((o2_saved_1046));            it_1047=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1046)))            ){
                multiple_assign_var14=it_1047;
                name_1048=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1049=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1050[1024];
                memset(&source2_1050, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1050,1024,"(left.%s === right.%s)",name_1048,name_1048,name_1048);
                buffer_append_str(source_1041,source2_1050);
                if(                i_1045==list$1voidphp_length(klass_1040->mFields)-1) {
                    char source2_1051[1024];
                    memset(&source2_1051, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1051,1024,"));");
                    buffer_append_str(source_1041,source2_1051);
                }
                else {
                    char source2_1052[1024];
                    memset(&source2_1052, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1052,1024," && ");
                    buffer_append_str(source_1041,source2_1052);
                }
                i_1045++;
                name_1048 = come_decrement_ref_count2(name_1048, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1049,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1046,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1041,125);
        p_1053=info->p;
        sline_1054=info->sline;
        sname_1055=(char*)come_increment_ref_count(info->sname);
        head_1056=info->head;
        source3_1057=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1041);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1041->buf;
        info->head=source_1041->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1038));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1058=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1059=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1060=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1038));
        left_type_1061=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1061->mHeap=(_Bool)0;
        right_type_1062=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1062->mHeap=(_Bool)0;
        param_types_1063=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1064[0]=(struct sType*)come_increment_ref_count(left_type_1061),
__list_values25___1064[1]=(struct sType*)come_increment_ref_count(right_type_1062),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values25___1064)));
        param_names_1066=(struct list$1charph*)come_increment_ref_count((__list_values26___1065[0]=(char*)come_increment_ref_count(((char*)(__right_value1173=__builtin_string("left")))),
__list_values26___1065[1]=(char*)come_increment_ref_count(((char*)(__right_value1174=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values26___1065)));
        __right_value1173 = come_decrement_ref_count2(__right_value1173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1174 = come_decrement_ref_count2(__right_value1174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1067=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1067,((void*)0));
        list$1charphp_push_back(param_default_parametors_1067,((void*)0));
        header_buf_1068=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1068,((char*)(__right_value1181=make_come_type_name_string(result_type_1059,info))));
        __right_value1181 = come_decrement_ref_count2(__right_value1181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1068," ");
        buffer_append_str(header_buf_1068,real_fun_name_1038);
        buffer_append_str(header_buf_1068,"(");
        for(        i_1069=0;        i_1069<list$1voidphp_length(param_types_1063);        i_1069++        ){
            param_type_1070=((struct sType*)((void*)(__right_value1182=list$1voidphp_operator_load_element(param_types_1063,i_1069))));
            come_call_finalizer3(__right_value1182,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1071=((char*)(__right_value1183=list$1charphp_operator_load_element(param_names_1066,i_1069)));
            __right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1068,((char*)(__right_value1184=make_come_type_name_string(param_type_1070,info))));
            __right_value1184 = come_decrement_ref_count2(__right_value1184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1068," ");
            buffer_append_str(header_buf_1068,param_name_1071);
            if(            i_1069!=list$1voidphp_length(param_types_1063)-1) {
                buffer_append_str(header_buf_1068,",");
            }
        }
        buffer_append_str(header_buf_1068,")");
        result_type_1059->mStatic=(_Bool)0;
        result_type_1059->mUniq=(_Bool)0;
        result_type_1059->mInline=(_Bool)0;
        result_type_1059->mGenerate=(_Bool)0;
        fun2_1072=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1185=__builtin_string(name_1060)))));
        __right_value1185 = come_decrement_ref_count2(__right_value1185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1072==((void*)0)||fun2_1072->mExternal) {
            fun_1073=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1060),(struct sType*)come_increment_ref_count(result_type_1059),(struct list$1voidph*)come_increment_ref_count(param_types_1063),(struct list$1charph*)come_increment_ref_count(param_names_1066),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1067),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1058),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1068)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1060)),(struct sFun*)come_increment_ref_count(fun_1073));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1195=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1073),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1074=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1195,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1075=node_compile(node_1074,info);
            if(            !Value_1075) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1037=fun_1073;
            come_call_finalizer3(fun_1073,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1074) { node_1074 = come_decrement_ref_count2(node_1074, ((struct sNode*)node_1074)->finalize, ((struct sNode*)node_1074)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1037=fun2_1072;
        }
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1057);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1053;
        info->head=head_1056;
        info->sline=sline_1054;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1055);
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1041,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1055 = come_decrement_ref_count2(sname_1055, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1058,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1059,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1060 = come_decrement_ref_count2(name_1060, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1061,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1063,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1066,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1067,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1068,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1072,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1036;
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1033);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1034);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1035;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1198=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1037,(char*)come_increment_ref_count(real_fun_name_1038))));
    last_code_1033 = come_decrement_ref_count2(last_code_1033, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1034 = come_decrement_ref_count2(last_code2_1034, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1038 = come_decrement_ref_count2(real_fun_name_1038, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1039,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1198,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1076;
char* __dec_obj313;
char* last_code2_1077;
char* __dec_obj314;
_Bool comma_instead_of_semicolon_1078;
struct sClass* current_stack_frame_struct_1079;
struct sFun* equaler_1080;
void* __right_value1199 = (void*)0;
char* real_fun_name_1081;
void* __right_value1200 = (void*)0;
struct sType* type2_1082;
struct sClass* klass_1083;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct buffer* source_1084;
char* name_1085;
int i_1088;
void* __right_value1203 = (void*)0;
struct list$1voidph* o2_saved_1089;
struct tuple2$2charphsTypeph* it_1090;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1091=0;
struct sType* field_type_1092=0;
char* p_1096;
int sline_1097;
char* sname_1098;
char* head_1099;
struct buffer* source3_1100;
struct buffer* __dec_obj315;
void* __right_value1204 = (void*)0;
char* __dec_obj316;
void* __right_value1205 = (void*)0;
struct sBlock* block_1101;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct sType* result_type_1102;
void* __right_value1208 = (void*)0;
char* name_1103;
void* __right_value1209 = (void*)0;
struct sType* left_type_1104;
void* __right_value1210 = (void*)0;
struct sType* right_type_1105;
struct sType* __list_values27___1107[2];
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1voidph* param_types_1106;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
char* __list_values28___1108[2];
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct list$1charph* param_names_1109;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1charph* param_default_parametors_1110;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct buffer* header_buf_1111;
void* __right_value1221 = (void*)0;
int i_1112;
void* __right_value1222 = (void*)0;
struct sType* param_type_1113;
void* __right_value1223 = (void*)0;
char* param_name_1114;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct sFun* fun2_1115;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
struct sFun* fun_1116;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1236 = (void*)0;
struct sNode* node_1117;
_Bool Value_1118;
struct buffer* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct tuple2$2sFunpcharph* __result384__;
    last_code_1076=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj313=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1077=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj314=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1078=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1079=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1080=((void*)0);
    real_fun_name_1081=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1082=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1082;
    klass_1083=type->mClass;
    if(    type->mPointerNum>0&&!klass_1083->mNumber) {
        source_1084=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1084,123);
        if(        klass_1083->mProtocol) {
            name_1085="_protocol_obj";
            char source2_1086[1024];
            memset(&source2_1086, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1086,1024,"return !left.%s.equals(right.%s);\n",name_1085,name_1085);
            buffer_append_str(source_1084,source2_1086);
        }
        else {
            char source2_1087[1024];
            memset(&source2_1087, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1087,1024,"return !(");
            buffer_append_str(source_1084,source2_1087);
            i_1088=0;
            klass_1083=((struct sClass*)((void*)(__right_value1203=map$2voidphvoidphp_operator_load_element(info->classes,klass_1083->mName))));
            come_call_finalizer3(__right_value1203,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1089=(struct list$1voidph*)come_increment_ref_count((klass_1083->mFields)),it_1090=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1089)));            !list$1voidphp_end((o2_saved_1089));            it_1090=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1089)))            ){
                multiple_assign_var15=it_1090;
                name_1091=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1092=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1093[1024];
                memset(&source2_1093, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1093,1024,"left.%s.equals(right.%s)",name_1091,name_1091);
                buffer_append_str(source_1084,source2_1093);
                if(                i_1088==list$1voidphp_length(klass_1083->mFields)-1) {
                    char source2_1094[1024];
                    memset(&source2_1094, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1094,1024,");");
                    buffer_append_str(source_1084,source2_1094);
                }
                else {
                    char source2_1095[1024];
                    memset(&source2_1095, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1095,1024," && ");
                    buffer_append_str(source_1084,source2_1095);
                }
                i_1088++;
                name_1091 = come_decrement_ref_count2(name_1091, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1089,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1084,125);
        p_1096=info->p;
        sline_1097=info->sline;
        sname_1098=(char*)come_increment_ref_count(info->sname);
        head_1099=info->head;
        source3_1100=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1084);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1084->buf;
        info->head=source_1084->buf;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1081));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1101=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1102=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1103=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1081));
        left_type_1104=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1104->mHeap=(_Bool)0;
        right_type_1105=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1105->mHeap=(_Bool)0;
        param_types_1106=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1107[0]=(struct sType*)come_increment_ref_count(left_type_1104),
__list_values27___1107[1]=(struct sType*)come_increment_ref_count(right_type_1105),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values27___1107)));
        param_names_1109=(struct list$1charph*)come_increment_ref_count((__list_values28___1108[0]=(char*)come_increment_ref_count(((char*)(__right_value1213=__builtin_string("left")))),
__list_values28___1108[1]=(char*)come_increment_ref_count(((char*)(__right_value1214=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values28___1108)));
        __right_value1213 = come_decrement_ref_count2(__right_value1213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1214 = come_decrement_ref_count2(__right_value1214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1110=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1110,((void*)0));
        list$1charphp_push_back(param_default_parametors_1110,((void*)0));
        header_buf_1111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1111,((char*)(__right_value1221=make_come_type_name_string(result_type_1102,info))));
        __right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1111," ");
        buffer_append_str(header_buf_1111,real_fun_name_1081);
        buffer_append_str(header_buf_1111,"(");
        for(        i_1112=0;        i_1112<list$1voidphp_length(param_types_1106);        i_1112++        ){
            param_type_1113=((struct sType*)((void*)(__right_value1222=list$1voidphp_operator_load_element(param_types_1106,i_1112))));
            come_call_finalizer3(__right_value1222,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1114=((char*)(__right_value1223=list$1charphp_operator_load_element(param_names_1109,i_1112)));
            __right_value1223 = come_decrement_ref_count2(__right_value1223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1111,((char*)(__right_value1224=make_come_type_name_string(param_type_1113,info))));
            __right_value1224 = come_decrement_ref_count2(__right_value1224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1111," ");
            buffer_append_str(header_buf_1111,param_name_1114);
            if(            i_1112!=list$1voidphp_length(param_types_1106)-1) {
                buffer_append_str(header_buf_1111,",");
            }
        }
        buffer_append_str(header_buf_1111,")");
        result_type_1102->mStatic=(_Bool)0;
        result_type_1102->mUniq=(_Bool)0;
        result_type_1102->mInline=(_Bool)0;
        result_type_1102->mGenerate=(_Bool)0;
        fun2_1115=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1225=__builtin_string(name_1103)))));
        __right_value1225 = come_decrement_ref_count2(__right_value1225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1115==((void*)0)||fun2_1115->mExternal) {
            fun_1116=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1103),(struct sType*)come_increment_ref_count(result_type_1102),(struct list$1voidph*)come_increment_ref_count(param_types_1106),(struct list$1charph*)come_increment_ref_count(param_names_1109),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1110),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1101),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1111)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1103)),(struct sFun*)come_increment_ref_count(fun_1116));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1235=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1116),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1117=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1235,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1118=node_compile(node_1117,info);
            if(            !Value_1118) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1080=fun_1116;
            come_call_finalizer3(fun_1116,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1117) { node_1117 = come_decrement_ref_count2(node_1117, ((struct sNode*)node_1117)->finalize, ((struct sNode*)node_1117)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1080=fun2_1115;
        }
        __dec_obj317=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1100);
        come_call_finalizer3(__dec_obj317,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1096;
        info->head=head_1099;
        info->sline=sline_1097;
        __dec_obj318=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1098);
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1084,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1098 = come_decrement_ref_count2(sname_1098, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1101,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1103 = come_decrement_ref_count2(name_1103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1104,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1105,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1106,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1109,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1110,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1111,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1115,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1079;
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1076);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1077);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1078;
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1238=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1080,(char*)come_increment_ref_count(real_fun_name_1081))));
    last_code_1076 = come_decrement_ref_count2(last_code_1076, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1077 = come_decrement_ref_count2(last_code2_1077, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1081 = come_decrement_ref_count2(real_fun_name_1081, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1082,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1238,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1119;
char* __dec_obj321;
char* last_code2_1120;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_1121;
struct sClass* current_stack_frame_struct_1122;
struct sFun* equaler_1123;
void* __right_value1239 = (void*)0;
char* real_fun_name_1124;
void* __right_value1240 = (void*)0;
struct sType* type2_1125;
struct sClass* klass_1126;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct buffer* source_1127;
char* name_1128;
void* __right_value1243 = (void*)0;
struct list$1voidph* o2_saved_1131;
struct tuple2$2charphsTypeph* it_1132;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1133=0;
struct sType* field_type_1134=0;
char* p_1136;
int sline_1137;
char* sname_1138;
char* head_1139;
struct buffer* source3_1140;
struct buffer* __dec_obj323;
void* __right_value1244 = (void*)0;
char* __dec_obj324;
void* __right_value1245 = (void*)0;
struct sBlock* block_1141;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct sType* result_type_1142;
void* __right_value1248 = (void*)0;
char* name_1143;
void* __right_value1249 = (void*)0;
struct sType* left_type_1144;
void* __right_value1250 = (void*)0;
struct sType* right_type_1145;
struct sType* __list_values29___1147[2];
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct list$1voidph* param_types_1146;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
char* __list_values30___1148[2];
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct list$1charph* param_names_1149;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct list$1charph* param_default_parametors_1150;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct buffer* header_buf_1151;
void* __right_value1261 = (void*)0;
int i_1152;
void* __right_value1262 = (void*)0;
struct sType* param_type_1153;
void* __right_value1263 = (void*)0;
char* param_name_1154;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
struct sFun* fun2_1155;
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sFun* fun_1156;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1276 = (void*)0;
struct sNode* node_1157;
_Bool Value_1158;
struct buffer* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
char* __dec_obj328;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct tuple2$2sFunpcharph* __result385__;
    last_code_1119=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1120=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1121=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1122=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1123=((void*)0);
    real_fun_name_1124=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1125=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1125;
    klass_1126=type->mClass;
    if(    type->mPointerNum>0&&!klass_1126->mNumber) {
        source_1127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1127,123);
        if(        klass_1126->mProtocol) {
            name_1128="_protocol_obj";
            char source2_1129[1024];
            memset(&source2_1129, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1129,1024,"return left.%s === right.%s;\n",name_1128,name_1128);
            buffer_append_str(source_1127,source2_1129);
        }
        else {
            char source2_1130[1024];
            memset(&source2_1130, 0, sizeof(char)            *(1024)            );
            klass_1126=((struct sClass*)((void*)(__right_value1243=map$2voidphvoidphp_operator_load_element(info->classes,klass_1126->mName))));
            come_call_finalizer3(__right_value1243,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1131=(struct list$1voidph*)come_increment_ref_count((klass_1126->mFields)),it_1132=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1131)));            !list$1voidphp_end((o2_saved_1131));            it_1132=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1131)))            ){
                multiple_assign_var16=it_1132;
                name_1133=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1134=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1135[1024];
                memset(&source2_1135, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1135,1024,"if(left.%s !== right.%s) { return false; }\n",name_1133,name_1133,name_1133);
                buffer_append_str(source_1127,source2_1135);
                name_1133 = come_decrement_ref_count2(name_1133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1134,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1131,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1127,"return true;\n");
        buffer_append_char(source_1127,125);
        p_1136=info->p;
        sline_1137=info->sline;
        sname_1138=(char*)come_increment_ref_count(info->sname);
        head_1139=info->head;
        source3_1140=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj323=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1127);
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1127->buf;
        info->head=source_1127->buf;
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1124));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1141=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1142=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1143=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1124));
        left_type_1144=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1144->mHeap=(_Bool)0;
        right_type_1145=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1145->mHeap=(_Bool)0;
        param_types_1146=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1147[0]=(struct sType*)come_increment_ref_count(left_type_1144),
__list_values29___1147[1]=(struct sType*)come_increment_ref_count(right_type_1145),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values29___1147)));
        param_names_1149=(struct list$1charph*)come_increment_ref_count((__list_values30___1148[0]=(char*)come_increment_ref_count(((char*)(__right_value1253=__builtin_string("left")))),
__list_values30___1148[1]=(char*)come_increment_ref_count(((char*)(__right_value1254=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values30___1148)));
        __right_value1253 = come_decrement_ref_count2(__right_value1253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1254 = come_decrement_ref_count2(__right_value1254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1150=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1150,((void*)0));
        list$1charphp_push_back(param_default_parametors_1150,((void*)0));
        header_buf_1151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1151,((char*)(__right_value1261=make_come_type_name_string(result_type_1142,info))));
        __right_value1261 = come_decrement_ref_count2(__right_value1261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1151," ");
        buffer_append_str(header_buf_1151,real_fun_name_1124);
        buffer_append_str(header_buf_1151,"(");
        for(        i_1152=0;        i_1152<list$1voidphp_length(param_types_1146);        i_1152++        ){
            param_type_1153=((struct sType*)((void*)(__right_value1262=list$1voidphp_operator_load_element(param_types_1146,i_1152))));
            come_call_finalizer3(__right_value1262,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1154=((char*)(__right_value1263=list$1charphp_operator_load_element(param_names_1149,i_1152)));
            __right_value1263 = come_decrement_ref_count2(__right_value1263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1151,((char*)(__right_value1264=make_come_type_name_string(param_type_1153,info))));
            __right_value1264 = come_decrement_ref_count2(__right_value1264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1151," ");
            buffer_append_str(header_buf_1151,param_name_1154);
            if(            i_1152!=list$1voidphp_length(param_types_1146)-1) {
                buffer_append_str(header_buf_1151,",");
            }
        }
        buffer_append_str(header_buf_1151,")");
        result_type_1142->mStatic=(_Bool)0;
        result_type_1142->mUniq=(_Bool)0;
        result_type_1142->mInline=(_Bool)0;
        result_type_1142->mGenerate=(_Bool)0;
        fun2_1155=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1265=__builtin_string(name_1143)))));
        __right_value1265 = come_decrement_ref_count2(__right_value1265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1155==((void*)0)||fun2_1155->mExternal) {
            fun_1156=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1143),(struct sType*)come_increment_ref_count(result_type_1142),(struct list$1voidph*)come_increment_ref_count(param_types_1146),(struct list$1charph*)come_increment_ref_count(param_names_1149),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1150),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1141),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1151)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1143)),(struct sFun*)come_increment_ref_count(fun_1156));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1275=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1156),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1157=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1275,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1158=node_compile(node_1157,info);
            if(            !Value_1158) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1123=fun_1156;
            come_call_finalizer3(fun_1156,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1157) { node_1157 = come_decrement_ref_count2(node_1157, ((struct sNode*)node_1157)->finalize, ((struct sNode*)node_1157)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1123=fun2_1155;
        }
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1140);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1136;
        info->head=head_1139;
        info->sline=sline_1137;
        __dec_obj326=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1138);
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1127,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1138 = come_decrement_ref_count2(sname_1138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1140,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1141,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1143 = come_decrement_ref_count2(name_1143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1144,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1146,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1149,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1151,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1155,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1122;
    __dec_obj327=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1119);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj328=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1120);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1121;
    __result385__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1278=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1123,(char*)come_increment_ref_count(real_fun_name_1124))));
    last_code_1119 = come_decrement_ref_count2(last_code_1119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1120 = come_decrement_ref_count2(last_code2_1120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1124 = come_decrement_ref_count2(real_fun_name_1124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1278,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
struct tuple2$2sFunpcharph* __result386__;
char* last_code_1159;
char* __dec_obj329;
char* last_code2_1160;
char* __dec_obj330;
_Bool comma_instead_of_semicolon_1161;
struct sClass* current_stack_frame_struct_1162;
struct sFun* cloner_1163;
void* __right_value1281 = (void*)0;
char* real_fun_name_1164;
void* __right_value1282 = (void*)0;
struct sType* type2_1165;
struct sClass* klass_1166;
char* fun_name2_1167;
void* __right_value1283 = (void*)0;
char* none_generics_name_1168;
void* __right_value1284 = (void*)0;
struct sType* obj_type_1169;
void* __right_value1285 = (void*)0;
char* __dec_obj331;
void* __right_value1286 = (void*)0;
char* fun_name3_1170;
void* __right_value1287 = (void*)0;
struct sGenericsFun* generics_fun_1171;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1172=0;
_Bool err_1173=0;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct tuple2$2sFunpcharph* __result387__;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
char* __dec_obj332;
void* __right_value1294 = (void*)0;
char* __dec_obj333;
int i_1174;
void* __right_value1295 = (void*)0;
char* new_fun_name_1175;
void* __right_value1296 = (void*)0;
void* __right_value1297 = (void*)0;
char* __dec_obj334;
void* __right_value1298 = (void*)0;
char* __dec_obj335;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
struct buffer* source_1176;
void* __right_value1301 = (void*)0;
char* name_1177;
void* __right_value1302 = (void*)0;
struct list$1voidph* o2_saved_1179;
struct tuple2$2charphsTypeph* it_1180;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1181=0;
struct sType* field_type_1182=0;
void* __right_value1303 = (void*)0;
struct list$1voidph* o2_saved_1185;
struct tuple2$2charphsTypeph* it_1186;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1187=0;
struct sType* field_type_1188=0;
char* p_1192;
int sline_1193;
char* sname_1194;
struct buffer* source3_1195;
char* head_1196;
struct buffer* __dec_obj336;
void* __right_value1304 = (void*)0;
char* __dec_obj337;
void* __right_value1305 = (void*)0;
struct sBlock* block_1197;
void* __right_value1306 = (void*)0;
struct sType* result_type_1198;
void* __right_value1307 = (void*)0;
char* name_1199;
void* __right_value1308 = (void*)0;
struct sType* self_type_1200;
struct sType* __list_values31___1202[1];
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct list$1voidph* param_types_1201;
void* __right_value1311 = (void*)0;
char* __list_values32___1203[1];
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct list$1charph* param_names_1204;
void* __right_value1314 = (void*)0;
void* __right_value1315 = (void*)0;
struct list$1charph* param_default_parametors_1205;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
struct buffer* header_buf_1206;
void* __right_value1318 = (void*)0;
int i_1207;
void* __right_value1319 = (void*)0;
struct sType* param_type_1208;
void* __right_value1320 = (void*)0;
char* param_name_1209;
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
void* __right_value1323 = (void*)0;
struct sFun* fun2_1210;
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
struct sFun* fun_1211;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1333 = (void*)0;
struct sNode* node_1212;
_Bool Value_1213;
char* __dec_obj338;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
struct tuple2$2sFunpcharph* __result388__;
fun_name2_1167 = (void*)0;
memset(&i_1174, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1280=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1280,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    last_code_1159=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj329=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1160=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj330=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1161=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1162=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1163=((void*)0);
    real_fun_name_1164=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1165=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1165;
    klass_1166=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1168=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1169=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj331=fun_name2_1167;
        fun_name2_1167=(char*)come_increment_ref_count(create_method_name(obj_type_1169,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1170=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1168,fun_name));
        generics_fun_1171=((struct sGenericsFun*)((void*)(__right_value1287=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_1170,((void*)0)))));
        come_call_finalizer3(__right_value1287,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1171) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1289=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1167)),generics_fun_1171,obj_type_1169,info)));
            name_1172=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1173=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1289,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1173) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result387__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1291=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1172 = come_decrement_ref_count2(name_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1168 = come_decrement_ref_count2(none_generics_name_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1170 = come_decrement_ref_count2(fun_name3_1170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1159 = come_decrement_ref_count2(last_code_1159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1160 = come_decrement_ref_count2(last_code2_1160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1164 = come_decrement_ref_count2(real_fun_name_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1165,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1167 = come_decrement_ref_count2(fun_name2_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1291,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result387__;
                }
            }
            cloner_1163=((struct sFun*)((void*)(__right_value1292=map$2voidphvoidphp_operator_load_element(info->funcs,name_1172))));
            come_call_finalizer3(__right_value1292,(void*)0, 0, 1, 0, 0, __result_obj__);
            name_1172 = come_decrement_ref_count2(name_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1163=((struct sFun*)((void*)(__right_value1293=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1167))));
            come_call_finalizer3(__right_value1293,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj332=real_fun_name_1164;
        real_fun_name_1164=(char*)come_increment_ref_count(fun_name2_1167);
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1168 = come_decrement_ref_count2(none_generics_name_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1170 = come_decrement_ref_count2(fun_name3_1170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj333=fun_name2_1167;
        fun_name2_1167=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1174=128-1;        i_1174>=1;        i_1174--        ){
            new_fun_name_1175=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1167,i_1174));
            cloner_1163=((struct sFun*)((void*)(__right_value1296=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1175))));
            come_call_finalizer3(__right_value1296,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1163) {
                __dec_obj334=fun_name2_1167;
                fun_name2_1167=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1175));
                __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1175 = come_decrement_ref_count2(new_fun_name_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1175 = come_decrement_ref_count2(new_fun_name_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1163==((void*)0)) {
            cloner_1163=((struct sFun*)((void*)(__right_value1298=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1167))));
            come_call_finalizer3(__right_value1298,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj335=real_fun_name_1164;
        real_fun_name_1164=(char*)come_increment_ref_count(fun_name2_1167);
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1163==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1176,"{\n");
        buffer_append_str(source_1176,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1176,"var result = new %s;\n",((char*)(__right_value1301=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1301 = come_decrement_ref_count2(__right_value1301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1166->mProtocol) {
            name_1177="_protocol_obj";
            char source2_1178[1024];
            memset(&source2_1178, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1178,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1176,source2_1178);
            klass_1166=((struct sClass*)((void*)(__right_value1302=map$2voidphvoidphp_operator_load_element(info->classes,klass_1166->mName))));
            come_call_finalizer3(__right_value1302,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1179=(struct list$1voidph*)come_increment_ref_count((klass_1166->mFields)),it_1180=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1179)));            !list$1voidphp_end((o2_saved_1179));            it_1180=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1179)))            ){
                multiple_assign_var18=it_1180;
                name_1181=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1182=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1181,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1182->mArrayNum)>0) {
                    char source2_1183[1024];
                    memset(&source2_1183, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1183,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1181,name_1181,name_1181);
                    buffer_append_str(source_1176,source2_1183);
                }
                else {
                    char source2_1184[1024];
                    memset(&source2_1184, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1184,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1181,name_1181);
                    buffer_append_str(source_1176,source2_1184);
                }
                name_1181 = come_decrement_ref_count2(name_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1182,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1179,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1166=((struct sClass*)((void*)(__right_value1303=map$2voidphvoidphp_operator_load_element(info->classes,klass_1166->mName))));
            come_call_finalizer3(__right_value1303,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1185=(struct list$1voidph*)come_increment_ref_count((klass_1166->mFields)),it_1186=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1185)));            !list$1voidphp_end((o2_saved_1185));            it_1186=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1185)))            ){
                multiple_assign_var19=it_1186;
                name_1187=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1188=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1188->mHeap) {
                    char source2_1189[1024];
                    memset(&source2_1189, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1189,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1187,name_1187,name_1187);
                    buffer_append_str(source_1176,source2_1189);
                }
                else if(                list$1sNodephp_length(field_type_1188->mArrayNum)>0) {
                    char source2_1190[1024];
                    memset(&source2_1190, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1190,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1187,name_1187,name_1187);
                    buffer_append_str(source_1176,source2_1190);
                }
                else {
                    char source2_1191[1024];
                    memset(&source2_1191, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1191,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1187,name_1187);
                    buffer_append_str(source_1176,source2_1191);
                }
                name_1187 = come_decrement_ref_count2(name_1187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1185,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1176,"return result;");
        buffer_append_char(source_1176,125);
        p_1192=info->p;
        sline_1193=info->sline;
        sname_1194=(char*)come_increment_ref_count(info->sname);
        source3_1195=(struct buffer*)come_increment_ref_count(info->source);
        head_1196=info->head;
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1176);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1164));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1197=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1198=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1199=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1164));
        self_type_1200=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1200->mHeap=(_Bool)0;
        param_types_1201=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1202[0]=(struct sType*)come_increment_ref_count(self_type_1200),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values31___1202)));
        param_names_1204=(struct list$1charph*)come_increment_ref_count((__list_values32___1203[0]=(char*)come_increment_ref_count(((char*)(__right_value1311=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values32___1203)));
        __right_value1311 = come_decrement_ref_count2(__right_value1311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1205=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1205,((void*)0));
        header_buf_1206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1206,((char*)(__right_value1318=make_come_type_name_string(result_type_1198,info))));
        __right_value1318 = come_decrement_ref_count2(__right_value1318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1206," ");
        buffer_append_str(header_buf_1206,real_fun_name_1164);
        buffer_append_str(header_buf_1206,"(");
        for(        i_1207=0;        i_1207<list$1voidphp_length(param_types_1201);        i_1207++        ){
            param_type_1208=((struct sType*)((void*)(__right_value1319=list$1voidphp_operator_load_element(param_types_1201,i_1207))));
            come_call_finalizer3(__right_value1319,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1209=((char*)(__right_value1320=list$1charphp_operator_load_element(param_names_1204,i_1207)));
            __right_value1320 = come_decrement_ref_count2(__right_value1320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1206,((char*)(__right_value1321=make_come_type_name_string(param_type_1208,info))));
            __right_value1321 = come_decrement_ref_count2(__right_value1321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1206," ");
            buffer_append_str(header_buf_1206,param_name_1209);
            if(            i_1207!=list$1voidphp_length(param_types_1201)-1) {
                buffer_append_str(header_buf_1206,",");
            }
        }
        buffer_append_str(header_buf_1206,")");
        result_type_1198->mStatic=(_Bool)0;
        result_type_1198->mUniq=(_Bool)0;
        result_type_1198->mInline=(_Bool)0;
        result_type_1198->mGenerate=(_Bool)0;
        fun2_1210=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1322=__builtin_string(name_1199)))));
        __right_value1322 = come_decrement_ref_count2(__right_value1322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1210==((void*)0)||fun2_1210->mExternal) {
            fun_1211=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1199),(struct sType*)come_increment_ref_count(result_type_1198),(struct list$1voidph*)come_increment_ref_count(param_types_1201),(struct list$1charph*)come_increment_ref_count(param_names_1204),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1205),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1197),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1206)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1211->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1199)),(struct sFun*)come_increment_ref_count(fun_1211));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1332=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1211),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1212=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1332,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1213=node_compile(node_1212,info);
            if(            !Value_1213) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1163=fun_1211;
            come_call_finalizer3(fun_1211,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1212) { node_1212 = come_decrement_ref_count2(node_1212, ((struct sNode*)node_1212)->finalize, ((struct sNode*)node_1212)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1163=fun2_1210;
        }
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1194);
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1193;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1195);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1192;
        info->head=head_1196;
        info->sline=sline_1193;
        come_call_finalizer3(source_1176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1194 = come_decrement_ref_count2(sname_1194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1195,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1197,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1198,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1199 = come_decrement_ref_count2(name_1199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1200,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1201,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1204,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1205,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1206,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1210,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1162;
    __dec_obj340=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1159);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj341=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1160);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1161;
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1335=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1163,(char*)come_increment_ref_count(real_fun_name_1164))));
    last_code_1159 = come_decrement_ref_count2(last_code_1159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1160 = come_decrement_ref_count2(last_code2_1160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1164 = come_decrement_ref_count2(real_fun_name_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1165,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1167 = come_decrement_ref_count2(fun_name2_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1335,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1214;
char* __dec_obj342;
char* last_code2_1215;
char* __dec_obj343;
_Bool comma_instead_of_semicolon_1216;
struct sClass* current_stack_frame_struct_1217;
struct sFun* cloner_1218;
void* __right_value1336 = (void*)0;
char* real_fun_name_1219;
void* __right_value1337 = (void*)0;
struct sType* type2_1220;
struct sClass* klass_1221;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct buffer* source_1222;
int i_1223;
void* __right_value1340 = (void*)0;
struct list$1voidph* o2_saved_1224;
struct tuple2$2charphsTypeph* it_1225;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1226=0;
struct sType* field_type_1227=0;
char* p_1230;
int sline_1231;
char* sname_1232;
struct buffer* source3_1233;
char* head_1234;
struct buffer* __dec_obj344;
void* __right_value1341 = (void*)0;
char* __dec_obj345;
void* __right_value1342 = (void*)0;
struct sBlock* block_1235;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct sType* result_type_1236;
void* __right_value1345 = (void*)0;
char* name_1237;
void* __right_value1346 = (void*)0;
struct sType* self_type_1238;
struct sType* __list_values33___1240[1];
void* __right_value1347 = (void*)0;
void* __right_value1348 = (void*)0;
struct list$1voidph* param_types_1239;
void* __right_value1349 = (void*)0;
char* __list_values34___1241[1];
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct list$1charph* param_names_1242;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
struct list$1charph* param_default_parametors_1243;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
struct buffer* header_buf_1244;
void* __right_value1356 = (void*)0;
int i_1245;
void* __right_value1357 = (void*)0;
struct sType* param_type_1246;
void* __right_value1358 = (void*)0;
char* param_name_1247;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
struct sFun* fun2_1248;
void* __right_value1362 = (void*)0;
void* __right_value1363 = (void*)0;
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
void* __right_value1366 = (void*)0;
void* __right_value1367 = (void*)0;
struct sFun* fun_1249;
void* __right_value1368 = (void*)0;
void* __right_value1369 = (void*)0;
void* __right_value1370 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1371 = (void*)0;
struct sNode* node_1250;
_Bool Value_1251;
char* __dec_obj346;
struct buffer* __dec_obj347;
char* __dec_obj348;
char* __dec_obj349;
void* __right_value1372 = (void*)0;
void* __right_value1373 = (void*)0;
struct tuple2$2sFunpcharph* __result389__;
    last_code_1214=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj342=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1215=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj343=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1216=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1217=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1218=((void*)0);
    real_fun_name_1219=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1220=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1220;
    klass_1221=type->mClass;
    if(    type->mPointerNum>0&&!klass_1221->mNumber) {
        source_1222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1222,"{\n");
        buffer_append_str(source_1222,"var result = new buffer();\n");
        buffer_append_format(source_1222,"result.append_str(\"%s {\");\n",klass_1221->mName);
        i_1223=0;
        klass_1221=((struct sClass*)((void*)(__right_value1340=map$2voidphvoidphp_operator_load_element(info->classes,klass_1221->mName))));
        come_call_finalizer3(__right_value1340,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1224=(struct list$1voidph*)come_increment_ref_count((klass_1221->mFields)),it_1225=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1224)));        !list$1voidphp_end((o2_saved_1224));        it_1225=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1224)))        ){
            multiple_assign_var20=it_1225;
            name_1226=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1227=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1223==list$1voidphp_length(klass_1221->mFields)-1) {
                char source2_1228[1024];
                memset(&source2_1228, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1228,1024,"result.append_str(\"%s:\");\n",name_1226);
                buffer_append_str(source_1222,source2_1228);
                snprintf(source2_1228,1024,"result.append_str(self.%s.to_string());\n",name_1226);
                buffer_append_str(source_1222,source2_1228);
            }
            else {
                char source2_1229[1024];
                memset(&source2_1229, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1229,1024,"result.append_str(\"%s:\");\n",name_1226);
                buffer_append_str(source_1222,source2_1229);
                snprintf(source2_1229,1024,"result.append_str(self.%s.to_string());\n",name_1226);
                buffer_append_str(source_1222,source2_1229);
                snprintf(source2_1229,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1222,source2_1229);
            }
            i_1223++;
            name_1226 = come_decrement_ref_count2(name_1226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1224,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1222,"result.append_str(\"}\");\n");
        buffer_append_format(source_1222,"return result.to_string();\n");
        buffer_append_char(source_1222,125);
        p_1230=info->p;
        sline_1231=info->sline;
        sname_1232=(char*)come_increment_ref_count(info->sname);
        source3_1233=(struct buffer*)come_increment_ref_count(info->source);
        head_1234=info->head;
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1222);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1219));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1235=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1236=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1236->mHeap=(_Bool)1;
        name_1237=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1219));
        self_type_1238=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1238->mHeap=(_Bool)0;
        param_types_1239=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1240[0]=(struct sType*)come_increment_ref_count(self_type_1238),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values33___1240)));
        param_names_1242=(struct list$1charph*)come_increment_ref_count((__list_values34___1241[0]=(char*)come_increment_ref_count(((char*)(__right_value1349=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values34___1241)));
        __right_value1349 = come_decrement_ref_count2(__right_value1349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1243=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1243,((void*)0));
        header_buf_1244=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1244,((char*)(__right_value1356=make_come_type_name_string(result_type_1236,info))));
        __right_value1356 = come_decrement_ref_count2(__right_value1356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1244," ");
        buffer_append_str(header_buf_1244,real_fun_name_1219);
        buffer_append_str(header_buf_1244,"(");
        for(        i_1245=0;        i_1245<list$1voidphp_length(param_types_1239);        i_1245++        ){
            param_type_1246=((struct sType*)((void*)(__right_value1357=list$1voidphp_operator_load_element(param_types_1239,i_1245))));
            come_call_finalizer3(__right_value1357,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1247=((char*)(__right_value1358=list$1charphp_operator_load_element(param_names_1242,i_1245)));
            __right_value1358 = come_decrement_ref_count2(__right_value1358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1244,((char*)(__right_value1359=make_come_type_name_string(param_type_1246,info))));
            __right_value1359 = come_decrement_ref_count2(__right_value1359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1244," ");
            buffer_append_str(header_buf_1244,param_name_1247);
            if(            i_1245!=list$1voidphp_length(param_types_1239)-1) {
                buffer_append_str(header_buf_1244,",");
            }
        }
        buffer_append_str(header_buf_1244,")");
        result_type_1236->mStatic=(_Bool)0;
        result_type_1236->mUniq=(_Bool)0;
        result_type_1236->mInline=(_Bool)0;
        result_type_1236->mGenerate=(_Bool)0;
        fun2_1248=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1360=__builtin_string(name_1237)))));
        __right_value1360 = come_decrement_ref_count2(__right_value1360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1248==((void*)0)||fun2_1248->mExternal) {
            fun_1249=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1237),(struct sType*)come_increment_ref_count(result_type_1236),(struct list$1voidph*)come_increment_ref_count(param_types_1239),(struct list$1charph*)come_increment_ref_count(param_names_1242),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1243),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1235),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1244)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1249->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1237)),(struct sFun*)come_increment_ref_count(fun_1249));
            cloner_1218=fun_1249;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1370=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1249),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1250=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1370,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1251=node_compile(node_1250,info);
            if(            !Value_1251) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1249,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1250) { node_1250 = come_decrement_ref_count2(node_1250, ((struct sNode*)node_1250)->finalize, ((struct sNode*)node_1250)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1218=fun2_1248;
        }
        __dec_obj346=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1232);
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1231;
        __dec_obj347=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1233);
        come_call_finalizer3(__dec_obj347,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1230;
        info->head=head_1234;
        info->sline=sline_1231;
        come_call_finalizer3(source_1222,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1232 = come_decrement_ref_count2(sname_1232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1233,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1235,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1236,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1237 = come_decrement_ref_count2(name_1237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1238,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1239,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1243,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1244,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1248,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1217;
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1214);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1215);
    __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1216;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1373=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1218,(char*)come_increment_ref_count(real_fun_name_1219))));
    last_code_1214 = come_decrement_ref_count2(last_code_1214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1215 = come_decrement_ref_count2(last_code2_1215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1219 = come_decrement_ref_count2(real_fun_name_1219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1220,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1373,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1299;
char* __dec_obj360;
char* last_code2_1300;
char* __dec_obj361;
_Bool comma_instead_of_semicolon_1301;
struct sClass* current_stack_frame_struct_1302;
struct sFun* get_hash_key_fun_1303;
void* __right_value1424 = (void*)0;
char* real_fun_name_1304;
void* __right_value1425 = (void*)0;
struct sType* type2_1305;
struct sClass* klass_1306;
void* __right_value1426 = (void*)0;
void* __right_value1427 = (void*)0;
char* none_generics_name_1307;
void* __right_value1428 = (void*)0;
char* generics_fun_name_1308;
void* __right_value1429 = (void*)0;
struct sGenericsFun* generics_fun_1309;
void* __right_value1430 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1310=0;
_Bool err_1311=0;
void* __right_value1431 = (void*)0;
int i_1312;
void* __right_value1432 = (void*)0;
char* new_fun_name_1313;
void* __right_value1433 = (void*)0;
void* __right_value1434 = (void*)0;
char* __dec_obj362;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct buffer* source_1314;
int i_1315;
void* __right_value1438 = (void*)0;
struct list$1voidph* o2_saved_1316;
struct tuple2$2charphsTypeph* it_1317;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1318=0;
struct sType* field_type_1319=0;
char* p_1321;
int sline_1322;
char* sname_1323;
struct buffer* source3_1324;
char* head_1325;
struct buffer* __dec_obj363;
void* __right_value1439 = (void*)0;
char* __dec_obj364;
void* __right_value1440 = (void*)0;
struct sBlock* block_1326;
void* __right_value1441 = (void*)0;
void* __right_value1442 = (void*)0;
struct sType* result_type_1327;
void* __right_value1443 = (void*)0;
char* name_1328;
void* __right_value1444 = (void*)0;
struct sType* self_type_1329;
struct sType* __list_values37___1331[1];
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
struct list$1voidph* param_types_1330;
void* __right_value1447 = (void*)0;
char* __list_values38___1332[1];
void* __right_value1448 = (void*)0;
void* __right_value1449 = (void*)0;
struct list$1charph* param_names_1333;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
struct list$1charph* param_default_parametors_1334;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
struct buffer* header_buf_1335;
void* __right_value1454 = (void*)0;
int i_1336;
void* __right_value1455 = (void*)0;
struct sType* param_type_1337;
void* __right_value1456 = (void*)0;
char* param_name_1338;
void* __right_value1457 = (void*)0;
void* __right_value1458 = (void*)0;
void* __right_value1459 = (void*)0;
struct sFun* fun2_1339;
void* __right_value1460 = (void*)0;
void* __right_value1461 = (void*)0;
void* __right_value1462 = (void*)0;
void* __right_value1463 = (void*)0;
void* __right_value1464 = (void*)0;
void* __right_value1465 = (void*)0;
struct sFun* fun_1340;
void* __right_value1466 = (void*)0;
void* __right_value1467 = (void*)0;
void* __right_value1468 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1469 = (void*)0;
struct sNode* node_1341;
_Bool Value_1342;
char* __dec_obj365;
struct buffer* __dec_obj366;
char* __dec_obj367;
char* __dec_obj368;
void* __right_value1470 = (void*)0;
void* __right_value1471 = (void*)0;
struct tuple2$2sFunpcharph* __result391__;
memset(&i_1312, 0, sizeof(int));
    last_code_1299=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1300=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1301=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1302=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1303=((void*)0);
    real_fun_name_1304=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1305=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1305;
    klass_1306=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1303=((struct sFun*)((void*)(__right_value1426=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1304))));
        come_call_finalizer3(__right_value1426,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1303==((void*)0)) {
            none_generics_name_1307=(char*)come_increment_ref_count(get_none_generics_name(type2_1305->mClass->mName));
            generics_fun_name_1308=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1307,fun_name));
            generics_fun_1309=((struct sGenericsFun*)((void*)(__right_value1429=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_1308))));
            come_call_finalizer3(__right_value1429,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1309) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1430=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1304),generics_fun_1309,type,info)));
                name_1310=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1311=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1430,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1311) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1303=((struct sFun*)((void*)(__right_value1431=map$2voidphvoidphp_operator_load_element(info->funcs,name_1310))));
                come_call_finalizer3(__right_value1431,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_1310 = come_decrement_ref_count2(name_1310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1307 = come_decrement_ref_count2(none_generics_name_1307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1308 = come_decrement_ref_count2(generics_fun_name_1308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1312=128-1;        i_1312>=1;        i_1312--        ){
            new_fun_name_1313=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1304,i_1312));
            get_hash_key_fun_1303=((struct sFun*)((void*)(__right_value1433=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1313))));
            come_call_finalizer3(__right_value1433,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1303) {
                __dec_obj362=real_fun_name_1304;
                real_fun_name_1304=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1313));
                __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1313 = come_decrement_ref_count2(new_fun_name_1313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1313 = come_decrement_ref_count2(new_fun_name_1313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1303==((void*)0)) {
            get_hash_key_fun_1303=((struct sFun*)((void*)(__right_value1435=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1304))));
            come_call_finalizer3(__right_value1435,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1303==((void*)0)&&type->mPointerNum>0&&!klass_1306->mNumber&&!klass_1306->mProtocol) {
        source_1314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1314,"{\n");
        buffer_append_str(source_1314,"unsigned int result = 0;\n");
        i_1315=0;
        klass_1306=((struct sClass*)((void*)(__right_value1438=map$2voidphvoidphp_operator_load_element(info->classes,klass_1306->mName))));
        come_call_finalizer3(__right_value1438,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1316=(struct list$1voidph*)come_increment_ref_count((klass_1306->mFields)),it_1317=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1316)));        !list$1voidphp_end((o2_saved_1316));        it_1317=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1316)))        ){
            multiple_assign_var24=it_1317;
            name_1318=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1319=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1320[1024];
            memset(&source2_1320, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1320,1024,"result += ((int)self.%s).get_hash_key();\n",name_1318);
            buffer_append_str(source_1314,source2_1320);
            i_1315++;
            name_1318 = come_decrement_ref_count2(name_1318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1319,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1316,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1314,"return result;\n");
        buffer_append_char(source_1314,125);
        p_1321=info->p;
        sline_1322=info->sline;
        sname_1323=(char*)come_increment_ref_count(info->sname);
        source3_1324=(struct buffer*)come_increment_ref_count(info->source);
        head_1325=info->head;
        __dec_obj363=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1314);
        come_call_finalizer3(__dec_obj363,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1304));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1326=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1327->mUnsigned=(_Bool)1;
        name_1328=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1304));
        self_type_1329=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1329->mHeap=(_Bool)0;
        param_types_1330=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1331[0]=(struct sType*)come_increment_ref_count(self_type_1329),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values37___1331)));
        param_names_1333=(struct list$1charph*)come_increment_ref_count((__list_values38___1332[0]=(char*)come_increment_ref_count(((char*)(__right_value1447=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values38___1332)));
        __right_value1447 = come_decrement_ref_count2(__right_value1447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1334=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1334,((void*)0));
        header_buf_1335=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1335,((char*)(__right_value1454=make_come_type_name_string(result_type_1327,info))));
        __right_value1454 = come_decrement_ref_count2(__right_value1454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1335," ");
        buffer_append_str(header_buf_1335,real_fun_name_1304);
        buffer_append_str(header_buf_1335,"(");
        for(        i_1336=0;        i_1336<list$1voidphp_length(param_types_1330);        i_1336++        ){
            param_type_1337=((struct sType*)((void*)(__right_value1455=list$1voidphp_operator_load_element(param_types_1330,i_1336))));
            come_call_finalizer3(__right_value1455,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1338=((char*)(__right_value1456=list$1charphp_operator_load_element(param_names_1333,i_1336)));
            __right_value1456 = come_decrement_ref_count2(__right_value1456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1335,((char*)(__right_value1457=make_come_type_name_string(param_type_1337,info))));
            __right_value1457 = come_decrement_ref_count2(__right_value1457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1335," ");
            buffer_append_str(header_buf_1335,param_name_1338);
            if(            i_1336!=list$1voidphp_length(param_types_1330)-1) {
                buffer_append_str(header_buf_1335,",");
            }
        }
        buffer_append_str(header_buf_1335,")");
        result_type_1327->mStatic=(_Bool)0;
        result_type_1327->mUniq=(_Bool)0;
        result_type_1327->mInline=(_Bool)0;
        result_type_1327->mGenerate=(_Bool)0;
        fun2_1339=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1458=__builtin_string(name_1328)))));
        __right_value1458 = come_decrement_ref_count2(__right_value1458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1339==((void*)0)||fun2_1339->mExternal) {
            fun_1340=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1328),(struct sType*)come_increment_ref_count(result_type_1327),(struct list$1voidph*)come_increment_ref_count(param_types_1330),(struct list$1charph*)come_increment_ref_count(param_names_1333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1334),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1326),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1335)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1340->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1328)),(struct sFun*)come_increment_ref_count(fun_1340));
            get_hash_key_fun_1303=fun_1340;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1468=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1340),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1341=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1468,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1342=node_compile(node_1341,info);
            if(            !Value_1342) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1340,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1341) { node_1341 = come_decrement_ref_count2(node_1341, ((struct sNode*)node_1341)->finalize, ((struct sNode*)node_1341)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1303=fun2_1339;
        }
        __dec_obj365=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1323);
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1322;
        __dec_obj366=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1324);
        come_call_finalizer3(__dec_obj366,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1321;
        info->head=head_1325;
        info->sline=sline_1322;
        come_call_finalizer3(source_1314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1323 = come_decrement_ref_count2(sname_1323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1326,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1327,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1328 = come_decrement_ref_count2(name_1328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1329,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1330,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1334,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1335,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1339,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1302;
    __dec_obj367=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1299);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj368=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1300);
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1301;
    __result391__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1471=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),get_hash_key_fun_1303,(char*)come_increment_ref_count(real_fun_name_1304))));
    last_code_1299 = come_decrement_ref_count2(last_code_1299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1300 = come_decrement_ref_count2(last_code2_1300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1304 = come_decrement_ref_count2(real_fun_name_1304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1305,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1471,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

