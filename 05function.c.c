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
static unsigned int map$2voidphvoidph_get_hash_key(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidph_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static _Bool voidpp_equals(void** left, void** right);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item);
static void list$1voidp_finalize(struct list$1voidp* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
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
static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self);
static _Bool sSemicolonNode_equals(struct sSemicolonNode* left, struct sSemicolonNode* right);
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
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
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
static unsigned int sBlock_get_hash_key(struct sBlock* self);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static unsigned int sFunNode_get_hash_key(struct sFunNode* self);
static _Bool sFunNode_equals(struct sFunNode* left, struct sFunNode* right);
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
static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self);
static _Bool sLambdaNode_equals(struct sLambdaNode* left, struct sLambdaNode* right);
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
    come_call_finalizer2((void*)0, result_348, result_348 ? ((struct sNode*)result_348)->finalize:(void*)0, result_348 ? ((struct sNode*)result_348)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
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
int i_399;
struct list$1charph* o2_saved_400;
char* it_403;
void* __right_value345 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __dec_obj139;
void* __right_value357 = (void*)0;
struct sNode* node_453;
void* __right_value358 = (void*)0;
char* __dec_obj140;
_Bool omit_semicolon_457;
void* __right_value362 = (void*)0;
char* __dec_obj144;
char* head_472;
void* __right_value363 = (void*)0;
struct sNode* value_473;
char* tail_474;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* node_476;
void* __right_value367 = (void*)0;
char* __dec_obj146;
struct sNode* node_477;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj149;
_Bool omit_semicolon_480;
char* p_481;
char* head_482;
void* __right_value374 = (void*)0;
char* source_483;
void* __right_value375 = (void*)0;
struct sNode* node_484;
struct sBlock* __result305__;
node_477 = (void*)0;
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
                i_399=0;
                for(                o2_saved_400=(struct list$1charph*)come_increment_ref_count((module_382->mParams)),it_403=list$1charphp_begin((o2_saved_400));                !list$1charphp_end((o2_saved_400));                it_403=list$1charphp_next((o2_saved_400))                ){
                    map$2voidphvoidphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_403)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value354=list$1charphp_operator_load_element(params_377,i_399))))));
                    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_399++;
                }
                come_call_finalizer3(o2_saved_400,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_382->mText;
                info->sline=module_382->mSLine;
                __dec_obj139=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_382->mSName));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_376 = come_decrement_ref_count2(module_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_453=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj140=info->sname;
            info->sname=(char*)come_increment_ref_count(node_453->sname(node_453->_protocol_obj));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_453->sline(node_453->_protocol_obj);
            if(            node_453==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_453));
            parse_sharp_v5(info);
            if(            node_453->terminated(node_453->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_457=(_Bool)1;
            if(            node_453->terminated(node_453->_protocol_obj)) {
                omit_semicolon_457=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_457=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_363->mOmitSemicolon=omit_semicolon_457;
                if(                omit_semicolon_457&&in_function) {
                    list$1sNodephp_delete(result_363->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_373;
                    info->sline=sline_374;
                    __dec_obj144=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_375));
                    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_472=info->p;
                    value_473=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_474=info->p;
                    __dec_obj145=value_473;
                    value_473=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_473),info));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_475[tail_474-head_472+1];
                    memset(&buf_475, 0, sizeof(char)                    *(tail_474-head_472+1)                    );
                    memcpy(buf_475,head_472,tail_474-head_472);
                    buf_475[tail_474-head_472]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_476=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_473),(char*)come_increment_ref_count(__builtin_string(buf_475)),info));
                    list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_476));
                    if(value_473) { value_473 = come_decrement_ref_count2(value_473, ((struct sNode*)value_473)->finalize, ((struct sNode*)value_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_476) { node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_473) { value_473 = come_decrement_ref_count2(value_473, ((struct sNode*)value_473)->finalize, ((struct sNode*)value_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_476) { node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_375 = come_decrement_ref_count2(sname_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            __dec_obj148=node_477;
            node_477=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value369,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_477));
        }
        else {
            __dec_obj149=node_477;
            node_477=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_477==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_477->terminated(node_477->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_480=(_Bool)1;
            if(            node_477->terminated(node_477->_protocol_obj)) {
                omit_semicolon_480=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_480=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_363->mOmitSemicolon=omit_semicolon_480;
            list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_477));
        }
        if(node_477) { node_477 = come_decrement_ref_count2(node_477, ((struct sNode*)node_477)->finalize, ((struct sNode*)node_477)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_481=info->p;
        head_482=info->head;
        source_483=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_483;
        info->head=source_483;
        node_484=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_484==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_363->mNodes,(struct sNode*)come_increment_ref_count(node_484));
        info->p=p_481;
        info->head=head_482;
        source_483 = come_decrement_ref_count2(source_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
struct map$2voidphvoidph* result_388;
void* __right_value337 = (void*)0;
struct list$1voidp* __dec_obj136;
struct map$2voidphvoidph* __result266__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_388=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph", map$2voidphvoidph_finalize, map$2voidphvoidph_clone, map$2voidphvoidph_get_hash_key, map$2voidphvoidph_equals));
    if(    self!=((void*)0)) {
        result_388->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_388->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_388->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_388->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_388->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj136=result_388->key_list;
        result_388->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj136,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_388->it=self->it;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_388;
    come_call_finalizer3(result_388,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static unsigned int map$2voidphvoidph_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_385;
    result_385=0;
    result_385+=int_get_hash_key(((int)self->keys));
    result_385+=int_get_hash_key(((int)self->item_existance));
    result_385+=int_get_hash_key(((int)self->items));
    result_385+=int_get_hash_key(((int)self->size));
    result_385+=int_get_hash_key(((int)self->len));
    result_385+=int_get_hash_key(((int)self->key_list));
    result_385+=int_get_hash_key(((int)self->it));
    return result_385;
}

static _Bool map$2voidphvoidph_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
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

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
struct list_item$1voidp* it_386;
struct list_item$1voidp* it2_387;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_386=left->head;
    it2_387=right->head;
    while(it_386!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_386->item, it2_387->item)) {
            return (_Bool)0;
        }
        it_386=it_386->next;
        it2_387=it2_387->next;
    }
    return (_Bool)1;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result262__;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1voidp* result_390;
struct list_item$1voidp* it_391;
struct list$1voidp* __result265__;
    if(    self==((void*)0)) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_390=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_391=self->head;
    while(it_391!=((void*)0)) {
        list$1voidpp_add(result_390,it_391->item);
        it_391=it_391->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_390;
    come_call_finalizer3(result_390,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_389;
    result_389=0;
    result_389+=int_get_hash_key(((int)self->head));
    result_389+=int_get_hash_key(((int)self->tail));
    result_389+=int_get_hash_key(((int)self->len));
    result_389+=int_get_hash_key(((int)self->it));
    return result_389;
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
struct list_item$1voidp* litem_392;
void* __right_value335 = (void*)0;
struct list_item$1voidp* litem_393;
void* __right_value336 = (void*)0;
struct list_item$1voidp* litem_394;
struct list$1voidp* __result264__;
    if(    self->len==0) {
        litem_392=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value334=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_392->prev=((void*)0);
        litem_392->next=((void*)0);
        litem_392->item=item;
        self->tail=litem_392;
        self->head=litem_392;
    }
    else if(    self->len==1) {
        litem_393=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value335=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=self->head;
        litem_393->next=((void*)0);
        litem_393->item=item;
        self->tail=litem_393;
        self->head->next=litem_393;
    }
    else {
        litem_394=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value336=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->tail;
        litem_394->next=((void*)0);
        litem_394->item=item;
        self->tail->next=litem_394;
        self->tail=litem_394;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_395;
struct list_item$1voidp* prev_it_396;
    it_395=self->head;
    while(it_395!=((void*)0)) {
        prev_it_396=it_395;
        it_395=it_395->next;
        come_call_finalizer3(prev_it_396,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_397;
    result_397=0;
    result_397+=int_get_hash_key(((int)self->keys));
    result_397+=int_get_hash_key(((int)self->item_existance));
    result_397+=int_get_hash_key(((int)self->items));
    result_397+=int_get_hash_key(((int)self->size));
    result_397+=int_get_hash_key(((int)self->len));
    result_397+=int_get_hash_key(((int)self->key_list));
    result_397+=int_get_hash_key(((int)self->it));
    return result_397;
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

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
int i_398;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1voidp* __dec_obj137;
struct map$2voidphvoidph* __result268__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value339=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value340=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value341=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_398=0;    i_398<128;    i_398++    ){
        self->item_existance[i_398]=(_Bool)0;
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
char* result_401;
char* __result269__;
char* __result270__;
char* result_402;
char* __result271__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_401,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->it=self->head;
    if(    self->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_402,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_404;
char* __result272__;
char* __result273__;
char* result_405;
char* __result274__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_404,0,sizeof(char*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_405,0,sizeof(char*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_405;
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
unsigned int hash_423;
unsigned int it_424;
_Bool same_key_exist_441;
char* it2_444;
struct map$2voidphvoidph* __result296__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_423=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_424=hash_423;
    while((_Bool)1) {
        if(        self->item_existance[it_424]) {
            if(            come_call_equals((void*)0, self->keys[it_424], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_424]);
                    come_call_finalizer3(self->keys[it_424], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_424]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_424]);
                    self->keys[it_424]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_424], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_424]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_424]=item;
                }
                break;
            }
            it_424++;
            if(            it_424>=self->size) {
                it_424=0;
            }
            else if(            it_424==hash_423) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_424]=(_Bool)1;
            if(            1) {
                self->keys[it_424]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_424]=key;
            }
            if(            1) {
                self->items[it_424]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_424]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_441=(_Bool)0;
    for(    it2_444=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_444=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_444, key)) {
            same_key_exist_441=(_Bool)1;
        }
    }
    if(    !same_key_exist_441) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_406;
void* __right_value346 = (void*)0;
void** keys_407;
void* __right_value347 = (void*)0;
void** items_408;
void* __right_value348 = (void*)0;
_Bool* item_existance_409;
int len_410;
void* it_413;
void* default_value_416;
void* __right_value349 = (void*)0;
void* it2_417;
unsigned int hash_420;
int n_421;
void* default_value_422;
void* __right_value350 = (void*)0;
default_value_416 = (void*)0;
default_value_422 = (void*)0;
    size_406=self->size*10;
    keys_407=(void**)come_increment_ref_count(((void**)(__right_value346=(void**)come_calloc(1, sizeof(void*)*(1*(size_406)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_408=(void**)come_increment_ref_count(((void**)(__right_value347=(void**)come_calloc(1, sizeof(void*)*(1*(size_406)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_409=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value348=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_406)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_410=0;
    for(    it_413=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_413=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_416,0,sizeof(void*));
        it2_417=((void*)(__right_value349=map$2voidphvoidphp_at(self,it_413,default_value_416)));
        come_call_finalizer3(__right_value349,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_420=come_call_get_hash_key((void*)0, ((void*)it_413))%size_406;
        n_421=hash_420;
        while((_Bool)1) {
            if(            item_existance_409[n_421]) {
                n_421++;
                if(                n_421>=size_406) {
                    n_421=0;
                }
                else if(                n_421==hash_420) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_409[n_421]=(_Bool)1;
                keys_407[n_421]=it_413;
                items_408[n_421]=((void*)(__right_value350=map$2voidphvoidphp_at(self,it_413,default_value_422)));
                come_call_finalizer3(__right_value350,(void*)0, 0, 1, 0, 0, (void*)0);
                len_410++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_407;
    self->items=items_408;
    self->item_existance=item_existance_409;
    self->size=size_406;
    self->len=len_410;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_411;
void* __result275__;
void* __result276__;
void* result_412;
void* __result277__;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_411,0,sizeof(void*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_411;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_412,0,sizeof(void*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_412;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_414;
void* __result278__;
void* __result279__;
void* result_415;
void* __result280__;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_414,0,sizeof(void*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_414;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_415,0,sizeof(void*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_415;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_418;
unsigned int it_419;
void* __result281__;
void* __result282__;
void* __result283__;
void* __result284__;
    hash_418=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_419=hash_418;
    while((_Bool)1) {
        if(        self->item_existance[it_419]) {
            if(            come_call_equals((void*)0, self->keys[it_419], key)) {
                __result281__ = gComeFunResultObject = __result_obj__ = self->items[it_419];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
            it_419++;
            if(            it_419>=self->size) {
                it_419=0;
            }
            else if(            it_419==hash_418) {
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
int it2_425;
struct list_item$1voidp* it_426;
struct list$1voidp* __result288__;
    it2_425=0;
    it_426=self->head;
    while(it_426!=((void*)0)) {
        if(        come_call_equals((void*)0, it_426->item, item)) {
            list$1voidpp_delete(self,it2_425,it2_425+1);
            break;
        }
        it2_425++;
        it_426=it_426->next;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_427;
struct list$1voidp* __result285__;
struct list_item$1voidp* it_430;
int i_431;
struct list_item$1voidp* prev_it_432;
struct list_item$1voidp* it_433;
int i_434;
struct list_item$1voidp* prev_it_435;
struct list_item$1voidp* it_436;
struct list_item$1voidp* head_prev_it_437;
struct list_item$1voidp* tail_it_438;
int i_439;
struct list_item$1voidp* prev_it_440;
struct list$1voidp* __result287__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_427=tail;
        tail=head;
        head=tmp_427;
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
        it_430=self->head;
        i_431=0;
        while(it_430!=((void*)0)) {
            if(            i_431<tail) {
                prev_it_432=it_430;
                it_430=it_430->next;
                i_431++;
                come_call_finalizer3(prev_it_432,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_431==tail) {
                self->head=it_430;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_430=it_430->next;
                i_431++;
            }
        }
    }
    else if(    tail==self->len) {
        it_433=self->head;
        i_434=0;
        while(it_433!=((void*)0)) {
            if(            i_434==head) {
                self->tail=it_433->prev;
                self->tail->next=((void*)0);
            }
            if(            i_434>=head) {
                prev_it_435=it_433;
                it_433=it_433->next;
                i_434++;
                come_call_finalizer3(prev_it_435,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_433=it_433->next;
                i_434++;
            }
        }
    }
    else {
        it_436=self->head;
        head_prev_it_437=((void*)0);
        tail_it_438=((void*)0);
        i_439=0;
        while(it_436!=((void*)0)) {
            if(            i_439==head) {
                head_prev_it_437=it_436->prev;
            }
            if(            i_439==tail) {
                tail_it_438=it_436;
            }
            if(            i_439>=head&&i_439<tail) {
                prev_it_440=it_436;
                it_436=it_436->next;
                i_439++;
                come_call_finalizer3(prev_it_440,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_436=it_436->next;
                i_439++;
            }
        }
        if(        head_prev_it_437!=((void*)0)) {
            head_prev_it_437->next=tail_it_438;
        }
        if(        tail_it_438!=((void*)0)) {
            tail_it_438->prev=head_prev_it_437;
        }
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_428;
struct list_item$1voidp* prev_it_429;
struct list$1voidp* __result286__;
    it_428=self->head;
    while(it_428!=((void*)0)) {
        prev_it_429=it_428;
        it_428=it_428->next;
        come_call_finalizer3(prev_it_429,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
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
void* result_442;
void* __result289__;
void* __result290__;
void* result_443;
void* __result291__;
result_442 = (void*)0;
result_443 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_442,0,sizeof(void*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_442;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->head;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_443,0,sizeof(void*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_443;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_445;
void* __result292__;
void* __result293__;
void* result_446;
void* __result294__;
result_445 = (void*)0;
result_446 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_445,0,sizeof(void*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_445;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_446,0,sizeof(void*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_446;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
struct list_item$1voidp* litem_447;
void* __right_value352 = (void*)0;
struct list_item$1voidp* litem_448;
void* __right_value353 = (void*)0;
struct list_item$1voidp* litem_449;
struct list$1voidp* __result295__;
    if(    self->len==0) {
        litem_447=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value351=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        litem_447->item=item;
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value352=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        litem_448->item=item;
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value353=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        litem_449->item=item;
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_450;
int i_451;
char* __result297__;
char* default_value_452;
char* __result298__;
default_value_452 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_450=self->head;
    i_451=0;
    while(it_450!=((void*)0)) {
        if(        position==i_451) {
            __result297__ = gComeFunResultObject = __result_obj__ = it_450->item;
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
        it_450=it_450->next;
        i_451++;
    }
    memset(&default_value_452,0,sizeof(char*));
    __result298__ = gComeFunResultObject = __result_obj__ = default_value_452;
    default_value_452 = come_decrement_ref_count2(default_value_452, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct list_item$1sNodeph* litem_454;
struct sNode* __dec_obj141;
void* __right_value360 = (void*)0;
struct list_item$1sNodeph* litem_455;
struct sNode* __dec_obj142;
void* __right_value361 = (void*)0;
struct list_item$1sNodeph* litem_456;
struct sNode* __dec_obj143;
struct list$1sNodeph* __result299__;
    if(    self->len==0) {
        litem_454=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value359=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_454->prev=((void*)0);
        litem_454->next=((void*)0);
        __dec_obj141=litem_454->item;
        litem_454->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_454;
        self->head=litem_454;
    }
    else if(    self->len==1) {
        litem_455=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value360=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_455->prev=self->head;
        litem_455->next=((void*)0);
        __dec_obj142=litem_455->item;
        litem_455->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_455;
        self->head->next=litem_455;
    }
    else {
        litem_456=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value361=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_456->prev=self->tail;
        litem_456->next=((void*)0);
        __dec_obj143=litem_456->item;
        litem_456->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_456;
        self->tail=litem_456;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_458;
struct list$1sNodeph* __result300__;
struct list_item$1sNodeph* it_461;
int i_462;
struct list_item$1sNodeph* prev_it_463;
struct list_item$1sNodeph* it_464;
int i_465;
struct list_item$1sNodeph* prev_it_466;
struct list_item$1sNodeph* it_467;
struct list_item$1sNodeph* head_prev_it_468;
struct list_item$1sNodeph* tail_it_469;
int i_470;
struct list_item$1sNodeph* prev_it_471;
struct list$1sNodeph* __result302__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_458=tail;
        tail=head;
        head=tmp_458;
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
        it_461=self->head;
        i_462=0;
        while(it_461!=((void*)0)) {
            if(            i_462<tail) {
                prev_it_463=it_461;
                it_461=it_461->next;
                i_462++;
                come_call_finalizer3(prev_it_463,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_462==tail) {
                self->head=it_461;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_461=it_461->next;
                i_462++;
            }
        }
    }
    else if(    tail==self->len) {
        it_464=self->head;
        i_465=0;
        while(it_464!=((void*)0)) {
            if(            i_465==head) {
                self->tail=it_464->prev;
                self->tail->next=((void*)0);
            }
            if(            i_465>=head) {
                prev_it_466=it_464;
                it_464=it_464->next;
                i_465++;
                come_call_finalizer3(prev_it_466,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_464=it_464->next;
                i_465++;
            }
        }
    }
    else {
        it_467=self->head;
        head_prev_it_468=((void*)0);
        tail_it_469=((void*)0);
        i_470=0;
        while(it_467!=((void*)0)) {
            if(            i_470==head) {
                head_prev_it_468=it_467->prev;
            }
            if(            i_470==tail) {
                tail_it_469=it_467;
            }
            if(            i_470>=head&&i_470<tail) {
                prev_it_471=it_467;
                it_467=it_467->next;
                i_470++;
                come_call_finalizer3(prev_it_471,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_467=it_467->next;
                i_470++;
            }
        }
        if(        head_prev_it_468!=((void*)0)) {
            head_prev_it_468->next=tail_it_469;
        }
        if(        tail_it_469!=((void*)0)) {
            tail_it_469->prev=head_prev_it_468;
        }
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_459;
struct list_item$1sNodeph* prev_it_460;
struct list$1sNodeph* __result301__;
    it_459=self->head;
    while(it_459!=((void*)0)) {
        prev_it_460=it_459;
        it_459=it_459->next;
        come_call_finalizer3(prev_it_460,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sSemicolonNode* result_479;
void* __right_value371 = (void*)0;
char* __dec_obj147;
struct sSemicolonNode* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_479=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone, sSemicolonNode_get_hash_key, sSemicolonNode_equals));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj147=result_479->sname;
        result_479->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_479;
    come_call_finalizer3(result_479,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self){
unsigned int result_478;
    result_478=0;
    result_478+=int_get_hash_key(((int)self->sline));
    result_478+=int_get_hash_key(((int)self->sname));
    result_478+=int_get_hash_key(((int)self->sline_real));
    return result_478;
}

static _Bool sSemicolonNode_equals(struct sSemicolonNode* left, struct sSemicolonNode* right){
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

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_485;
struct sVarTable* old_table_486;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sVarTable* __dec_obj160;
struct sVarTable* current_loop_vtable_499;
struct list$1voidph* param_types__500;
struct list$1charph* param_names__501;
int i_502;
struct list$1charph* o2_saved_503;
char* name_504;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* type_505;
void* __right_value393 = (void*)0;
int block_level_509;
int i_510;
struct list$1sNodeph* o2_saved_511;
struct sNode* node_514;
struct list$1voidph* right_value_objects_517;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1voidph* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
int stack_num_before_518;
int sline_519;
void* __right_value396 = (void*)0;
char* sname_520;
void* __right_value397 = (void*)0;
char* __dec_obj164;
_Bool Value_521;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value404 = (void*)0;
struct CVALUE* come_value2_523;
void* __right_value405 = (void*)0;
char* __dec_obj169;
void* __right_value406 = (void*)0;
struct CVALUE* come_value2_526;
struct sVar* var__527;
void* __right_value407 = (void*)0;
struct CVALUE* come_value3_528;
void* __right_value408 = (void*)0;
_Bool _if_conditional2;
void* __right_value409 = (void*)0;
struct sType* __dec_obj170;
void* __right_value410 = (void*)0;
char* c_value_531;
void* __right_value411 = (void*)0;
char* __dec_obj171;
void* __right_value412 = (void*)0;
char* __dec_obj172;
void* __right_value413 = (void*)0;
char* __dec_obj173;
_Bool Value_532;
void* __right_value414 = (void*)0;
char* __dec_obj174;
struct list$1voidph* __dec_obj175;
void* __if_result__0_535 = (void*)0;
struct list$1voidph* o2_saved_536;
struct sVar* it_539;
struct list$1voidph* __dec_obj176;
memset(&i_502, 0, sizeof(int));
memset(&i_510, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_485=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_486=info->lv_table;
    if(    !no_var_table) {
        __dec_obj160=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_486));
        come_call_finalizer3(__dec_obj160,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_499=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__500=info->param_types;
    param_names__501=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_503=(param_names),name_504=list$1charphp_begin((o2_saved_503));        !list$1charphp_end((o2_saved_503));        name_504=list$1charphp_next((o2_saved_503))        ){
            type_505=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value391=list$1voidphp_operator_load_element(param_types,i_502))))));
            come_call_finalizer3(__right_value391,(void*)0, 0, 1, 0, 0, (void*)0);
            type_505->mFunctionParam=(_Bool)1;
            type_505->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_504,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_505)),info);
            i_502++;
            come_call_finalizer3(type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_509=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_511=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_514=list$1sNodephp_begin((o2_saved_511));        !list$1sNodephp_end((o2_saved_511));        node_514=list$1sNodephp_next((o2_saved_511))        ){
            right_value_objects_517=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj161=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 492, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj161,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj162=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj163=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_518=list$1CVALUEphp_length(info->stack);
            sline_519=info->sline;
            sname_520=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_514->sline(node_514->_protocol_obj);
            __dec_obj164=info->sname;
            info->sname=(char*)come_increment_ref_count(node_514->sname(node_514->_protocol_obj));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_510==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_521=node_compile(node_514,info);
                if(                !Value_521) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_518+1) {
                    come_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_522->type->mClass->mName,"void")&&come_value_522->type->mPointerNum==0) {
                        come_value2_523=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_522));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_523));
                        __dec_obj169=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_523->c_value));
                        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_526=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_522));
                        var__527=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__527) {
                            come_value3_528=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__527->mType->mClass=="void"&&var__527->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__527->mType,((struct sType*)(__right_value408=come_call_cloner(sType_clone, come_value_522->type))),come_value3_528,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj170=var__527->mType;
                            var__527->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_522->type));
                            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_522->type->mHeap) {
                                c_value_531=(char*)come_increment_ref_count(increment_ref_count_object(come_value_522->type,come_value_522->c_value,info));
                                __dec_obj171=come_value2_526->c_value;
                                come_value2_526->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__527->mCValueName,c_value_531));
                                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_531 = come_decrement_ref_count2(c_value_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj172=come_value2_526->c_value;
                                come_value2_526->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__527->mCValueName,come_value_522->c_value));
                                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_528,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_526));
                        __dec_obj173=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_526->c_value));
                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_532=node_compile(node_514,info);
                if(                !Value_532) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_519;
            __dec_obj174=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_520));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_518);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj175=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_517);
            come_call_finalizer3(__dec_obj175,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_510++;
            come_call_finalizer3(right_value_objects_517,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_520 = come_decrement_ref_count2(sname_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_511,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_509==0) {
            for(            o2_saved_536=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_539=((struct sVar*)list$1voidphp_begin((o2_saved_536)));            !list$1voidphp_end((o2_saved_536));            it_539=((struct sVar*)list$1voidphp_next((o2_saved_536)))            ){
                free_object(it_539->mType,it_539->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_536,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj176=info->match_it_var;
            __if_result__0_535=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj176,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_535,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_486;
    info->block_level=block_level_509;
    info->param_types=param_types__500;
    info->param_names=param_names__501;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_499;
    info->inhibits_output_code=inhibits_output_code_485;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result306__;
void* __right_value376 = (void*)0;
struct sVarTable* result_488;
void* __right_value388 = (void*)0;
struct map$2voidphvoidph* __dec_obj159;
struct sVarTable* __result312__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_488=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj159=result_488->mVars;
        result_488->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj159,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_488->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_488->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_488->mID=self->mID;
    }
    __result312__ = gComeFunResultObject = __result_obj__ = result_488;
    come_call_finalizer3(result_488,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_487;
    result_487=0;
    result_487+=int_get_hash_key(((int)self->mVars));
    result_487+=int_get_hash_key(((int)self->mGlobal));
    result_487+=int_get_hash_key(((int)self->mParent));
    result_487+=int_get_hash_key(((int)self->mID));
    return result_487;
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
struct map$2voidphvoidph* result_489;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1voidp* __dec_obj150;
char* it_490;
void* default_value_491;
void* __right_value381 = (void*)0;
struct sVar* it2_492;
void* __right_value387 = (void*)0;
struct map$2voidphvoidph* __result311__;
default_value_491 = (void*)0;
    if(    self==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_489=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidphp_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj150=result_489->key_list;
    result_489->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj150,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_490=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_490=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_491,0,sizeof(void*));
        it2_492=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_490,((struct sVar*)default_value_491)));
        map$2voidphvoidphp_put(result_489,it_490,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_492)));
        come_call_finalizer3(it2_492,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_489;
    come_call_finalizer3(result_489,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_493;
int it_494;
_Bool same_key_exist_495;
char* it2_496;
struct map$2voidphvoidph* __result308__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_493=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_494=hash_493;
    while((_Bool)1) {
        if(        self->item_existance[it_494]) {
            if(            come_call_equals((void*)0, self->keys[it_494], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_494], (void*)0, 0, 0, 0, 0, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_494]);
                    self->keys[it_494]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_494]);
                    self->keys[it_494]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_494], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_494]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_494]=item;
                }
                break;
            }
            it_494++;
            if(            it_494>=self->size) {
                it_494=0;
            }
            else if(            it_494==hash_493) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_494]=(_Bool)1;
            if(            1) {
                self->keys[it_494]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_494]=key;
            }
            if(            1) {
                self->items[it_494]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_494]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_495=(_Bool)0;
    for(    it2_496=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_496=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_496, key)) {
            same_key_exist_495=(_Bool)1;
        }
    }
    if(    !same_key_exist_495) {
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
struct sVar* result_498;
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
    result_498=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj155=result_498->mName;
        result_498->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj156=result_498->mCValueName;
        result_498->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj157=result_498->mType;
        result_498->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_498->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_498->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_498->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_498->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_498->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj158=result_498->mFunName;
        result_498->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_498;
    come_call_finalizer3(result_498,sVar_finalize, 0, 0, 1, 0, (void*)0);
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
unsigned int result_497;
    result_497=0;
    result_497+=int_get_hash_key(((int)self->mName));
    result_497+=int_get_hash_key(((int)self->mCValueName));
    result_497+=int_get_hash_key(((int)self->mType));
    result_497+=int_get_hash_key(((int)self->mBlockLevel));
    result_497+=int_get_hash_key(((int)self->mGlobal));
    result_497+=int_get_hash_key(((int)self->mAllocaValue));
    result_497+=int_get_hash_key(((int)self->mFunctionParam));
    result_497+=int_get_hash_key(((int)self->mNoFree));
    result_497+=int_get_hash_key(((int)self->mFunName));
    return result_497;
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
struct list_item$1voidph* it_506;
int i_507;
void* __result313__;
void* default_value_508;
void* __result314__;
default_value_508 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_506=self->head;
    i_507=0;
    while(it_506!=((void*)0)) {
        if(        position==i_507) {
            __result313__ = gComeFunResultObject = __result_obj__ = it_506->item;
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
        it_506=it_506->next;
        i_507++;
    }
    memset(&default_value_508,0,sizeof(void*));
    __result314__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_508);
    come_call_finalizer3(default_value_508, (void*)0, 0, 0, 1, 0, (void*)0);
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
struct sNode* result_512;
struct sNode* __result315__;
struct sNode* __result316__;
struct sNode* result_513;
struct sNode* __result317__;
result_512 = (void*)0;
result_513 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_512,0,sizeof(struct sNode*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_512;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->head;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_513,0,sizeof(struct sNode*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_513;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_515;
struct sNode* __result318__;
struct sNode* __result319__;
struct sNode* result_516;
struct sNode* __result320__;
result_515 = (void*)0;
result_516 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_515,0,sizeof(struct sNode*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_515;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_516,0,sizeof(struct sNode*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_516;
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
struct CVALUE* result_525;
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
    result_525=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj165=result_525->c_value;
        result_525->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_525->type;
        result_525->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_525->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_525->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj167=result_525->c_value_without_right_value_objects;
        result_525->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj168=result_525->c_value_without_cast_object_value;
        result_525->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_525;
    come_call_finalizer3(result_525,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_524;
    result_524=0;
    result_524+=int_get_hash_key(((int)self->c_value));
    result_524+=int_get_hash_key(((int)self->type));
    result_524+=int_get_hash_key(((int)self->var));
    result_524+=int_get_hash_key(((int)self->right_value_objects));
    result_524+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_524+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_524;
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
struct list_item$1voidph* it_529;
struct list_item$1voidph* it2_530;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_529=left->head;
    it2_530=right->head;
    while(it_529!=((void*)0)) {
        if(        !(voidp_operator_equals(it_529->item,it2_530->item))) {
            return (_Bool)0;
        }
        it_529=it_529->next;
        it2_530=it2_530->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_533;
struct list_item$1voidph* prev_it_534;
struct list$1voidph* __result323__;
    it_533=self->head;
    while(it_533!=((void*)0)) {
        prev_it_534=it_533;
        it_533=it_533->next;
        come_call_finalizer3(prev_it_534,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* result_537;
void* __result324__;
void* __result325__;
void* result_538;
void* __result326__;
result_537 = (void*)0;
result_538 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_537,0,sizeof(void*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_537;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_538,0,sizeof(void*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_538;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_540;
void* __result327__;
void* __result328__;
void* result_541;
void* __result329__;
result_540 = (void*)0;
result_541 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_540,0,sizeof(void*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_540;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_541,0,sizeof(void*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_541;
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
char* head_542;
_Bool dquort_543;
_Bool squort_544;
int sline_545;
int nest_546;
char* tail_547;
void* __right_value415 = (void*)0;
char* buf_548;
void* __right_value416 = (void*)0;
char* __result330__;
    head_542=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_543=(_Bool)0;
        squort_544=(_Bool)0;
        sline_545=0;
        nest_546=0;
        while(1) {
            if(            dquort_543) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_543=!dquort_543;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                }
            }
            else if(            squort_544) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_544=!squort_544;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_545);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_545=info->sline;
                info->p++;
                squort_544=!squort_544;
            }
            else if(            *info->p==34) {
                sline_545=info->sline;
                info->p++;
                dquort_543=!dquort_543;
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
                nest_546++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_546==0) {
                    break;
                }
                nest_546--;
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
    tail_547=info->p;
    buf_548=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_547-head_542+1)), "05function.c", 765, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_548,head_542,tail_547-head_542);
    buf_548[tail_547-head_542]=0;
    skip_spaces_and_lf(info);
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value416=__builtin_string(buf_548)));
    buf_548 = come_decrement_ref_count2(buf_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_549;
char* p3_550;
int i_551;
    terminated_549=(_Bool)0;
    p3_550=p;
    for(    i_551=0;    i_551<strlen(p2);    i_551++    ){
        if(        *p3_550==0) {
            terminated_549=(_Bool)1;
            break;
        }
        p3_550++;
    }
    return !terminated_549&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* asm_fun_name_552;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* result_553;
char* head_554;
int brace_num_555;
char* tail_556;
char* head_557;
int brace_num_558;
char* tail_559;
char* head_560;
char* tail_561;
char* head_562;
char* tail_563;
int len_564;
_Bool in_dquort_565;
int brace_num_566;
char* head_567;
char* tail_568;
char* head_569;
char* tail_570;
char* head_571;
char* tail_572;
char* head_573;
int nest_574;
char* tail_575;
char* head_576;
int nest_577;
char* tail_578;
char* head_579;
int nest_580;
char* tail_581;
char* head_582;
int nest_583;
char* tail_584;
char* head_585;
int nest_586;
char* tail_587;
char* head_588;
char* tail_589;
char* head_590;
char* tail_591;
char* head_592;
char* tail_593;
char* head_594;
char* tail_595;
char* head_596;
char* tail_597;
char* head_598;
int brace_num_599;
char* tail_600;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2charphcharph* __result334__;
    asm_fun_name_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_553=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_554=info->p;
            info->p+=strlen("__attribute__");
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
            buffer_append(result_553,head_554,tail_556-head_554);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_557=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_558=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_558++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_558--;
                        if(                        brace_num_558==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_559=info->p;
            buffer_append(result_553,head_557,tail_559-head_557);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_560=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_561=info->p;
            buffer_append(result_553,head_560,tail_561-head_560);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_562=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_563=info->p;
            buffer_append(result_553,head_562,tail_563-head_562);
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
                        buffer_append_char(asm_fun_name_552,*info->p);
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
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_567=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_568=info->p;
            buffer_append(result_553,head_567,tail_568-head_567);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_569=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_570=info->p;
            buffer_append(result_553,head_569,tail_570-head_569);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_571=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_572=info->p;
            buffer_append(result_553,head_571,tail_572-head_571);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_573=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_574=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_574++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_574--;
                        if(                        nest_574==0) {
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
            tail_575=info->p;
            buffer_append(result_553,head_573,tail_575-head_573);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_576=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_577=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_577++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_577--;
                        if(                        nest_577==0) {
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
            tail_578=info->p;
            buffer_append(result_553,head_576,tail_578-head_576);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_579=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_580=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_580++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_580--;
                        if(                        nest_580==0) {
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
            tail_581=info->p;
            buffer_append(result_553,head_579,tail_581-head_579);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_582=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_583=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_583++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_583--;
                        if(                        nest_583==0) {
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
            tail_584=info->p;
            buffer_append(result_553,head_582,tail_584-head_582);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_585=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_586=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_586++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_586--;
                        if(                        nest_586==0) {
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
            tail_587=info->p;
            buffer_append(result_553,head_585,tail_587-head_585);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_588=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_589=info->p;
            buffer_append(result_553,head_588,tail_589-head_588);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_590=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_591=info->p;
            buffer_append(result_553,head_590,tail_591-head_590);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_592=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_593=info->p;
            buffer_append(result_553,head_592,tail_593-head_592);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_594=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_595=info->p;
            buffer_append(result_553,head_594,tail_595-head_594);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_596=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_597=info->p;
            buffer_append(result_553,head_596,tail_597-head_596);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_598=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_599=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_599++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_599--;
                        if(                        brace_num_599==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_600=info->p;
            buffer_append(result_553,head_598,tail_600-head_598);
        }
        else {
            break;
        }
    }
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value427=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_552)),(char*)come_increment_ref_count(buffer_to_string(result_553)))));
    come_call_finalizer3(asm_fun_name_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_553,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphcharph* result_602;
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
    result_602=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj179=result_602->v1;
        result_602->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj180=result_602->v2;
        result_602->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_602;
    come_call_finalizer3(result_602,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_601;
    result_601=0;
    result_601+=int_get_hash_key(((int)self->v1));
    result_601+=int_get_hash_key(((int)self->v2));
    return result_601;
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
struct buffer* asm_fun_name_603;
void* __right_value430 = (void*)0;
char* attribute_604;
int nest_605;
int nest_606;
int nest_607;
int nest_608;
int nest_609;
void* __right_value431 = (void*)0;
char* __dec_obj185;
int len_610;
_Bool in_dquort_611;
int brace_num_612;
int brace_num_613;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct tuple2$2charphcharph* __result335__;
    asm_fun_name_603=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_604=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_605=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_605++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_605--;
                        if(                        nest_605==0) {
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
                nest_606=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_606++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_606--;
                        if(                        nest_606==0) {
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
                nest_607=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_607++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_607--;
                        if(                        nest_607==0) {
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
                nest_608=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_608++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_608--;
                        if(                        nest_608==0) {
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
                nest_609=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_609++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_609--;
                        if(                        nest_609==0) {
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
            __dec_obj185=attribute_604;
            attribute_604=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_610=0;
            if(            *info->p==40) {
                in_dquort_611=(_Bool)0;
                brace_num_612=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_611=!in_dquort_611;
                    }
                    else if(                    in_dquort_611) {
                        buffer_append_char(asm_fun_name_603,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_612++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_612--;
                        if(                        brace_num_612==0) {
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
                brace_num_613=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_613++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_613--;
                        if(                        brace_num_613==0) {
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
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value434=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_603)),(char*)come_increment_ref_count(attribute_604))));
    come_call_finalizer3(asm_fun_name_603,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_604 = come_decrement_ref_count2(attribute_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value434,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value435 = (void*)0;
char* __dec_obj186;
char* head_614;
int head_sline_615;
void* __right_value436 = (void*)0;
char* buf_616;
void* __right_value437 = (void*)0;
struct sNode* node_617;
_Bool Value_618;
    while(*info->p) {
        __dec_obj186=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_614=info->p;
        head_sline_615=info->sline;
        buf_616=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_616 = come_decrement_ref_count2(buf_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_617=(struct sNode*)come_increment_ref_count(top_level_v99(buf_616,head_614,head_sline_615,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_617!=((void*)0)) {
            Value_618=node_compile(node_617,info);
            if(            !Value_618) {
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
            buf_616 = come_decrement_ref_count2(buf_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_617) { node_617 = come_decrement_ref_count2(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_616 = come_decrement_ref_count2(buf_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_617) { node_617 = come_decrement_ref_count2(node_617, ((struct sNode*)node_617)->finalize, ((struct sNode*)node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value438 = (void*)0;
char* name_619;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sType* result_type_620;
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
struct sType* __list_values1___621[9];
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __list_values2___633[9];
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1charph* param_names_637;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_default_parametors_638;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sFun* main_fun_643;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* name_644;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* result_type_645;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __list_values3___646[1];
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1sTypeph* param_types_647;
void* __right_value515 = (void*)0;
char* __list_values4___648[1];
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1charph* param_names_649;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1charph* param_default_parametors_650;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sFun* main_fun_651;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* name_652;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* result_type_653;
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
struct sType* __list_values5___654[7];
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1sTypeph* param_types_655;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
char* __list_values6___656[7];
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_657;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charph* param_default_parametors_658;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sFun* main_fun_659;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* name_660;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type_661;
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
struct sType* __list_values7___662[5];
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sTypeph* param_types_663;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* __list_values8___664[5];
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1charph* param_names_665;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1charph* param_default_parametors_666;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sFun* main_fun_667;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* name_668;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* result_type_669;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* __list_values9___670[1];
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1sTypeph* param_types_671;
void* __right_value602 = (void*)0;
char* __list_values10___672[1];
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charph* param_names_673;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1charph* param_default_parametors_674;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* main_fun_675;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* name_676;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* result_type_677;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __list_values11___678[4];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1sTypeph* param_types_679;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* __list_values12___680[4];
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* param_names_681;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1charph* param_default_parametors_682;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sFun* main_fun_683;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
char* name_684;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* result_type_685;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* __list_values13___686[3];
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1sTypeph* param_types_687;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* __list_values14___688[3];
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* param_names_689;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_690;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sFun* main_fun_691;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
char* name_692;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sType* result_type_693;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* __list_values15___694[1];
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1sTypeph* param_types_695;
void* __right_value677 = (void*)0;
char* __list_values16___696[1];
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1charph* param_names_697;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1charph* param_default_parametors_698;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sFun* main_fun_699;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* name_700;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sType* result_type_701;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* __list_values17___702[3];
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1sTypeph* param_types_703;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
char* __list_values18___704[3];
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1charph* param_names_705;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1charph* param_default_parametors_706;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* main_fun_707;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
char* name_708;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sType* result_type_709;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct list$1voidph* param_types_710;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1charph* param_names_711;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1charph* param_default_parametors_712;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sFun* main_fun_713;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* name_714;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sType* result_type_715;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sType* __list_values19___716[4];
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct list$1sTypeph* param_types_717;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* __list_values20___718[4];
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct list$1charph* param_names_719;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1charph* param_default_parametors_720;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sFun* main_fun_721;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
char* name_722;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sType* result_type_723;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1voidph* param_types_724;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct list$1charph* param_names_725;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1charph* param_default_parametors_726;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sFun* fun_727;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
char* name_728;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sType* result_type_729;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct list$1voidph* param_types_730;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1charph* param_names_731;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1charph* param_default_parametors_732;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun_733;
void* __right_value789 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_619=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_620=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_632=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___621[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value442=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___621[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value444=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___621[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value446=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___621[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value448=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___621[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value450=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___621[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value452=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___621[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value454=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___621[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value456=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___621[8]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value458=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),9,__list_values1___621)));
        come_call_finalizer3(__right_value442,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value446,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value448,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value452,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value456,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value458,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_637=(struct list$1charph*)come_increment_ref_count((__list_values2___633[0]=(char*)come_increment_ref_count(((char*)(__right_value465=__builtin_string("count")))),
__list_values2___633[1]=(char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("size")))),
__list_values2___633[2]=(char*)come_increment_ref_count(((char*)(__right_value467=__builtin_string("sname")))),
__list_values2___633[3]=(char*)come_increment_ref_count(((char*)(__right_value468=__builtin_string("sline")))),
__list_values2___633[4]=(char*)come_increment_ref_count(((char*)(__right_value469=__builtin_string("class_name")))),
__list_values2___633[5]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("finalizer_fun")))),
__list_values2___633[6]=(char*)come_increment_ref_count(((char*)(__right_value471=__builtin_string("cloner_fun")))),
__list_values2___633[7]=(char*)come_increment_ref_count(((char*)(__right_value472=__builtin_string("get_hash_key_fun")))),
__list_values2___633[8]=(char*)come_increment_ref_count(((char*)(__right_value473=__builtin_string("equaler_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),9,__list_values2___633)));
        __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_638=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_638,((void*)0));
        list$1charphp_push_back(param_default_parametors_638,((void*)0));
        list$1charphp_push_back(param_default_parametors_638,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_638,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_638,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_643=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_619),(struct sType*)come_increment_ref_count(result_type_620),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_637),(struct list$1charph*)come_increment_ref_count(param_default_parametors_638),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equler_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_619)),(struct sFun*)come_increment_ref_count(main_fun_643));
        name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_637,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_638,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_643,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_644=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_645=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_647=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___646[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value512=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___646)));
        come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_649=(struct list$1charph*)come_increment_ref_count((__list_values4___648[0]=(char*)come_increment_ref_count(((char*)(__right_value515=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___648)));
        __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_650=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_651=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_644),(struct sType*)come_increment_ref_count(result_type_645),(struct list$1sTypeph*)come_increment_ref_count(param_types_647),(struct list$1charph*)come_increment_ref_count(param_names_649),(struct list$1charph*)come_increment_ref_count(param_default_parametors_650),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_644)),(struct sFun*)come_increment_ref_count(main_fun_651));
        name_644 = come_decrement_ref_count2(name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_647,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_651,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_652=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_653=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_655=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___654[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___654[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value533=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___654[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value535=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___654[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value537=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___654[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value539=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___654[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value541=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___654[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value543=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),7,__list_values5___654)));
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value535,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value537,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value539,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_657=(struct list$1charph*)come_increment_ref_count((__list_values6___656[0]=(char*)come_increment_ref_count(((char*)(__right_value546=__builtin_string("fun")))),
__list_values6___656[1]=(char*)come_increment_ref_count(((char*)(__right_value547=__builtin_string("mem")))),
__list_values6___656[2]=(char*)come_increment_ref_count(((char*)(__right_value548=__builtin_string("protocol_fun")))),
__list_values6___656[3]=(char*)come_increment_ref_count(((char*)(__right_value549=__builtin_string("protocol_obj")))),
__list_values6___656[4]=(char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("call_finalizer_only")))),
__list_values6___656[5]=(char*)come_increment_ref_count(((char*)(__right_value551=__builtin_string("no_decrement")))),
__list_values6___656[6]=(char*)come_increment_ref_count(((char*)(__right_value552=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),7,__list_values6___656)));
        __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_658=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_659=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_652),(struct sType*)come_increment_ref_count(result_type_653),(struct list$1sTypeph*)come_increment_ref_count(param_types_655),(struct list$1charph*)come_increment_ref_count(param_names_657),(struct list$1charph*)come_increment_ref_count(param_default_parametors_658),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_652)),(struct sFun*)come_increment_ref_count(main_fun_659));
        name_652 = come_decrement_ref_count2(name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_653,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_655,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_657,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_658,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_659,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_660=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_661=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_663=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___662[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___662[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___662[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___662[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value574=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
__list_values7___662[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value576=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),5,__list_values7___662)));
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_665=(struct list$1charph*)come_increment_ref_count((__list_values8___664[0]=(char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("mem")))),
__list_values8___664[1]=(char*)come_increment_ref_count(((char*)(__right_value580=__builtin_string("protocol_fun")))),
__list_values8___664[2]=(char*)come_increment_ref_count(((char*)(__right_value581=__builtin_string("protocol_obj")))),
__list_values8___664[3]=(char*)come_increment_ref_count(((char*)(__right_value582=__builtin_string("no_decrement")))),
__list_values8___664[4]=(char*)come_increment_ref_count(((char*)(__right_value583=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),5,__list_values8___664)));
        __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_666=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_667=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_660),(struct sType*)come_increment_ref_count(result_type_661),(struct list$1sTypeph*)come_increment_ref_count(param_types_663),(struct list$1charph*)come_increment_ref_count(param_names_665),(struct list$1charph*)come_increment_ref_count(param_default_parametors_666),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_660)),(struct sFun*)come_increment_ref_count(main_fun_667));
        name_660 = come_decrement_ref_count2(name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_663,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_666,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_667,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_668=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_669=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_671=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___670[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values9___670)));
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_673=(struct list$1charph*)come_increment_ref_count((__list_values10___672[0]=(char*)come_increment_ref_count(((char*)(__right_value602=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values10___672)));
        __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_674=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_675=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_668),(struct sType*)come_increment_ref_count(result_type_669),(struct list$1sTypeph*)come_increment_ref_count(param_types_671),(struct list$1charph*)come_increment_ref_count(param_names_673),(struct list$1charph*)come_increment_ref_count(param_default_parametors_674),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_668)),(struct sFun*)come_increment_ref_count(main_fun_675));
        name_668 = come_decrement_ref_count2(name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_671,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_675,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_676=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_677=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_679=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___678[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value618=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values11___678[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value620=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values11___678[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value622=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values11___678[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value624=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values11___678)));
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_681=(struct list$1charph*)come_increment_ref_count((__list_values12___680[0]=(char*)come_increment_ref_count(((char*)(__right_value627=__builtin_string("block")))),
__list_values12___680[1]=(char*)come_increment_ref_count(((char*)(__right_value628=__builtin_string("sname")))),
__list_values12___680[2]=(char*)come_increment_ref_count(((char*)(__right_value629=__builtin_string("sline")))),
__list_values12___680[3]=(char*)come_increment_ref_count(((char*)(__right_value630=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values12___680)));
        __right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_682=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_682,((void*)0));
        list$1charphp_push_back(param_default_parametors_682,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_682,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_682,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_683=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_676),(struct sType*)come_increment_ref_count(result_type_677),(struct list$1sTypeph*)come_increment_ref_count(param_types_679),(struct list$1charph*)come_increment_ref_count(param_names_681),(struct list$1charph*)come_increment_ref_count(param_default_parametors_682),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_676)),(struct sFun*)come_increment_ref_count(main_fun_683));
        name_676 = come_decrement_ref_count2(name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_679,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_681,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_683,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_684=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_685=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_687=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___686[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value649=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values13___686[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value651=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values13___686[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value653=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values13___686)));
        come_call_finalizer3(__right_value649,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value651,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value653,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_689=(struct list$1charph*)come_increment_ref_count((__list_values14___688[0]=(char*)come_increment_ref_count(((char*)(__right_value656=__builtin_string("b")))),
__list_values14___688[1]=(char*)come_increment_ref_count(((char*)(__right_value657=__builtin_string("c")))),
__list_values14___688[2]=(char*)come_increment_ref_count(((char*)(__right_value658=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values14___688)));
        __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_690=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_691=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_684),(struct sType*)come_increment_ref_count(result_type_685),(struct list$1sTypeph*)come_increment_ref_count(param_types_687),(struct list$1charph*)come_increment_ref_count(param_names_689),(struct list$1charph*)come_increment_ref_count(param_default_parametors_690),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_684)),(struct sFun*)come_increment_ref_count(main_fun_691));
        name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_687,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_691,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_692=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_693=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_695=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___694[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value674=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values15___694)));
        come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_697=(struct list$1charph*)come_increment_ref_count((__list_values16___696[0]=(char*)come_increment_ref_count(((char*)(__right_value677=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values16___696)));
        __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_698=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_699=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_692),(struct sType*)come_increment_ref_count(result_type_693),(struct list$1sTypeph*)come_increment_ref_count(param_types_695),(struct list$1charph*)come_increment_ref_count(param_names_697),(struct list$1charph*)come_increment_ref_count(param_default_parametors_698),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_692)),(struct sFun*)come_increment_ref_count(main_fun_699));
        name_692 = come_decrement_ref_count2(name_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_699,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_700=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_701=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_703=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___702[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value693=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___702[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value695=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___702[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value697=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values17___702)));
        come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value695,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_705=(struct list$1charph*)come_increment_ref_count((__list_values18___704[0]=(char*)come_increment_ref_count(((char*)(__right_value700=xsprintf("come_malloc")))),
__list_values18___704[1]=(char*)come_increment_ref_count(((char*)(__right_value701=xsprintf("come_debug")))),
__list_values18___704[2]=(char*)come_increment_ref_count(((char*)(__right_value702=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values18___704)));
        __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_706=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_706,((void*)0));
        main_fun_707=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_700),(struct sType*)come_increment_ref_count(result_type_701),(struct list$1sTypeph*)come_increment_ref_count(param_types_703),(struct list$1charph*)come_increment_ref_count(param_names_705),(struct list$1charph*)come_increment_ref_count(param_default_parametors_706),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_700)),(struct sFun*)come_increment_ref_count(main_fun_707));
        name_700 = come_decrement_ref_count2(name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_703,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_707,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_708=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_709=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_710=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1728, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_711=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_712=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_713=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_708),(struct sType*)come_increment_ref_count(result_type_709),(struct list$1voidph*)come_increment_ref_count(param_types_710),(struct list$1charph*)come_increment_ref_count(param_names_711),(struct list$1charph*)come_increment_ref_count(param_default_parametors_712),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_708)),(struct sFun*)come_increment_ref_count(main_fun_713));
        name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_710,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_711,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_712,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_713,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_714=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_715=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_717=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___716[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value734=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values19___716[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value736=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values19___716[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value738=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values19___716[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value740=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values19___716)));
        come_call_finalizer3(__right_value734,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value736,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value738,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value740,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_719=(struct list$1charph*)come_increment_ref_count((__list_values20___718[0]=(char*)come_increment_ref_count(((char*)(__right_value743=__builtin_string("mem")))),
__list_values20___718[1]=(char*)come_increment_ref_count(((char*)(__right_value744=__builtin_string("sname")))),
__list_values20___718[2]=(char*)come_increment_ref_count(((char*)(__right_value745=__builtin_string("sline")))),
__list_values20___718[3]=(char*)come_increment_ref_count(((char*)(__right_value746=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values20___718)));
        __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_720=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_721=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_714),(struct sType*)come_increment_ref_count(result_type_715),(struct list$1sTypeph*)come_increment_ref_count(param_types_717),(struct list$1charph*)come_increment_ref_count(param_names_719),(struct list$1charph*)come_increment_ref_count(param_default_parametors_720),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_714)),(struct sFun*)come_increment_ref_count(main_fun_721));
        name_714 = come_decrement_ref_count2(name_714, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_715,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_717,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_719,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_720,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_721,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_722=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_723=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_724=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1758, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_725=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_726=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_727=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_722),(struct sType*)come_increment_ref_count(result_type_723),(struct list$1voidph*)come_increment_ref_count(param_types_724),(struct list$1charph*)come_increment_ref_count(param_names_725),(struct list$1charph*)come_increment_ref_count(param_default_parametors_726),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_722)),(struct sFun*)come_increment_ref_count(fun_727));
        name_722 = come_decrement_ref_count2(name_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_724,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_725,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_727,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_728=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_729=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_730=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1790, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_731=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_732=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_733=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_728),(struct sType*)come_increment_ref_count(result_type_729),(struct list$1voidph*)come_increment_ref_count(param_types_730),(struct list$1charph*)come_increment_ref_count(param_names_731),(struct list$1charph*)come_increment_ref_count(param_default_parametors_732),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_728)),(struct sFun*)come_increment_ref_count(fun_733));
        name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_730,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_733,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_622;
struct list$1sTypeph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_622=0;    i_622<num_value;    i_622++    ){
        list$1sTypephp_push_back(self,values[i_622]);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value459 = (void*)0;
struct list_item$1sTypeph* litem_623;
struct sType* __dec_obj187;
void* __right_value460 = (void*)0;
struct list_item$1sTypeph* litem_624;
struct sType* __dec_obj188;
void* __right_value461 = (void*)0;
struct list_item$1sTypeph* litem_625;
struct sType* __dec_obj189;
struct list$1sTypeph* __result336__;
    if(    self->len==0) {
        litem_623=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value459=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1452, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_623->prev=((void*)0);
        litem_623->next=((void*)0);
        __dec_obj187=litem_623->item;
        litem_623->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_623;
        self->head=litem_623;
    }
    else if(    self->len==1) {
        litem_624=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value460=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1462, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_624->prev=self->head;
        litem_624->next=((void*)0);
        __dec_obj188=litem_624->item;
        litem_624->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_624;
        self->head->next=litem_624;
    }
    else {
        litem_625=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value461=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1472, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_625->prev=self->tail;
        litem_625->next=((void*)0);
        __dec_obj189=litem_625->item;
        litem_625->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_625;
        self->tail=litem_625;
    }
    self->len++;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_626;
struct list_item$1sTypeph* prev_it_627;
    it_626=self->head;
    while(it_626!=((void*)0)) {
        prev_it_627=it_626;
        it_626=it_626->next;
        come_call_finalizer3(prev_it_627,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_628;
struct list_item$1sTypeph* prev_it_629;
    it_628=self->head;
    while(it_628!=((void*)0)) {
        prev_it_629=it_628;
        it_628=it_628->next;
        come_call_finalizer3(prev_it_629,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result338__;
void* __right_value462 = (void*)0;
struct list$1sTypeph* result_631;
struct list$1sTypeph* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_631=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals));
    if(    self!=((void*)0)) {
        result_631->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_631->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_631->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_631->it=self->it;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_631;
    come_call_finalizer3(result_631,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_630;
    result_630=0;
    result_630+=int_get_hash_key(((int)self->head));
    result_630+=int_get_hash_key(((int)self->tail));
    result_630+=int_get_hash_key(((int)self->len));
    result_630+=int_get_hash_key(((int)self->it));
    return result_630;
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
int i_634;
struct list$1charph* __result340__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_634=0;    i_634<num_value;    i_634++    ){
        list$1charphp_push_back(self,values[i_634]);
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
struct list$1charph* result_636;
struct list$1charph* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_636=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals));
    if(    self!=((void*)0)) {
        result_636->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_636->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_636->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_636->it=self->it;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_635;
    result_635=0;
    result_635+=int_get_hash_key(((int)self->head));
    result_635+=int_get_hash_key(((int)self->tail));
    result_635+=int_get_hash_key(((int)self->len));
    result_635+=int_get_hash_key(((int)self->it));
    return result_635;
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
struct sFun* result_640;
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
    result_640=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj191=result_640->mName;
        result_640->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj192=result_640->mResultType;
        result_640->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj193=result_640->mParamTypes;
        result_640->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj193,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj194=result_640->mParamNames;
        result_640->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj194,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj195=result_640->mParamDefaultParametors;
        result_640->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj195,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj196=result_640->mLambdaType;
        result_640->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj199=result_640->mBlock;
        result_640->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj199,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_640->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj200=result_640->mSource;
        result_640->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj201=result_640->mSourceHead;
        result_640->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj202=result_640->mSourceHead2;
        result_640->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj203=result_640->mSourceDefer;
        result_640->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_640->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_640->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_640->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj204=result_640->mComeHeader;
        result_640->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj205=result_640->mDeclareSName;
        result_640->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_640->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_640->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj206=result_640->mAttribute;
        result_640->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj207=result_640->mFunAttribute;
        result_640->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_639;
    result_639=0;
    result_639+=int_get_hash_key(((int)self->mName));
    result_639+=int_get_hash_key(((int)self->mResultType));
    result_639+=int_get_hash_key(((int)self->mParamTypes));
    result_639+=int_get_hash_key(((int)self->mParamNames));
    result_639+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_639+=int_get_hash_key(((int)self->mLambdaType));
    result_639+=int_get_hash_key(((int)self->mBlock));
    result_639+=int_get_hash_key(((int)self->mExternal));
    result_639+=int_get_hash_key(((int)self->mVarArgs));
    result_639+=int_get_hash_key(((int)self->mSource));
    result_639+=int_get_hash_key(((int)self->mSourceHead));
    result_639+=int_get_hash_key(((int)self->mSourceHead2));
    result_639+=int_get_hash_key(((int)self->mSourceDefer));
    result_639+=int_get_hash_key(((int)self->mStatic));
    result_639+=int_get_hash_key(((int)self->mInline));
    result_639+=int_get_hash_key(((int)self->mUniq));
    result_639+=int_get_hash_key(((int)self->mGenerate));
    result_639+=int_get_hash_key(((int)self->mComeHeader));
    result_639+=int_get_hash_key(((int)self->mCloner));
    result_639+=int_get_hash_key(((int)self->mDeclareSName));
    result_639+=int_get_hash_key(((int)self->mNoResultType));
    result_639+=int_get_hash_key(((int)self->mDeclaredResultObject));
    result_639+=int_get_hash_key(((int)self->no_output_come_code2));
    result_639+=int_get_hash_key(((int)self->mAttribute));
    result_639+=int_get_hash_key(((int)self->mFunAttribute));
    return result_639;
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
struct sBlock* result_642;
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
    result_642=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone, sBlock_get_hash_key, sBlock_equals));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj197=result_642->mNodes;
        result_642->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj198=result_642->mVarTable;
        result_642->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj198,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static unsigned int sBlock_get_hash_key(struct sBlock* self){
unsigned int result_641;
    result_641=0;
    result_641+=int_get_hash_key(((int)self->mNodes));
    result_641+=int_get_hash_key(((int)self->mVarTable));
    result_641+=int_get_hash_key(((int)self->mOmitSemicolon));
    return result_641;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_734;
_Bool is_type_name_flag_735;
int sline_736;
_Bool define_struct_nobody_737;
char* p_738;
int sline_739;
void* __right_value790 = (void*)0;
char* word_740;
_Bool define_function_pointer_result_function_741;
_Bool define_variable_between_brace_742;
char* p_743;
void* __right_value791 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_744=0;
char* fun_name_745=0;
_Bool err_746=0;
void* __right_value792 = (void*)0;
char* word_747;
_Bool define_function_flag_748;
char* p_749;
void* __right_value793 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_750=0;
char* fun_name_751=0;
_Bool err_752=0;
char* word_753;
void* __right_value794 = (void*)0;
char* __dec_obj210;
void* __right_value795 = (void*)0;
char* __dec_obj211;
char* __dec_obj212;
void* __right_value796 = (void*)0;
char* __dec_obj213;
_Bool define_variable_754;
char* p_755;
void* __right_value797 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_756=0;
char* fun_name_757=0;
_Bool err_758=0;
void* __right_value798 = (void*)0;
char* word_759;
void* __right_value799 = (void*)0;
char* word_760;
char* p_761;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
char* word_762;
void* __right_value803 = (void*)0;
char* __dec_obj214;
void* __right_value804 = (void*)0;
char* word_763;
void* __right_value805 = (void*)0;
char* word_766;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* node_767;
struct sNode* __result348__;
void* __right_value808 = (void*)0;
struct sNode* __result349__;
char* header_head_768;
void* __right_value809 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_769=0;
char* fun_name_770=0;
_Bool err_771=0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1voidph* param_types_772;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1charph* param_names_773;
void* __right_value814 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_774=0;
char* param_name_775=0;
_Bool err_776=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1voidph* param_types2_781;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1charph* param_names2_782;
void* __right_value824 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_783=0;
char* param_name_784=0;
_Bool err_785=0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* header_tail_787;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sType* result_type2_788;
struct sType* __dec_obj218;
void* __right_value829 = (void*)0;
struct list$1voidph* __dec_obj219;
void* __right_value830 = (void*)0;
struct list$1charph* __dec_obj220;
_Bool var_args_789;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct buffer* header_buf_790;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct list$1charph* param_default_parametors_791;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sFun* fun_792;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sFun* fun2_793;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value850 = (void*)0;
struct sNode* __result353__;
void* __right_value851 = (void*)0;
struct sNode* node_796;
struct sNode* __result354__;
void* __right_value852 = (void*)0;
struct sNode* node_797;
struct sNode* __result355__;
void* __right_value853 = (void*)0;
struct sNode* node_798;
char* source_tail_799;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct buffer* header_800;
struct sNode* __result356__;
void* __right_value856 = (void*)0;
char* buf2_801;
void* __right_value857 = (void*)0;
struct sNode* __result357__;
    info->in_top_level=(_Bool)1;
    source_head_734=info->p;
    is_type_name_flag_735=is_type_name(buf,info);
    sline_736=info->sline;
    define_struct_nobody_737=(_Bool)0;
    {
        p_738=info->p;
        sline_739=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_740=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_737=(_Bool)1;
                }
                word_740 = come_decrement_ref_count2(word_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_739;
    }
    define_function_pointer_result_function_741=(_Bool)0;
    define_variable_between_brace_742=(_Bool)0;
    if(    is_type_name_flag_735) {
        p_743=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value791=backtrace_parse_type((_Bool)0,info)));
            result_type_744=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_745=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_746=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value791,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_741=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_747=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_747,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_742=(_Bool)1;
                            }
                        }
                        word_747 = come_decrement_ref_count2(word_747, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_745 = come_decrement_ref_count2(fun_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_736;
    }
    define_function_flag_748=(_Bool)0;
    if(    is_type_name_flag_735&&!define_function_pointer_result_function_741&&charp_operator_not_equals(buf,"__typeof__")) {
        p_749=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value793=backtrace_parse_type((_Bool)0,info)));
            result_type_750=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_751=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_752=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value793,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_751 = come_decrement_ref_count2(fun_name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_753=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj210=word_753;
                word_753=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_753,"extern")) {
                    __dec_obj211=word_753;
                    word_753=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj212=word_753;
                word_753=((void*)0);
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_753) {
                if(                is_type_name(word_753,info)) {
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
                        __dec_obj213=word_753;
                        word_753=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_753)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_735) {
                        define_function_flag_748=(_Bool)1;
                    }
                }
            }
            word_753 = come_decrement_ref_count2(word_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_749;
        info->sline=sline_736;
    }
    define_variable_754=(_Bool)1;
    if(    is_type_name_flag_735&&!define_function_pointer_result_function_741) {
        p_755=info->p;
        info->p=head;
        if(        !is_type_name_flag_735) {
            define_variable_754=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value797=backtrace_parse_type((_Bool)0,info)));
            result_type_756=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_757=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_758=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value797,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_759=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_754=(_Bool)1;
                            }
                        }
                        word_759 = come_decrement_ref_count2(word_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_760=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_760,info)&&*info->p!=40) {
                            define_variable_754=(_Bool)1;
                        }
                    }
                    word_760 = come_decrement_ref_count2(word_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_756,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_757 = come_decrement_ref_count2(fun_name_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_754=(_Bool)0;
        }
        else if(        define_variable_754) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_754=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_754=(_Bool)0;
            }
        }
        info->p=p_755;
        info->sline=sline_736;
    }
    else {
        define_variable_754=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_741) {
        p_761=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value800=parse_struct_attribute(info)));
            __right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value801=parse_word(info)));
                __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_762=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj214=word_762;
                        word_762=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_762,"extends")) {
                            define_variable_754=(_Bool)0;
                        }
                    }
                    word_762 = come_decrement_ref_count2(word_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_754=(_Bool)0;
        }
        else if(        define_variable_754) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_754=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_754=(_Bool)0;
            }
        }
        info->p=p_761;
        info->sline=sline_736;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_763=(char*)come_increment_ref_count(parse_word(info));
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
                    word_766=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_766)));
                    word_766 = come_decrement_ref_count2(word_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_767=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result348__ = gComeFunResultObject = __result_obj__ = node_767;
            if(node_767) { node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_763 = come_decrement_ref_count2(word_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result348__;
            if(node_767) { node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_763 = come_decrement_ref_count2(word_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_737) {
    }
    else if(    define_variable_between_brace_742) {
        info->p=head;
        info->sline=sline_736;
        __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=parse_global_variable(info)));
        if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    else if(    define_function_pointer_result_function_741) {
        header_head_768=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value809=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_769=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_770=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_771=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value809,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_772=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2119, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            param_names_773=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value814=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_774=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_775=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_776=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value814,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_776) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_772,(struct sType*)come_increment_ref_count(param_type_774));
                    static int num_function_pointer_result_var_name_a_780=0;
                    list$1charphp_push_back(param_names_773,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_780)));
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
                        come_call_finalizer3(param_type_774,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_775 = come_decrement_ref_count2(param_name_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_774,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_775 = come_decrement_ref_count2(param_name_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_781=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2166, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
                param_names2_782=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value824=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_783=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_784=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_785=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value824,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_785) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_781,(struct sType*)come_increment_ref_count(param_type_783));
                        static int num_function_pointer_result_var_name_b_786=0;
                        list$1charphp_push_back(param_names2_782,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_786)));
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
                            come_call_finalizer3(param_type_783,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_784 = come_decrement_ref_count2(param_name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_783,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_784 = come_decrement_ref_count2(param_name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_787=info->p;
                result_type2_788=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj218=result_type2_788->mResultType;
                result_type2_788->mResultType=(struct sType*)come_increment_ref_count(result_type_769);
                come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj219=result_type2_788->mParamTypes;
                result_type2_788->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_781));
                come_call_finalizer3(__dec_obj219,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj220=result_type2_788->mParamNames;
                result_type2_788->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_782));
                come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_788->mVarArgs=(_Bool)0;
                result_type2_788->mStatic=(_Bool)0;
                var_args_789=(_Bool)0;
                header_buf_790=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                buffer_append(header_buf_790,header_head_768,header_tail_787-header_head_768);
                buffer_append_char(header_buf_790,0);
                param_default_parametors_791=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_792=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_770)),(struct sType*)come_increment_ref_count(result_type2_788),(struct list$1voidph*)come_increment_ref_count(param_types_772),(struct list$1charph*)come_increment_ref_count(param_names_773),(struct list$1charph*)come_increment_ref_count(param_default_parametors_791),(_Bool)1,var_args_789,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_790)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_793=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value842=__builtin_string(fun_name_770)))));
                __right_value842 = come_decrement_ref_count2(__right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_793==((void*)0)||fun2_793->mExternal) {
                    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_770)),(struct sFun*)come_increment_ref_count(fun_792));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value846=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_792),info))));
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
                come_call_finalizer3(param_types2_781,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_782,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_788,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_791,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_792,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_772,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_770 = come_decrement_ref_count2(fun_name_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value846,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value850) { __right_value850 = come_decrement_ref_count2(__right_value850, ((struct sNode*)__right_value850)->finalize, ((struct sNode*)__right_value850)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result353__;
                come_call_finalizer3(param_types2_781,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_782,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_788,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_791,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_792,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_772,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_770 = come_decrement_ref_count2(fun_name_770, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_736;
        node_796=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_796;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_748) {
        info->p=head;
        info->sline=sline_736;
        node_797=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result355__ = gComeFunResultObject = __result_obj__ = node_797;
        if(node_797) { node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result355__;
        if(node_797) { node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_754) {
        info->p=head;
        info->sline=sline_736;
        node_798=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_799=info->p;
        header_800=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_800,source_head_734,source_tail_799-source_head_734);
        __result356__ = gComeFunResultObject = __result_obj__ = node_798;
        if(node_798) { node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result356__;
        if(node_798) { node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_736;
    buf2_801=(char*)come_increment_ref_count(parse_word(info));
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value857=top_level_v98(buf2_801,head,head_sline,info)));
    buf2_801 = come_decrement_ref_count2(buf2_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_764;
struct list_item$1charph* prev_it_765;
struct list$1charph* __result347__;
    it_764=self->head;
    while(it_764!=((void*)0)) {
        prev_it_765=it_764;
        it_764=it_764->next;
        come_call_finalizer3(prev_it_765,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* litem_777;
void* __dec_obj215;
void* __right_value816 = (void*)0;
struct list_item$1voidph* litem_778;
void* __dec_obj216;
void* __right_value817 = (void*)0;
struct list_item$1voidph* litem_779;
void* __dec_obj217;
struct list$1voidph* __result350__;
    if(    self->len==0) {
        litem_777=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value815=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_777->prev=((void*)0);
        litem_777->next=((void*)0);
        __dec_obj215=litem_777->item;
        litem_777->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_777;
        self->head=litem_777;
    }
    else if(    self->len==1) {
        litem_778=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value816=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_778->prev=self->head;
        litem_778->next=((void*)0);
        __dec_obj216=litem_778->item;
        litem_778->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj216,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_778;
        self->head->next=litem_778;
    }
    else {
        litem_779=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value817=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_779->prev=self->tail;
        litem_779->next=((void*)0);
        __dec_obj217=litem_779->item;
        litem_779->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj217,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_779;
        self->tail=litem_779;
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
struct sFunNode* result_795;
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
    result_795=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone, sFunNode_get_hash_key, sFunNode_equals));
    if(    self!=((void*)0)) {
        result_795->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_795->sname;
        result_795->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_795->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj222=result_795->mFun;
        result_795->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj222,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_795;
    come_call_finalizer3(result_795,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static unsigned int sFunNode_get_hash_key(struct sFunNode* self){
unsigned int result_794;
    result_794=0;
    result_794+=int_get_hash_key(((int)self->sline));
    result_794+=int_get_hash_key(((int)self->sname));
    result_794+=int_get_hash_key(((int)self->sline_real));
    result_794+=int_get_hash_key(((int)self->mFun));
    return result_794;
}

static _Bool sFunNode_equals(struct sFunNode* left, struct sFunNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->mFun,right->mFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_802;
int caller_line_803;
char* caller_sname_804;
_Bool comma_instead_of_semicolon_805;
char* last_code_806;
char* __dec_obj223;
char* last_code2_807;
char* __dec_obj224;
void* __right_value858 = (void*)0;
char* sname_top_808;
int sline_top_809;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sFun* funX_810;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct tuple2$2charphbool* __result361__;
void* __right_value865 = (void*)0;
struct sType* result_type_813;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1voidph* param_types_814;
struct list$1voidph* o2_saved_815;
struct sType* it_816;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct sType* param_type_817;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1charph* param_names_818;
void* __right_value872 = (void*)0;
struct list$1charph* param_default_parametors_819;
char* p_820;
int sline_821;
char* sname_822;
char* head_823;
struct buffer* source_824;
void* __right_value873 = (void*)0;
struct buffer* __dec_obj229;
struct sType* generics_type_saved_825;
void* __right_value874 = (void*)0;
struct sType* __dec_obj230;
struct list$1charph* method_generics_type_names_826;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct list$1charph* __dec_obj231;
struct list$1charph* o2_saved_827;
char* it_828;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1charph* __dec_obj232;
char* __dec_obj233;
void* __right_value879 = (void*)0;
struct sBlock* block_829;
struct buffer* __dec_obj234;
char* __dec_obj235;
_Bool var_args_830;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sFun* fun_831;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value889 = (void*)0;
struct sNode* node_832;
_Bool in_generics_fun_833;
_Bool Value_834;
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
    caller_fun_802=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_803=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_804=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_805=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_806=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj223=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_807=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj224=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_808=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_809=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_810=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value859=__builtin_string(fun_name)))));
    __right_value859 = come_decrement_ref_count2(__right_value859, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(    funX_810) {
        __result361__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value864=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_806 = come_decrement_ref_count2(last_code_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_807 = come_decrement_ref_count2(last_code2_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_808 = come_decrement_ref_count2(sname_top_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_810,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value864,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_type_813=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_814=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2316, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_815=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_816=((struct sType*)list$1voidphp_begin((o2_saved_815)));    !list$1voidphp_end((o2_saved_815));    it_816=((struct sType*)list$1voidphp_next((o2_saved_815)))    ){
        param_type_817=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value868=come_call_cloner(sType_clone, it_816))),generics_type,info));
        come_call_finalizer3(__right_value868,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_817->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_814,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_817)));
        come_call_finalizer3(param_type_817,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_815,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_818=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_819=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_820=info->p;
    sline_821=info->sline;
    sname_822=(char*)come_increment_ref_count(info->sname);
    head_823=info->head;
    source_824=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj229=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_825=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj230=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_826=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj231=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_827=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_828=list$1charphp_begin((o2_saved_827));    !list$1charphp_end((o2_saved_827));    it_828=list$1charphp_next((o2_saved_827))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_828)));
    }
    come_call_finalizer3(o2_saved_827,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj232=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj232,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj233=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_829=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_823;
    __dec_obj234=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_824);
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_820;
    info->sline=sline_821;
    __dec_obj235=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_822);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_813->mInline=(_Bool)0;
    result_type_813->mStatic=(_Bool)0;
    result_type_813->mUniq=(_Bool)0;
    var_args_830=generics_fun->mVarArgs;
    fun_831=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_813),(struct list$1voidph*)come_increment_ref_count(param_types_814),(struct list$1charph*)come_increment_ref_count(param_names_818),(struct list$1charph*)come_increment_ref_count(param_default_parametors_819),(_Bool)0,var_args_830,(struct sBlock*)come_increment_ref_count(block_829),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_831));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value888=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_831),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_832=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value888,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_833=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_834=node_compile(node_832,info);
    if(    !Value_834) {
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value892=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_806 = come_decrement_ref_count2(last_code_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_807 = come_decrement_ref_count2(last_code2_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_808 = come_decrement_ref_count2(sname_top_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_810,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_813,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_814,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_822 = come_decrement_ref_count2(sname_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_825,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_826,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_829,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_831,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_832) { node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value892,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_833;
    __dec_obj236=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_825);
    come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj237=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_826);
    come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_808));
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_809;
    __dec_obj239=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_806);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_807);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_802;
    info->caller_line=caller_line_803;
    info->caller_sname=caller_sname_804;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_805;
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value896=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_806 = come_decrement_ref_count2(last_code_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_807 = come_decrement_ref_count2(last_code2_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_808 = come_decrement_ref_count2(sname_top_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_810,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_813,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_814,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_822 = come_decrement_ref_count2(sname_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_825,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_826,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_829,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_831,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_832) { node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
struct tuple2$2charphbool* result_812;
void* __right_value862 = (void*)0;
char* __dec_obj226;
struct tuple2$2charphbool* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_812=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj226=result_812->v1;
        result_812->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_812->v2=self->v2;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_812;
    come_call_finalizer3(result_812,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_811;
    result_811=0;
    result_811+=int_get_hash_key(((int)self->v1));
    result_811+=int_get_hash_key(((int)self->v2));
    return result_811;
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
struct sFun* caller_fun_835;
int caller_line_836;
char* caller_sname_837;
_Bool comma_instead_of_semicolon_838;
char* last_code_839;
char* __dec_obj241;
char* last_code2_840;
char* __dec_obj242;
void* __right_value897 = (void*)0;
char* sname_top_841;
int sline_top_842;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sFun* funX_843;
_Bool __result364__;
void* __right_value900 = (void*)0;
struct sType* result_type_844;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct list$1voidph* param_types_845;
struct list$1voidph* o2_saved_846;
struct sType* it_847;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sType* param_type_848;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct list$1charph* param_names_849;
void* __right_value907 = (void*)0;
struct list$1charph* param_default_parametors_850;
char* p_851;
int sline_852;
char* sname_853;
char* head_854;
struct buffer* source_855;
void* __right_value908 = (void*)0;
struct buffer* __dec_obj243;
struct list$1charph* method_generics_type_names_856;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct list$1charph* __dec_obj244;
struct list$1charph* o2_saved_857;
char* it_858;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct list$1charph* __dec_obj245;
char* __dec_obj246;
void* __right_value913 = (void*)0;
struct sBlock* block_859;
struct buffer* __dec_obj247;
char* __dec_obj248;
_Bool generate__860;
_Bool var_args_861;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct sFun* fun_862;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value924 = (void*)0;
struct sNode* node_863;
_Bool Value_864;
void* __if_result__1_865 = (void*)0;
_Bool __result365__;
struct list$1charph* __dec_obj249;
void* __right_value925 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
char* __dec_obj252;
_Bool __result366__;
    caller_fun_835=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_836=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_837=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_838=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_839=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj241=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_840=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj242=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_841=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_842=info->sline;
    funX_843=((struct sFun*)((void*)(__right_value899=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value898=__builtin_string(fun_name)))))));
    __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value899,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    funX_843) {
        __result364__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_839 = come_decrement_ref_count2(last_code_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_840 = come_decrement_ref_count2(last_code2_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_841 = come_decrement_ref_count2(sname_top_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result364__;
    }
    result_type_844=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_845=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2431, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_846=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_847=((struct sType*)list$1voidphp_begin((o2_saved_846)));    !list$1voidphp_end((o2_saved_846));    it_847=((struct sType*)list$1voidphp_next((o2_saved_846)))    ){
        param_type_848=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value903=come_call_cloner(sType_clone, it_847))),info));
        come_call_finalizer3(__right_value903,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_848->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_845,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_848)));
        come_call_finalizer3(param_type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_846,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_849=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_850=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_851=info->p;
    sline_852=info->sline;
    sname_853=(char*)come_increment_ref_count(info->sname);
    head_854=info->head;
    source_855=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj243=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_856=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj244=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_857=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_858=list$1charphp_begin((o2_saved_857));    !list$1charphp_end((o2_saved_857));    it_858=list$1charphp_next((o2_saved_857))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_858)));
    }
    come_call_finalizer3(o2_saved_857,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj245=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj245,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj246=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_859=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_854;
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_855);
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_851;
    info->sline=sline_852;
    __dec_obj248=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_853);
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_844->mInline=(_Bool)0;
    result_type_844->mStatic=(_Bool)0;
    result_type_844->mUniq=(_Bool)0;
    generate__860=(_Bool)0;
    if(    result_type_844->mGenerate) {
        result_type_844->mGenerate=(_Bool)0;
        generate__860=(_Bool)1;
    }
    var_args_861=generics_fun->mVarArgs;
    fun_862=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_844),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_845)),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)0,var_args_861,(struct sBlock*)come_increment_ref_count(block_859),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__860,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_862));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value923=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_862),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_863=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value923,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_864=node_compile(node_863,info);
    if(    !Value_864) {
        __result365__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_839 = come_decrement_ref_count2(last_code_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_840 = come_decrement_ref_count2(last_code2_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_841 = come_decrement_ref_count2(sname_top_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_844,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_845,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_853 = come_decrement_ref_count2(sname_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_859,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_862,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_863) { node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result365__;
    }
    else {
        __if_result__1_865=(void*)(Value_864);
;
    }
    __dec_obj249=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_856);
    come_call_finalizer3(__dec_obj249,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj250=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_841));
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_842;
    __dec_obj251=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_839);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj252=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_840);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_835;
    info->caller_line=caller_line_836;
    info->caller_sname=caller_sname_837;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_838;
    __result366__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_839 = come_decrement_ref_count2(last_code_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_840 = come_decrement_ref_count2(last_code2_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_841 = come_decrement_ref_count2(sname_top_841, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_844,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_845,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_853 = come_decrement_ref_count2(sname_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_855,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_859,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_862,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_863) { node_863 = come_decrement_ref_count2(node_863, ((struct sNode*)node_863)->finalize, ((struct sNode*)node_863)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result366__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_866;
char* source_head_867;
void* __right_value926 = (void*)0;
char* attribute_868;
struct sType* result_type_869;
char* var_name_870;
_Bool constructor__871;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sType* __dec_obj253;
void* __right_value929 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_872=0;
char* var_name2_873=0;
_Bool err_874=0;
struct sType* __dec_obj254;
char* __dec_obj255;
_Bool method_definition_875;
char* p_876;
int sline_877;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct buffer* buf2_878;
char* fun_name_879;
char* base_fun_name_880;
void* __right_value932 = (void*)0;
char* __dec_obj256;
void* __right_value933 = (void*)0;
char* __dec_obj257;
void* __right_value934 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_881=0;
char* name_882=0;
_Bool err_883=0;
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
struct list$1voidph* param_types_884=0;
struct list$1charph* param_names_885=0;
struct list$1charph* param_default_parametors_886=0;
_Bool var_args_887=0;
char* header_tail_888;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct buffer* header_buf_889;
int version_890;
int n_891;
_Bool in_top_level_892;
void* __right_value944 = (void*)0;
struct sBlock* block_893;
void* __right_value945 = (void*)0;
char* fun_name_895;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sFun* fun_896;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sFun* fun2_897;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value960 = (void*)0;
struct sNode* __result369__;
void* __right_value961 = (void*)0;
char* none_generics_name_900;
void* __right_value962 = (void*)0;
char* generics_sname_901;
int generics_sline_902;
void* __right_value963 = (void*)0;
char* block_903;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sGenericsFun* fun_906;
void* __right_value981 = (void*)0;
char* fun_name3_907;
void* __right_value982 = (void*)0;
struct sNode* __result372__;
void* __right_value983 = (void*)0;
char* generics_sname_908;
int generics_sline_909;
void* __right_value984 = (void*)0;
char* block_910;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sGenericsFun* fun_911;
void* __right_value991 = (void*)0;
char* fun_name3_912;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sNode* __result373__;
char* source_tail_913;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct buffer* header_914;
void* __right_value996 = (void*)0;
char* name_915;
void* __right_value997 = (void*)0;
char* name_916;
int i_917;
void* __right_value998 = (void*)0;
struct sType* param_type_918;
void* __right_value999 = (void*)0;
char* param_name_919;
void* __right_value1000 = (void*)0;
char* default_parametor_920;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
char* impl_name_921;
void* __right_value1004 = (void*)0;
char* result_type_name_922;
void* __right_value1005 = (void*)0;
char* impl_name_923;
void* __right_value1006 = (void*)0;
char* result_type_name_924;
int i_925;
void* __right_value1007 = (void*)0;
struct sType* param_type_926;
void* __right_value1008 = (void*)0;
char* param_name_927;
void* __right_value1009 = (void*)0;
char* default_parametor_928;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sBlock* block_929;
_Bool static_fun_930;
_Bool inline_fun_931;
_Bool uniq_fun_932;
_Bool generate_fun_933;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
char* new_fun_name_934;
void* __right_value1016 = (void*)0;
char* __dec_obj278;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct sFun* fun_935;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sFun* fun2_936;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1030 = (void*)0;
struct sNode* __result374__;
void* __right_value1031 = (void*)0;
char* new_fun_name_937;
void* __right_value1032 = (void*)0;
char* __dec_obj279;
char* source_tail_938;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct buffer* header_939;
_Bool result_type_static_940;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sFun* fun_941;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sFun* fun2_942;
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
char* asm_fun_943=0;
char* fun_attribute_944=0;
void* __right_value1049 = (void*)0;
char* __dec_obj280;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct buffer* header_945;
char* source_tail_946;
_Bool result_type_static_947;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct sFun* fun_948;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct sFun* fun2_949;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1063 = (void*)0;
struct sNode* __result376__;
struct sNode* __result377__;
fun_name_879 = (void*)0;
    header_head_866=info->p;
    source_head_867=info->p;
    attribute_868=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_869=((void*)0);
    var_name_870=((void*)0);
    constructor__871=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value927=parse_word(info)));
        __right_value927 = come_decrement_ref_count2(__right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj253=result_type_869;
        result_type_869=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_869->mHeap=(_Bool)1;
        constructor__871=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value929=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_872=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_873=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_874=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value929,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj254=result_type_869;
        result_type_869=(struct sType*)come_increment_ref_count(result_type2_872);
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj255=var_name_870;
        var_name_870=(char*)come_increment_ref_count(var_name2_873);
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_874) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_872,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_873 = come_decrement_ref_count2(var_name2_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_875=(_Bool)0;
    {
        p_876=info->p;
        sline_877=info->sline;
        buf2_878=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_878,*info->p);
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
        if(        buffer_length(buf2_878)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_875=(_Bool)1;
        }
        info->p=p_876;
        info->sline=sline_877;
        come_call_finalizer3(buf2_878,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_880=((void*)0);
    if(    constructor__871) {
        __dec_obj256=base_fun_name_880;
        base_fun_name_880=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=fun_name_879;
        fun_name_879=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_880,info,(_Bool)1));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_875) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value934=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_881=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_882=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_883=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value934,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_883) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj258=base_fun_name_880;
        base_fun_name_880=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj259=fun_name_879;
        fun_name_879=(char*)come_increment_ref_count(create_method_name(obj_type_881,(_Bool)0,base_fun_name_880,info,(_Bool)1));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_881,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_882 = come_decrement_ref_count2(name_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj260=base_fun_name_880;
        base_fun_name_880=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=fun_name_879;
        fun_name_879=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_880,info,(_Bool)1));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj262=fun_name_879;
        fun_name_879=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj263=base_fun_name_880;
        base_fun_name_880=(char*)come_increment_ref_count(__builtin_string(fun_name_879));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_880,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value941=parse_params(info,constructor__871)));
    param_types_884=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_885=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_886=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_887=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value941,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_888=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_880,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_889=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(header_buf_889,header_head_866,header_tail_888-header_head_866);
    buffer_append_char(header_buf_889,0);
    version_890=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_891=0;
        while(xisdigit(*info->p)) {
            n_891=n_891*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_890=n_891;
    }
    in_top_level_892=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_880,"lambda")) {
        block_893=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_894=0;
        lambda_num_894++;
        fun_name_895=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_894));
        result_type_869->mInline=(_Bool)0;
        result_type_869->mStatic=(_Bool)0;
        result_type_869->mUniq=(_Bool)0;
        result_type_869->mGenerate=(_Bool)0;
        fun_896=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),(_Bool)0,var_args_887,(struct sBlock*)come_increment_ref_count(block_893),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_889)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_897=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value953=__builtin_string(fun_name_895)))));
        __right_value953 = come_decrement_ref_count2(__right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_897==((void*)0)||fun2_897->mExternal) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_895)),(struct sFun*)come_increment_ref_count(fun_896));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value957=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_896,info))));
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
        come_call_finalizer3(block_893,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_895 = come_decrement_ref_count2(fun_name_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_896,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_897,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value957,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value960) { __right_value960 = come_decrement_ref_count2(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(block_893,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_895 = come_decrement_ref_count2(fun_name_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_896,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_897,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_900=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_901=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_902=info->sline;
        block_903=(char*)come_increment_ref_count(skip_block(info));
        fun_906=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value976=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value977=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),var_args_887,(char*)come_increment_ref_count(block_903),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_901)),generics_sline_902));
        come_call_finalizer3(__right_value976,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value977,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_907=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_900,base_fun_name_880));
        map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_907)),(struct sGenericsFun*)come_increment_ref_count(fun_906));
        __result372__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_900 = come_decrement_ref_count2(none_generics_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_901 = come_decrement_ref_count2(generics_sname_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_903 = come_decrement_ref_count2(block_903, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_906,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_907 = come_decrement_ref_count2(fun_name3_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
        none_generics_name_900 = come_decrement_ref_count2(none_generics_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_901 = come_decrement_ref_count2(generics_sname_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_903 = come_decrement_ref_count2(block_903, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_906,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_907 = come_decrement_ref_count2(fun_name3_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_908=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_909=info->sline;
        block_910=(char*)come_increment_ref_count(skip_block(info));
        fun_911=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value986=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value987=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),var_args_887,(char*)come_increment_ref_count(block_910),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_908)),generics_sline_909));
        come_call_finalizer3(__right_value986,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value987,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_912=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_880));
        if(        method_definition_875) {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sGenericsFun*)come_increment_ref_count(fun_911));
        }
        else {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_912)),(struct sGenericsFun*)come_increment_ref_count(fun_911));
        }
        __result373__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_908 = come_decrement_ref_count2(generics_sname_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_910 = come_decrement_ref_count2(block_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_911,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_912 = come_decrement_ref_count2(fun_name3_912, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result373__;
        generics_sname_908 = come_decrement_ref_count2(generics_sname_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_910 = come_decrement_ref_count2(block_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_911,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_912 = come_decrement_ref_count2(fun_name3_912, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_913=info->p-1;
        header_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__871) {
            if(            list$1voidphp_length(param_types_884)==1) {
                name_915=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_914,"extern %s*%% %s*::initialize(%s*%% self);\n",name_915,name_915,name_915);
                name_915 = come_decrement_ref_count2(name_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_916=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_914,"extern %s*%% %s*::initialize(%s*%% self, ",name_916,name_916,name_916);
                for(                i_917=1;                i_917<list$1voidphp_length(param_types_884);                i_917++                ){
                    param_type_918=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_884,i_917));
                    param_name_919=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_885,i_917));
                    default_parametor_920=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_886,i_917));
                    if(                    default_parametor_920) {
                        buffer_append_format(header_914,"extern %s %s=%s",((char*)(__right_value1001=make_come_type_name_string_no_solved(param_type_918,(_Bool)0,info))),param_name_919,default_parametor_920);
                        __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_914,"extern %s %s",((char*)(__right_value1002=make_come_type_name_string_no_solved(param_type_918,(_Bool)0,info))),param_name_919);
                        __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_917!=list$1voidphp_length(param_types_884)-1) {
                        buffer_append_str(header_914,",");
                    }
                    come_call_finalizer3(param_type_918,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_919 = come_decrement_ref_count2(param_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_920 = come_decrement_ref_count2(default_parametor_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_914,");\n");
                name_916 = come_decrement_ref_count2(name_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_884)==1) {
                impl_name_921=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_922=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_869,(_Bool)0,info));
                buffer_append_format(header_914,"extern %s %s*::%s(%s* self);\n",result_type_name_922,impl_name_921,base_fun_name_880,impl_name_921);
                impl_name_921 = come_decrement_ref_count2(impl_name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_922 = come_decrement_ref_count2(result_type_name_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_923=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_924=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_869,(_Bool)0,info));
                buffer_append_format(header_914,"extern %s %s*::%s(%s* self, ",result_type_name_924,impl_name_923,base_fun_name_880,impl_name_923);
                for(                i_925=1;                i_925<list$1voidphp_length(param_types_884);                i_925++                ){
                    param_type_926=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_884,i_925));
                    param_name_927=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_885,i_925));
                    default_parametor_928=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_886,i_925));
                    if(                    default_parametor_928) {
                        buffer_append_format(header_914,"extern %s %s=%s",((char*)(__right_value1010=make_come_type_name_string_no_solved(param_type_926,(_Bool)0,info))),param_name_927,default_parametor_928);
                        __right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_914,"extern %s %s",((char*)(__right_value1011=make_come_type_name_string_no_solved(param_type_926,(_Bool)0,info))),param_name_927);
                        __right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_925!=list$1voidphp_length(param_types_884)-1) {
                        buffer_append_str(header_914,",");
                    }
                    come_call_finalizer3(param_type_926,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_927 = come_decrement_ref_count2(param_name_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_928 = come_decrement_ref_count2(default_parametor_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_914,");\n");
                impl_name_923 = come_decrement_ref_count2(impl_name_923, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_924 = come_decrement_ref_count2(result_type_name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_914,source_head_867,source_tail_913-source_head_867);
            buffer_append_str(header_914,";\n");
        }
        if(        !result_type_869->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value1012=buffer_to_string(header_914))));
                __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_929=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__871,(_Bool)1));
        static_fun_930=(_Bool)0;
        if(        result_type_869->mStatic) {
            result_type_869->mStatic=(_Bool)0;
            result_type_869->mUniq=(_Bool)0;
            static_fun_930=(_Bool)1;
        }
        inline_fun_931=(_Bool)0;
        if(        result_type_869->mInline) {
            result_type_869->mInline=(_Bool)0;
            result_type_869->mUniq=(_Bool)0;
            inline_fun_931=(_Bool)1;
        }
        uniq_fun_932=(_Bool)0;
        if(        result_type_869->mUniq) {
            result_type_869->mUniq=(_Bool)0;
            result_type_869->mInline=(_Bool)0;
            result_type_869->mStatic=(_Bool)0;
            uniq_fun_932=(_Bool)1;
        }
        generate_fun_933=(_Bool)0;
        if(        result_type_869->mUniq) {
            result_type_869->mUniq=(_Bool)0;
            result_type_869->mInline=(_Bool)0;
            result_type_869->mStatic=(_Bool)0;
            generate_fun_933=(_Bool)1;
        }
        if(        version_890>0) {
            new_fun_name_934=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1014=__builtin_string(fun_name_879))),version_890));
            __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj278=fun_name_879;
            fun_name_879=(char*)come_increment_ref_count(__builtin_string(new_fun_name_934));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_934 = come_decrement_ref_count2(new_fun_name_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_935=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),(_Bool)0,var_args_887,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_929)),static_fun_930,(char*)come_increment_ref_count(buffer_to_string(header_buf_889)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_931,uniq_fun_932,generate_fun_933,(char*)come_increment_ref_count(attribute_868),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sFun*)come_increment_ref_count(fun_935));
        }
        else {
            fun2_936=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1025=__builtin_string(fun_name_879)))));
            __right_value1025 = come_decrement_ref_count2(__right_value1025, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_936==((void*)0)||fun2_936->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sFun*)come_increment_ref_count(fun_935));
            }
            come_call_finalizer3(fun2_936,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1029=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_935),info))));
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
        come_call_finalizer3(header_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_929,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_935,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1029,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1030) { __right_value1030 = come_decrement_ref_count2(__right_value1030, ((struct sNode*)__right_value1030)->finalize, ((struct sNode*)__right_value1030)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(header_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_929,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_935,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_890>0) {
            new_fun_name_937=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_879,version_890));
            __dec_obj279=fun_name_879;
            fun_name_879=(char*)come_increment_ref_count(__builtin_string(new_fun_name_937));
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_937 = come_decrement_ref_count2(new_fun_name_937, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_938=info->p;
            header_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_939,source_head_867,source_tail_938-source_head_867);
            skip_spaces_and_lf(info);
            result_type_static_940=result_type_869->mStatic;
            result_type_869->mStatic=(_Bool)0;
            result_type_869->mUniq=(_Bool)0;
            result_type_869->mInline=(_Bool)0;
            result_type_869->mGenerate=(_Bool)0;
            fun_941=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),(_Bool)1,var_args_887,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_889)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_868),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_942=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1041=__builtin_string(fun_name_879)))));
            __right_value1041 = come_decrement_ref_count2(__right_value1041, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_942==((void*)0)||fun2_942->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sFun*)come_increment_ref_count(fun_941));
            }
            if(            !result_type_static_940) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1044=buffer_to_string(header_939))));
                    __right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1046=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_941),info))));
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
            come_call_finalizer3(header_939,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_941,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_942,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1046,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1047) { __right_value1047 = come_decrement_ref_count2(__right_value1047, ((struct sNode*)__right_value1047)->finalize, ((struct sNode*)__right_value1047)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
            come_call_finalizer3(header_939,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_941,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_942,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1048=parse_function_attribute(info)));
            asm_fun_943=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_944=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1048,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_943,"")) {
                __dec_obj280=fun_name_879;
                fun_name_879=(char*)come_increment_ref_count(__builtin_string(asm_fun_943));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_945=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_946=info->p;
                buffer_append(header_945,source_head_867,source_tail_946-source_head_867);
                skip_spaces_and_lf(info);
            }
            result_type_static_947=result_type_869->mStatic;
            result_type_869->mStatic=(_Bool)0;
            result_type_869->mUniq=(_Bool)0;
            result_type_869->mInline=(_Bool)0;
            result_type_869->mGenerate=(_Bool)0;
            fun_948=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sType*)come_increment_ref_count(result_type_869),(struct list$1voidph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_885),(struct list$1charph*)come_increment_ref_count(param_default_parametors_886),(_Bool)1,var_args_887,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_889)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_868),(char*)come_increment_ref_count(fun_attribute_944)));
            fun2_949=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1057=__builtin_string(fun_name_879)))));
            __right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_949==((void*)0)||fun2_949->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_879)),(struct sFun*)come_increment_ref_count(fun_948));
            }
            if(            !result_type_static_947) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1060=buffer_to_string(header_945))));
                    __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1062=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_948),info))));
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
            asm_fun_943 = come_decrement_ref_count2(asm_fun_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_944 = come_decrement_ref_count2(fun_attribute_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_945,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_948,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_949,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1062,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1063) { __right_value1063 = come_decrement_ref_count2(__right_value1063, ((struct sNode*)__right_value1063)->finalize, ((struct sNode*)__right_value1063)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            asm_fun_943 = come_decrement_ref_count2(asm_fun_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_944 = come_decrement_ref_count2(fun_attribute_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_945,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_948,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_949,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_892;
    __result377__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_868 = come_decrement_ref_count2(attribute_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_869,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_870 = come_decrement_ref_count2(var_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_879 = come_decrement_ref_count2(fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_880 = come_decrement_ref_count2(base_fun_name_880, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_884,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_889,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct sLambdaNode* result_899;
void* __right_value959 = (void*)0;
char* __dec_obj267;
struct sLambdaNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_899=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone, sLambdaNode_get_hash_key, sLambdaNode_equals));
    if(    self!=((void*)0)) {
        result_899->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_899->sname;
        result_899->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_899->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_899->mFun=self->mFun;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_899;
    come_call_finalizer3(result_899,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self){
unsigned int result_898;
    result_898=0;
    result_898+=int_get_hash_key(((int)self->sline));
    result_898+=int_get_hash_key(((int)self->sname));
    result_898+=int_get_hash_key(((int)self->sline_real));
    result_898+=int_get_hash_key(((int)self->mFun));
    return result_898;
}

static _Bool sLambdaNode_equals(struct sLambdaNode* left, struct sLambdaNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->mFun,right->mFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
void* __result_obj__=(void*)0;
struct sGenericsFun* __result370__;
void* __right_value964 = (void*)0;
struct sGenericsFun* result_905;
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
    result_905=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj268=result_905->mImplType;
        result_905->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj269=result_905->mGenericsTypeNames;
        result_905->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj269,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj270=result_905->mMethodGenericsTypeNames;
        result_905->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj270,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj271=result_905->mName;
        result_905->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj272=result_905->mResultType;
        result_905->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj273=result_905->mParamTypes;
        result_905->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj273,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj274=result_905->mParamNames;
        result_905->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj274,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj275=result_905->mParamDefaultParametors;
        result_905->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj275,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj276=result_905->mBlock;
        result_905->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_905->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_905->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_905->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj277=result_905->mGenericsSName;
        result_905->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_905->mGenericsSLine=self->mGenericsSLine;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_905;
    come_call_finalizer3(result_905,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_904;
    result_904=0;
    result_904+=int_get_hash_key(((int)self->mImplType));
    result_904+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_904+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_904+=int_get_hash_key(((int)self->mName));
    result_904+=int_get_hash_key(((int)self->mResultType));
    result_904+=int_get_hash_key(((int)self->mParamTypes));
    result_904+=int_get_hash_key(((int)self->mParamNames));
    result_904+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_904+=int_get_hash_key(((int)self->mBlock));
    result_904+=int_get_hash_key(((int)self->mSLine));
    result_904+=int_get_hash_key(((int)self->mVarArgs));
    result_904+=int_get_hash_key(((int)self->mGenerate));
    result_904+=int_get_hash_key(((int)self->mGenericsSName));
    result_904+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_904;
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
char* last_code_950;
char* __dec_obj281;
char* last_code2_951;
char* __dec_obj282;
_Bool comma_instead_of_semicolon_952;
struct sClass* current_stack_frame_struct_953;
char* real_fun_name_954;
struct sFun* finalizer_955;
void* __right_value1064 = (void*)0;
struct sType* type_before_956;
void* __right_value1065 = (void*)0;
struct sType* type2_957;
void* __right_value1066 = (void*)0;
char* fun_name2_958;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
char* none_generics_name_959;
void* __right_value1069 = (void*)0;
char* generics_fun_name_960;
void* __right_value1070 = (void*)0;
struct sGenericsFun* generics_fun_961;
void* __right_value1071 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_962=0;
_Bool err_963=0;
void* __right_value1072 = (void*)0;
char* __dec_obj283;
int i_964;
void* __right_value1073 = (void*)0;
char* new_fun_name_965;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
char* __dec_obj284;
void* __right_value1076 = (void*)0;
char* __dec_obj285;
void* __right_value1077 = (void*)0;
char* __dec_obj286;
void* __right_value1078 = (void*)0;
char* user_real_fun_name_966;
void* __right_value1079 = (void*)0;
struct sFun* user_finalizer_967;
void* __right_value1080 = (void*)0;
struct sType* type2_968;
struct sClass* klass_969;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct buffer* source_970;
void* __right_value1083 = (void*)0;
struct list$1voidph* o2_saved_972;
struct tuple2$2charphsTypeph* it_973;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_974=0;
struct sType* field_type_975=0;
char* p_978;
int sline_979;
char* sname_980;
char* head_981;
struct buffer* source3_982;
struct buffer* __dec_obj287;
void* __right_value1084 = (void*)0;
char* __dec_obj288;
void* __right_value1085 = (void*)0;
struct sBlock* block_983;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sType* result_type_984;
void* __right_value1088 = (void*)0;
char* name_985;
void* __right_value1089 = (void*)0;
struct sType* self_type_986;
struct sType* __list_values21___988[1];
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct list$1voidph* param_types_987;
void* __right_value1092 = (void*)0;
char* __list_values22___989[1];
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct list$1charph* param_names_990;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct list$1charph* param_default_parametors_991;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct buffer* header_buf_992;
void* __right_value1099 = (void*)0;
int i_993;
void* __right_value1100 = (void*)0;
struct sType* param_type_994;
void* __right_value1101 = (void*)0;
char* param_name_995;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sFun* fun2_996;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sFun* fun_997;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1114 = (void*)0;
struct sNode* node_998;
_Bool Value_999;
struct buffer* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct tuple2$2sFunpcharph* __result381__;
memset(&i_964, 0, sizeof(int));
    last_code_950=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj281=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_951=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj282=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_952=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_953=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_954=((void*)0);
    finalizer_955=((void*)0);
    type_before_956=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_957=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_957->mHeap=(_Bool)0;
    fun_name2_958=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_955=((struct sFun*)((void*)(__right_value1067=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_958))));
        come_call_finalizer3(__right_value1067,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_955==((void*)0)) {
            none_generics_name_959=(char*)come_increment_ref_count(get_none_generics_name(type2_957->mClass->mName));
            generics_fun_name_960=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_959,fun_name));
            generics_fun_961=((struct sGenericsFun*)((void*)(__right_value1070=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_960))));
            come_call_finalizer3(__right_value1070,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_961) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1071=create_generics_fun((char*)come_increment_ref_count(fun_name2_958),generics_fun_961,type,info)));
                name_962=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_963=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1071,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_963) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_955=((struct sFun*)((void*)(__right_value1072=map$2voidphvoidphp_operator_load_element(info->funcs,name_962))));
                come_call_finalizer3(__right_value1072,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_962 = come_decrement_ref_count2(name_962, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_959 = come_decrement_ref_count2(none_generics_name_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_960 = come_decrement_ref_count2(generics_fun_name_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj283=real_fun_name_954;
        real_fun_name_954=(char*)come_increment_ref_count(fun_name2_958);
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_964=128-1;        i_964>=1;        i_964--        ){
            new_fun_name_965=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_958,i_964));
            finalizer_955=((struct sFun*)((void*)(__right_value1074=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_965))));
            come_call_finalizer3(__right_value1074,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_955) {
                __dec_obj284=fun_name2_958;
                fun_name2_958=(char*)come_increment_ref_count(__builtin_string(new_fun_name_965));
                __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_965 = come_decrement_ref_count2(new_fun_name_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_965 = come_decrement_ref_count2(new_fun_name_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_955==((void*)0)) {
            finalizer_955=((struct sFun*)((void*)(__right_value1076=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_958))));
            come_call_finalizer3(__right_value1076,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj285=real_fun_name_954;
        real_fun_name_954=(char*)come_increment_ref_count(fun_name2_958);
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_955==((void*)0)) {
        type=type_before_956;
        __dec_obj286=real_fun_name_954;
        real_fun_name_954=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_966=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_967=((struct sFun*)((void*)(__right_value1079=map$2voidphvoidphp_operator_load_element(info->funcs,user_real_fun_name_966))));
        come_call_finalizer3(__right_value1079,(void*)0, 0, 1, 0, 0, __result_obj__);
        type2_968=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_968;
        klass_969=type->mClass;
        if(        type->mPointerNum>0&&klass_969->mStruct||type->mAllocaValue) {
            source_970=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_970,123);
            if(            user_finalizer_967) {
                char source2_971[1024];
                memset(&source2_971, 0, sizeof(char)                *(1024)                );
                snprintf(source2_971,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_966);
                buffer_append_str(source_970,source2_971);
            }
            klass_969=((struct sClass*)((void*)(__right_value1083=map$2voidphvoidphp_operator_load_element(info->classes,klass_969->mName))));
            come_call_finalizer3(__right_value1083,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_972=(struct list$1voidph*)come_increment_ref_count((klass_969->mFields)),it_973=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_972)));            !list$1voidphp_end((o2_saved_972));            it_973=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_972)))            ){
                multiple_assign_var12=it_973;
                name_974=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_975=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_975->mHeap) {
                    char source2_976[1024];
                    memset(&source2_976, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_976,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_974,name_974,name_974,name_974);
                    buffer_append_str(source_970,source2_976);
                }
                else if(                field_type_975->mChannel) {
                    char source2_977[1024];
                    memset(&source2_977, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_977,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_974,name_974);
                    buffer_append_str(source_970,source2_977);
                    snprintf(source2_977,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_974,name_974);
                    buffer_append_str(source_970,source2_977);
                }
                name_974 = come_decrement_ref_count2(name_974, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_975,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_972,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_970,125);
            p_978=info->p;
            sline_979=info->sline;
            sname_980=(char*)come_increment_ref_count(info->sname);
            head_981=info->head;
            source3_982=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj287=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_970);
            come_call_finalizer3(__dec_obj287,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_970->buf;
            info->head=source_970->buf;
            __dec_obj288=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_954));
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_983=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_984=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_985=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_954));
            self_type_986=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_986->mHeap=(_Bool)0;
            if(            self_type_986->mPointerNum==0) {
                self_type_986->mPointerNum=1;
            }
            if(            self_type_986->mPointerNum>1) {
                self_type_986->mPointerNum=1;
            }
            param_types_987=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___988[0]=(struct sType*)come_increment_ref_count(self_type_986),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values21___988)));
            param_names_990=(struct list$1charph*)come_increment_ref_count((__list_values22___989[0]=(char*)come_increment_ref_count(((char*)(__right_value1092=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values22___989)));
            __right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_991=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_991,((void*)0));
            header_buf_992=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(header_buf_992,((char*)(__right_value1099=make_come_type_name_string(result_type_984,info))));
            __right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_992," ");
            buffer_append_str(header_buf_992,real_fun_name_954);
            buffer_append_str(header_buf_992,"(");
            for(            i_993=0;            i_993<list$1voidphp_length(param_types_987);            i_993++            ){
                param_type_994=((struct sType*)((void*)(__right_value1100=list$1voidphp_operator_load_element(param_types_987,i_993))));
                come_call_finalizer3(__right_value1100,(void*)0, 0, 1, 0, 0, __result_obj__);
                param_name_995=((char*)(__right_value1101=list$1charphp_operator_load_element(param_names_990,i_993)));
                __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_992,((char*)(__right_value1102=make_come_type_name_string(param_type_994,info))));
                __right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_992," ");
                buffer_append_str(header_buf_992,param_name_995);
                if(                i_993!=list$1voidphp_length(param_types_987)-1) {
                    buffer_append_str(header_buf_992,",");
                }
            }
            buffer_append_str(header_buf_992,")");
            result_type_984->mStatic=(_Bool)0;
            result_type_984->mUniq=(_Bool)0;
            result_type_984->mInline=(_Bool)0;
            result_type_984->mGenerate=(_Bool)0;
            fun2_996=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1103=__builtin_string(name_985)))));
            __right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_996==((void*)0)||fun2_996->mExternal) {
                fun_997=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_985),(struct sType*)come_increment_ref_count(result_type_984),(struct list$1voidph*)come_increment_ref_count(param_types_987),(struct list$1charph*)come_increment_ref_count(param_names_990),(struct list$1charph*)come_increment_ref_count(param_default_parametors_991),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_983),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_992)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_985)),(struct sFun*)come_increment_ref_count(fun_997));
                finalizer_955=fun_997;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1113=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_997),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_998=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1113,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_999=node_compile(node_998,info);
                if(                !Value_999) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_997,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_998) { node_998 = come_decrement_ref_count2(node_998, ((struct sNode*)node_998)->finalize, ((struct sNode*)node_998)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_955=fun2_996;
            }
            __dec_obj289=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_982);
            come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_978;
            info->head=head_981;
            info->sline=sline_979;
            __dec_obj290=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_980);
            __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_970,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_980 = come_decrement_ref_count2(sname_980, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_982,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_983,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_984,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_985 = come_decrement_ref_count2(name_985, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_986,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_987,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_990,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_991,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_992,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_996,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_966 = come_decrement_ref_count2(user_real_fun_name_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_968,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_953;
    __dec_obj291=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_950);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_951);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_952;
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1118=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),finalizer_955,(char*)come_increment_ref_count(real_fun_name_954))));
    last_code_950 = come_decrement_ref_count2(last_code_950, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_951 = come_decrement_ref_count2(last_code2_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_954 = come_decrement_ref_count2(real_fun_name_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_956,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_957,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_958 = come_decrement_ref_count2(fun_name2_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct tuple2$2sFunpcharph* result_1001;
void* __right_value1116 = (void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_1001=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals));
    if(    self!=((void*)0)) {
        result_1001->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj294=result_1001->v2;
        result_1001->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_1001;
    come_call_finalizer3(result_1001,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_1000;
    result_1000=0;
    result_1000+=int_get_hash_key(((int)self->v1));
    result_1000+=int_get_hash_key(((int)self->v2));
    return result_1000;
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
char* last_code_1002;
char* __dec_obj297;
char* last_code2_1003;
char* __dec_obj298;
_Bool comma_instead_of_semicolon_1004;
struct sClass* current_stack_frame_struct_1005;
struct sFun* equaler_1006;
void* __right_value1119 = (void*)0;
char* real_fun_name_1007;
void* __right_value1120 = (void*)0;
struct sType* type2_1008;
struct sClass* klass_1009;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct buffer* source_1010;
char* name_1011;
void* __right_value1123 = (void*)0;
struct list$1voidph* o2_saved_1013;
struct tuple2$2charphsTypeph* it_1014;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1015=0;
struct sType* field_type_1016=0;
char* p_1018;
int sline_1019;
char* sname_1020;
char* head_1021;
struct buffer* source3_1022;
struct buffer* __dec_obj299;
void* __right_value1124 = (void*)0;
char* __dec_obj300;
void* __right_value1125 = (void*)0;
struct sBlock* block_1023;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sType* result_type_1024;
void* __right_value1128 = (void*)0;
char* name_1025;
void* __right_value1129 = (void*)0;
struct sType* left_type_1026;
void* __right_value1130 = (void*)0;
struct sType* right_type_1027;
struct sType* __list_values23___1029[2];
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1voidph* param_types_1028;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
char* __list_values24___1030[2];
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct list$1charph* param_names_1031;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct list$1charph* param_default_parametors_1032;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct buffer* header_buf_1033;
void* __right_value1141 = (void*)0;
int i_1034;
void* __right_value1142 = (void*)0;
struct sType* param_type_1035;
void* __right_value1143 = (void*)0;
char* param_name_1036;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct sFun* fun2_1037;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct sFun* fun_1038;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
void* __right_value1155 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1156 = (void*)0;
struct sNode* node_1039;
_Bool Value_1040;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct tuple2$2sFunpcharph* __result382__;
    last_code_1002=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj297=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1003=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj298=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1004=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1005=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1006=((void*)0);
    real_fun_name_1007=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1008=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1008;
    klass_1009=type->mClass;
    if(    type->mPointerNum>0&&!klass_1009->mNumber) {
        source_1010=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1010,123);
        if(        klass_1009->mProtocol) {
            name_1011="_protocol_obj";
            char source2_1012[1024];
            memset(&source2_1012, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1012,1024,"return left.%s.equals(right.%s);\n",name_1011,name_1011);
            buffer_append_str(source_1010,source2_1012);
        }
        else {
            klass_1009=((struct sClass*)((void*)(__right_value1123=map$2voidphvoidphp_operator_load_element(info->classes,klass_1009->mName))));
            come_call_finalizer3(__right_value1123,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1013=(struct list$1voidph*)come_increment_ref_count((klass_1009->mFields)),it_1014=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1013)));            !list$1voidphp_end((o2_saved_1013));            it_1014=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1013)))            ){
                multiple_assign_var13=it_1014;
                name_1015=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1016=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1017[1024];
                memset(&source2_1017, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1017,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1015,name_1015,name_1015);
                buffer_append_str(source_1010,source2_1017);
                name_1015 = come_decrement_ref_count2(name_1015, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1016,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1013,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1010,"return true;");
        buffer_append_char(source_1010,125);
        p_1018=info->p;
        sline_1019=info->sline;
        sname_1020=(char*)come_increment_ref_count(info->sname);
        head_1021=info->head;
        source3_1022=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1010);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1010->buf;
        info->head=source_1010->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1007));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1023=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1024=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1025=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1007));
        left_type_1026=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1026->mHeap=(_Bool)0;
        right_type_1027=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1027->mHeap=(_Bool)0;
        param_types_1028=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1029[0]=(struct sType*)come_increment_ref_count(left_type_1026),
