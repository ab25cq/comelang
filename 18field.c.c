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
    struct sType* mChannelType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mAllocaValue;
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
    _Bool mGlobal;
    _Bool mAllocaValue;
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
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
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

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
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
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2intcharph
{
    int v1;
    char* v2;
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

struct tuple2$2boolcharph
{
    _Bool v1;
    char* v2;
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

struct tuple3$3charphsFunpsGenericsFunp
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
char* basename();
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
struct tuple2$2intcharph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
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
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
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
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple3$3charphsFunpsGenericsFunp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self);
static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_clone(struct tuple3$3charphsFunpsGenericsFunp* self);
static unsigned int tuple3$3charphsFunpsGenericsFunp_get_hash_key(struct tuple3$3charphsFunpsGenericsFunp* self);
static _Bool tuple3$3charphsFunpsGenericsFunp_equals(struct tuple3$3charphsFunpsGenericsFunp* left, struct tuple3$3charphsFunpsGenericsFunp* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
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
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
            (self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct tuple3$3charphsFunpsGenericsFunp* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* fun_name2_317;
struct sFun* operator_fun_318;
struct sGenericsFun* generics_fun_319;
void* __right_value252 = (void*)0;
char* none_generics_name_320;
void* __right_value253 = (void*)0;
struct sType* obj_type_321;
void* __right_value254 = (void*)0;
char* __dec_obj31;
void* __right_value255 = (void*)0;
char* fun_name3_322;
void* __right_value256 = (void*)0;
_Bool generics_any_child_325;
void* __right_value292 = (void*)0;
struct sType* no_solved_type_326;
struct sType* __dec_obj73;
struct list$1voidph* o2_saved_362;
struct sType* it_365;
struct list$1voidph* o2_saved_368;
struct sType* it_369;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* type2_370;
void* __right_value295 = (void*)0;
struct sType* type_before_371;
void* __right_value296 = (void*)0;
char* __dec_obj74;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_372=0;
_Bool err_373=0;
void* __right_value299 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_374=0;
char* Err_375=0;
void* __right_value300 = (void*)0;
char* __dec_obj77;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var3 = (void*)0;
char* name_379=0;
_Bool err_380=0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj78;
int i_381;
void* __right_value306 = (void*)0;
char* new_fun_name_382;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj79;
void* __right_value309 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* __result270__;
memset(&i_381, 0, sizeof(int));
    fun_name2_317=((void*)0);
    operator_fun_318=((void*)0);
    generics_fun_319=((void*)0);
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_320=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_321=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj31=fun_name2_317;
        fun_name2_317=(char*)come_increment_ref_count(create_method_name(obj_type_321,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_322=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_320,fun_name));
        generics_fun_319=((struct sGenericsFun*)((void*)(__right_value256=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_322,((void*)0)))));
        come_call_finalizer3(__right_value256,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        generics_fun_319) {
            generics_any_child_325=(_Bool)0;
            no_solved_type_326=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj73=no_solved_type_326;
                no_solved_type_326=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_362=(struct list$1voidph*)come_increment_ref_count((no_solved_type_326->mGenericsTypes)),it_365=((struct sType*)list$1voidphp_begin((o2_saved_362)));                !list$1voidphp_end((o2_saved_362));                it_365=((struct sType*)list$1voidphp_next((o2_saved_362)))                ){
                    if(                    it_365->mAnyOriginalType) {
                        generics_any_child_325=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_362,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            for(            o2_saved_368=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_369=((struct sType*)list$1voidphp_begin((o2_saved_368)));            !list$1voidphp_end((o2_saved_368));            it_369=((struct sType*)list$1voidphp_next((o2_saved_368)))            ){
                if(                it_369->mAnyOriginalType) {
                    generics_any_child_325=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_368,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            generics_fun_319->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_325)) {
                type2_370=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type))));
                type_before_371=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
                __dec_obj74=fun_name2_317;
                fun_name2_317=(char*)come_increment_ref_count(create_method_name(type2_370,(_Bool)0,fun_name,info,(_Bool)1));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value298=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_317)),generics_fun_319,type2_370,info)));
                name_372=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                err_373=multiple_assign_var1->v2;
                come_call_finalizer3(__right_value298,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_373) {
                    multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value299=err_msg(info,"%s not found",fun_name3_322)));
                    come_exception_var_c1_374=multiple_assign_var2->v1;
                    Err_375=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    ((Err_375)?(puts(Err_375),exit(0)):(0));
                    come_call_finalizer3(__right_value299,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(1);
                    (Err_375 = come_decrement_ref_count2(Err_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                operator_fun_318=((struct sFun*)((void*)(__right_value300=map$2voidphvoidphp_operator_load_element(info->funcs,name_372))));
                come_call_finalizer3(__right_value300,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                __dec_obj77=fun_name2_317;
                fun_name2_317=(char*)come_increment_ref_count(name_372);
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                type=type_before_371;
                come_call_finalizer3(type2_370,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_372 = come_decrement_ref_count2(name_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var3=((struct tuple2$2charphbool*)(__right_value302=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_317)),generics_fun_319,obj_type_321,info)));
                name_379=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                err_380=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value302,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_380) {
                    exit(1);
                }
                operator_fun_318=((struct sFun*)((void*)(__right_value303=map$2voidphvoidphp_operator_load_element(info->funcs,name_379))));
                come_call_finalizer3(__right_value303,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                (name_379 = come_decrement_ref_count2(name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(no_solved_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            operator_fun_318=((struct sFun*)((void*)(__right_value304=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_317))));
            come_call_finalizer3(__right_value304,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        (none_generics_name_320 = come_decrement_ref_count2(none_generics_name_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_322 = come_decrement_ref_count2(fun_name3_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj78=fun_name2_317;
        fun_name2_317=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_381=128-1;        i_381>=1;        i_381--        ){
            new_fun_name_382=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_317,i_381));
            operator_fun_318=((struct sFun*)((void*)(__right_value307=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_382))));
            come_call_finalizer3(__right_value307,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            operator_fun_318) {
                __dec_obj79=fun_name2_317;
                fun_name2_317=(char*)come_increment_ref_count(__builtin_string(new_fun_name_382));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_382 = come_decrement_ref_count2(new_fun_name_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_382 = come_decrement_ref_count2(new_fun_name_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_318==((void*)0)) {
            operator_fun_318=((struct sFun*)((void*)(__right_value309=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_317))));
            come_call_finalizer3(__right_value309,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value315=tuple3$3charphsFunpsGenericsFunp_initialize((struct tuple3$3charphsFunpsGenericsFunp**)come_increment_ref_count((struct tuple3$3charphsFunpsGenericsFunp*)come_calloc(1, sizeof(struct tuple3$3charphsFunpsGenericsFunp)*(1), "18field.c", 93, "struct tuple3$3charphsFunpsGenericsFunp", tuple3$3charphsFunpsGenericsFunp_finalize, tuple3$3charphsFunpsGenericsFunp_clone, tuple3$3charphsFunpsGenericsFunp_get_hash_key, tuple3$3charphsFunpsGenericsFunp_equals)),(char*)come_increment_ref_count(fun_name2_317),operator_fun_318,generics_fun_319)));
    (fun_name2_317 = come_decrement_ref_count2(fun_name2_317, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value315,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_323;
unsigned int it_324;
void* __result230__;
void* __result231__;
void* __result232__;
void* __result233__;
    hash_323=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_324=hash_323;
    while((_Bool)1) {
        if(        self->item_existance[it_324]) {
            if(            come_call_equals((void*)0, self->keys[it_324], key)) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_324];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_324++;
            if(            it_324>=self->size) {
                it_324=0;
            }
            else if(            it_324==hash_323) {
                __result231__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result234__;
void* __right_value257 = (void*)0;
struct sType* result_344;
void* __right_value258 = (void*)0;
struct sType* __dec_obj49;
void* __right_value259 = (void*)0;
struct sType* __dec_obj50;
void* __right_value260 = (void*)0;
struct sType* __dec_obj51;
void* __right_value261 = (void*)0;
struct sType* __dec_obj52;
void* __right_value268 = (void*)0;
struct list$1voidph* __dec_obj56;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj60;
void* __right_value277 = (void*)0;
struct list$1voidph* __dec_obj61;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj65;
void* __right_value285 = (void*)0;
struct sType* __dec_obj66;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj67;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj68;
void* __right_value288 = (void*)0;
char* __dec_obj69;
void* __right_value289 = (void*)0;
char* __dec_obj70;
void* __right_value290 = (void*)0;
char* __dec_obj71;
void* __right_value291 = (void*)0;
char* __dec_obj72;
struct sType* __result248__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_344=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_344->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj49=result_344->mNoSolvedGenericsType;
        result_344->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj50=result_344->mOriginalLoadVarType;
        result_344->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj51=result_344->mAnyOriginalType;
        result_344->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj52=result_344->mChannelType;
        result_344->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj56=result_344->mGenericsTypes;
        result_344->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj56,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj60=result_344->mArrayNum;
        result_344->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj60,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj61=result_344->mParamTypes;
        result_344->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj65=result_344->mParamNames;
        result_344->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj65,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj66=result_344->mResultType;
        result_344->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_344->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_344->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_344->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_344->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_344->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_344->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_344->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_344->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_344->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_344->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_344->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_344->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_344->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_344->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_344->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_344->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_344->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_344->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_344->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj67=result_344->mSizeNum;
        result_344->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj68=result_344->mAlignas;
        result_344->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_344->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_344->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_344->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_344->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_344->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj69=result_344->mOriginalTypeName;
        result_344->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_344->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_344->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_344->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_344->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj70=result_344->mAsmName;
        result_344->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_344->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_344->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_344->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_344->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_344->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj71=result_344->mTupleName;
        result_344->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj72=result_344->mAttribute;
        result_344->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_344->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_344->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_344->mDynamic=self->mDynamic;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_344;
    come_call_finalizer3(result_344,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj32;
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct list$1voidph* __dec_obj36;
struct list$1sNodeph* __dec_obj38;
struct list$1voidph* __dec_obj40;
struct list$1charph* __dec_obj41;
struct sType* __dec_obj42;
struct sNode* __dec_obj43;
struct sNode* __dec_obj44;
char* __dec_obj45;
char* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj32=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj34=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj35=self->mChannelType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj36=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj36,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj38=self->mArrayNum;
            come_call_finalizer3(__dec_obj38,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj40=self->mParamTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj41=self->mParamNames;
            come_call_finalizer3(__dec_obj41,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj42=self->mResultType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj43=self->mSizeNum;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj44=self->mAlignas;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj45=self->mOriginalTypeName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj46=self->mAsmName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj47=self->mTupleName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj48=self->mAttribute;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_327;
struct list_item$1voidph* prev_it_328;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj37;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj37=self->item;
            come_call_finalizer3(__dec_obj37,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_329;
struct list_item$1voidph* prev_it_330;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        prev_it_330=it_329;
        it_329=it_329->next;
        come_call_finalizer3(prev_it_330,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* prev_it_332;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_333;
struct list_item$1sNodeph* prev_it_334;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer3(prev_it_334,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_335;
struct list_item$1charph* prev_it_336;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_337;
    result_337=0;
    result_337+=int_get_hash_key(((int)self->mClass));
    result_337+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_337+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_337+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_337+=int_get_hash_key(((int)self->mChannelType));
    result_337+=int_get_hash_key(((int)self->mAnyClass));
    result_337+=int_get_hash_key(((int)self->mGenericsTypes));
    result_337+=int_get_hash_key(((int)self->mArrayNum));
    result_337+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_337+=int_get_hash_key(((int)self->mParamTypes));
    result_337+=int_get_hash_key(((int)self->mParamNames));
    result_337+=int_get_hash_key(((int)self->mResultType));
    result_337+=int_get_hash_key(((int)self->mVarArgs));
    result_337+=int_get_hash_key(((int)self->mUnsigned));
    result_337+=int_get_hash_key(((int)self->mShort));
    result_337+=int_get_hash_key(((int)self->mLong));
    result_337+=int_get_hash_key(((int)self->mLongLong));
    result_337+=int_get_hash_key(((int)self->mConstant));
    result_337+=int_get_hash_key(((int)self->mAtomic));
    result_337+=int_get_hash_key(((int)self->mRegister));
    result_337+=int_get_hash_key(((int)self->mVolatile));
    result_337+=int_get_hash_key(((int)self->mStatic));
    result_337+=int_get_hash_key(((int)self->mUniq));
    result_337+=int_get_hash_key(((int)self->mRecord));
    result_337+=int_get_hash_key(((int)self->mExtern));
    result_337+=int_get_hash_key(((int)self->mRestrict));
    result_337+=int_get_hash_key(((int)self->mImmutable));
    result_337+=int_get_hash_key(((int)self->mHeap));
    result_337+=int_get_hash_key(((int)self->mChannel));
    result_337+=int_get_hash_key(((int)self->mNoHeap));
    result_337+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_337+=int_get_hash_key(((int)self->mException));
    result_337+=int_get_hash_key(((int)self->mSizeNum));
    result_337+=int_get_hash_key(((int)self->mAlignas));
    result_337+=int_get_hash_key(((int)self->mPointerNum));
    result_337+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_337+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_337+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_337+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_337+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_337+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_337+=int_get_hash_key(((int)self->mAllocaValue));
    result_337+=int_get_hash_key(((int)self->mInline));
    result_337+=int_get_hash_key(((int)self->mNullValue));
    result_337+=int_get_hash_key(((int)self->mGuardValue));
    result_337+=int_get_hash_key(((int)self->mAsmName));
    result_337+=int_get_hash_key(((int)self->mArrayPointerType));
    result_337+=int_get_hash_key(((int)self->mLambdaArray));
    result_337+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_337+=int_get_hash_key(((int)self->mTypedef));
    result_337+=int_get_hash_key(((int)self->mMultipleTypes));
    result_337+=int_get_hash_key(((int)self->mOriginIsArray));
    result_337+=int_get_hash_key(((int)self->mTupleName));
    result_337+=int_get_hash_key(((int)self->mAttribute));
    result_337+=int_get_hash_key(((int)self->mGenerate));
    result_337+=int_get_hash_key(((int)self->mCreateVTable));
    result_337+=int_get_hash_key(((int)self->mDynamic));
    return result_337;
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
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
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
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
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
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
struct list_item$1voidph* it_338;
struct list_item$1voidph* it2_339;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_338=left->head;
    it2_339=right->head;
    while(it_338!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_338->item, it2_339->item)) {
            return (_Bool)0;
        }
        it_338=it_338->next;
        it2_339=it2_339->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_340;
struct list_item$1sNodeph* it2_341;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_340=left->head;
    it2_341=right->head;
    while(it_340!=((void*)0)) {
        if(        !sNode_equals(it_340->item,it2_341->item)) {
            return (_Bool)0;
        }
        it_340=it_340->next;
        it2_341=it2_341->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_342;
struct list_item$1charph* it2_343;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_342=left->head;
    it2_343=right->head;
    while(it_342!=((void*)0)) {
        if(        !string_equals(it_342->item,it2_343->item)) {
            return (_Bool)0;
        }
        it_342=it_342->next;
        it2_343=it2_343->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1voidph* result_346;
struct list_item$1voidph* it_347;
void* __right_value267 = (void*)0;
struct list$1voidph* __result238__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_346=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_347=self->head;
    while(it_347!=((void*)0)) {
        list$1voidphp_add(result_346,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_347->item)));
        it_347=it_347->next;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_345;
    result_345=0;
    result_345+=int_get_hash_key(((int)self->head));
    result_345+=int_get_hash_key(((int)self->tail));
    result_345+=int_get_hash_key(((int)self->len));
    result_345+=int_get_hash_key(((int)self->it));
    return result_345;
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
struct list_item$1voidph* litem_348;
void* __dec_obj53;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_349;
void* __dec_obj54;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_350;
void* __dec_obj55;
struct list$1voidph* __result237__;
    if(    self->len==0) {
        litem_348=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=((void*)0);
        litem_348->next=((void*)0);
        __dec_obj53=litem_348->item;
        litem_348->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_348;
        self->head=litem_348;
    }
    else if(    self->len==1) {
        litem_349=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_349->prev=self->head;
        litem_349->next=((void*)0);
        __dec_obj54=litem_349->item;
        litem_349->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_349;
        self->head->next=litem_349;
    }
    else {
        litem_350=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=self->tail;
        litem_350->next=((void*)0);
        __dec_obj55=litem_350->item;
        litem_350->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_350;
        self->tail=litem_350;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_351;
struct list_item$1sNodeph* it_352;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result244__;
    if(    self==((void*)0)) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_351=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_352=self->head;
    while(it_352!=((void*)0)) {
        list$1sNodephp_add(result_351,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_352->item)));
        it_352=it_352->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_351;
    come_call_finalizer3(result_351,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* litem_353;
struct sNode* __dec_obj57;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_354;
struct sNode* __dec_obj58;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_355;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_353=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj57=litem_353->item;
        litem_353->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj58=litem_354->item;
        litem_354->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj59=litem_355->item;
        litem_355->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result242__;
void* __right_value274 = (void*)0;
struct sNode* result_356;
struct sNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_356=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_356->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_356->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_356->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_356->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_356->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_356->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_356->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_356->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_356->kind=self->kind;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_356;
    ((result_356) ? result_356 = come_decrement_ref_count2(result_356, ((struct sNode*)result_356)->finalize, ((struct sNode*)result_356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result245__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_357;
struct list_item$1charph* it_358;
void* __right_value283 = (void*)0;
struct list$1charph* __result247__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_357=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_358=self->head;
    while(it_358!=((void*)0)) {
        list$1charphp_add(result_357,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_358->item)));
        it_358=it_358->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_359;
char* __dec_obj62;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_360;
char* __dec_obj63;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_361;
char* __dec_obj64;
struct list$1charph* __result246__;
    if(    self->len==0) {
        litem_359=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj62=litem_359->item;
        litem_359->item=(char*)come_increment_ref_count(item);
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj63=litem_360->item;
        litem_360->item=(char*)come_increment_ref_count(item);
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj64=litem_361->item;
        litem_361->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_363;
void* __result249__;
void* __result250__;
void* result_364;
void* __result251__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(void*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_364,0,sizeof(void*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_366;
void* __result252__;
void* __result253__;
void* result_367;
void* __result254__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_366,0,sizeof(void*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_367,0,sizeof(void*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj75;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj75=self->v1;
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj76;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj76=self->v2;
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_376;
unsigned int hash_377;
unsigned int it_378;
void* __result255__;
void* __result256__;
void* __result257__;
void* __result258__;
default_value_376 = (void*)0;
    memset(&default_value_376,0,sizeof(void*));
    hash_377=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_378=hash_377;
    while((_Bool)1) {
        if(        self->item_existance[it_378]) {
            if(            come_call_equals((void*)0, self->keys[it_378], ((char*)key))) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_378];
                come_call_finalizer3(default_value_376,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_378++;
            if(            it_378>=self->size) {
                it_378=0;
            }
            else if(            it_378==hash_377) {
                __result256__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_376);
                come_call_finalizer3(default_value_376,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_376);
            come_call_finalizer3(default_value_376,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)default_value_376);
    come_call_finalizer3(default_value_376,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void tuple3$3charphsFunpsGenericsFunp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self){
char* __dec_obj80;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_clone(struct tuple3$3charphsFunpsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple3$3charphsFunpsGenericsFunp* __result259__;
void* __right_value310 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* result_383;
void* __right_value311 = (void*)0;
char* __dec_obj81;
struct tuple3$3charphsFunpsGenericsFunp* __result260__;
    if(    self==(void*)0) {
        __result259__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    result_383=(struct tuple3$3charphsFunpsGenericsFunp*)come_increment_ref_count((struct tuple3$3charphsFunpsGenericsFunp*)come_calloc(1, sizeof(struct tuple3$3charphsFunpsGenericsFunp)*(1), "tuple3$3charphsFunpsGenericsFunp_clone", 3, "struct tuple3$3charphsFunpsGenericsFunp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj81=result_383->v1;
        result_383->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_383->v3=self->v3;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_383;
    come_call_finalizer3(result_383,tuple3$3charphsFunpsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static unsigned int tuple3$3charphsFunpsGenericsFunp_get_hash_key(struct tuple3$3charphsFunpsGenericsFunp* self){
unsigned int result_384;
    result_384=0;
    result_384+=int_get_hash_key(((int)self->v1));
    result_384+=int_get_hash_key(((int)self->v2));
    result_384+=int_get_hash_key(((int)self->v3));
    return result_384;
}

static _Bool tuple3$3charphsFunpsGenericsFunp_equals(struct tuple3$3charphsFunpsGenericsFunp* left, struct tuple3$3charphsFunpsGenericsFunp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
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
    return (_Bool)1;
}

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
int n_385;
_Bool result_386;
char* it_389;
void* default_value_392;
void* it2_393;
void* default_value2_396;
void* __right_value312 = (void*)0;
void* item_397;
void* __right_value313 = (void*)0;
void* item2_398;
default_value_392 = (void*)0;
default_value2_396 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_385=0;
    result_386=(_Bool)1;
    for(    it_389=((char*)list$1voidpp_begin(left->key_list));    !list$1voidpp_end(left->key_list);    it_389=((char*)list$1voidpp_next(left->key_list))    ){
        memset(&default_value_392,0,sizeof(void*));
        it2_393=((char*)list$1voidpp_item(right->key_list,n_385,default_value_392));
        if(        come_call_equals((void*)0, it_389, it2_393)) {
            memset(&default_value2_396,0,sizeof(void*));
            item_397=((void*)(__right_value312=map$2voidphvoidphp_at(left,it_389,default_value2_396)));
            come_call_finalizer3(__right_value312,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            item2_398=((void*)(__right_value313=map$2voidphvoidphp_at(right,it2_393,default_value2_396)));
            come_call_finalizer3(__right_value313,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            !come_call_equals((void*)0, item_397, item2_398)) {
                result_386=(_Bool)0;
            }
        }
        else {
            result_386=(_Bool)0;
        }
        n_385++;
    }
    return result_386;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_387;
void* __result261__;
void* __result262__;
void* result_388;
void* __result263__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_387,0,sizeof(void*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->head;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_388,0,sizeof(void*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_390;
void* __result264__;
void* __result265__;
void* result_391;
void* __result266__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_390,0,sizeof(void*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_391,0,sizeof(void*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_394;
int i_395;
void* __result267__;
void* __result268__;
    if(    position<0) {
        position+=self->len;
    }
    it_394=self->head;
    i_395=0;
    while(it_394!=((void*)0)) {
        if(        position==i_395) {
            __result267__ = gComeFunResultObject = __result_obj__ = it_394->item;
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
        it_394=it_394->next;
        i_395++;
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result268__;
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

static struct tuple3$3charphsFunpsGenericsFunp* tuple3$3charphsFunpsGenericsFunp_initialize(struct tuple3$3charphsFunpsGenericsFunp* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
void* __result_obj__=(void*)0;
char* __dec_obj82;
struct tuple3$3charphsFunpsGenericsFunp* __result269__;
    __dec_obj82=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void tuple3$3charphsFunpsGenericsFunpp_finalize(struct tuple3$3charphsFunpsGenericsFunp* self){
char* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj83=self->v1;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value316 = (void*)0;
struct sType* generics_type_399;
struct sType* __dec_obj84;
struct sClass* klass_400;
char* class_name_401;
void* __right_value317 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var4 = (void*)0;
char* fun_name2_402=0;
struct sFun* operator_fun_403=0;
struct sGenericsFun* generics_fun_404=0;
_Bool result_405;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_406;
char* left_value2_407;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_1_411=0;
char* Err_412=0;
_Bool _if_conditional1;
_Bool __result273__;
void* __right_value324 = (void*)0;
_Bool _if_conditional2;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj90;
void* __right_value327 = (void*)0;
char* __dec_obj91;
char* middle_value2_413;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var6 = (void*)0;
_Bool come_exception_var_2_414=0;
char* Err_415=0;
_Bool _if_conditional3;
_Bool __result274__;
void* __right_value332 = (void*)0;
_Bool _if_conditional4;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj92;
void* __right_value335 = (void*)0;
char* __dec_obj93;
char* right_value2_416;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var7 = (void*)0;
_Bool come_exception_var_3_417=0;
char* Err_418=0;
_Bool _if_conditional5;
_Bool __result275__;
void* __right_value340 = (void*)0;
_Bool _if_conditional6;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj94;
void* __right_value343 = (void*)0;
char* __dec_obj95;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj96;
void* __right_value349 = (void*)0;
struct sType* result_type1_419;
void* __right_value350 = (void*)0;
struct sType* result_type2_420;
struct sType* obj_type_421;
void* __right_value351 = (void*)0;
struct sType* __dec_obj97;
void* __right_value352 = (void*)0;
struct sType* __dec_obj98;
void* __right_value353 = (void*)0;
struct sType* __dec_obj99;
void* __right_value354 = (void*)0;
char* __dec_obj100;
void* __right_value355 = (void*)0;
struct CVALUE* __dec_obj101;
_Bool __result277__;
left_value2_407 = (void*)0;
middle_value2_413 = (void*)0;
right_value2_416 = (void*)0;
    generics_type_399=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type_399->mNoSolvedGenericsType) {
        __dec_obj84=generics_type_399;
        generics_type_399=(struct sType*)come_increment_ref_count(generics_type_399->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    klass_400=type->mClass;
    class_name_401=klass_400->mName;
    multiple_assign_var4=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value317=get_operator_function(type,fun_name,info)));
    fun_name2_402=(char*)come_increment_ref_count(multiple_assign_var4->v1);
    operator_fun_403=multiple_assign_var4->v2;
    generics_fun_404=multiple_assign_var4->v3;
    come_call_finalizer3(__right_value317,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    result_405=(_Bool)0;
    if(    operator_fun_403) {
        come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 112, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        multiple_assign_var5=((struct tuple2$2boolcharph*)(__right_value323=check_assign_type(((char*)(__right_value321=xsprintf("\%s is assigned to",((char*)(__right_value320=string_to_string(fun_name2_402)))))),((struct sType*)((void*)(__right_value322=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_1_411=multiple_assign_var5->v1;
        Err_412=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        (_if_conditional1=(Err_412)),        (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value322,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value323,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            __result273__ = (_Bool)1;
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_402 = come_decrement_ref_count2(fun_name2_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result273__;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)((void*)(__right_value324=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,0))))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value324,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)((void*)(__right_value325=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,0)))),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value325,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj90=left_value2_407;
            left_value2_407=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj91=left_value2_407;
            left_value2_407=(char*)come_increment_ref_count(come_call_cloner(string_clone, left_value->c_value));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (Err_412 = come_decrement_ref_count2(Err_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var6=((struct tuple2$2boolcharph*)(__right_value331=check_assign_type(((char*)(__right_value329=xsprintf("\%s is assigned to",((char*)(__right_value328=string_to_string(fun_name2_402)))))),((struct sType*)((void*)(__right_value330=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,1)))),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_2_414=multiple_assign_var6->v1;
        Err_415=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional3=(Err_415)),        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value330,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value331,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            __result274__ = (_Bool)1;
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_413 = come_decrement_ref_count2(middle_value2_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_402 = come_decrement_ref_count2(fun_name2_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result274__;
        }
        else {
        }
        if(        (_if_conditional4=(((struct sType*)((void*)(__right_value332=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,1))))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value332,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)((void*)(__right_value333=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,1)))),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value333,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj92=middle_value2_413;
            middle_value2_413=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj93=middle_value2_413;
            middle_value2_413=(char*)come_increment_ref_count(come_call_cloner(string_clone, middle_value->c_value));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (Err_415 = come_decrement_ref_count2(Err_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var7=((struct tuple2$2boolcharph*)(__right_value339=check_assign_type(((char*)(__right_value337=xsprintf("\%s is assigned to",((char*)(__right_value336=string_to_string(fun_name2_402)))))),((struct sType*)((void*)(__right_value338=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,2)))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_3_417=multiple_assign_var7->v1;
        Err_418=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        (_if_conditional5=(Err_418)),        (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value338,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value339,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            __result275__ = (_Bool)1;
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_413 = come_decrement_ref_count2(middle_value2_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (right_value2_416 = come_decrement_ref_count2(right_value2_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_418 = come_decrement_ref_count2(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(generics_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_402 = come_decrement_ref_count2(fun_name2_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result275__;
        }
        else {
        }
        if(        (_if_conditional6=(((struct sType*)((void*)(__right_value340=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,2))))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value340,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional6) {
            std_move(((struct sType*)((void*)(__right_value341=list$1voidphp_operator_load_element(operator_fun_403->mParamTypes,2)))),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value341,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj94=right_value2_416;
            right_value2_416=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj95=right_value2_416;
            right_value2_416=(char*)come_increment_ref_count(come_call_cloner(string_clone, right_value->c_value));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj96=come_value_406->c_value;
        come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value344=string_to_string(fun_name2_402))),((char*)(__right_value345=string_to_string(left_value2_407))),((char*)(__right_value346=string_to_string(middle_value2_413))),((char*)(__right_value347=string_to_string(right_value2_416)))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type1_419=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, operator_fun_403->mResultType));
        result_type2_420=(struct sType*)come_increment_ref_count(solve_generics(result_type1_419,generics_type_399,info));
        obj_type_421=(struct sType*)come_increment_ref_count(generics_type_399);
        if(        result_type2_420->mAnyOriginalType&&generics_fun_404) {
            __dec_obj97=result_type2_420;
            result_type2_420=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_404->mResultType,obj_type_421,info));
            come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj98=come_value_406->type;
            come_value_406->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_420));
            come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_406->type->mStatic=(_Bool)0;
        }
        else {
            __dec_obj99=come_value_406->type;
            come_value_406->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_420));
            come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_406->var=((void*)0);
        if(        result_type2_420->mHeap) {
            append_object_to_right_values2(come_value_406,(struct sType*)come_increment_ref_count(result_type2_420),info,(_Bool)0);
        }
        __dec_obj100=come_value_406->c_value;
        come_value_406->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_406->c_value,come_value_406->type,info));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj101=come_value_406;
        come_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_406),info));
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        add_come_last_code(info,"%s",come_value_406->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
        result_405=(_Bool)1;
        come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (left_value2_407 = come_decrement_ref_count2(left_value2_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (middle_value2_413 = come_decrement_ref_count2(middle_value2_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (right_value2_416 = come_decrement_ref_count2(right_value2_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_418 = come_decrement_ref_count2(Err_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type1_419,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_420,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result277__ = result_405;
    come_call_finalizer3(generics_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_402 = come_decrement_ref_count2(fun_name2_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result277__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_408;
int i_409;
void* __result271__;
void* default_value_410;
void* __result272__;
default_value_410 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_408=self->head;
    i_409=0;
    while(it_408!=((void*)0)) {
        if(        position==i_409) {
            __result271__ = gComeFunResultObject = __result_obj__ = it_408->item;
            gComeFunResultObject = (void*)0;
            return __result271__;
        }
        it_408=it_408->next;
        i_409++;
    }
    memset(&default_value_410,0,sizeof(void*));
    __result272__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_410);
    come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj85;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj86;
struct sType* __dec_obj87;
char* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj86=self->c_value;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj87=self->type;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj88=self->c_value_without_right_value_objects;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj89=self->c_value_without_cast_object_value;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct list_item$1CVALUEph* litem_422;
struct CVALUE* __dec_obj102;
void* __right_value357 = (void*)0;
struct list_item$1CVALUEph* litem_423;
struct CVALUE* __dec_obj103;
void* __right_value358 = (void*)0;
struct list_item$1CVALUEph* litem_424;
struct CVALUE* __dec_obj104;
struct list$1CVALUEph* __result276__;
    if(    self->len==0) {
        litem_422=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value356=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=((void*)0);
        litem_422->next=((void*)0);
        __dec_obj102=litem_422->item;
        litem_422->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_422;
        self->head=litem_422;
    }
    else if(    self->len==1) {
        litem_423=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value357=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_423->prev=self->head;
        litem_423->next=((void*)0);
        __dec_obj103=litem_423->item;
        litem_423->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_423;
        self->head->next=litem_423;
    }
    else {
        litem_424=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value358=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_424->prev=self->tail;
        litem_424->next=((void*)0);
        __dec_obj104=litem_424->item;
        litem_424->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_424;
        self->tail=litem_424;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj107;
void* __right_value362 = (void*)0;
char* __dec_obj108;
struct sStoreFieldNode* __result278__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj107=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj108=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sStoreFieldNode")));
    (__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_425;
struct sNode* right_426;
void* __right_value364 = (void*)0;
char* name_427;
_Bool Value_428;
_Bool __result280__;
void* __right_value365 = (void*)0;
struct CVALUE* left_value_429;
struct sType* left_type2_430;
struct sType* __dec_obj113;
struct sType* __dec_obj114;
int i_431;
void* __right_value366 = (void*)0;
_Bool _if_conditional7;
void* __right_value367 = (void*)0;
char* __dec_obj115;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __dec_obj116;
_Bool Value_432;
_Bool __result281__;
void* __right_value370 = (void*)0;
_Bool new_channel_433;
void* __right_value371 = (void*)0;
struct CVALUE* right_value_434;
struct sType* right_type_435;
struct sType* left_type_436;
void* __right_value372 = (void*)0;
struct sType* left_type2_437;
struct sClass* klass_438;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* field_type_439;
int index_440;
char* child_field_name_441;
_Bool child_field_is_pointer_442;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var8 = (void*)0;
int come_exception_var_4_443=0;
char* Err_444=0;
_Bool _if_conditional8;
_Bool __result282__;
struct list$1voidph* o2_saved_445;
struct tuple2$2charphsTypeph* field_446;
struct tuple2$2charphsTypeph* multiple_assign_var9 = (void*)0;
char* field_name_447=0;
struct sType* field_type2_448=0;
void* __right_value378 = (void*)0;
struct sType* __dec_obj117;
struct list$1voidph* o2_saved_449;
struct tuple2$2charphsTypeph* field_450;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* field_name_451=0;
struct sType* field_type2_452=0;
struct sClass* klass2_453;
struct list$1voidph* o2_saved_454;
struct tuple2$2charphsTypeph* field2_455;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* field_name2_456=0;
struct sType* field_type3_457=0;
void* __right_value379 = (void*)0;
char* __dec_obj118;
void* __right_value380 = (void*)0;
struct sType* __dec_obj119;
void* __right_value381 = (void*)0;
struct sType* __dec_obj120;
void* __right_value382 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_5_458=0;
char* Err_459=0;
_Bool _if_conditional9;
_Bool __result283__;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_6_461=0;
char* Err_462=0;
_Bool _if_conditional10;
_Bool __result284__;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var14 = (void*)0;
int come_exception_var_7_463=0;
char* Err_464=0;
_Bool _if_conditional11;
_Bool __result285__;
_Bool __result286__;
char* c_value_465;
void* __right_value390 = (void*)0;
char* __dec_obj121;
void* __right_value391 = (void*)0;
char* __dec_obj122;
void* __right_value392 = (void*)0;
char* __dec_obj123;
void* __right_value393 = (void*)0;
char* __dec_obj124;
void* __right_value394 = (void*)0;
char* c_value_466;
void* __right_value395 = (void*)0;
char* __dec_obj125;
char* c_value_467;
void* __right_value396 = (void*)0;
char* __dec_obj126;
void* __right_value397 = (void*)0;
char* __dec_obj127;
void* __right_value398 = (void*)0;
char* __dec_obj128;
void* __right_value399 = (void*)0;
char* __dec_obj129;
void* __right_value400 = (void*)0;
char* c_value_468;
void* __right_value401 = (void*)0;
char* __dec_obj130;
void* __right_value402 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var15 = (void*)0;
int come_exception_var_8_469=0;
char* Err_470=0;
_Bool _if_conditional12;
_Bool __result287__;
char* c_value_471;
void* __right_value403 = (void*)0;
char* __dec_obj131;
void* __right_value404 = (void*)0;
char* __dec_obj132;
void* __right_value405 = (void*)0;
char* __dec_obj133;
void* __right_value406 = (void*)0;
char* __dec_obj134;
void* __right_value407 = (void*)0;
char* c_value_472;
void* __right_value408 = (void*)0;
char* __dec_obj135;
char* c_value_473;
void* __right_value409 = (void*)0;
char* __dec_obj136;
void* __right_value410 = (void*)0;
char* __dec_obj137;
void* __right_value411 = (void*)0;
char* __dec_obj138;
void* __right_value412 = (void*)0;
char* __dec_obj139;
void* __right_value413 = (void*)0;
char* c_value_474;
void* __right_value414 = (void*)0;
char* __dec_obj140;
void* __right_value415 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var16 = (void*)0;
int come_exception_var_9_475=0;
char* Err_476=0;
_Bool _if_conditional13;
_Bool __result288__;
void* __right_value416 = (void*)0;
char* __dec_obj141;
void* __right_value417 = (void*)0;
char* __dec_obj142;
void* __right_value418 = (void*)0;
struct sType* __dec_obj143;
_Bool __result289__;
void* __right_value419 = (void*)0;
char* __dec_obj144;
void* __right_value420 = (void*)0;
char* __dec_obj145;
void* __right_value421 = (void*)0;
char* __dec_obj146;
void* __right_value422 = (void*)0;
char* __dec_obj147;
void* __right_value423 = (void*)0;
char* __dec_obj148;
void* __right_value424 = (void*)0;
char* __dec_obj149;
void* __right_value425 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_10_477=0;
char* Err_478=0;
_Bool _if_conditional14;
_Bool __result290__;
void* __right_value426 = (void*)0;
struct sType* __dec_obj150;
_Bool __result291__;
c_value_465 = (void*)0;
c_value_467 = (void*)0;
c_value_471 = (void*)0;
c_value_473 = (void*)0;
    left_425=self->mLeft;
    right_426=self->mRight;
    name_427=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_428=node_compile(left_425,info);
    if(    !Value_428) {
        __result280__ = (_Bool)0;
        (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result280__;
    }
    else {
    }
    left_value_429=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_430=(struct sType*)come_increment_ref_count(left_value_429->type);
    if(    left_type2_430->mNoSolvedGenericsType) {
        __dec_obj113=left_type2_430;
        left_type2_430=(struct sType*)come_increment_ref_count(left_type2_430->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    left_type2_430->mAnyOriginalType) {
        __dec_obj114=left_type2_430;
        left_type2_430=(struct sType*)come_increment_ref_count(left_type2_430->mAnyOriginalType);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_430->mClass->mName,"tuple1")||string_operator_equals(left_type2_430->mClass->mName,"tuple2")||string_operator_equals(left_type2_430->mClass->mName,"tuple3")||string_operator_equals(left_type2_430->mClass->mName,"tuple3")||string_operator_equals(left_type2_430->mClass->mName,"tuple4")||string_operator_equals(left_type2_430->mClass->mName,"tuple5")) {
        for(        i_431=0;        i_431<list$1voidphp_length(left_type2_430->mGenericsTypes);        i_431++        ){
            if(            (_if_conditional7=(string_operator_equals(name_427,((struct sType*)((void*)(__right_value366=list$1voidphp_operator_load_element(left_type2_430->mGenericsTypes,i_431))))->mTupleName))),            come_call_finalizer3(__right_value366,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional7) {
                __dec_obj115=name_427;
                name_427=(char*)come_increment_ref_count(xsprintf("v%d",i_431+1));
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_429->type->mPointerNum>0) {
        __dec_obj116=left_value_429->c_value;
        left_value_429->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value368=make_type_name_string(left_value_429->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_429->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    Value_432=node_compile(right_426,info);
    if(    !Value_432) {
        __result281__ = (_Bool)0;
        (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result281__;
    }
    else {
    }
    new_channel_433=string_operator_equals(((char*)(__right_value370=right_426->kind(right_426->_protocol_obj))),"sNewChannel");
    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    right_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_435=right_value_434->type;
    dec_stack_ptr(1,info);
    left_type_436=left_value_429->type;
    come_call_finalizer3(left_type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_437=(struct sType*)come_increment_ref_count(solve_generics(left_type_436,left_type_436,info));
    klass_438=left_type2_437->mClass;
    klass_438=((struct sClass*)((void*)(__right_value374=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value373=__builtin_string(klass_438->mName)))))));
    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value374,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    field_type_439=((void*)0);
    index_440=0;
    child_field_name_441=((void*)0);
    child_field_is_pointer_442=(_Bool)0;
    klass_438=((struct sClass*)((void*)(__right_value376=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value375=__builtin_string(klass_438->mName)))))));
    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    klass_438->mFields==((void*)0)) {
        multiple_assign_var8=((struct tuple2$2intcharph*)(__right_value377=err_msg(info,"%s fields are null",klass_438->mName)));
        come_exception_var_4_443=multiple_assign_var8->v1;
        Err_444=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        if(        (_if_conditional8=(Err_444)),        come_call_finalizer3(__right_value377,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional8) {
            __result282__ = (_Bool)1;
            (Err_444 = come_decrement_ref_count2(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result282__;
        }
        else {
        }
        (Err_444 = come_decrement_ref_count2(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_445=(struct list$1voidph*)come_increment_ref_count((klass_438->mFields)),field_446=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_445)));    !list$1voidphp_end((o2_saved_445));    field_446=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_445)))    ){
        multiple_assign_var9=field_446;
        field_name_447=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        field_type2_448=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        string_operator_equals(field_name_447,name_427)) {
            __dec_obj117=field_type_439;
            field_type_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_448));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_447 = come_decrement_ref_count2(field_name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_448,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_440++;
        (field_name_447 = come_decrement_ref_count2(field_name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type2_448,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_440==list$1voidphp_length(klass_438->mFields)) {
        index_440=0;
        for(        o2_saved_449=(struct list$1voidph*)come_increment_ref_count((klass_438->mFields)),field_450=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_449)));        !list$1voidphp_end((o2_saved_449));        field_450=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_449)))        ){
            multiple_assign_var10=field_450;
            field_name_451=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type2_452=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            klass2_453=field_type2_452->mClass;
            for(            o2_saved_454=(struct list$1voidph*)come_increment_ref_count((klass2_453->mFields)),field2_455=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_454)));            !list$1voidphp_end((o2_saved_454));            field2_455=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_454)))            ){
                multiple_assign_var11=field2_455;
                field_name2_456=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                field_type3_457=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
                if(                string_operator_equals(field_name2_456,name_427)) {
                    __dec_obj118=child_field_name_441;
                    child_field_name_441=(char*)come_increment_ref_count(__builtin_string(field_name_451));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_452->mPointerNum>0) {
                        child_field_is_pointer_442=(_Bool)1;
                    }
                    __dec_obj119=field_type_439;
                    field_type_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_457));
                    come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name2_456 = come_decrement_ref_count2(field_name2_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type3_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name2_456 = come_decrement_ref_count2(field_name2_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type3_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_454,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_441) {
                (field_name_451 = come_decrement_ref_count2(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_452,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_451,name_427)) {
                __dec_obj120=field_type_439;
                field_type_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_452));
                come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_451 = come_decrement_ref_count2(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_452,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_440++;
            (field_name_451 = come_decrement_ref_count2(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_449,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_440==list$1voidphp_length(klass_438->mFields)||field_type_439==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value382=err_msg(info,"field not found(%s) in %s(1)",name_427,klass_438->mName)));
            come_exception_var_5_458=multiple_assign_var12->v1;
            Err_459=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_459)),            come_call_finalizer3(__right_value382,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result283__ = (_Bool)1;
                (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result283__;
            }
            else {
            }
            (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_460=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 321, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    multiple_assign_var13=((struct tuple2$2boolcharph*)(__right_value387=check_assign_type(((char*)(__right_value386=xsprintf("\%s is assigned to",((char*)(__right_value385=string_to_string(name_427)))))),field_type_439,right_type_435,right_value_434,(_Bool)0,(_Bool)1,(_Bool)0,info)));
    come_exception_var_6_461=multiple_assign_var13->v1;
    Err_462=(char*)come_increment_ref_count(multiple_assign_var13->v2);
    if(    (_if_conditional10=(Err_462)),    (__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value387,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        __result284__ = (_Bool)1;
        (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
        (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result284__;
    }
    else {
    }
    right_type_435=((struct sType*)(__right_value388=come_call_cloner(sType_clone, right_value_434->type)));
    come_call_finalizer3(__right_value388,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_439->mHeap&&!right_value_434->type->mHeap) {
        if(        string_operator_equals(right_value_434->type->mClass->mName,"void")&&right_value_434->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                multiple_assign_var14=((struct tuple2$2intcharph*)(__right_value389=err_msg(info,"require right value as heap object(%s)(1)",name_427)));
                come_exception_var_7_463=multiple_assign_var14->v1;
                Err_464=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                (_if_conditional11=(Err_464)),                come_call_finalizer3(__right_value389,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    printf("right type is %s pointer num %d heap %d\n",right_value_434->type->mClass->mName,right_value_434->type->mPointerNum,right_value_434->type->mHeap);
                    __result285__ = (_Bool)1;
                    (Err_464 = come_decrement_ref_count2(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result285__;
                }
                else {
                }
                __result286__ = (_Bool)0;
                (Err_464 = come_decrement_ref_count2(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result286__;
                (Err_464 = come_decrement_ref_count2(Err_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    field_type_439->mHeap&&right_type_435->mHeap&&field_type_439->mPointerNum>0&&right_type_435->mPointerNum>0) {
        if(        left_value_429->type->mPointerNum==1) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj121=c_value_465;
                    c_value_465=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj122=c_value_465;
                    c_value_465=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_439,c_value_465,info,(_Bool)0,(_Bool)0);
                std_move(field_type_439,right_type_435,right_value_434,info,(_Bool)0);
                if(                child_field_is_pointer_442) {
                    __dec_obj123=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj124=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_465 = come_decrement_ref_count2(c_value_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_466=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_429->c_value,name_427));
                decrement_ref_count_object(field_type_439,c_value_466,info,(_Bool)0,(_Bool)0);
                std_move(field_type_439,right_type_435,right_value_434,info,(_Bool)0);
                __dec_obj125=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_466 = come_decrement_ref_count2(c_value_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_429->type->mPointerNum==0) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj126=c_value_467;
                    c_value_467=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj127=c_value_467;
                    c_value_467=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_439,c_value_467,info,(_Bool)0,(_Bool)0);
                std_move(field_type_439,right_type_435,right_value_434,info,(_Bool)0);
                if(                child_field_is_pointer_442) {
                    __dec_obj128=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj129=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_467 = come_decrement_ref_count2(c_value_467, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_468=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_429->c_value,name_427));
                decrement_ref_count_object(field_type_439,c_value_468,info,(_Bool)0,(_Bool)0);
                std_move(field_type_439,right_value_434->type,right_value_434,info,(_Bool)0);
                __dec_obj130=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_468 = come_decrement_ref_count2(c_value_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var15=((struct tuple2$2intcharph*)(__right_value402=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_427,left_value_429->type->mPointerNum)));
            come_exception_var_8_469=multiple_assign_var15->v1;
            Err_470=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            if(            (_if_conditional12=(Err_470)),            come_call_finalizer3(__right_value402,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result287__ = (_Bool)1;
                (Err_470 = come_decrement_ref_count2(Err_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result287__;
            }
            else {
            }
            (Err_470 = come_decrement_ref_count2(Err_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_439->mHeap&&field_type_439->mPointerNum>0&&right_type_435->mPointerNum>0&&string_operator_equals(right_type_435->mClass->mName,"void")) {
        if(        left_value_429->type->mPointerNum==1) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj131=c_value_471;
                    c_value_471=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj132=c_value_471;
                    c_value_471=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_439,c_value_471,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_442) {
                    __dec_obj133=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj134=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_471 = come_decrement_ref_count2(c_value_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_472=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_429->c_value,name_427));
                decrement_ref_count_object(field_type_439,c_value_472,info,(_Bool)0,(_Bool)0);
                __dec_obj135=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_472 = come_decrement_ref_count2(c_value_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_429->type->mPointerNum==0) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj136=c_value_473;
                    c_value_473=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj137=c_value_473;
                    c_value_473=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_429->c_value,child_field_name_441,name_427));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_439,c_value_473,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_442) {
                    __dec_obj138=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj139=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                (c_value_473 = come_decrement_ref_count2(c_value_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_474=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_429->c_value,name_427));
                decrement_ref_count_object(field_type_439,c_value_474,info,(_Bool)0,(_Bool)0);
                __dec_obj140=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                (c_value_474 = come_decrement_ref_count2(c_value_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var16=((struct tuple2$2intcharph*)(__right_value415=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_427,left_value_429->type->mPointerNum)));
            come_exception_var_9_475=multiple_assign_var16->v1;
            Err_476=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            if(            (_if_conditional13=(Err_476)),            come_call_finalizer3(__right_value415,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result288__ = (_Bool)1;
                (Err_476 = come_decrement_ref_count2(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result288__;
            }
            else {
            }
            (Err_476 = come_decrement_ref_count2(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_439->mChannel&&new_channel_433) {
        if(        child_field_is_pointer_442) {
            __dec_obj141=come_value_460->c_value;
            come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_429->c_value,name_427,right_value_434->c_value));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj142=come_value_460->c_value;
            come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_429->c_value,name_427,right_value_434->c_value));
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj143=come_value_460->type;
        come_value_460->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_value_434->type));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_460->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
        add_come_last_code(info,"%s",come_value_460->c_value);
        __result289__ = (_Bool)1;
        (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
        (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result289__;
    }
    else {
        if(        left_value_429->type->mPointerNum==1) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj144=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj145=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj146=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_429->type->mPointerNum==0) {
            if(            child_field_name_441) {
                if(                child_field_is_pointer_442) {
                    __dec_obj147=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj148=come_value_460->c_value;
                    come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_429->c_value,child_field_name_441,name_427,right_value_434->c_value));
                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj149=come_value_460->c_value;
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_429->c_value,name_427,right_value_434->c_value));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value425=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_427,left_value_429->type->mPointerNum)));
            come_exception_var_10_477=multiple_assign_var17->v1;
            Err_478=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_478)),            come_call_finalizer3(__right_value425,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result290__ = (_Bool)1;
                (Err_478 = come_decrement_ref_count2(Err_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result290__;
            }
            else {
            }
            (Err_478 = come_decrement_ref_count2(Err_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj150=come_value_460->type;
    come_value_460->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_439));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_460->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
    add_come_last_code(info,"%s",come_value_460->c_value);
    __result291__ = (_Bool)1;
    (name_427 = come_decrement_ref_count2(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
    (child_field_name_441 = come_decrement_ref_count2(child_field_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    (Err_462 = come_decrement_ref_count2(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result291__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj109;
struct sNode* __dec_obj110;
struct sNode* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj109=self->sname;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj110=self->mLeft;
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj111=self->mRight;
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj112=self->mName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj151;
struct sNullCheckNode* __result292__;
struct sNullCheckNode* __result293__;
    ((struct sNodeBase*)(__right_value427=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value427,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=__builtin_string("sNullCheckNode")));
    (__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_479;
_Bool Value_480;
void* __right_value430 = (void*)0;
struct CVALUE* left_value_481;
void* __right_value431 = (void*)0;
char* method_name_482;
void* __right_value432 = (void*)0;
_Bool _if_conditional15;
struct sType* obj_type_483;
struct sType* obj_type2_484;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var18 = (void*)0;
char* name_485=0;
struct sGenericsFun* generics_fun_486=0;
char* __dec_obj155;
void* __right_value435 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var19 = (void*)0;
int come_exception_var_11_487=0;
char* Err_488=0;
_Bool _if_conditional16;
_Bool __result295__;
void* __right_value436 = (void*)0;
struct sFun* fun_489;
void* __right_value437 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var20 = (void*)0;
int come_exception_var_12_490=0;
char* Err_491=0;
_Bool _if_conditional17;
_Bool __result296__;
void* __right_value438 = (void*)0;
struct sType* type_492;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value441 = (void*)0;
char* __dec_obj156;
void* __right_value442 = (void*)0;
struct sType* __dec_obj157;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_494;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __dec_obj158;
void* __right_value447 = (void*)0;
struct sType* __dec_obj159;
_Bool __result297__;
    left_479=self->mLeft;
    Value_480=node_compile(left_479,info);
    if(    !Value_480) {
        return (_Bool)0;
    }
    else {
    }
    left_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_481->type->mNoSolvedGenericsType&&left_value_481->type->mNoSolvedGenericsType->mClass&&string_operator_equals(left_value_481->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
        method_name_482=(char*)come_increment_ref_count(create_method_name(left_value_481->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional15=(((struct sFun*)((void*)(__right_value432=map$2voidphvoidphp_at(info->funcs,method_name_482,((void*)0)))))==((void*)0))),        come_call_finalizer3(__right_value432,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional15) {
            obj_type_483=left_value_481->type->mNoSolvedGenericsType;
            if(            list$1voidphp_length(obj_type_483->mGenericsTypes)>0) {
                obj_type2_484=left_value_481->type;
                multiple_assign_var18=((struct tuple2$2charphsGenericsFunp*)(__right_value434=make_generics_function(obj_type2_484,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_485=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                generics_fun_486=multiple_assign_var18->v2;
                come_call_finalizer3(__right_value434,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj155=method_name_482;
                method_name_482=(char*)come_increment_ref_count(name_485);
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                (name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var19=((struct tuple2$2intcharph*)(__right_value435=err_msg(info,"require expect implementation(%s)",left_value_481->type->mClass->mName)));
                come_exception_var_11_487=multiple_assign_var19->v1;
                Err_488=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional16=(Err_488)),                come_call_finalizer3(__right_value435,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    __result295__ = (_Bool)1;
                    (Err_488 = come_decrement_ref_count2(Err_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (method_name_482 = come_decrement_ref_count2(method_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result295__;
                }
                else {
                }
                (Err_488 = come_decrement_ref_count2(Err_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        fun_489=((struct sFun*)((void*)(__right_value436=map$2voidphvoidphp_operator_load_element(info->funcs,method_name_482))));
        come_call_finalizer3(__right_value436,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_489==((void*)0)) {
            multiple_assign_var20=((struct tuple2$2intcharph*)(__right_value437=err_msg(info,"function not found(%s)",method_name_482)));
            come_exception_var_12_490=multiple_assign_var20->v1;
            Err_491=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional17=(Err_491)),            come_call_finalizer3(__right_value437,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                __result296__ = (_Bool)1;
                (Err_491 = come_decrement_ref_count2(Err_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (method_name_482 = come_decrement_ref_count2(method_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result296__;
            }
            else {
            }
            (Err_491 = come_decrement_ref_count2(Err_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_492=(struct sType*)come_increment_ref_count(solve_generics(fun_489->mResultType,left_value_481->type,info));
        come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj156=come_value_493->c_value;
        come_value_493->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_482,left_value_481->c_value));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj157=come_value_493->type;
        come_value_493->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_492));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_493->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_493));
        add_come_last_code(info,"%s",come_value_493->c_value);
        (method_name_482 = come_decrement_ref_count2(method_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_481));
    }
    else if(    left_value_481->type->mPointerNum>0) {
        come_value_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 587, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj158=come_value_494->c_value;
        come_value_494->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value445=make_type_name_string(left_value_481->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_481->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj159=come_value_494->type;
        come_value_494->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_481->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_494->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_494));
        add_come_last_code(info,"%s",come_value_494->c_value);
        come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_481));
    }
    __result297__ = (_Bool)1;
    come_call_finalizer3(left_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj152;
struct sNode* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj152=self->sname;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj153=self->mLeft;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj154;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj154=self->v1;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj160;
struct sNullableNode* __result298__;
    ((struct sNodeBase*)(__right_value448=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value448,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value450=__builtin_string("sNullableNode")));
    (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_495;
_Bool Value_496;
void* __right_value451 = (void*)0;
struct CVALUE* left_value_497;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_498;
_Bool __result302__;
    left_495=self->mLeft;
    Value_496=node_compile(left_495,info);
    if(    !Value_496) {
        return (_Bool)0;
    }
    else {
    }
    left_value_497=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_497->type->mPointerNum>0&&left_value_497->type->mNullValue) {
        come_value_498=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, left_value_497));
        come_value_498->type->mNullValue=(_Bool)0;
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
        add_come_last_code(info,"%s",come_value_498->c_value);
        come_call_finalizer3(come_value_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_497));
    }
    __result302__ = (_Bool)1;
    come_call_finalizer3(left_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj161;
struct sNode* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj162=self->mLeft;
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result300__;
void* __right_value452 = (void*)0;
struct CVALUE* result_499;
void* __right_value453 = (void*)0;
char* __dec_obj163;
void* __right_value454 = (void*)0;
struct sType* __dec_obj164;
void* __right_value455 = (void*)0;
char* __dec_obj165;
void* __right_value456 = (void*)0;
char* __dec_obj166;
struct CVALUE* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_499=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj163=result_499->c_value;
        result_499->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj164=result_499->type;
        result_499->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_499->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj165=result_499->c_value_without_right_value_objects;
        result_499->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj166=result_499->c_value_without_cast_object_value;
        result_499->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_499;
    come_call_finalizer3(result_499,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value463 = (void*)0;
struct sNode* __result305__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 649, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value459=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 649, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value463=_inf_value1));
    come_call_finalizer3(__right_value459,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value463) ? __right_value463 = come_decrement_ref_count2(__right_value463, ((struct sNode*)__right_value463)->finalize, ((struct sNode*)__right_value463)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result303__;
void* __right_value460 = (void*)0;
struct sNullableNode* result_500;
void* __right_value461 = (void*)0;
char* __dec_obj167;
void* __right_value462 = (void*)0;
struct sNode* __dec_obj168;
struct sNullableNode* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_500=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_500->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj167=result_500->sname;
        result_500->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_500->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj168=result_500->mLeft;
        result_500->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_500;
    come_call_finalizer3(result_500,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value466 = (void*)0;
char* __dec_obj170;
struct sLoadFieldNode* __result306__;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value464,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj169=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj170=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value467 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value467=__builtin_string("sLoadFieldNode")));
    (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_501;
void* __right_value468 = (void*)0;
char* name_502;
_Bool Value_503;
_Bool __result308__;
void* __right_value469 = (void*)0;
struct CVALUE* left_value_504;
struct sType* left_type2_505;
struct sType* __dec_obj174;
struct sType* __dec_obj175;
int i_506;
void* __right_value470 = (void*)0;
_Bool _if_conditional18;
void* __right_value471 = (void*)0;
char* __dec_obj176;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj177;
struct sType* left_type_507;
void* __right_value474 = (void*)0;
struct sType* left_type2_508;
struct sClass* klass_509;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* field_type_510;
int index_511;
_Bool child_field_is_pointer_512;
char* child_field_name_513;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var21 = (void*)0;
int come_exception_var_13_514=0;
char* Err_515=0;
_Bool _if_conditional19;
_Bool __result309__;
struct list$1voidph* o2_saved_516;
struct tuple2$2charphsTypeph* field_517;
struct tuple2$2charphsTypeph* multiple_assign_var22 = (void*)0;
char* field_name_518=0;
struct sType* field_type2_519=0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj178;
struct list$1voidph* o2_saved_520;
struct tuple2$2charphsTypeph* field_521;
struct tuple2$2charphsTypeph* multiple_assign_var23 = (void*)0;
char* field_name_522=0;
struct sType* field_type2_523=0;
struct sClass* klass2_524;
struct list$1voidph* o2_saved_525;
struct tuple2$2charphsTypeph* field2_526;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* field_name2_527=0;
struct sType* field_type3_528=0;
void* __right_value481 = (void*)0;
char* __dec_obj179;
void* __right_value482 = (void*)0;
struct sType* __dec_obj180;
void* __right_value483 = (void*)0;
struct sType* __dec_obj181;
void* __right_value484 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var25 = (void*)0;
int come_exception_var_14_529=0;
char* Err_530=0;
_Bool _if_conditional20;
_Bool __result310__;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value487 = (void*)0;
char* __dec_obj182;
void* __right_value488 = (void*)0;
char* __dec_obj183;
void* __right_value489 = (void*)0;
char* __dec_obj184;
void* __right_value490 = (void*)0;
char* __dec_obj185;
void* __right_value491 = (void*)0;
char* __dec_obj186;
void* __right_value492 = (void*)0;
char* __dec_obj187;
void* __right_value493 = (void*)0;
struct sType* __dec_obj188;
void* __right_value494 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var26 = (void*)0;
int come_exception_var_15_532=0;
char* Err_533=0;
_Bool _if_conditional21;
_Bool __result311__;
void* __right_value495 = (void*)0;
struct sType* __dec_obj189;
_Bool __result313__;
    left_501=self->mLeft;
    name_502=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_503=node_compile(left_501,info);
    if(    !Value_503) {
        __result308__ = (_Bool)0;
        (name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result308__;
    }
    else {
    }
    left_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_505=(struct sType*)come_increment_ref_count(left_value_504->type);
    if(    left_type2_505->mNoSolvedGenericsType) {
        __dec_obj174=left_type2_505;
        left_type2_505=(struct sType*)come_increment_ref_count(left_type2_505->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    left_type2_505->mAnyOriginalType) {
        __dec_obj175=left_type2_505;
        left_type2_505=(struct sType*)come_increment_ref_count(left_type2_505->mAnyOriginalType);
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_505->mClass->mName,"tuple1")||string_operator_equals(left_type2_505->mClass->mName,"tuple2")||string_operator_equals(left_type2_505->mClass->mName,"tuple3")||string_operator_equals(left_type2_505->mClass->mName,"tuple3")||string_operator_equals(left_type2_505->mClass->mName,"tuple4")||string_operator_equals(left_type2_505->mClass->mName,"tuple5")) {
        for(        i_506=0;        i_506<list$1voidphp_length(left_type2_505->mGenericsTypes);        i_506++        ){
            if(            (_if_conditional18=(string_operator_equals(name_502,((struct sType*)((void*)(__right_value470=list$1voidphp_operator_load_element(left_type2_505->mGenericsTypes,i_506))))->mTupleName))),            come_call_finalizer3(__right_value470,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional18) {
                __dec_obj176=name_502;
                name_502=(char*)come_increment_ref_count(xsprintf("v%d",i_506+1));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_504->type->mPointerNum>0) {
        __dec_obj177=left_value_504->c_value;
        left_value_504->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value472=make_type_name_string(left_value_504->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_504->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_507=left_value_504->type;
    come_call_finalizer3(left_type2_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_508=(struct sType*)come_increment_ref_count(solve_generics(left_type_507,left_type_507,info));
    klass_509=left_type2_508->mClass;
    klass_509=((struct sClass*)((void*)(__right_value476=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value475=__builtin_string(klass_509->mName)))))));
    (__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value476,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    field_type_510=((void*)0);
    index_511=0;
    child_field_is_pointer_512=(_Bool)0;
    child_field_name_513=((void*)0);
    klass_509=((struct sClass*)((void*)(__right_value478=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value477=__builtin_string(klass_509->mName)))))));
    (__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value478,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    klass_509==((void*)0)||klass_509->mFields==((void*)0)) {
        multiple_assign_var21=((struct tuple2$2intcharph*)(__right_value479=err_msg(info,"invalid class %s",klass_509->mName)));
        come_exception_var_13_514=multiple_assign_var21->v1;
        Err_515=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        if(        (_if_conditional19=(Err_515)),        come_call_finalizer3(__right_value479,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
            __result309__ = (_Bool)1;
            (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_513 = come_decrement_ref_count2(child_field_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result309__;
        }
        else {
        }
        (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_516=(struct list$1voidph*)come_increment_ref_count((klass_509->mFields)),field_517=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_516)));    !list$1voidphp_end((o2_saved_516));    field_517=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_516)))    ){
        multiple_assign_var22=field_517;
        field_name_518=(char*)come_increment_ref_count(multiple_assign_var22->v1);
        field_type2_519=(struct sType*)come_increment_ref_count(multiple_assign_var22->v2);
        if(        string_operator_equals(field_name_518,name_502)) {
            __dec_obj178=field_type_510;
            field_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_519));
            come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_518 = come_decrement_ref_count2(field_name_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_519,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_511++;
        (field_name_518 = come_decrement_ref_count2(field_name_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type2_519,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_516,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_511==list$1voidphp_length(klass_509->mFields)) {
        index_511=0;
        for(        o2_saved_520=(struct list$1voidph*)come_increment_ref_count((klass_509->mFields)),field_521=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_520)));        !list$1voidphp_end((o2_saved_520));        field_521=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_520)))        ){
            multiple_assign_var23=field_521;
            field_name_522=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type2_523=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            klass2_524=field_type2_523->mClass;
            for(            o2_saved_525=(struct list$1voidph*)come_increment_ref_count((klass2_524->mFields)),field2_526=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_525)));            !list$1voidphp_end((o2_saved_525));            field2_526=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_525)))            ){
                multiple_assign_var24=field2_526;
                field_name2_527=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                field_type3_528=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
                if(                string_operator_equals(field_name2_527,name_502)) {
                    __dec_obj179=child_field_name_513;
                    child_field_name_513=(char*)come_increment_ref_count(__builtin_string(field_name_522));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_523->mPointerNum>0) {
                        child_field_is_pointer_512=(_Bool)1;
                    }
                    __dec_obj180=field_type_510;
                    field_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type3_528));
                    come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name2_527 = come_decrement_ref_count2(field_name2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type3_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name2_527 = come_decrement_ref_count2(field_name2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type3_528,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_525,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_513) {
                (field_name_522 = come_decrement_ref_count2(field_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_522,name_502)) {
                __dec_obj181=field_type_510;
                field_type_510=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type2_523));
                come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_522 = come_decrement_ref_count2(field_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_511++;
            (field_name_522 = come_decrement_ref_count2(field_name_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_520,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_511==list$1voidphp_length(klass_509->mFields)) {
            multiple_assign_var25=((struct tuple2$2intcharph*)(__right_value484=err_msg(info,"field not found(%s) in %s(2)",name_502,klass_509->mName)));
            come_exception_var_14_529=multiple_assign_var25->v1;
            Err_530=(char*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            (_if_conditional20=(Err_530)),            come_call_finalizer3(__right_value484,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                __result310__ = (_Bool)1;
                (Err_530 = come_decrement_ref_count2(Err_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(left_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                (child_field_name_513 = come_decrement_ref_count2(child_field_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result310__;
            }
            else {
            }
            (Err_530 = come_decrement_ref_count2(Err_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_531=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 768, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    left_value_504->type->mPointerNum>0) {
        if(        child_field_name_513) {
            if(            child_field_is_pointer_512) {
                __dec_obj182=come_value_531->c_value;
                come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_504->c_value,child_field_name_513,name_502));
                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj183=come_value_531->c_value;
                come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_504->c_value,child_field_name_513,name_502));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj184=come_value_531->c_value;
            come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_504->c_value,name_502));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_513) {
            if(            child_field_is_pointer_512) {
                __dec_obj185=come_value_531->c_value;
                come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_504->c_value,child_field_name_513,name_502));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj186=come_value_531->c_value;
                come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_504->c_value,child_field_name_513,name_502));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj187=come_value_531->c_value;
            come_value_531->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_504->c_value,name_502));
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj188=come_value_531->type;
    come_value_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, field_type_510));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_531->var=((void*)0);
    if(    field_type_510==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2intcharph*)(__right_value494=err_msg(info,"no field(%s)\n",name_502)));
        come_exception_var_15_532=multiple_assign_var26->v1;
        Err_533=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional21=(Err_533)),        come_call_finalizer3(__right_value494,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional21) {
            __result311__ = (_Bool)1;
            (Err_533 = come_decrement_ref_count2(Err_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
            (child_field_name_513 = come_decrement_ref_count2(child_field_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result311__;
        }
        else {
        }
        (Err_533 = come_decrement_ref_count2(Err_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    list$1sNodephp_length(come_value_531->type->mArrayNum)==1) {
        __dec_obj189=come_value_531->type->mOriginalLoadVarType;
        come_value_531->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_531->type));
        come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNodephp_reset(come_value_531->type->mArrayNum);
        come_value_531->type->mPointerNum++;
        come_value_531->type->mOriginalTypeNamePointerNum=come_value_531->type->mPointerNum;
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_531));
    __result313__ = (_Bool)1;
    (name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
    (child_field_name_513 = come_decrement_ref_count2(child_field_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
char* __dec_obj173;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj171=self->sname;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj172=self->mLeft;
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj173=self->mName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_534;
struct list_item$1sNodeph* prev_it_535;
struct list$1sNodeph* __result312__;
    it_534=self->head;
    while(it_534!=((void*)0)) {
        prev_it_535=it_534;
        it_534=it_534->next;
        come_call_finalizer3(prev_it_535,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value502 = (void*)0;
struct sNode* __result316__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 827, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value497=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 827, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value2));
    ((left) ? left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value497,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value502) ? __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result314__;
void* __right_value498 = (void*)0;
struct sLoadFieldNode* result_536;
void* __right_value499 = (void*)0;
char* __dec_obj190;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value501 = (void*)0;
char* __dec_obj192;
struct sLoadFieldNode* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_536=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_536->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result_536->sname;
        result_536->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_536->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj191=result_536->mLeft;
        result_536->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj192=result_536->mName;
        result_536->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_536;
    come_call_finalizer3(result_536,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value506 = (void*)0;
struct list$1sNodeph* __dec_obj195;
struct sStoreArrayNode* __result317__;
    ((struct sNodeBase*)(__right_value503=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value503,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj194=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, right));
    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj195=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj195,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mQuote=quote;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value507=__builtin_string("sStoreArrayNode")));
    (__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result318__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_537;
struct sNode* right_538;
struct list$1sNodeph* array_num_nodes_539;
_Bool Value_540;
_Bool __result319__;
void* __right_value508 = (void*)0;
struct CVALUE* left_value_541;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* __dec_obj200;
struct sType* left_type_542;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1CVALUEph* array_num_543;
struct list$1sNodeph* o2_saved_546;
struct sNode* it_549;
_Bool Value_552;
_Bool __result327__;
void* __right_value513 = (void*)0;
struct CVALUE* c_value_553;
char* fun_name_554;
void* __right_value514 = (void*)0;
struct tuple3$3charphsFunpsGenericsFunp* multiple_assign_var27 = (void*)0;
char* fun_name2_555=0;
struct sFun* operator_fun_556=0;
struct sGenericsFun* generics_fun_557=0;
_Bool Value_558;
_Bool __result328__;
void* __right_value515 = (void*)0;
struct CVALUE* right_value_559;
struct sType* right_type_560;
struct sClass* klass_561;
void* __right_value516 = (void*)0;
struct sType* type_562;
_Bool calling_fun_563;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_567;
int i_568;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* buf_581;
struct list$1CVALUEph* o2_saved_582;
struct CVALUE* it_585;
void* __right_value522 = (void*)0;
char* left_value_code_588;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_16_589=0;
char* Err_590=0;
_Bool _if_conditional22;
_Bool __result339__;
void* __right_value525 = (void*)0;
char* __dec_obj202;
void* __right_value526 = (void*)0;
char* __dec_obj203;
void* __right_value527 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_17_591=0;
char* Err_592=0;
_Bool _if_conditional23;
_Bool __result340__;
void* __right_value528 = (void*)0;
char* __dec_obj204;
void* __right_value529 = (void*)0;
char* __dec_obj205;
void* __right_value530 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var30 = (void*)0;
int come_exception_var_18_593=0;
char* Err_594=0;
_Bool _if_conditional24;
_Bool __result341__;
void* __right_value531 = (void*)0;
struct sType* result_type_595;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sNodeph* __dec_obj206;
struct sType* __dec_obj207;
_Bool __result342__;
memset(&calling_fun_563, 0, sizeof(_Bool));
    left_537=self->mLeft;
    right_538=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_539=self->mArrayNum;
    Value_540=node_compile(left_537,info);
    if(    !Value_540) {
        __result319__ = (_Bool)0;
        ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result319__;
    }
    else {
    }
    left_value_541=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_541->type->mPointerNum>0) {
        __dec_obj200=left_value_541->c_value;
        left_value_541->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value509=make_type_name_string(left_value_541->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_541->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_542=left_value_541->type;
    array_num_543=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 866, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_546=(array_num_nodes_539),it_549=list$1sNodephp_begin((o2_saved_546));    !list$1sNodephp_end((o2_saved_546));    it_549=list$1sNodephp_next((o2_saved_546))    ){
        Value_552=node_compile(it_549,info);
        if(        !Value_552) {
            __result327__ = (_Bool)0;
            ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result327__;
        }
        else {
        }
        c_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_543,(struct CVALUE*)come_increment_ref_count(c_value_553));
        come_call_finalizer3(c_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    fun_name_554="operator_store_element";
    multiple_assign_var27=((struct tuple3$3charphsFunpsGenericsFunp*)(__right_value514=get_operator_function(left_type_542,fun_name_554,info)));
    fun_name2_555=(char*)come_increment_ref_count(multiple_assign_var27->v1);
    operator_fun_556=multiple_assign_var27->v2;
    generics_fun_557=multiple_assign_var27->v3;
    come_call_finalizer3(__right_value514,tuple3$3charphsFunpsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    Value_558=node_compile(right_538,info);
    if(    !Value_558) {
        __result328__ = (_Bool)0;
        ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_555 = come_decrement_ref_count2(fun_name2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result328__;
    }
    else {
    }
    right_value_559=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_560=right_value_559->type;
    klass_561=left_value_541->type->mClass;
    type_562=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_541->type));
    if(    self->mQuote) {
        calling_fun_563=(_Bool)0;
    }
    else {
        calling_fun_563=operator_overload_fun2(type_562,fun_name_554,left_value_541,((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(array_num_543,0))),right_value_559,info);
        come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_563) {
        come_value_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 904, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1sNodephp_length(left_type_542->mArrayNum)>0) {
            for(            i_568=0;            i_568<list$1CVALUEphp_length(array_num_543);            i_568++            ){
                list$1sNodephp_delete(left_type_542->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_542->mPointerNum>0) {
            left_type_542->mPointerNum-=list$1CVALUEphp_length(array_num_543);
            if(            left_type_542->mPointerNum<0) {
                left_type_542->mPointerNum=0;
            }
        }
        buf_581=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 919, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_581,left_value_541->c_value);
        for(        o2_saved_582=(struct list$1CVALUEph*)come_increment_ref_count((array_num_543)),it_585=list$1CVALUEphp_begin((o2_saved_582));        !list$1CVALUEphp_end((o2_saved_582));        it_585=list$1CVALUEphp_next((o2_saved_582))        ){
            buffer_append_format(buf_581,"[%s]",it_585->c_value);
        }
        come_call_finalizer3(o2_saved_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_588=(char*)come_increment_ref_count(buffer_to_string(buf_581));
        multiple_assign_var28=((struct tuple2$2boolcharph*)(__right_value524=check_assign_type(((char*)(__right_value523=xsprintf("array is assinged to"))),left_type_542,right_type_560,right_value_559,(_Bool)0,(_Bool)1,(_Bool)0,info)));
        come_exception_var_16_589=multiple_assign_var28->v1;
        Err_590=(char*)come_increment_ref_count(multiple_assign_var28->v2);
        if(        (_if_conditional22=(Err_590)),        (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value524,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional22) {
            __result339__ = (_Bool)1;
            come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (left_value_code_588 = come_decrement_ref_count2(left_value_code_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name2_555 = come_decrement_ref_count2(fun_name2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(right_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result339__;
        }
        else {
        }
        if(        left_type_542->mHeap&&right_type_560->mHeap&&left_type_542->mPointerNum>0&&right_type_560->mPointerNum>0) {
            if(            left_value_541->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_542,left_value_code_588,info,(_Bool)0,(_Bool)0);
                std_move(left_type_542,right_type_560,right_value_559,info,(_Bool)0);
                __dec_obj202=come_value_567->c_value;
                come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_588,right_value_559->c_value));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_541->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_542,left_value_code_588,info,(_Bool)0,(_Bool)0);
                std_move(left_type_542,right_type_560,right_value_559,info,(_Bool)0);
                __dec_obj203=come_value_567->c_value;
                come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_588,right_value_559->c_value));
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value527=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_588,left_value_541->type->mPointerNum)));
                come_exception_var_17_591=multiple_assign_var29->v1;
                Err_592=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                if(                (_if_conditional23=(Err_592)),                come_call_finalizer3(__right_value527,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional23) {
                    __result340__ = (_Bool)1;
                    (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    (left_value_code_588 = come_decrement_ref_count2(left_value_code_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_555 = come_decrement_ref_count2(fun_name2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result340__;
                }
                else {
                }
                (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            if(            left_value_541->type->mPointerNum>=1) {
                __dec_obj204=come_value_567->c_value;
                come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_588,right_value_559->c_value));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_541->type->mPointerNum==0) {
                __dec_obj205=come_value_567->c_value;
                come_value_567->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_588,right_value_559->c_value));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple2$2intcharph*)(__right_value530=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_588,left_value_541->type->mPointerNum)));
                come_exception_var_18_593=multiple_assign_var30->v1;
                Err_594=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                if(                (_if_conditional24=(Err_594)),                come_call_finalizer3(__right_value530,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional24) {
                    __result341__ = (_Bool)1;
                    (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    (left_value_code_588 = come_decrement_ref_count2(left_value_code_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_555 = come_decrement_ref_count2(fun_name2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result341__;
                }
                else {
                }
                (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        result_type_595=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_542));
        __dec_obj206=result_type_595->mArrayNum;
        result_type_595->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 965, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj206,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj207=come_value_567->type;
        come_value_567->type=(struct sType*)come_increment_ref_count(result_type_595);
        come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_567->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_567));
        add_come_last_code(info,"%s",come_value_567->c_value);
        come_call_finalizer3(come_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_588 = come_decrement_ref_count2(left_value_code_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result342__ = (_Bool)1;
    ((right_538) ? right_538 = come_decrement_ref_count2(right_538, ((struct sNode*)right_538)->finalize, ((struct sNode*)right_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(left_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_555 = come_decrement_ref_count2(fun_name2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(right_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj196;
struct sNode* __dec_obj197;
struct sNode* __dec_obj198;
struct list$1sNodeph* __dec_obj199;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj196=self->sname;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj197=self->mLeft;
            if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj198=self->mRight;
            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mRight) ? self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj199=self->mArrayNum;
            come_call_finalizer3(__dec_obj199,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_544;
struct list_item$1CVALUEph* prev_it_545;
    it_544=self->head;
    while(it_544!=((void*)0)) {
        prev_it_545=it_544;
        it_544=it_544->next;
        come_call_finalizer3(prev_it_545,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj201;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj201=self->item;
            come_call_finalizer3(__dec_obj201,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_547;
struct sNode* __result321__;
struct sNode* __result322__;
struct sNode* result_548;
struct sNode* __result323__;
result_547 = (void*)0;
result_548 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_547,0,sizeof(struct sNode*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_547;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_548,0,sizeof(struct sNode*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_548;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_550;
struct sNode* __result324__;
struct sNode* __result325__;
struct sNode* result_551;
struct sNode* __result326__;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_550,0,sizeof(struct sNode*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_550;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_551,0,sizeof(struct sNode*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_551;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_564;
int i_565;
struct CVALUE* __result329__;
struct CVALUE* default_value_566;
struct CVALUE* __result330__;
default_value_566 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_564=self->head;
    i_565=0;
    while(it_564!=((void*)0)) {
        if(        position==i_565) {
            __result329__ = gComeFunResultObject = __result_obj__ = it_564->item;
            gComeFunResultObject = (void*)0;
            return __result329__;
        }
        it_564=it_564->next;
        i_565++;
    }
    memset(&default_value_566,0,sizeof(struct CVALUE*));
    __result330__ = gComeFunResultObject = __result_obj__ = default_value_566;
    come_call_finalizer3(default_value_566,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_569;
struct list$1sNodeph* __result331__;
struct list_item$1sNodeph* it_570;
int i_571;
struct list_item$1sNodeph* prev_it_572;
struct list_item$1sNodeph* it_573;
int i_574;
struct list_item$1sNodeph* prev_it_575;
struct list_item$1sNodeph* it_576;
struct list_item$1sNodeph* head_prev_it_577;
struct list_item$1sNodeph* tail_it_578;
int i_579;
struct list_item$1sNodeph* prev_it_580;
struct list$1sNodeph* __result332__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_569=tail;
        tail=head;
        head=tmp_569;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result331__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_570=self->head;
        i_571=0;
        while(it_570!=((void*)0)) {
            if(            i_571<tail) {
                prev_it_572=it_570;
                it_570=it_570->next;
                i_571++;
                come_call_finalizer3(prev_it_572,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_571==tail) {
                self->head=it_570;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_570=it_570->next;
                i_571++;
            }
        }
    }
    else if(    tail==self->len) {
        it_573=self->head;
        i_574=0;
        while(it_573!=((void*)0)) {
            if(            i_574==head) {
                self->tail=it_573->prev;
                self->tail->next=((void*)0);
            }
            if(            i_574>=head) {
                prev_it_575=it_573;
                it_573=it_573->next;
                i_574++;
                come_call_finalizer3(prev_it_575,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_573=it_573->next;
                i_574++;
            }
        }
    }
    else {
        it_576=self->head;
        head_prev_it_577=((void*)0);
        tail_it_578=((void*)0);
        i_579=0;
        while(it_576!=((void*)0)) {
            if(            i_579==head) {
                head_prev_it_577=it_576->prev;
            }
            if(            i_579==tail) {
                tail_it_578=it_576;
            }
            if(            i_579>=head&&i_579<tail) {
                prev_it_580=it_576;
                it_576=it_576->next;
                i_579++;
                come_call_finalizer3(prev_it_580,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_576=it_576->next;
                i_579++;
            }
        }
        if(        head_prev_it_577!=((void*)0)) {
            head_prev_it_577->next=tail_it_578;
        }
        if(        tail_it_578!=((void*)0)) {
            tail_it_578->prev=head_prev_it_577;
        }
    }
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_583;
struct CVALUE* __result333__;
struct CVALUE* __result334__;
struct CVALUE* result_584;
struct CVALUE* __result335__;
result_583 = (void*)0;
result_584 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_583,0,sizeof(struct CVALUE*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_583;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->head;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_584,0,sizeof(struct CVALUE*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_584;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_586;
struct CVALUE* __result336__;
struct CVALUE* __result337__;
struct CVALUE* result_587;
struct CVALUE* __result338__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_586,0,sizeof(struct CVALUE*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_587,0,sizeof(struct CVALUE*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1sNodeph* __dec_obj208;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj209;
struct sLoadArrayNode* __result343__;
    ((struct sNodeBase*)(__right_value534=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value534,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj208,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj209=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
char* __result344__;
    __result344__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value537=__builtin_string("sLoadArrayNode")));
    (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result344__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_596;
struct list$1sNodeph* array_num_nodes_597;
_Bool Value_598;
void* __right_value538 = (void*)0;
struct CVALUE* left_value_599;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* __dec_obj213;
void* __right_value541 = (void*)0;
struct sType* left_type_600;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1CVALUEph* array_num_601;
struct list$1sNodeph* o2_saved_602;
struct sNode* it_603;
_Bool Value_604;
_Bool __result345__;
void* __right_value544 = (void*)0;
struct CVALUE* c_value_605;
void* __right_value545 = (void*)0;
struct sType* type_606;
char* fun_name_607;
_Bool calling_fun_608;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_609;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct buffer* buf_610;
struct list$1CVALUEph* o2_saved_611;
struct CVALUE* it_612;
void* __right_value551 = (void*)0;
char* left_value_code_613;
void* __right_value552 = (void*)0;
char* __dec_obj214;
void* __right_value553 = (void*)0;
struct sType* result_type_614;
struct sType* __dec_obj215;
int n_615;
void* __right_value554 = (void*)0;
struct sType* __dec_obj216;
void* __right_value555 = (void*)0;
struct sType* __dec_obj217;
int i_616;
void* __right_value556 = (void*)0;
struct sType* __dec_obj218;
_Bool __result346__;
memset(&calling_fun_608, 0, sizeof(_Bool));
    left_596=self->mLeft;
    array_num_nodes_597=self->mArrayNum;
    Value_598=node_compile(left_596,info);
    if(    !Value_598) {
        return (_Bool)0;
    }
    else {
    }
    left_value_599=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_599->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj213=left_value_599->c_value;
        left_value_599->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value539=make_type_name_string(left_value_599->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),left_value_599->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    left_type_600=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_599->type));
    array_num_601=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1014, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_602=(array_num_nodes_597),it_603=list$1sNodephp_begin((o2_saved_602));    !list$1sNodephp_end((o2_saved_602));    it_603=list$1sNodephp_next((o2_saved_602))    ){
        Value_604=node_compile(it_603,info);
        if(        !Value_604) {
            __result345__ = (_Bool)0;
            come_call_finalizer3(left_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result345__;
        }
        else {
        }
        c_value_605=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_601,(struct CVALUE*)come_increment_ref_count(c_value_605));
        come_call_finalizer3(c_value_605,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_606=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_599->type));
    fun_name_607="operator_load_element";
    if(    self->mQuote) {
        calling_fun_608=(_Bool)0;
    }
    else {
        calling_fun_608=operator_overload_fun(type_606,fun_name_607,left_value_599,((struct CVALUE*)(__right_value546=list$1CVALUEphp_operator_load_element(array_num_601,0))),self->mBreakGuard,info);
        come_call_finalizer3(__right_value546,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_608) {
        come_value_609=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1039, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1041, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_610,left_value_599->c_value);
        for(        o2_saved_611=(struct list$1CVALUEph*)come_increment_ref_count((array_num_601)),it_612=list$1CVALUEphp_begin((o2_saved_611));        !list$1CVALUEphp_end((o2_saved_611));        it_612=list$1CVALUEphp_next((o2_saved_611))        ){
            buffer_append_format(buf_610,"[%s]",it_612->c_value);
        }
        come_call_finalizer3(o2_saved_611,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_613=(char*)come_increment_ref_count(buffer_to_string(buf_610));
        __dec_obj214=come_value_609->c_value;
        come_value_609->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_613));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_614=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_600));
        if(        result_type_614->mOriginalLoadVarType) {
            __dec_obj215=result_type_614;
            result_type_614=(struct sType*)come_increment_ref_count(result_type_614->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj215,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNodephp_length(result_type_614->mArrayNum)>0) {
            n_615=list$1sNodephp_length(result_type_614->mArrayNum)-list$1CVALUEphp_length(array_num_601);
            if(            n_615==0) {
                __dec_obj216=result_type_614;
                result_type_614=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_600));
                come_call_finalizer3(__dec_obj216,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_600->mOriginalLoadVarType) {
                    __dec_obj217=result_type_614;
                    result_type_614=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_600->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj217,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNodephp_reset(result_type_614->mArrayNum);
            }
            else if(            n_615>0) {
                for(                i_616=0;                i_616<n_615;                i_616++                ){
                    list$1sNodephp_delete(result_type_614->mArrayNum,-1,-1);
                }
            }
            else if(            n_615<0) {
                list$1sNodephp_reset(result_type_614->mArrayNum);
                result_type_614->mPointerNum+=n_615;
                if(                result_type_614->mPointerNum<0) {
                    result_type_614->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_614->mPointerNum>0) {
                result_type_614->mPointerNum-=list$1CVALUEphp_length(array_num_601);
                if(                result_type_614->mPointerNum<0) {
                    result_type_614->mPointerNum=0;
                }
            }
        }
        __dec_obj218=come_value_609->type;
        come_value_609->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_614));
        come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_609->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_609));
        add_come_last_code(info,"%s",come_value_609->c_value);
        come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_613 = come_decrement_ref_count2(left_value_code_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result346__ = (_Bool)1;
    come_call_finalizer3(left_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result346__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj210;
struct list$1sNodeph* __dec_obj211;
struct sNode* __dec_obj212;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj210=self->sname;
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj211=self->mArrayNum;
            come_call_finalizer3(__dec_obj211,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj212=self->mLeft;
            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sNodeph* __dec_obj219;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj220;
struct sLoadRangeArrayNode* __result347__;
    ((struct sNodeBase*)(__right_value557=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value557,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj219=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, array_num));
    come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj220=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, left));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
char* __result348__;
    __result348__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value560=__builtin_string("sLoadRangeArrayNode")));
    (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result348__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_617;
struct list$1sNodeph* array_num_nodes_618;
_Bool Value_619;
void* __right_value561 = (void*)0;
struct CVALUE* left_value_620;
void* __right_value562 = (void*)0;
struct sType* left_type_621;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1CVALUEph* array_num_622;
struct list$1sNodeph* o2_saved_623;
struct sNode* it_624;
_Bool Value_625;
_Bool __result349__;
void* __right_value565 = (void*)0;
struct CVALUE* c_value_626;
void* __right_value566 = (void*)0;
struct sType* type_627;
char* fun_name_628;
_Bool calling_fun_629;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct CVALUE* come_value_630;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_631;
struct list$1CVALUEph* o2_saved_632;
struct CVALUE* it_633;
void* __right_value573 = (void*)0;
char* left_value_code_634;
void* __right_value574 = (void*)0;
char* __dec_obj224;
void* __right_value575 = (void*)0;
struct sType* result_type_635;
struct sType* __dec_obj225;
int n_636;
void* __right_value576 = (void*)0;
struct sType* __dec_obj226;
void* __right_value577 = (void*)0;
struct sType* __dec_obj227;
int i_637;
void* __right_value578 = (void*)0;
struct sType* __dec_obj228;
_Bool __result350__;
memset(&calling_fun_629, 0, sizeof(_Bool));
    left_617=self->mLeft;
    array_num_nodes_618=self->mArrayNum;
    Value_619=node_compile(left_617,info);
    if(    !Value_619) {
        return (_Bool)0;
    }
    else {
    }
    left_value_620=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_621=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_620->type));
    array_num_622=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1136, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_623=(array_num_nodes_618),it_624=list$1sNodephp_begin((o2_saved_623));    !list$1sNodephp_end((o2_saved_623));    it_624=list$1sNodephp_next((o2_saved_623))    ){
        Value_625=node_compile(it_624,info);
        if(        !Value_625) {
            __result349__ = (_Bool)0;
            come_call_finalizer3(left_value_620,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_622,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result349__;
        }
        else {
        }
        c_value_626=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_622,(struct CVALUE*)come_increment_ref_count(c_value_626));
        come_call_finalizer3(c_value_626,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_627=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_value_620->type));
    fun_name_628="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_629=(_Bool)0;
    }
    else {
        calling_fun_629=operator_overload_fun2(type_627,fun_name_628,left_value_620,((struct CVALUE*)(__right_value567=list$1CVALUEphp_operator_load_element(array_num_622,0))),((struct CVALUE*)(__right_value568=list$1CVALUEphp_operator_load_element(array_num_622,1))),info);
        come_call_finalizer3(__right_value567,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_629) {
        come_value_630=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1161, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1163, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_631,left_value_620->c_value);
        for(        o2_saved_632=(struct list$1CVALUEph*)come_increment_ref_count((array_num_622)),it_633=list$1CVALUEphp_begin((o2_saved_632));        !list$1CVALUEphp_end((o2_saved_632));        it_633=list$1CVALUEphp_next((o2_saved_632))        ){
            buffer_append_format(buf_631,"[%s]",it_633->c_value);
        }
        come_call_finalizer3(o2_saved_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_634=(char*)come_increment_ref_count(buffer_to_string(buf_631));
        __dec_obj224=come_value_630->c_value;
        come_value_630->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_634));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_621));
        if(        result_type_635->mOriginalLoadVarType) {
            __dec_obj225=result_type_635;
            result_type_635=(struct sType*)come_increment_ref_count(result_type_635->mOriginalLoadVarType);
            come_call_finalizer3(__dec_obj225,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNodephp_length(result_type_635->mArrayNum)>0) {
            n_636=list$1sNodephp_length(result_type_635->mArrayNum)-list$1CVALUEphp_length(array_num_622);
            if(            n_636==0) {
                __dec_obj226=result_type_635;
                result_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_621));
                come_call_finalizer3(__dec_obj226,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_621->mOriginalLoadVarType) {
                    __dec_obj227=result_type_635;
                    result_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_621->mOriginalLoadVarType));
                    come_call_finalizer3(__dec_obj227,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNodephp_reset(result_type_635->mArrayNum);
            }
            else if(            n_636>0) {
                for(                i_637=0;                i_637<n_636;                i_637++                ){
                    list$1sNodephp_delete(result_type_635->mArrayNum,-1,-1);
                }
            }
            else if(            n_636<0) {
                list$1sNodephp_reset(result_type_635->mArrayNum);
                result_type_635->mPointerNum+=n_636;
                if(                result_type_635->mPointerNum<0) {
                    result_type_635->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_635->mPointerNum>0) {
                result_type_635->mPointerNum-=list$1CVALUEphp_length(array_num_622);
                if(                result_type_635->mPointerNum<0) {
                    result_type_635->mPointerNum=0;
                }
            }
        }
        __dec_obj228=come_value_630->type;
        come_value_630->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_635));
        come_call_finalizer3(__dec_obj228,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_630->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_630));
        add_come_last_code(info,"%s",come_value_630->c_value);
        come_call_finalizer3(come_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (left_value_code_634 = come_decrement_ref_count2(left_value_code_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result350__ = (_Bool)1;
    come_call_finalizer3(left_value_620,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_622,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result350__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj221;
struct list$1sNodeph* __dec_obj222;
struct sNode* __dec_obj223;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj222=self->mArrayNum;
            come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj223=self->mLeft;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mLeft) ? self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value579 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var31 = (void*)0;
int come_exception_var_c2_638=0;
char* Err_639=0;
struct sNode* __result351__;
    multiple_assign_var31=((struct tuple2$2intcharph*)(__right_value579=err_msg(info,"parse_method_call is failed")));
    come_exception_var_c2_638=multiple_assign_var31->v1;
    Err_639=(char*)come_increment_ref_count(multiple_assign_var31->v2);
    ((Err_639)?(puts(Err_639),exit(0)):(0));
    come_call_finalizer3(__right_value579,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    exit(2);
    __result351__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (Err_639 = come_decrement_ref_count2(Err_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result351__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value587 = (void*)0;
struct sNode* __result354__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1237, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value581=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1237, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result354__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value587=_inf_value3));
    ((right) ? right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value581,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value587) ? __right_value587 = come_decrement_ref_count2(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result352__;
void* __right_value582 = (void*)0;
struct sStoreFieldNode* result_640;
void* __right_value583 = (void*)0;
char* __dec_obj229;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value586 = (void*)0;
char* __dec_obj232;
struct sStoreFieldNode* __result353__;
    if(    self==(void*)0) {
        __result352__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    result_640=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj230=result_640->mLeft;
        result_640->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj231=result_640->mRight;
        result_640->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj232=result_640->mName;
        result_640->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_641;
char* p_642;
int sline_643;
_Bool no_comma_644;
_Bool no_output_err_645;
_Bool no_output_come_code_646;
void* __right_value588 = (void*)0;
struct sNode* exp_647;
_Bool quote_648;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1sNodeph* array_num_649;
void* __right_value591 = (void*)0;
struct sNode* node2_650;
void* __right_value595 = (void*)0;
struct sNode* node3_654;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value602 = (void*)0;
struct sNode* __dec_obj239;
_Bool quote_656;
_Bool range_657;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1sNodeph* array_num_658;
_Bool range_array2_659;
char* p_660;
int sline_661;
_Bool no_comma_662;
_Bool no_output_err_663;
_Bool no_output_come_code_664;
void* __right_value605 = (void*)0;
struct sNode* exp_665;
void* __right_value606 = (void*)0;
struct sNode* node2_666;
void* __right_value607 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var32 = (void*)0;
int come_exception_var_c3_667=0;
char* Err_668=0;
_Bool break_guard_669;
void* __right_value608 = (void*)0;
struct sNode* right_node_670;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj244;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value623 = (void*)0;
struct sNode* __dec_obj248;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value629 = (void*)0;
struct sNode* __dec_obj251;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value632 = (void*)0;
struct sNode* __dec_obj252;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sNode* __dec_obj253;
void* __right_value635 = (void*)0;
char* field_name_674;
_Bool parse_method_generics_type_675;
char* p_676;
int sline_677;
void* __right_value636 = (void*)0;
char* word_678;
void* __right_value637 = (void*)0;
struct sNode* right_node_679;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value640 = (void*)0;
struct sNode* __dec_obj254;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sNode* __dec_obj256;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* __dec_obj258;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* __dec_obj259;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sNode* __dec_obj260;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj263;
void* __right_value660 = (void*)0;
struct sNode* node2_680;
struct sNode* __dec_obj264;
struct sNode* __result364__;
    while((_Bool)1) {
        range_array_641=(_Bool)0;
        {
            p_642=info->p;
            sline_643=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_644=info->no_comma;
                no_output_err_645=info->no_output_err;
                no_output_come_code_646=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_647=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_644;
                info->no_output_err=no_output_err_645;
                info->no_output_come_code=no_output_come_code_646;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_641=(_Bool)1;
                }
                ((exp_647) ? exp_647 = come_decrement_ref_count2(exp_647, ((struct sNode*)exp_647)->finalize, ((struct sNode*)exp_647)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            info->p=p_642;
            info->sline=sline_643;
        }
        if(        range_array_641&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_648=*info->p==92;
            if(            quote_648) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_649=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1281, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            skip_pointer_attribute(info);
            node2_650=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodephp_push_back(array_num_649,(struct sNode*)come_increment_ref_count(node2_650));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_654=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(array_num_649,(struct sNode*)come_increment_ref_count(node3_654));
                expected_next_character(93,info);
                ((node3_654) ? node3_654 = come_decrement_ref_count2(node3_654, ((struct sNode*)node3_654)->finalize, ((struct sNode*)node3_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1302, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value597=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1302, "struct sLoadRangeArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_649),quote_648,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj239=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value597,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_649,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            ((node2_650) ? node2_650 = come_decrement_ref_count2(node2_650, ((struct sNode*)node2_650)->finalize, ((struct sNode*)node2_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        !range_array_641&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_656=*info->p==92;
            if(            quote_656) {
                info->p++;
            }
            range_657=(_Bool)0;
            array_num_658=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1311, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while(1) {
                range_array2_659=(_Bool)0;
                {
                    p_660=info->p;
                    sline_661=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_662=info->no_comma;
                        no_output_err_663=info->no_output_err;
                        no_output_come_code_664=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_665=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_662;
                        info->no_output_err=no_output_err_663;
                        info->no_output_come_code=no_output_come_code_664;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_659=(_Bool)1;
                        }
                        ((exp_665) ? exp_665 = come_decrement_ref_count2(exp_665, ((struct sNode*)exp_665)->finalize, ((struct sNode*)exp_665)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                    info->p=p_660;
                    info->sline=sline_661;
                }
                if(                range_array2_659) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_666=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_push_back(array_num_658,(struct sNode*)come_increment_ref_count(node2_666));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var32=((struct tuple2$2intcharph*)(__right_value607=err_msg(info,"require ] character")));
                        come_exception_var_c3_667=multiple_assign_var32->v1;
                        Err_668=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                        ((Err_668)?(puts(Err_668),exit(0)):(0));
                        come_call_finalizer3(__right_value607,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_668 = come_decrement_ref_count2(Err_668, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_666) ? node2_666 = come_decrement_ref_count2(node2_666, ((struct sNode*)node2_666)->finalize, ((struct sNode*)node2_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    break;
                }
            }
            break_guard_669=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_669=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_670=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1386, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value610=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1386, "struct sStoreArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_670),(struct list$1sNodeph*)come_increment_ref_count(array_num_658),quote_656,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj244=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value610,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((right_node_670) ? right_node_670 = come_decrement_ref_count2(right_node_670, ((struct sNode*)right_node_670)->finalize, ((struct sNode*)right_node_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1389, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value618=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1389, "struct sLoadArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_658),quote_656,break_guard_669,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj248=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value618,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_658,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1419, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value625=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1419, "struct sNullCheckNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj251=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value625,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1427, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value631=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1427, "struct sNullableNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj252=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value631,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj253=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_674=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_675=(_Bool)0;
            {
                p_676=info->p;
                sline_677=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_678=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_678,info)) {
                            parse_method_generics_type_675=(_Bool)1;
                        }
                        (word_678 = come_decrement_ref_count2(word_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                info->p=p_676;
                info->sline=sline_677;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_679=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1483, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value639=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1483, "struct sStoreFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(struct sNode*)come_increment_ref_count(right_node_679),(char*)come_increment_ref_count(field_name_674),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj254=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value639,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((right_node_679) ? right_node_679 = come_decrement_ref_count2(right_node_679, ((struct sNode*)right_node_679)->finalize, ((struct sNode*)right_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_674,"exception_throw")||string_operator_equals(field_name_674,"exception_value")||parse_method_generics_type_675||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_674,"if")) {
                    __dec_obj255=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"elif")) {
                    __dec_obj256=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"case")) {
                    __dec_obj257=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"less")) {
                    __dec_obj258=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"rescue")) {
                    __dec_obj259=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"exception_throw")) {
                    __dec_obj260=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_674,"exception_value")) {
                    __dec_obj261=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
                    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    __dec_obj262=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),(char*)come_increment_ref_count(field_name_674),info));
                    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1515, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value658=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1515, "struct sLoadFieldNode*", (void*)0, (void*)0, (void*)0, (void*)0)),node,(char*)come_increment_ref_count(field_name_674),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj263=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value658,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            (field_name_674 = come_decrement_ref_count2(field_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            node2_680=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_680==((void*)0)) {
                ((node2_680) ? node2_680 = come_decrement_ref_count2(node2_680, ((struct sNode*)node2_680)->finalize, ((struct sNode*)node2_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                break;
            }
            __dec_obj264=node;
            node=(struct sNode*)come_increment_ref_count(node2_680);
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
            ((node2_680) ? node2_680 = come_decrement_ref_count2(node2_680, ((struct sNode*)node2_680)->finalize, ((struct sNode*)node2_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    __result364__ = gComeFunResultObject = __result_obj__ = node;
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
struct list_item$1sNodeph* litem_651;
struct sNode* __dec_obj233;
void* __right_value593 = (void*)0;
struct list_item$1sNodeph* litem_652;
struct sNode* __dec_obj234;
void* __right_value594 = (void*)0;
struct list_item$1sNodeph* litem_653;
struct sNode* __dec_obj235;
struct list$1sNodeph* __result355__;
    if(    self->len==0) {
        litem_651=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value592=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_651->prev=((void*)0);
        litem_651->next=((void*)0);
        __dec_obj233=litem_651->item;
        litem_651->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_651;
        self->head=litem_651;
    }
    else if(    self->len==1) {
        litem_652=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value593=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_652->prev=self->head;
        litem_652->next=((void*)0);
        __dec_obj234=litem_652->item;
        litem_652->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_652;
        self->head->next=litem_652;
    }
    else {
        litem_653=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value594=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_653->prev=self->tail;
        litem_653->next=((void*)0);
        __dec_obj235=litem_653->item;
        litem_653->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_653;
        self->tail=litem_653;
    }
    self->len++;
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result356__;
void* __right_value598 = (void*)0;
struct sLoadRangeArrayNode* result_655;
void* __right_value599 = (void*)0;
char* __dec_obj236;
void* __right_value600 = (void*)0;
struct list$1sNodeph* __dec_obj237;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj238;
struct sLoadRangeArrayNode* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_655=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj237=result_655->mArrayNum;
        result_655->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj237,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj238=result_655->mLeft;
        result_655->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_655->mQuote=self->mQuote;
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result358__;
void* __right_value611 = (void*)0;
struct sStoreArrayNode* result_671;
void* __right_value612 = (void*)0;
char* __dec_obj240;
void* __right_value613 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj242;
void* __right_value615 = (void*)0;
struct list$1sNodeph* __dec_obj243;
struct sStoreArrayNode* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_671=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_671->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_671->sname;
        result_671->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj241=result_671->mLeft;
        result_671->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj242=result_671->mRight;
        result_671->mRight=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mRight));
        if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj243=result_671->mArrayNum;
        result_671->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj243,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->mQuote=self->mQuote;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_671;
    come_call_finalizer3(result_671,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result360__;
void* __right_value619 = (void*)0;
struct sLoadArrayNode* result_672;
void* __right_value620 = (void*)0;
char* __dec_obj245;
void* __right_value621 = (void*)0;
struct list$1sNodeph* __dec_obj246;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj247;
struct sLoadArrayNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_672=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_672->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_672->sname;
        result_672->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_672->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj246=result_672->mArrayNum;
        result_672->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj246,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_672->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj247=result_672->mLeft;
        result_672->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_672->mQuote=self->mQuote;
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_672;
    come_call_finalizer3(result_672,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result362__;
void* __right_value626 = (void*)0;
struct sNullCheckNode* result_673;
void* __right_value627 = (void*)0;
char* __dec_obj249;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj250;
struct sNullCheckNode* __result363__;
    if(    self==(void*)0) {
        __result362__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    result_673=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_673->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_673->sname;
        result_673->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_673->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj250=result_673->mLeft;
        result_673->mLeft=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mLeft));
        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_673->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result363__ = gComeFunResultObject = __result_obj__ = result_673;
    come_call_finalizer3(result_673,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