__list_values23___1029[1]=(struct sType*)come_increment_ref_count(right_type_1027),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values23___1029)));
        param_names_1031=(struct list$1charph*)come_increment_ref_count((__list_values24___1030[0]=(char*)come_increment_ref_count(((char*)(__right_value1133=__builtin_string("left")))),
__list_values24___1030[1]=(char*)come_increment_ref_count(((char*)(__right_value1134=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values24___1030)));
        __right_value1133 = come_decrement_ref_count2(__right_value1133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1134 = come_decrement_ref_count2(__right_value1134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1032=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1032,((void*)0));
        list$1charphp_push_back(param_default_parametors_1032,((void*)0));
        header_buf_1033=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1033,((char*)(__right_value1141=make_come_type_name_string(result_type_1024,info))));
        __right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1033," ");
        buffer_append_str(header_buf_1033,real_fun_name_1007);
        buffer_append_str(header_buf_1033,"(");
        for(        i_1034=0;        i_1034<list$1voidphp_length(param_types_1028);        i_1034++        ){
            param_type_1035=((struct sType*)((void*)(__right_value1142=list$1voidphp_operator_load_element(param_types_1028,i_1034))));
            come_call_finalizer3(__right_value1142,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1036=((char*)(__right_value1143=list$1charphp_operator_load_element(param_names_1031,i_1034)));
            __right_value1143 = come_decrement_ref_count2(__right_value1143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1033,((char*)(__right_value1144=make_come_type_name_string(param_type_1035,info))));
            __right_value1144 = come_decrement_ref_count2(__right_value1144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1033," ");
            buffer_append_str(header_buf_1033,param_name_1036);
            if(            i_1034!=list$1voidphp_length(param_types_1028)-1) {
                buffer_append_str(header_buf_1033,",");
            }
        }
        buffer_append_str(header_buf_1033,")");
        result_type_1024->mStatic=(_Bool)0;
        result_type_1024->mUniq=(_Bool)0;
        result_type_1024->mInline=(_Bool)0;
        result_type_1024->mGenerate=(_Bool)0;
        fun2_1037=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1145=__builtin_string(name_1025)))));
        __right_value1145 = come_decrement_ref_count2(__right_value1145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1037==((void*)0)||fun2_1037->mExternal) {
            fun_1038=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1025),(struct sType*)come_increment_ref_count(result_type_1024),(struct list$1voidph*)come_increment_ref_count(param_types_1028),(struct list$1charph*)come_increment_ref_count(param_names_1031),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1032),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1023),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1033)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1025)),(struct sFun*)come_increment_ref_count(fun_1038));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1155=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1038),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1039=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1155,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1040=node_compile(node_1039,info);
            if(            !Value_1040) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1006=fun_1038;
            come_call_finalizer3(fun_1038,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1039) { node_1039 = come_decrement_ref_count2(node_1039, ((struct sNode*)node_1039)->finalize, ((struct sNode*)node_1039)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1006=fun2_1037;
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1022);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1018;
        info->head=head_1021;
        info->sline=sline_1019;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1020);
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1020 = come_decrement_ref_count2(sname_1020, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1022,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1023,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1024,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1025 = come_decrement_ref_count2(name_1025, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1026,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1027,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1028,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1031,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1032,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1033,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1037,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1005;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1002);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1003);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1004;
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1158=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1006,(char*)come_increment_ref_count(real_fun_name_1007))));
    last_code_1002 = come_decrement_ref_count2(last_code_1002, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1003 = come_decrement_ref_count2(last_code2_1003, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1007 = come_decrement_ref_count2(real_fun_name_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1158,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1041;
char* __dec_obj305;
char* last_code2_1042;
char* __dec_obj306;
_Bool comma_instead_of_semicolon_1043;
struct sClass* current_stack_frame_struct_1044;
struct sFun* equaler_1045;
void* __right_value1159 = (void*)0;
char* real_fun_name_1046;
void* __right_value1160 = (void*)0;
struct sType* type2_1047;
struct sClass* klass_1048;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct buffer* source_1049;
char* name_1050;
int i_1053;
void* __right_value1163 = (void*)0;
struct list$1voidph* o2_saved_1054;
struct tuple2$2charphsTypeph* it_1055;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1056=0;
struct sType* field_type_1057=0;
char* p_1061;
int sline_1062;
char* sname_1063;
char* head_1064;
struct buffer* source3_1065;
struct buffer* __dec_obj307;
void* __right_value1164 = (void*)0;
char* __dec_obj308;
void* __right_value1165 = (void*)0;
struct sBlock* block_1066;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct sType* result_type_1067;
void* __right_value1168 = (void*)0;
char* name_1068;
void* __right_value1169 = (void*)0;
struct sType* left_type_1069;
void* __right_value1170 = (void*)0;
struct sType* right_type_1070;
struct sType* __list_values25___1072[2];
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct list$1voidph* param_types_1071;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
char* __list_values26___1073[2];
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct list$1charph* param_names_1074;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct list$1charph* param_default_parametors_1075;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
struct buffer* header_buf_1076;
void* __right_value1181 = (void*)0;
int i_1077;
void* __right_value1182 = (void*)0;
struct sType* param_type_1078;
void* __right_value1183 = (void*)0;
char* param_name_1079;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct sFun* fun2_1080;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct sFun* fun_1081;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1196 = (void*)0;
struct sNode* node_1082;
_Bool Value_1083;
struct buffer* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct tuple2$2sFunpcharph* __result383__;
    last_code_1041=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1042=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1043=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1044=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1045=((void*)0);
    real_fun_name_1046=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1047=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1047;
    klass_1048=type->mClass;
    if(    type->mPointerNum>0&&!klass_1048->mNumber) {
        source_1049=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1049,123);
        if(        klass_1048->mProtocol) {
            name_1050="_protocol_obj";
            char source2_1051[1024];
            memset(&source2_1051, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1051,1024,"return left.%s !== right.%s;\n",name_1050,name_1050);
            buffer_append_str(source_1049,source2_1051);
        }
        else {
            char source2_1052[1024];
            memset(&source2_1052, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1052,1024,"return !(");
            buffer_append_str(source_1049,source2_1052);
            snprintf(source2_1052,1024,"( ");
            buffer_append_str(source_1049,source2_1052);
            i_1053=0;
            klass_1048=((struct sClass*)((void*)(__right_value1163=map$2voidphvoidphp_operator_load_element(info->classes,klass_1048->mName))));
            come_call_finalizer3(__right_value1163,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1054=(struct list$1voidph*)come_increment_ref_count((klass_1048->mFields)),it_1055=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1054)));            !list$1voidphp_end((o2_saved_1054));            it_1055=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1054)))            ){
                multiple_assign_var14=it_1055;
                name_1056=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1057=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1058[1024];
                memset(&source2_1058, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1058,1024,"(left.%s === right.%s)",name_1056,name_1056,name_1056);
                buffer_append_str(source_1049,source2_1058);
                if(                i_1053==list$1voidphp_length(klass_1048->mFields)-1) {
                    char source2_1059[1024];
                    memset(&source2_1059, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1059,1024,"));");
                    buffer_append_str(source_1049,source2_1059);
                }
                else {
                    char source2_1060[1024];
                    memset(&source2_1060, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1060,1024," && ");
                    buffer_append_str(source_1049,source2_1060);
                }
                i_1053++;
                name_1056 = come_decrement_ref_count2(name_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1057,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1054,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1049,125);
        p_1061=info->p;
        sline_1062=info->sline;
        sname_1063=(char*)come_increment_ref_count(info->sname);
        head_1064=info->head;
        source3_1065=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1049);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1049->buf;
        info->head=source_1049->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1046));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1066=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1067=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1068=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1046));
        left_type_1069=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1069->mHeap=(_Bool)0;
        right_type_1070=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1070->mHeap=(_Bool)0;
        param_types_1071=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1072[0]=(struct sType*)come_increment_ref_count(left_type_1069),
__list_values25___1072[1]=(struct sType*)come_increment_ref_count(right_type_1070),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values25___1072)));
        param_names_1074=(struct list$1charph*)come_increment_ref_count((__list_values26___1073[0]=(char*)come_increment_ref_count(((char*)(__right_value1173=__builtin_string("left")))),
__list_values26___1073[1]=(char*)come_increment_ref_count(((char*)(__right_value1174=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values26___1073)));
        __right_value1173 = come_decrement_ref_count2(__right_value1173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1174 = come_decrement_ref_count2(__right_value1174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1075=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1075,((void*)0));
        list$1charphp_push_back(param_default_parametors_1075,((void*)0));
        header_buf_1076=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1076,((char*)(__right_value1181=make_come_type_name_string(result_type_1067,info))));
        __right_value1181 = come_decrement_ref_count2(__right_value1181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1076," ");
        buffer_append_str(header_buf_1076,real_fun_name_1046);
        buffer_append_str(header_buf_1076,"(");
        for(        i_1077=0;        i_1077<list$1voidphp_length(param_types_1071);        i_1077++        ){
            param_type_1078=((struct sType*)((void*)(__right_value1182=list$1voidphp_operator_load_element(param_types_1071,i_1077))));
            come_call_finalizer3(__right_value1182,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1079=((char*)(__right_value1183=list$1charphp_operator_load_element(param_names_1074,i_1077)));
            __right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1076,((char*)(__right_value1184=make_come_type_name_string(param_type_1078,info))));
            __right_value1184 = come_decrement_ref_count2(__right_value1184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1076," ");
            buffer_append_str(header_buf_1076,param_name_1079);
            if(            i_1077!=list$1voidphp_length(param_types_1071)-1) {
                buffer_append_str(header_buf_1076,",");
            }
        }
        buffer_append_str(header_buf_1076,")");
        result_type_1067->mStatic=(_Bool)0;
        result_type_1067->mUniq=(_Bool)0;
        result_type_1067->mInline=(_Bool)0;
        result_type_1067->mGenerate=(_Bool)0;
        fun2_1080=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1185=__builtin_string(name_1068)))));
        __right_value1185 = come_decrement_ref_count2(__right_value1185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1080==((void*)0)||fun2_1080->mExternal) {
            fun_1081=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1068),(struct sType*)come_increment_ref_count(result_type_1067),(struct list$1voidph*)come_increment_ref_count(param_types_1071),(struct list$1charph*)come_increment_ref_count(param_names_1074),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1075),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1066),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1076)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1068)),(struct sFun*)come_increment_ref_count(fun_1081));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1195=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1081),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1082=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1195,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1083=node_compile(node_1082,info);
            if(            !Value_1083) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1045=fun_1081;
            come_call_finalizer3(fun_1081,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1082) { node_1082 = come_decrement_ref_count2(node_1082, ((struct sNode*)node_1082)->finalize, ((struct sNode*)node_1082)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1045=fun2_1080;
        }
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1065);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1061;
        info->head=head_1064;
        info->sline=sline_1062;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1063);
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1063 = come_decrement_ref_count2(sname_1063, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1065,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1066,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1067,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1068 = come_decrement_ref_count2(name_1068, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1069,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1070,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1071,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1074,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1075,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1076,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1080,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1044;
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1041);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1042);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1043;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1198=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1045,(char*)come_increment_ref_count(real_fun_name_1046))));
    last_code_1041 = come_decrement_ref_count2(last_code_1041, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1042 = come_decrement_ref_count2(last_code2_1042, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1046 = come_decrement_ref_count2(real_fun_name_1046, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1047,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1198,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1084;
char* __dec_obj313;
char* last_code2_1085;
char* __dec_obj314;
_Bool comma_instead_of_semicolon_1086;
struct sClass* current_stack_frame_struct_1087;
struct sFun* equaler_1088;
void* __right_value1199 = (void*)0;
char* real_fun_name_1089;
void* __right_value1200 = (void*)0;
struct sType* type2_1090;
struct sClass* klass_1091;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct buffer* source_1092;
char* name_1093;
int i_1096;
void* __right_value1203 = (void*)0;
struct list$1voidph* o2_saved_1097;
struct tuple2$2charphsTypeph* it_1098;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1099=0;
struct sType* field_type_1100=0;
char* p_1104;
int sline_1105;
char* sname_1106;
char* head_1107;
struct buffer* source3_1108;
struct buffer* __dec_obj315;
void* __right_value1204 = (void*)0;
char* __dec_obj316;
void* __right_value1205 = (void*)0;
struct sBlock* block_1109;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct sType* result_type_1110;
void* __right_value1208 = (void*)0;
char* name_1111;
void* __right_value1209 = (void*)0;
struct sType* left_type_1112;
void* __right_value1210 = (void*)0;
struct sType* right_type_1113;
struct sType* __list_values27___1115[2];
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1voidph* param_types_1114;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
char* __list_values28___1116[2];
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct list$1charph* param_names_1117;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1charph* param_default_parametors_1118;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct buffer* header_buf_1119;
void* __right_value1221 = (void*)0;
int i_1120;
void* __right_value1222 = (void*)0;
struct sType* param_type_1121;
void* __right_value1223 = (void*)0;
char* param_name_1122;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct sFun* fun2_1123;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
struct sFun* fun_1124;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1236 = (void*)0;
struct sNode* node_1125;
_Bool Value_1126;
struct buffer* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct tuple2$2sFunpcharph* __result384__;
    last_code_1084=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj313=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1085=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj314=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1086=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1087=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1088=((void*)0);
    real_fun_name_1089=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1090=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1090;
    klass_1091=type->mClass;
    if(    type->mPointerNum>0&&!klass_1091->mNumber) {
        source_1092=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1092,123);
        if(        klass_1091->mProtocol) {
            name_1093="_protocol_obj";
            char source2_1094[1024];
            memset(&source2_1094, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1094,1024,"return !left.%s.equals(right.%s);\n",name_1093,name_1093);
            buffer_append_str(source_1092,source2_1094);
        }
        else {
            char source2_1095[1024];
            memset(&source2_1095, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1095,1024,"return !(");
            buffer_append_str(source_1092,source2_1095);
            i_1096=0;
            klass_1091=((struct sClass*)((void*)(__right_value1203=map$2voidphvoidphp_operator_load_element(info->classes,klass_1091->mName))));
            come_call_finalizer3(__right_value1203,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1097=(struct list$1voidph*)come_increment_ref_count((klass_1091->mFields)),it_1098=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1097)));            !list$1voidphp_end((o2_saved_1097));            it_1098=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1097)))            ){
                multiple_assign_var15=it_1098;
                name_1099=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1100=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1101[1024];
                memset(&source2_1101, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1101,1024,"left.%s.equals(right.%s)",name_1099,name_1099);
                buffer_append_str(source_1092,source2_1101);
                if(                i_1096==list$1voidphp_length(klass_1091->mFields)-1) {
                    char source2_1102[1024];
                    memset(&source2_1102, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1102,1024,");");
                    buffer_append_str(source_1092,source2_1102);
                }
                else {
                    char source2_1103[1024];
                    memset(&source2_1103, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1103,1024," && ");
                    buffer_append_str(source_1092,source2_1103);
                }
                i_1096++;
                name_1099 = come_decrement_ref_count2(name_1099, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1100,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1097,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1092,125);
        p_1104=info->p;
        sline_1105=info->sline;
        sname_1106=(char*)come_increment_ref_count(info->sname);
        head_1107=info->head;
        source3_1108=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1092);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1092->buf;
        info->head=source_1092->buf;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1089));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1109=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1110=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1111=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1089));
        left_type_1112=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1112->mHeap=(_Bool)0;
        right_type_1113=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1113->mHeap=(_Bool)0;
        param_types_1114=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1115[0]=(struct sType*)come_increment_ref_count(left_type_1112),
__list_values27___1115[1]=(struct sType*)come_increment_ref_count(right_type_1113),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values27___1115)));
        param_names_1117=(struct list$1charph*)come_increment_ref_count((__list_values28___1116[0]=(char*)come_increment_ref_count(((char*)(__right_value1213=__builtin_string("left")))),
__list_values28___1116[1]=(char*)come_increment_ref_count(((char*)(__right_value1214=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values28___1116)));
        __right_value1213 = come_decrement_ref_count2(__right_value1213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1214 = come_decrement_ref_count2(__right_value1214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1118=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1118,((void*)0));
        list$1charphp_push_back(param_default_parametors_1118,((void*)0));
        header_buf_1119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1119,((char*)(__right_value1221=make_come_type_name_string(result_type_1110,info))));
        __right_value1221 = come_decrement_ref_count2(__right_value1221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1119," ");
        buffer_append_str(header_buf_1119,real_fun_name_1089);
        buffer_append_str(header_buf_1119,"(");
        for(        i_1120=0;        i_1120<list$1voidphp_length(param_types_1114);        i_1120++        ){
            param_type_1121=((struct sType*)((void*)(__right_value1222=list$1voidphp_operator_load_element(param_types_1114,i_1120))));
            come_call_finalizer3(__right_value1222,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1122=((char*)(__right_value1223=list$1charphp_operator_load_element(param_names_1117,i_1120)));
            __right_value1223 = come_decrement_ref_count2(__right_value1223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1119,((char*)(__right_value1224=make_come_type_name_string(param_type_1121,info))));
            __right_value1224 = come_decrement_ref_count2(__right_value1224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1119," ");
            buffer_append_str(header_buf_1119,param_name_1122);
            if(            i_1120!=list$1voidphp_length(param_types_1114)-1) {
                buffer_append_str(header_buf_1119,",");
            }
        }
        buffer_append_str(header_buf_1119,")");
        result_type_1110->mStatic=(_Bool)0;
        result_type_1110->mUniq=(_Bool)0;
        result_type_1110->mInline=(_Bool)0;
        result_type_1110->mGenerate=(_Bool)0;
        fun2_1123=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1225=__builtin_string(name_1111)))));
        __right_value1225 = come_decrement_ref_count2(__right_value1225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1123==((void*)0)||fun2_1123->mExternal) {
            fun_1124=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1111),(struct sType*)come_increment_ref_count(result_type_1110),(struct list$1voidph*)come_increment_ref_count(param_types_1114),(struct list$1charph*)come_increment_ref_count(param_names_1117),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1118),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1109),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1119)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1111)),(struct sFun*)come_increment_ref_count(fun_1124));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1235=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1124),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1125=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1235,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1126=node_compile(node_1125,info);
            if(            !Value_1126) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1088=fun_1124;
            come_call_finalizer3(fun_1124,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1125) { node_1125 = come_decrement_ref_count2(node_1125, ((struct sNode*)node_1125)->finalize, ((struct sNode*)node_1125)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1088=fun2_1123;
        }
        __dec_obj317=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1108);
        come_call_finalizer3(__dec_obj317,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1104;
        info->head=head_1107;
        info->sline=sline_1105;
        __dec_obj318=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1106);
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1092,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1106 = come_decrement_ref_count2(sname_1106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1108,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1109,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1110,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1111 = come_decrement_ref_count2(name_1111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1112,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1114,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1117,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1118,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1119,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1123,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1087;
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1084);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1085);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1086;
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1238=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1088,(char*)come_increment_ref_count(real_fun_name_1089))));
    last_code_1084 = come_decrement_ref_count2(last_code_1084, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1085 = come_decrement_ref_count2(last_code2_1085, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1089 = come_decrement_ref_count2(real_fun_name_1089, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1090,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1238,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1127;
char* __dec_obj321;
char* last_code2_1128;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_1129;
struct sClass* current_stack_frame_struct_1130;
struct sFun* equaler_1131;
void* __right_value1239 = (void*)0;
char* real_fun_name_1132;
void* __right_value1240 = (void*)0;
struct sType* type2_1133;
struct sClass* klass_1134;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct buffer* source_1135;
char* name_1136;
void* __right_value1243 = (void*)0;
struct list$1voidph* o2_saved_1139;
struct tuple2$2charphsTypeph* it_1140;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1141=0;
struct sType* field_type_1142=0;
char* p_1144;
int sline_1145;
char* sname_1146;
char* head_1147;
struct buffer* source3_1148;
struct buffer* __dec_obj323;
void* __right_value1244 = (void*)0;
char* __dec_obj324;
void* __right_value1245 = (void*)0;
struct sBlock* block_1149;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct sType* result_type_1150;
void* __right_value1248 = (void*)0;
char* name_1151;
void* __right_value1249 = (void*)0;
struct sType* left_type_1152;
void* __right_value1250 = (void*)0;
struct sType* right_type_1153;
struct sType* __list_values29___1155[2];
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct list$1voidph* param_types_1154;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
char* __list_values30___1156[2];
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct list$1charph* param_names_1157;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct list$1charph* param_default_parametors_1158;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct buffer* header_buf_1159;
void* __right_value1261 = (void*)0;
int i_1160;
void* __right_value1262 = (void*)0;
struct sType* param_type_1161;
void* __right_value1263 = (void*)0;
char* param_name_1162;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
struct sFun* fun2_1163;
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sFun* fun_1164;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1276 = (void*)0;
struct sNode* node_1165;
_Bool Value_1166;
struct buffer* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
char* __dec_obj328;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct tuple2$2sFunpcharph* __result385__;
    last_code_1127=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1128=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1129=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1130=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1131=((void*)0);
    real_fun_name_1132=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1133=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1133;
    klass_1134=type->mClass;
    if(    type->mPointerNum>0&&!klass_1134->mNumber) {
        source_1135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1135,123);
        if(        klass_1134->mProtocol) {
            name_1136="_protocol_obj";
            char source2_1137[1024];
            memset(&source2_1137, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1137,1024,"return left.%s === right.%s;\n",name_1136,name_1136);
            buffer_append_str(source_1135,source2_1137);
        }
        else {
            char source2_1138[1024];
            memset(&source2_1138, 0, sizeof(char)            *(1024)            );
            klass_1134=((struct sClass*)((void*)(__right_value1243=map$2voidphvoidphp_operator_load_element(info->classes,klass_1134->mName))));
            come_call_finalizer3(__right_value1243,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1139=(struct list$1voidph*)come_increment_ref_count((klass_1134->mFields)),it_1140=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1139)));            !list$1voidphp_end((o2_saved_1139));            it_1140=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1139)))            ){
                multiple_assign_var16=it_1140;
                name_1141=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1142=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1143[1024];
                memset(&source2_1143, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1143,1024,"if(left.%s !== right.%s) { return false; }\n",name_1141,name_1141,name_1141);
                buffer_append_str(source_1135,source2_1143);
                name_1141 = come_decrement_ref_count2(name_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1139,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1135,"return true;\n");
        buffer_append_char(source_1135,125);
        p_1144=info->p;
        sline_1145=info->sline;
        sname_1146=(char*)come_increment_ref_count(info->sname);
        head_1147=info->head;
        source3_1148=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj323=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1135);
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1135->buf;
        info->head=source_1135->buf;
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1132));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1149=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1150=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1151=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1132));
        left_type_1152=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1152->mHeap=(_Bool)0;
        right_type_1153=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1153->mHeap=(_Bool)0;
        param_types_1154=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1155[0]=(struct sType*)come_increment_ref_count(left_type_1152),
__list_values29___1155[1]=(struct sType*)come_increment_ref_count(right_type_1153),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values29___1155)));
        param_names_1157=(struct list$1charph*)come_increment_ref_count((__list_values30___1156[0]=(char*)come_increment_ref_count(((char*)(__right_value1253=__builtin_string("left")))),
__list_values30___1156[1]=(char*)come_increment_ref_count(((char*)(__right_value1254=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values30___1156)));
        __right_value1253 = come_decrement_ref_count2(__right_value1253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1254 = come_decrement_ref_count2(__right_value1254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1158=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1158,((void*)0));
        list$1charphp_push_back(param_default_parametors_1158,((void*)0));
        header_buf_1159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1159,((char*)(__right_value1261=make_come_type_name_string(result_type_1150,info))));
        __right_value1261 = come_decrement_ref_count2(__right_value1261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1159," ");
        buffer_append_str(header_buf_1159,real_fun_name_1132);
        buffer_append_str(header_buf_1159,"(");
        for(        i_1160=0;        i_1160<list$1voidphp_length(param_types_1154);        i_1160++        ){
            param_type_1161=((struct sType*)((void*)(__right_value1262=list$1voidphp_operator_load_element(param_types_1154,i_1160))));
            come_call_finalizer3(__right_value1262,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1162=((char*)(__right_value1263=list$1charphp_operator_load_element(param_names_1157,i_1160)));
            __right_value1263 = come_decrement_ref_count2(__right_value1263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1159,((char*)(__right_value1264=make_come_type_name_string(param_type_1161,info))));
            __right_value1264 = come_decrement_ref_count2(__right_value1264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1159," ");
            buffer_append_str(header_buf_1159,param_name_1162);
            if(            i_1160!=list$1voidphp_length(param_types_1154)-1) {
                buffer_append_str(header_buf_1159,",");
            }
        }
        buffer_append_str(header_buf_1159,")");
        result_type_1150->mStatic=(_Bool)0;
        result_type_1150->mUniq=(_Bool)0;
        result_type_1150->mInline=(_Bool)0;
        result_type_1150->mGenerate=(_Bool)0;
        fun2_1163=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1265=__builtin_string(name_1151)))));
        __right_value1265 = come_decrement_ref_count2(__right_value1265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1163==((void*)0)||fun2_1163->mExternal) {
            fun_1164=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1151),(struct sType*)come_increment_ref_count(result_type_1150),(struct list$1voidph*)come_increment_ref_count(param_types_1154),(struct list$1charph*)come_increment_ref_count(param_names_1157),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1158),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1149),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1159)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1151)),(struct sFun*)come_increment_ref_count(fun_1164));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1275=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1164),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1165=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1275,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1166=node_compile(node_1165,info);
            if(            !Value_1166) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1131=fun_1164;
            come_call_finalizer3(fun_1164,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1165) { node_1165 = come_decrement_ref_count2(node_1165, ((struct sNode*)node_1165)->finalize, ((struct sNode*)node_1165)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1131=fun2_1163;
        }
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1148);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1144;
        info->head=head_1147;
        info->sline=sline_1145;
        __dec_obj326=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1146);
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1135,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1146 = come_decrement_ref_count2(sname_1146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1148,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1149,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1150,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1151 = come_decrement_ref_count2(name_1151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1152,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1154,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1157,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1158,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1163,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1130;
    __dec_obj327=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1127);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj328=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1128);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1129;
    __result385__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1278=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1131,(char*)come_increment_ref_count(real_fun_name_1132))));
    last_code_1127 = come_decrement_ref_count2(last_code_1127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1128 = come_decrement_ref_count2(last_code2_1128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1132 = come_decrement_ref_count2(real_fun_name_1132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1278,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
struct tuple2$2sFunpcharph* __result386__;
char* last_code_1167;
char* __dec_obj329;
char* last_code2_1168;
char* __dec_obj330;
_Bool comma_instead_of_semicolon_1169;
struct sClass* current_stack_frame_struct_1170;
struct sFun* cloner_1171;
void* __right_value1281 = (void*)0;
char* real_fun_name_1172;
void* __right_value1282 = (void*)0;
struct sType* type2_1173;
struct sClass* klass_1174;
char* fun_name2_1175;
void* __right_value1283 = (void*)0;
char* none_generics_name_1176;
void* __right_value1284 = (void*)0;
struct sType* obj_type_1177;
void* __right_value1285 = (void*)0;
char* __dec_obj331;
void* __right_value1286 = (void*)0;
char* fun_name3_1178;
void* __right_value1287 = (void*)0;
struct sGenericsFun* generics_fun_1179;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1180=0;
_Bool err_1181=0;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct tuple2$2sFunpcharph* __result387__;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
char* __dec_obj332;
void* __right_value1294 = (void*)0;
char* __dec_obj333;
int i_1182;
void* __right_value1295 = (void*)0;
char* new_fun_name_1183;
void* __right_value1296 = (void*)0;
void* __right_value1297 = (void*)0;
char* __dec_obj334;
void* __right_value1298 = (void*)0;
char* __dec_obj335;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
struct buffer* source_1184;
void* __right_value1301 = (void*)0;
char* name_1185;
void* __right_value1302 = (void*)0;
struct list$1voidph* o2_saved_1187;
struct tuple2$2charphsTypeph* it_1188;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1189=0;
struct sType* field_type_1190=0;
void* __right_value1303 = (void*)0;
struct list$1voidph* o2_saved_1193;
struct tuple2$2charphsTypeph* it_1194;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1195=0;
struct sType* field_type_1196=0;
char* p_1200;
int sline_1201;
char* sname_1202;
struct buffer* source3_1203;
char* head_1204;
struct buffer* __dec_obj336;
void* __right_value1304 = (void*)0;
char* __dec_obj337;
void* __right_value1305 = (void*)0;
struct sBlock* block_1205;
void* __right_value1306 = (void*)0;
struct sType* result_type_1206;
void* __right_value1307 = (void*)0;
char* name_1207;
void* __right_value1308 = (void*)0;
struct sType* self_type_1208;
struct sType* __list_values31___1210[1];
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct list$1voidph* param_types_1209;
void* __right_value1311 = (void*)0;
char* __list_values32___1211[1];
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct list$1charph* param_names_1212;
void* __right_value1314 = (void*)0;
void* __right_value1315 = (void*)0;
struct list$1charph* param_default_parametors_1213;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
struct buffer* header_buf_1214;
void* __right_value1318 = (void*)0;
int i_1215;
void* __right_value1319 = (void*)0;
struct sType* param_type_1216;
void* __right_value1320 = (void*)0;
char* param_name_1217;
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
void* __right_value1323 = (void*)0;
struct sFun* fun2_1218;
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
struct sFun* fun_1219;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1333 = (void*)0;
struct sNode* node_1220;
_Bool Value_1221;
char* __dec_obj338;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
struct tuple2$2sFunpcharph* __result388__;
fun_name2_1175 = (void*)0;
memset(&i_1182, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1280=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1280,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    last_code_1167=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj329=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1168=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj330=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1169=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1170=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1171=((void*)0);
    real_fun_name_1172=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1173=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1173;
    klass_1174=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1176=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1177=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj331=fun_name2_1175;
        fun_name2_1175=(char*)come_increment_ref_count(create_method_name(obj_type_1177,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1178=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1176,fun_name));
        generics_fun_1179=((struct sGenericsFun*)((void*)(__right_value1287=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_1178,((void*)0)))));
        come_call_finalizer3(__right_value1287,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1179) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1289=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1175)),generics_fun_1179,obj_type_1177,info)));
            name_1180=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1181=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1289,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1181) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result387__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1291=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1180 = come_decrement_ref_count2(name_1180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1176 = come_decrement_ref_count2(none_generics_name_1176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1178 = come_decrement_ref_count2(fun_name3_1178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1167 = come_decrement_ref_count2(last_code_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1168 = come_decrement_ref_count2(last_code2_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1172 = come_decrement_ref_count2(real_fun_name_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1173,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1175 = come_decrement_ref_count2(fun_name2_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1291,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result387__;
                }
            }
            cloner_1171=((struct sFun*)((void*)(__right_value1292=map$2voidphvoidphp_operator_load_element(info->funcs,name_1180))));
            come_call_finalizer3(__right_value1292,(void*)0, 0, 1, 0, 0, __result_obj__);
            name_1180 = come_decrement_ref_count2(name_1180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1171=((struct sFun*)((void*)(__right_value1293=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1175))));
            come_call_finalizer3(__right_value1293,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj332=real_fun_name_1172;
        real_fun_name_1172=(char*)come_increment_ref_count(fun_name2_1175);
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1176 = come_decrement_ref_count2(none_generics_name_1176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1178 = come_decrement_ref_count2(fun_name3_1178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj333=fun_name2_1175;
        fun_name2_1175=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1182=128-1;        i_1182>=1;        i_1182--        ){
            new_fun_name_1183=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1175,i_1182));
            cloner_1171=((struct sFun*)((void*)(__right_value1296=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1183))));
            come_call_finalizer3(__right_value1296,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1171) {
                __dec_obj334=fun_name2_1175;
                fun_name2_1175=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1183));
                __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1183 = come_decrement_ref_count2(new_fun_name_1183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1183 = come_decrement_ref_count2(new_fun_name_1183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1171==((void*)0)) {
            cloner_1171=((struct sFun*)((void*)(__right_value1298=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1175))));
            come_call_finalizer3(__right_value1298,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj335=real_fun_name_1172;
        real_fun_name_1172=(char*)come_increment_ref_count(fun_name2_1175);
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1171==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1184,"{\n");
        buffer_append_str(source_1184,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1184,"var result = new %s;\n",((char*)(__right_value1301=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1301 = come_decrement_ref_count2(__right_value1301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1174->mProtocol) {
            name_1185="_protocol_obj";
            char source2_1186[1024];
            memset(&source2_1186, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1186,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1184,source2_1186);
            klass_1174=((struct sClass*)((void*)(__right_value1302=map$2voidphvoidphp_operator_load_element(info->classes,klass_1174->mName))));
            come_call_finalizer3(__right_value1302,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1187=(struct list$1voidph*)come_increment_ref_count((klass_1174->mFields)),it_1188=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1187)));            !list$1voidphp_end((o2_saved_1187));            it_1188=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1187)))            ){
                multiple_assign_var18=it_1188;
                name_1189=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1190=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1189,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1190->mArrayNum)>0) {
                    char source2_1191[1024];
                    memset(&source2_1191, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1191,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1189,name_1189,name_1189);
                    buffer_append_str(source_1184,source2_1191);
                }
                else {
                    char source2_1192[1024];
                    memset(&source2_1192, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1192,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1189,name_1189);
                    buffer_append_str(source_1184,source2_1192);
                }
                name_1189 = come_decrement_ref_count2(name_1189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1190,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1187,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1174=((struct sClass*)((void*)(__right_value1303=map$2voidphvoidphp_operator_load_element(info->classes,klass_1174->mName))));
            come_call_finalizer3(__right_value1303,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1193=(struct list$1voidph*)come_increment_ref_count((klass_1174->mFields)),it_1194=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1193)));            !list$1voidphp_end((o2_saved_1193));            it_1194=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1193)))            ){
                multiple_assign_var19=it_1194;
                name_1195=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1196=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1196->mHeap) {
                    char source2_1197[1024];
                    memset(&source2_1197, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1197,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1195,name_1195,name_1195);
                    buffer_append_str(source_1184,source2_1197);
                }
                else if(                list$1sNodephp_length(field_type_1196->mArrayNum)>0) {
                    char source2_1198[1024];
                    memset(&source2_1198, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1198,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1195,name_1195,name_1195);
                    buffer_append_str(source_1184,source2_1198);
                }
                else {
                    char source2_1199[1024];
                    memset(&source2_1199, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1199,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1195,name_1195);
                    buffer_append_str(source_1184,source2_1199);
                }
                name_1195 = come_decrement_ref_count2(name_1195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1196,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1193,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1184,"return result;");
        buffer_append_char(source_1184,125);
        p_1200=info->p;
        sline_1201=info->sline;
        sname_1202=(char*)come_increment_ref_count(info->sname);
        source3_1203=(struct buffer*)come_increment_ref_count(info->source);
        head_1204=info->head;
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1184);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1172));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1205=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1206=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1207=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1172));
        self_type_1208=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1208->mHeap=(_Bool)0;
        param_types_1209=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1210[0]=(struct sType*)come_increment_ref_count(self_type_1208),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values31___1210)));
        param_names_1212=(struct list$1charph*)come_increment_ref_count((__list_values32___1211[0]=(char*)come_increment_ref_count(((char*)(__right_value1311=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values32___1211)));
        __right_value1311 = come_decrement_ref_count2(__right_value1311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1213=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1213,((void*)0));
        header_buf_1214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1214,((char*)(__right_value1318=make_come_type_name_string(result_type_1206,info))));
        __right_value1318 = come_decrement_ref_count2(__right_value1318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1214," ");
        buffer_append_str(header_buf_1214,real_fun_name_1172);
        buffer_append_str(header_buf_1214,"(");
        for(        i_1215=0;        i_1215<list$1voidphp_length(param_types_1209);        i_1215++        ){
            param_type_1216=((struct sType*)((void*)(__right_value1319=list$1voidphp_operator_load_element(param_types_1209,i_1215))));
            come_call_finalizer3(__right_value1319,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1217=((char*)(__right_value1320=list$1charphp_operator_load_element(param_names_1212,i_1215)));
            __right_value1320 = come_decrement_ref_count2(__right_value1320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1214,((char*)(__right_value1321=make_come_type_name_string(param_type_1216,info))));
            __right_value1321 = come_decrement_ref_count2(__right_value1321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1214," ");
            buffer_append_str(header_buf_1214,param_name_1217);
            if(            i_1215!=list$1voidphp_length(param_types_1209)-1) {
                buffer_append_str(header_buf_1214,",");
            }
        }
        buffer_append_str(header_buf_1214,")");
        result_type_1206->mStatic=(_Bool)0;
        result_type_1206->mUniq=(_Bool)0;
        result_type_1206->mInline=(_Bool)0;
        result_type_1206->mGenerate=(_Bool)0;
        fun2_1218=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1322=__builtin_string(name_1207)))));
        __right_value1322 = come_decrement_ref_count2(__right_value1322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1218==((void*)0)||fun2_1218->mExternal) {
            fun_1219=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1207),(struct sType*)come_increment_ref_count(result_type_1206),(struct list$1voidph*)come_increment_ref_count(param_types_1209),(struct list$1charph*)come_increment_ref_count(param_names_1212),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1213),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1205),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1214)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1219->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1207)),(struct sFun*)come_increment_ref_count(fun_1219));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1332=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1219),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1220=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1332,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1221=node_compile(node_1220,info);
            if(            !Value_1221) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1171=fun_1219;
            come_call_finalizer3(fun_1219,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1220) { node_1220 = come_decrement_ref_count2(node_1220, ((struct sNode*)node_1220)->finalize, ((struct sNode*)node_1220)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1171=fun2_1218;
        }
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1202);
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1201;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1203);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1200;
        info->head=head_1204;
        info->sline=sline_1201;
        come_call_finalizer3(source_1184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1202 = come_decrement_ref_count2(sname_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1203,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1205,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1206,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1207 = come_decrement_ref_count2(name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1209,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1212,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1213,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1218,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1170;
    __dec_obj340=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1167);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj341=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1168);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1169;
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1335=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1171,(char*)come_increment_ref_count(real_fun_name_1172))));
    last_code_1167 = come_decrement_ref_count2(last_code_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1168 = come_decrement_ref_count2(last_code2_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1172 = come_decrement_ref_count2(real_fun_name_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1173,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1175 = come_decrement_ref_count2(fun_name2_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1335,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1222;
char* __dec_obj342;
char* last_code2_1223;
char* __dec_obj343;
_Bool comma_instead_of_semicolon_1224;
struct sClass* current_stack_frame_struct_1225;
struct sFun* cloner_1226;
void* __right_value1336 = (void*)0;
char* real_fun_name_1227;
void* __right_value1337 = (void*)0;
struct sType* type2_1228;
struct sClass* klass_1229;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct buffer* source_1230;
int i_1231;
void* __right_value1340 = (void*)0;
struct list$1voidph* o2_saved_1232;
struct tuple2$2charphsTypeph* it_1233;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1234=0;
struct sType* field_type_1235=0;
char* p_1238;
int sline_1239;
char* sname_1240;
struct buffer* source3_1241;
char* head_1242;
struct buffer* __dec_obj344;
void* __right_value1341 = (void*)0;
char* __dec_obj345;
void* __right_value1342 = (void*)0;
struct sBlock* block_1243;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct sType* result_type_1244;
void* __right_value1345 = (void*)0;
char* name_1245;
void* __right_value1346 = (void*)0;
struct sType* self_type_1246;
struct sType* __list_values33___1248[1];
void* __right_value1347 = (void*)0;
void* __right_value1348 = (void*)0;
struct list$1voidph* param_types_1247;
void* __right_value1349 = (void*)0;
char* __list_values34___1249[1];
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct list$1charph* param_names_1250;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
struct list$1charph* param_default_parametors_1251;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
struct buffer* header_buf_1252;
void* __right_value1356 = (void*)0;
int i_1253;
void* __right_value1357 = (void*)0;
struct sType* param_type_1254;
void* __right_value1358 = (void*)0;
char* param_name_1255;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
struct sFun* fun2_1256;
void* __right_value1362 = (void*)0;
void* __right_value1363 = (void*)0;
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
void* __right_value1366 = (void*)0;
void* __right_value1367 = (void*)0;
struct sFun* fun_1257;
void* __right_value1368 = (void*)0;
void* __right_value1369 = (void*)0;
void* __right_value1370 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1371 = (void*)0;
struct sNode* node_1258;
_Bool Value_1259;
char* __dec_obj346;
struct buffer* __dec_obj347;
char* __dec_obj348;
char* __dec_obj349;
void* __right_value1372 = (void*)0;
void* __right_value1373 = (void*)0;
struct tuple2$2sFunpcharph* __result389__;
    last_code_1222=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj342=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1223=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj343=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1224=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1225=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1226=((void*)0);
    real_fun_name_1227=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1228=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1228;
    klass_1229=type->mClass;
    if(    type->mPointerNum>0&&!klass_1229->mNumber) {
        source_1230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1230,"{\n");
        buffer_append_str(source_1230,"var result = new buffer();\n");
        buffer_append_format(source_1230,"result.append_str(\"%s {\");\n",klass_1229->mName);
        i_1231=0;
        klass_1229=((struct sClass*)((void*)(__right_value1340=map$2voidphvoidphp_operator_load_element(info->classes,klass_1229->mName))));
        come_call_finalizer3(__right_value1340,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1232=(struct list$1voidph*)come_increment_ref_count((klass_1229->mFields)),it_1233=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1232)));        !list$1voidphp_end((o2_saved_1232));        it_1233=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1232)))        ){
            multiple_assign_var20=it_1233;
            name_1234=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1235=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1231==list$1voidphp_length(klass_1229->mFields)-1) {
                char source2_1236[1024];
                memset(&source2_1236, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1236,1024,"result.append_str(\"%s:\");\n",name_1234);
                buffer_append_str(source_1230,source2_1236);
                snprintf(source2_1236,1024,"result.append_str(self.%s.to_string());\n",name_1234);
                buffer_append_str(source_1230,source2_1236);
            }
            else {
                char source2_1237[1024];
                memset(&source2_1237, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1237,1024,"result.append_str(\"%s:\");\n",name_1234);
                buffer_append_str(source_1230,source2_1237);
                snprintf(source2_1237,1024,"result.append_str(self.%s.to_string());\n",name_1234);
                buffer_append_str(source_1230,source2_1237);
                snprintf(source2_1237,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1230,source2_1237);
            }
            i_1231++;
            name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1232,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1230,"result.append_str(\"}\");\n");
        buffer_append_format(source_1230,"return result.to_string();\n");
        buffer_append_char(source_1230,125);
        p_1238=info->p;
        sline_1239=info->sline;
        sname_1240=(char*)come_increment_ref_count(info->sname);
        source3_1241=(struct buffer*)come_increment_ref_count(info->source);
        head_1242=info->head;
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1230);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1227));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1243=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1244=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1244->mHeap=(_Bool)1;
        name_1245=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1227));
        self_type_1246=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1246->mHeap=(_Bool)0;
        param_types_1247=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1248[0]=(struct sType*)come_increment_ref_count(self_type_1246),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values33___1248)));
        param_names_1250=(struct list$1charph*)come_increment_ref_count((__list_values34___1249[0]=(char*)come_increment_ref_count(((char*)(__right_value1349=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values34___1249)));
        __right_value1349 = come_decrement_ref_count2(__right_value1349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1251=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1251,((void*)0));
        header_buf_1252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1252,((char*)(__right_value1356=make_come_type_name_string(result_type_1244,info))));
        __right_value1356 = come_decrement_ref_count2(__right_value1356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1252," ");
        buffer_append_str(header_buf_1252,real_fun_name_1227);
        buffer_append_str(header_buf_1252,"(");
        for(        i_1253=0;        i_1253<list$1voidphp_length(param_types_1247);        i_1253++        ){
            param_type_1254=((struct sType*)((void*)(__right_value1357=list$1voidphp_operator_load_element(param_types_1247,i_1253))));
            come_call_finalizer3(__right_value1357,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1255=((char*)(__right_value1358=list$1charphp_operator_load_element(param_names_1250,i_1253)));
            __right_value1358 = come_decrement_ref_count2(__right_value1358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1252,((char*)(__right_value1359=make_come_type_name_string(param_type_1254,info))));
            __right_value1359 = come_decrement_ref_count2(__right_value1359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1252," ");
            buffer_append_str(header_buf_1252,param_name_1255);
            if(            i_1253!=list$1voidphp_length(param_types_1247)-1) {
                buffer_append_str(header_buf_1252,",");
            }
        }
        buffer_append_str(header_buf_1252,")");
        result_type_1244->mStatic=(_Bool)0;
        result_type_1244->mUniq=(_Bool)0;
        result_type_1244->mInline=(_Bool)0;
        result_type_1244->mGenerate=(_Bool)0;
        fun2_1256=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1360=__builtin_string(name_1245)))));
        __right_value1360 = come_decrement_ref_count2(__right_value1360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1256==((void*)0)||fun2_1256->mExternal) {
            fun_1257=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1245),(struct sType*)come_increment_ref_count(result_type_1244),(struct list$1voidph*)come_increment_ref_count(param_types_1247),(struct list$1charph*)come_increment_ref_count(param_names_1250),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1251),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1243),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1252)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1257->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1245)),(struct sFun*)come_increment_ref_count(fun_1257));
            cloner_1226=fun_1257;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1370=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1257),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1258=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1370,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1259=node_compile(node_1258,info);
            if(            !Value_1259) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1257,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1258) { node_1258 = come_decrement_ref_count2(node_1258, ((struct sNode*)node_1258)->finalize, ((struct sNode*)node_1258)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1226=fun2_1256;
        }
        __dec_obj346=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1240);
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1239;
        __dec_obj347=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1241);
        come_call_finalizer3(__dec_obj347,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1238;
        info->head=head_1242;
        info->sline=sline_1239;
        come_call_finalizer3(source_1230,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1240 = come_decrement_ref_count2(sname_1240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1241,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1243,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1245 = come_decrement_ref_count2(name_1245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1246,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1247,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1250,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1251,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1252,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1256,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1225;
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1222);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1223);
    __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1224;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1373=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1226,(char*)come_increment_ref_count(real_fun_name_1227))));
    last_code_1222 = come_decrement_ref_count2(last_code_1222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1223 = come_decrement_ref_count2(last_code2_1223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1227 = come_decrement_ref_count2(real_fun_name_1227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1228,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1373,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1307;
char* __dec_obj360;
char* last_code2_1308;
char* __dec_obj361;
_Bool comma_instead_of_semicolon_1309;
struct sClass* current_stack_frame_struct_1310;
struct sFun* get_hash_key_fun_1311;
void* __right_value1424 = (void*)0;
char* real_fun_name_1312;
void* __right_value1425 = (void*)0;
struct sType* type2_1313;
struct sClass* klass_1314;
void* __right_value1426 = (void*)0;
void* __right_value1427 = (void*)0;
char* none_generics_name_1315;
void* __right_value1428 = (void*)0;
char* generics_fun_name_1316;
void* __right_value1429 = (void*)0;
struct sGenericsFun* generics_fun_1317;
void* __right_value1430 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1318=0;
_Bool err_1319=0;
void* __right_value1431 = (void*)0;
int i_1320;
void* __right_value1432 = (void*)0;
char* new_fun_name_1321;
void* __right_value1433 = (void*)0;
void* __right_value1434 = (void*)0;
char* __dec_obj362;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct buffer* source_1322;
int i_1323;
void* __right_value1438 = (void*)0;
struct list$1voidph* o2_saved_1324;
struct tuple2$2charphsTypeph* it_1325;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1326=0;
struct sType* field_type_1327=0;
char* p_1329;
int sline_1330;
char* sname_1331;
struct buffer* source3_1332;
char* head_1333;
struct buffer* __dec_obj363;
void* __right_value1439 = (void*)0;
char* __dec_obj364;
void* __right_value1440 = (void*)0;
struct sBlock* block_1334;
void* __right_value1441 = (void*)0;
void* __right_value1442 = (void*)0;
struct sType* result_type_1335;
void* __right_value1443 = (void*)0;
char* name_1336;
void* __right_value1444 = (void*)0;
struct sType* self_type_1337;
struct sType* __list_values37___1339[1];
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
struct list$1voidph* param_types_1338;
void* __right_value1447 = (void*)0;
char* __list_values38___1340[1];
void* __right_value1448 = (void*)0;
void* __right_value1449 = (void*)0;
struct list$1charph* param_names_1341;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
struct list$1charph* param_default_parametors_1342;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
struct buffer* header_buf_1343;
void* __right_value1454 = (void*)0;
int i_1344;
void* __right_value1455 = (void*)0;
struct sType* param_type_1345;
void* __right_value1456 = (void*)0;
char* param_name_1346;
void* __right_value1457 = (void*)0;
void* __right_value1458 = (void*)0;
void* __right_value1459 = (void*)0;
struct sFun* fun2_1347;
void* __right_value1460 = (void*)0;
void* __right_value1461 = (void*)0;
void* __right_value1462 = (void*)0;
void* __right_value1463 = (void*)0;
void* __right_value1464 = (void*)0;
void* __right_value1465 = (void*)0;
struct sFun* fun_1348;
void* __right_value1466 = (void*)0;
void* __right_value1467 = (void*)0;
void* __right_value1468 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1469 = (void*)0;
struct sNode* node_1349;
_Bool Value_1350;
char* __dec_obj365;
struct buffer* __dec_obj366;
char* __dec_obj367;
char* __dec_obj368;
void* __right_value1470 = (void*)0;
void* __right_value1471 = (void*)0;
struct tuple2$2sFunpcharph* __result391__;
memset(&i_1320, 0, sizeof(int));
    last_code_1307=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1308=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1309=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1310=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1311=((void*)0);
    real_fun_name_1312=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1313=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1313;
    klass_1314=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1311=((struct sFun*)((void*)(__right_value1426=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1312))));
        come_call_finalizer3(__right_value1426,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1311==((void*)0)) {
            none_generics_name_1315=(char*)come_increment_ref_count(get_none_generics_name(type2_1313->mClass->mName));
            generics_fun_name_1316=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1315,fun_name));
            generics_fun_1317=((struct sGenericsFun*)((void*)(__right_value1429=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_1316))));
            come_call_finalizer3(__right_value1429,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1317) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1430=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1312),generics_fun_1317,type,info)));
                name_1318=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1319=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1430,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1319) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1311=((struct sFun*)((void*)(__right_value1431=map$2voidphvoidphp_operator_load_element(info->funcs,name_1318))));
                come_call_finalizer3(__right_value1431,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_1318 = come_decrement_ref_count2(name_1318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1315 = come_decrement_ref_count2(none_generics_name_1315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1316 = come_decrement_ref_count2(generics_fun_name_1316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1320=128-1;        i_1320>=1;        i_1320--        ){
            new_fun_name_1321=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1312,i_1320));
            get_hash_key_fun_1311=((struct sFun*)((void*)(__right_value1433=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1321))));
            come_call_finalizer3(__right_value1433,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1311) {
                __dec_obj362=real_fun_name_1312;
                real_fun_name_1312=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1321));
                __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1321 = come_decrement_ref_count2(new_fun_name_1321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1321 = come_decrement_ref_count2(new_fun_name_1321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1311==((void*)0)) {
            get_hash_key_fun_1311=((struct sFun*)((void*)(__right_value1435=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1312))));
            come_call_finalizer3(__right_value1435,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1311==((void*)0)&&type->mPointerNum>0&&!klass_1314->mNumber&&!klass_1314->mProtocol) {
        source_1322=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1322,"{\n");
        buffer_append_str(source_1322,"unsigned int result = 0;\n");
        i_1323=0;
        klass_1314=((struct sClass*)((void*)(__right_value1438=map$2voidphvoidphp_operator_load_element(info->classes,klass_1314->mName))));
        come_call_finalizer3(__right_value1438,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1324=(struct list$1voidph*)come_increment_ref_count((klass_1314->mFields)),it_1325=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1324)));        !list$1voidphp_end((o2_saved_1324));        it_1325=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1324)))        ){
            multiple_assign_var24=it_1325;
            name_1326=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1327=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1328[1024];
            memset(&source2_1328, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1328,1024,"result += ((int)self.%s).get_hash_key();\n",name_1326);
            buffer_append_str(source_1322,source2_1328);
            i_1323++;
            name_1326 = come_decrement_ref_count2(name_1326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1327,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1324,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1322,"return result;\n");
        buffer_append_char(source_1322,125);
        p_1329=info->p;
        sline_1330=info->sline;
        sname_1331=(char*)come_increment_ref_count(info->sname);
        source3_1332=(struct buffer*)come_increment_ref_count(info->source);
        head_1333=info->head;
        __dec_obj363=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1322);
        come_call_finalizer3(__dec_obj363,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1312));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1334=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1335=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1335->mUnsigned=(_Bool)1;
        name_1336=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1312));
        self_type_1337=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1337->mHeap=(_Bool)0;
        param_types_1338=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1339[0]=(struct sType*)come_increment_ref_count(self_type_1337),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values37___1339)));
        param_names_1341=(struct list$1charph*)come_increment_ref_count((__list_values38___1340[0]=(char*)come_increment_ref_count(((char*)(__right_value1447=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values38___1340)));
        __right_value1447 = come_decrement_ref_count2(__right_value1447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1342=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1342,((void*)0));
        header_buf_1343=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(header_buf_1343,((char*)(__right_value1454=make_come_type_name_string(result_type_1335,info))));
        __right_value1454 = come_decrement_ref_count2(__right_value1454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1343," ");
        buffer_append_str(header_buf_1343,real_fun_name_1312);
        buffer_append_str(header_buf_1343,"(");
        for(        i_1344=0;        i_1344<list$1voidphp_length(param_types_1338);        i_1344++        ){
            param_type_1345=((struct sType*)((void*)(__right_value1455=list$1voidphp_operator_load_element(param_types_1338,i_1344))));
            come_call_finalizer3(__right_value1455,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1346=((char*)(__right_value1456=list$1charphp_operator_load_element(param_names_1341,i_1344)));
            __right_value1456 = come_decrement_ref_count2(__right_value1456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1343,((char*)(__right_value1457=make_come_type_name_string(param_type_1345,info))));
            __right_value1457 = come_decrement_ref_count2(__right_value1457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1343," ");
            buffer_append_str(header_buf_1343,param_name_1346);
            if(            i_1344!=list$1voidphp_length(param_types_1338)-1) {
                buffer_append_str(header_buf_1343,",");
            }
        }
        buffer_append_str(header_buf_1343,")");
        result_type_1335->mStatic=(_Bool)0;
        result_type_1335->mUniq=(_Bool)0;
        result_type_1335->mInline=(_Bool)0;
        result_type_1335->mGenerate=(_Bool)0;
        fun2_1347=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1458=__builtin_string(name_1336)))));
        __right_value1458 = come_decrement_ref_count2(__right_value1458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1347==((void*)0)||fun2_1347->mExternal) {
            fun_1348=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1336),(struct sType*)come_increment_ref_count(result_type_1335),(struct list$1voidph*)come_increment_ref_count(param_types_1338),(struct list$1charph*)come_increment_ref_count(param_names_1341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1342),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1334),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1343)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1348->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1336)),(struct sFun*)come_increment_ref_count(fun_1348));
            get_hash_key_fun_1311=fun_1348;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1468=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1348),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1349=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1468,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1350=node_compile(node_1349,info);
            if(            !Value_1350) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1348,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1349) { node_1349 = come_decrement_ref_count2(node_1349, ((struct sNode*)node_1349)->finalize, ((struct sNode*)node_1349)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1311=fun2_1347;
        }
        __dec_obj365=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1331);
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1330;
        __dec_obj366=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1332);
        come_call_finalizer3(__dec_obj366,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1329;
        info->head=head_1333;
        info->sline=sline_1330;
        come_call_finalizer3(source_1322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1331 = come_decrement_ref_count2(sname_1331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1334,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1335,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1336 = come_decrement_ref_count2(name_1336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1337,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1338,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1347,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1310;
    __dec_obj367=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1307);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj368=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1308);
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1309;
    __result391__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1471=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),get_hash_key_fun_1311,(char*)come_increment_ref_count(real_fun_name_1312))));
    last_code_1307 = come_decrement_ref_count2(last_code_1307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1308 = come_decrement_ref_count2(last_code2_1308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1312 = come_decrement_ref_count2(real_fun_name_1312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1313,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1471,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

