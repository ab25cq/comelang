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

struct tuple4$4list$1voidphplist$1charphplist$1charphpbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self);
static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self);
static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_153;
    result_153=0;
    result_153+=int_get_hash_key(((int)self->buf));
    result_153+=int_get_hash_key(((int)self->len));
    result_153+=int_get_hash_key(((int)self->size));
    return result_153;
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value252 = (void*)0;
struct sClass* klass_317;
void* __right_value253 = (void*)0;
struct sType* type_321;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sClass* generics_class_322;
void* __right_value256 = (void*)0;
_Bool generics_type_name_323;
void* __right_value257 = (void*)0;
_Bool mgenerics_type_name_329;
    klass_317=((struct sClass*)((void*)(__right_value252=map$2voidphvoidphp_operator_load_element(info->classes,buf))));
    come_call_finalizer3(__right_value252,(void*)0, 0, 1, 0, 0, (void*)0);
    type_321=((struct sType*)((void*)(__right_value253=map$2voidphvoidphp_operator_load_element(info->types,buf))));
    come_call_finalizer3(__right_value253,(void*)0, 0, 1, 0, 0, (void*)0);
    generics_class_322=((struct sClass*)((void*)(__right_value255=map$2voidphvoidphp_operator_load_element(info->generics_classes,((char*)(__right_value254=__builtin_string(buf)))))));
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value255,(void*)0, 0, 1, 0, 0, (void*)0);
    generics_type_name_323=list$1charphp_contained(info->generics_type_names,((char*)(__right_value256=__builtin_string(buf))));
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_329=list$1charphp_contained(info->method_generics_type_names,((char*)(__right_value257=__builtin_string(buf))));
    __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_321&&type_321->mTypedef)||(klass_317&&klass_317->mNumber)||(klass_317&&klass_317->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_322||generics_type_name_323||mgenerics_type_name_329||klass_317||type_321||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_318;
unsigned int hash_319;
unsigned int it_320;
void* __result230__;
void* __result231__;
void* __result232__;
void* __result233__;
default_value_318 = (void*)0;
    memset(&default_value_318,0,sizeof(void*));
    hash_319=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_320=hash_319;
    while((_Bool)1) {
        if(        self->item_existance[it_320]) {
            if(            come_call_equals((void*)0, self->keys[it_320], ((char*)key))) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_320];
                come_call_finalizer3(default_value_318, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_320++;
            if(            it_320>=self->size) {
                it_320=0;
            }
            else if(            it_320==hash_319) {
                __result231__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
                come_call_finalizer3(default_value_318, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
            come_call_finalizer3(default_value_318, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_318);
    come_call_finalizer3(default_value_318, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_326;
    for(    it_326=list$1charphp_begin(self);    !list$1charphp_end(self);    it_326=list$1charphp_next(self)    ){
        if(        string_equals(it_326,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_324;
char* __result234__;
char* __result235__;
char* result_325;
char* __result236__;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_324,0,sizeof(char*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_324;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->head;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_325,0,sizeof(char*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_325;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_327;
char* __result237__;
char* __result238__;
char* result_328;
char* __result239__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_327,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_328,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

void skip_paren(struct sInfo* info){
int nest_330;
    nest_330=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_330++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_330--;
            if(            nest_330==0) {
                break;
            }
        }
        else if(        *info->p==0) {
            err_msg(info,"invalid the source end. require )");
            break;
        }
        else {
            info->p++;
        }
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_331;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_331=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_331==59||c_331==32||c_331==9||c_331==10||c_331==10||c_331==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct buffer* buf_332;
void* __right_value260 = (void*)0;
_Bool _if_conditional1;
void* __right_value261 = (void*)0;
char* __result240__;
void* __right_value262 = (void*)0;
char* result_333;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
_Bool _if_conditional2;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
char* __result241__;
char* __result242__;
    buf_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_332,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value260=buffer_to_string(buf_332))))==0)),    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("")));
        come_call_finalizer3(buf_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_333=(char*)come_increment_ref_count(buffer_to_string(buf_332));
    if(    (_if_conditional2=(info->module_params&&((char*)((void*)(__right_value264=map$2voidphvoidphp_operator_load_element(info->module_params,((char*)(__right_value263=__builtin_string(result_333))))))))),    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    come_call_finalizer3(__right_value264,(void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value267=__builtin_string(((char*)((void*)(__right_value266=map$2voidphvoidphp_operator_load_element(info->module_params,((char*)(__right_value265=__builtin_string(result_333))))))))));
        come_call_finalizer3(buf_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_333 = come_decrement_ref_count2(result_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value266,(void*)0, 0, 1, 0, 0, __result_obj__);
        __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(buf_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_333 = come_decrement_ref_count2(result_333, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_334;
int sline_335;
char* buf_336;
void* __right_value268 = (void*)0;
char* __dec_obj31;
void* __right_value269 = (void*)0;
char* __dec_obj32;
char* __result243__;
buf_336 = (void*)0;
    p_334=info->p;
    sline_335=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj31=buf_336;
        buf_336=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj32=buf_336;
        buf_336=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_334;
    info->sline=sline_335;
    __result243__ = gComeFunResultObject = __result_obj__ = buf_336;
    buf_336 = come_decrement_ref_count2(buf_336, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
}

void skip_spaces_and_lf2(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_337;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct buffer* fname_338;
void* __right_value272 = (void*)0;
char* __dec_obj33;
int nest_339;
    while(1) {
        if(        *info->p==35) {
            skip_spaces_and_lf2(info);
            info->p++;
            skip_spaces_and_lf2(info);
            if(            strmemcmp(info->p,"pragma")) {
                while(*info->p) {
                    if(                    *info->p==10) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(            xisdigit(*info->p)) {
                line_337=0;
                fname_338=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                while(xisdigit(*info->p)) {
                    line_337=line_337*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_338,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_337;
                __dec_obj33=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_338));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_338,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            skip_spaces_and_lf2(info);
        }
        else if(        *info->p==47&&*(info->p+1)==42) {
            nest_339=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_339++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_339--;
                    if(                    nest_339==0) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        *info->p==47&&*(info->p+1)==47) {
            info->p+=2;
            while(1) {
                if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2(info);
                    break;
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        strmemcmp(info->p,"__extension__")) {
            info->p+=strlen("__extension__");
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1voidph* o2_saved_340;
struct sType* it_343;
_Bool __result250__;
    for(    o2_saved_340=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_343=((struct sType*)list$1voidphp_begin((o2_saved_340)));    !list$1voidphp_end((o2_saved_340));    it_343=((struct sType*)list$1voidphp_next((o2_saved_340)))    ){
        if(        is_contained_generics_class(it_343,info)) {
            __result250__ = (_Bool)1;
            come_call_finalizer3(o2_saved_340,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result250__;
        }
    }
    come_call_finalizer3(o2_saved_340,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_341;
void* __result244__;
void* __result245__;
void* result_342;
void* __result246__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_341,0,sizeof(void*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->it=self->head;
    if(    self->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_342,0,sizeof(void*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_344;
void* __result247__;
void* __result248__;
void* result_345;
void* __result249__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_344,0,sizeof(void*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_345,0,sizeof(void*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_346;
struct list_item$1voidph* prev_it_347;
    it_346=self->head;
    while(it_346!=((void*)0)) {
        prev_it_347=it_346;
        it_346=it_346->next;
        come_call_finalizer3(prev_it_347,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1voidph* param_types_351;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* param_names_356;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* param_default_parametors_357;
_Bool var_args_358;
void* __right_value284 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* type__362;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
_Bool void_param_386;
char* p_387;
int sline_388;
void* __right_value322 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_389=0;
char* param_name_390=0;
_Bool err_391=0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result274__;
void* __right_value326 = (void*)0;
struct sType* param_type2_394;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* p_398;
_Bool no_comma_399;
void* __right_value332 = (void*)0;
struct sNode* node_400;
char* p2_401;
void* __right_value333 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result279__;
    param_types_351=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 324, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    param_names_356=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals))));
    param_default_parametors_357=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 326, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals))));
    var_args_358=(_Bool)0;
    if(    in_constructor_) {
        list$1charphp_add(param_names_356,(char*)come_increment_ref_count(xsprintf("self")));
        type__362=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__362->mHeap=(_Bool)1;
        list$1voidphp_add(param_types_351,(struct sType*)come_increment_ref_count(type__362));
        list$1charphp_add(param_default_parametors_357,((void*)0));
        come_call_finalizer3(type__362,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charphp_add(param_names_356,(char*)come_increment_ref_count(xsprintf("self")));
        list$1voidphp_add(param_types_351,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charphp_add(param_default_parametors_357,((void*)0));
    }
    expected_next_character(40,info);
    void_param_386=(_Bool)0;
    {
        p_387=info->p;
        sline_388=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_386=(_Bool)1;
            }
        }
        info->p=p_387;
        info->sline=sline_388;
    }
    if(    void_param_386) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value322=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_389=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_390=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_391=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value322,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_391) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result274__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)(__right_value325=tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool**)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "05type.c", 388, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key, tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals)),(struct list$1voidph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_390 = come_decrement_ref_count2(param_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_351,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value325,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
            param_type2_394=(struct sType*)come_increment_ref_count(solve_generics(param_type_389,info->generics_type,info));
            param_type2_394->mFunctionParam=(_Bool)1;
            list$1voidphp_push_back(param_types_351,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_394)));
            list$1charphp_push_back(param_names_356,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_390)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_398=info->p;
                no_comma_399=info->no_comma;
                info->no_comma=(_Bool)1;
                node_400=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_399;
                p2_401=info->p;
                char buf_402[p2_401-p_398+1];
                memset(&buf_402, 0, sizeof(char)                *(p2_401-p_398+1)                );
                memcpy(buf_402,p_398,p2_401-p_398);
                buf_402[p2_401-p_398]=0;
                list$1charphp_push_back(param_default_parametors_357,(char*)come_increment_ref_count(__builtin_string(buf_402)));
                if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_357,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_358=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_390 = come_decrement_ref_count2(param_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_390 = come_decrement_ref_count2(param_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_390 = come_decrement_ref_count2(param_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value339=tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool**)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "05type.c", 448, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals)),(struct list$1voidph*)come_increment_ref_count(param_types_351),(struct list$1charph*)come_increment_ref_count(param_names_356),(struct list$1charph*)come_increment_ref_count(param_default_parametors_357),var_args_358)));
    come_call_finalizer3(param_types_351,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value339,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result251__;
void* __right_value273 = (void*)0;
struct list$1voidph* result_349;
struct list$1voidph* __result252__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_349=(struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "list$1voidph_clone", 3, "struct list$1voidph", list$1voidph_finalize, list$1voidph_clone, list$1voidph_get_hash_key, list$1voidph_equals));
    if(    self!=((void*)0)) {
        result_349->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_349->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_349->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_349->it=self->it;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void list$1voidph_finalize(struct list$1voidph* self){
}

static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self){
unsigned int result_348;
    result_348=0;
    result_348+=int_get_hash_key(((int)self->head));
    result_348+=int_get_hash_key(((int)self->tail));
    result_348+=int_get_hash_key(((int)self->len));
    result_348+=int_get_hash_key(((int)self->it));
    return result_348;
}

static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right){
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

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_350;
    result_350=0;
    result_350+=int_get_hash_key(((int)self->head));
    result_350+=int_get_hash_key(((int)self->tail));
    result_350+=int_get_hash_key(((int)self->len));
    result_350+=int_get_hash_key(((int)self->it));
    return result_350;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
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

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result253__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_352;
struct list_item$1charph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result254__;
void* __right_value276 = (void*)0;
struct list$1charph* result_355;
struct list$1charph* __result255__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_355=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals));
    if(    self!=((void*)0)) {
        result_355->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_355->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_355->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_355->it=self->it;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_355;
    come_call_finalizer3(result_355,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_354;
    result_354=0;
    result_354+=int_get_hash_key(((int)self->head));
    result_354+=int_get_hash_key(((int)self->tail));
    result_354+=int_get_hash_key(((int)self->len));
    result_354+=int_get_hash_key(((int)self->it));
    return result_354;
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

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result256__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_359;
char* __dec_obj35;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_360;
char* __dec_obj36;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_361;
char* __dec_obj37;
struct list$1charph* __result257__;
    if(    self->len==0) {
        litem_359=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj35=litem_359->item;
        litem_359->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj36=litem_360->item;
        litem_360->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj37=litem_361->item;
        litem_361->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result258__;
void* __right_value285 = (void*)0;
struct sType* result_372;
void* __right_value286 = (void*)0;
struct sType* __dec_obj56;
void* __right_value287 = (void*)0;
struct sType* __dec_obj57;
void* __right_value288 = (void*)0;
struct sType* __dec_obj58;
void* __right_value289 = (void*)0;
char* __dec_obj59;
void* __right_value290 = (void*)0;
char* __dec_obj60;
void* __right_value297 = (void*)0;
struct list$1voidph* __dec_obj64;
void* __right_value305 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value306 = (void*)0;
struct list$1voidph* __dec_obj69;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value311 = (void*)0;
struct sType* __dec_obj71;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value313 = (void*)0;
struct sType* __dec_obj73;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value315 = (void*)0;
char* __dec_obj75;
void* __right_value316 = (void*)0;
char* __dec_obj76;
void* __right_value317 = (void*)0;
char* __dec_obj77;
void* __right_value318 = (void*)0;
char* __dec_obj78;
struct sType* __result270__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_372=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_372->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_372->mNoSolvedGenericsType;
        result_372->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_372->mOriginalLoadVarType;
        result_372->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_372->mAnyOriginalType;
        result_372->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj59=result_372->mInterfaceName;
        result_372->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_372->mGenericsName;
        result_372->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_372->mGenericsTypes;
        result_372->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_372->mArrayNum;
        result_372->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_372->mParamTypes;
        result_372->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_372->mParamNames;
        result_372->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_372->mResultType;
        result_372->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_372->mAlignas;
        result_372->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_372->mChannelType;
        result_372->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_372->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_372->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_372->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_372->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_372->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_372->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_372->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_372->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_372->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_372->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_372->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_372->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_372->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_372->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_372->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_372->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_372->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_372->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_372->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_372->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_372->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_372->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_372->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_372->mSizeNum;
        result_372->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_372->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_372->mOriginalTypeName;
        result_372->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_372->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_372->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_372->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_372->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_372->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_372->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_372->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_372->mAsmName;
        result_372->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_372->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_372->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_372->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_372->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_372->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_372->mTupleName;
        result_372->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_372->mAttribute;
        result_372->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_372->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_372->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_372->mCreateVTable=self->mCreateVTable;
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_372;
    come_call_finalizer3(result_372,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj38;
struct sType* __dec_obj39;
struct sType* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
struct list$1voidph* __dec_obj43;
struct list$1sNodeph* __dec_obj44;
struct list$1voidph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
struct sType* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj43,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj46,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_363;
struct list_item$1sNodeph* prev_it_364;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        come_call_finalizer3(prev_it_364,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_365;
struct list_item$1sNodeph* prev_it_366;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        come_call_finalizer3(prev_it_366,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_367;
    result_367=0;
    result_367+=int_get_hash_key(((int)self->mClass));
    result_367+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_367+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_367+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_367+=int_get_hash_key(((int)self->mAnyClass));
    result_367+=int_get_hash_key(((int)self->mInterfaceName));
    result_367+=int_get_hash_key(((int)self->mGenericsName));
    result_367+=int_get_hash_key(((int)self->mGenericsTypes));
    result_367+=int_get_hash_key(((int)self->mArrayNum));
    result_367+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_367+=int_get_hash_key(((int)self->mParamTypes));
    result_367+=int_get_hash_key(((int)self->mParamNames));
    result_367+=int_get_hash_key(((int)self->mResultType));
    result_367+=int_get_hash_key(((int)self->mVarArgs));
    result_367+=int_get_hash_key(((int)self->mAlignas));
    result_367+=int_get_hash_key(((int)self->mChannelType));
    result_367+=int_get_hash_key(((int)self->mUnsigned));
    result_367+=int_get_hash_key(((int)self->mShort));
    result_367+=int_get_hash_key(((int)self->mLong));
    result_367+=int_get_hash_key(((int)self->mLongLong));
    result_367+=int_get_hash_key(((int)self->mConstant));
    result_367+=int_get_hash_key(((int)self->mAtomic));
    result_367+=int_get_hash_key(((int)self->mRegister));
    result_367+=int_get_hash_key(((int)self->mVolatile));
    result_367+=int_get_hash_key(((int)self->mStatic));
    result_367+=int_get_hash_key(((int)self->mUniq));
    result_367+=int_get_hash_key(((int)self->mRecord));
    result_367+=int_get_hash_key(((int)self->mExtern));
    result_367+=int_get_hash_key(((int)self->mRestrict));
    result_367+=int_get_hash_key(((int)self->mImmutable));
    result_367+=int_get_hash_key(((int)self->mHeap));
    result_367+=int_get_hash_key(((int)self->mChannel));
    result_367+=int_get_hash_key(((int)self->mNoHeap));
    result_367+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_367+=int_get_hash_key(((int)self->mException));
    result_367+=int_get_hash_key(((int)self->mPointerNum));
    result_367+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_367+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_367+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_367+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_367+=int_get_hash_key(((int)self->mSizeNum));
    result_367+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_367+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_367+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_367+=int_get_hash_key(((int)self->mFunctionParam));
    result_367+=int_get_hash_key(((int)self->mAllocaValue));
    result_367+=int_get_hash_key(((int)self->mGenericsStruct));
    result_367+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_367+=int_get_hash_key(((int)self->mInline));
    result_367+=int_get_hash_key(((int)self->mNullValue));
    result_367+=int_get_hash_key(((int)self->mGuardValue));
    result_367+=int_get_hash_key(((int)self->mAsmName));
    result_367+=int_get_hash_key(((int)self->mArrayPointerType));
    result_367+=int_get_hash_key(((int)self->mLambdaArray));
    result_367+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_367+=int_get_hash_key(((int)self->mTypedef));
    result_367+=int_get_hash_key(((int)self->mMultipleTypes));
    result_367+=int_get_hash_key(((int)self->mOriginIsArray));
    result_367+=int_get_hash_key(((int)self->mTupleName));
    result_367+=int_get_hash_key(((int)self->mAttribute));
    result_367+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_367+=int_get_hash_key(((int)self->mGenerate));
    result_367+=int_get_hash_key(((int)self->mCreateVTable));
    return result_367;
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_368;
struct list_item$1sNodeph* it2_369;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_368=left->head;
    it2_369=right->head;
    while(it_368!=((void*)0)) {
        if(        !sNode_equals(it_368->item,it2_369->item)) {
            return (_Bool)0;
        }
        it_368=it_368->next;
        it2_369=it2_369->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_370;
struct list_item$1charph* it2_371;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_370=left->head;
    it2_371=right->head;
    while(it_370!=((void*)0)) {
        if(        !string_equals(it_370->item,it2_371->item)) {
            return (_Bool)0;
        }
        it_370=it_370->next;
        it2_371=it2_371->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result259__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1voidph* result_373;
struct list_item$1voidph* it_374;
void* __right_value296 = (void*)0;
struct list$1voidph* __result261__;
    if(    self==((void*)0)) {
        __result259__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    result_373=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        list$1voidphp_add(result_373,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_374->item)));
        it_374=it_374->next;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_373;
    come_call_finalizer3(result_373,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1voidph* litem_375;
void* __dec_obj61;
void* __right_value294 = (void*)0;
struct list_item$1voidph* litem_376;
void* __dec_obj62;
void* __right_value295 = (void*)0;
struct list_item$1voidph* litem_377;
void* __dec_obj63;
struct list$1voidph* __result260__;
    if(    self->len==0) {
        litem_375=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value293=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj61=litem_375->item;
        litem_375->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value294=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj62=litem_376->item;
        litem_376->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value295=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj63=litem_377->item;
        litem_377->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result262__;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sNodeph* result_378;
struct list_item$1sNodeph* it_379;
void* __right_value304 = (void*)0;
struct list$1sNodeph* __result267__;
    if(    self==((void*)0)) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_378=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_379=self->head;
    while(it_379!=((void*)0)) {
        list$1sNodephp_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        it_379=it_379->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_378;
    come_call_finalizer3(result_378,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result263__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list_item$1sNodeph* litem_380;
struct sNode* __dec_obj65;
void* __right_value301 = (void*)0;
struct list_item$1sNodeph* litem_381;
struct sNode* __dec_obj66;
void* __right_value302 = (void*)0;
struct list_item$1sNodeph* litem_382;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result264__;
    if(    self->len==0) {
        litem_380=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value300=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj65=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value301=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj66=litem_381->item;
        litem_381->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value302=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj67=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result265__;
void* __right_value303 = (void*)0;
struct sNode* result_383;
struct sNode* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_383=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_383->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_383->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_383->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_383->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_383->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_383->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_383->kind=self->kind;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_383;
    come_call_finalizer2((void*)0, result_383, result_383 ? ((struct sNode*)result_383)->finalize:(void*)0, result_383 ? ((struct sNode*)result_383)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result268__;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1charph* result_384;
struct list_item$1charph* it_385;
void* __right_value309 = (void*)0;
struct list$1charph* __result269__;
    if(    self==((void*)0)) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_384=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_385=self->head;
    while(it_385!=((void*)0)) {
        list$1charphp_add(result_384,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_385->item)));
        it_385=it_385->next;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_384;
    come_call_finalizer3(result_384,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj79;
char* __dec_obj80;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj79=self->v1;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj80=self->v2;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result271__;
void* __right_value323 = (void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* result_393;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result272__;
    if(    self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_393=(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone", 3, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key, tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals));
    if(    self!=((void*)0)) {
        result_393->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_393->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_393->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_393->v4=self->v4;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_393;
    come_call_finalizer3(result_393,tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
unsigned int result_392;
    result_392=0;
    result_392+=int_get_hash_key(((int)self->v1));
    result_392+=int_get_hash_key(((int)self->v2));
    result_392+=int_get_hash_key(((int)self->v3));
    result_392+=int_get_hash_key(((int)self->v4));
    return result_392;
}

static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result273__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1voidph* litem_395;
void* __dec_obj81;
void* __right_value328 = (void*)0;
struct list_item$1voidph* litem_396;
void* __dec_obj82;
void* __right_value329 = (void*)0;
struct list_item$1voidph* litem_397;
void* __dec_obj83;
struct list$1voidph* __result275__;
    if(    self->len==0) {
        litem_395=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value327=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=((void*)0);
        litem_395->next=((void*)0);
        __dec_obj81=litem_395->item;
        litem_395->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_395;
        self->head=litem_395;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value328=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->head;
        litem_396->next=((void*)0);
        __dec_obj82=litem_396->item;
        litem_396->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_396;
        self->head->next=litem_396;
    }
    else {
        litem_397=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value329=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=self->tail;
        litem_397->next=((void*)0);
        __dec_obj83=litem_397->item;
        litem_397->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_397;
        self->tail=litem_397;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj84;
struct list$1charph* __dec_obj85;
struct list$1charph* __dec_obj86;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            come_call_finalizer3(__dec_obj84,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj86=self->v3;
            come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result276__;
void* __right_value334 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* result_404;
void* __right_value335 = (void*)0;
struct list$1voidph* __dec_obj87;
void* __right_value336 = (void*)0;
struct list$1charph* __dec_obj88;
void* __right_value337 = (void*)0;
struct list$1charph* __dec_obj89;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result277__;
    if(    self==(void*)0) {
        __result276__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_404=(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone", 3, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_404->v1;
        result_404->v1=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->v1));
        come_call_finalizer3(__dec_obj87,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_404->v2;
        result_404->v2=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v2));
        come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj89=result_404->v3;
        result_404->v3=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v3));
        come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_404->v4=self->v4;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_404;
    come_call_finalizer3(result_404,tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
unsigned int result_403;
    result_403=0;
    result_403+=int_get_hash_key(((int)self->v1));
    result_403+=int_get_hash_key(((int)self->v2));
    result_403+=int_get_hash_key(((int)self->v3));
    result_403+=int_get_hash_key(((int)self->v4));
    return result_403;
}

static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1voidph* __dec_obj90;
struct list$1charph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result278__;
    __dec_obj90=self->v1;
    self->v1=(struct list$1voidph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj90,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct list$1charph* __dec_obj95;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj93=self->v1;
            come_call_finalizer3(__dec_obj93,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj94=self->v2;
            come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj95=self->v3;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value340 = (void*)0;
struct sType* right_type2_405;
struct sType* left_no_solved_generics_type_406;
struct sType* right_no_solved_generics_type_407;
struct sClass* left_class_408;
struct sClass* right_class_409;
_Bool parent_class_410;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* left_type_name_411;
void* __right_value343 = (void*)0;
char* __dec_obj96;
void* __right_value344 = (void*)0;
struct sType* __dec_obj97;
void* __right_value345 = (void*)0;
struct sType* __dec_obj98;
void* __right_value346 = (void*)0;
char* left_type_name_412;
void* __right_value347 = (void*)0;
char* __dec_obj99;
void* __right_value348 = (void*)0;
struct sType* __dec_obj100;
void* __right_value349 = (void*)0;
struct sType* __dec_obj101;
_Bool __result280__;
int i_413;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* left_type_name_417;
void* __right_value353 = (void*)0;
char* __dec_obj102;
void* __right_value354 = (void*)0;
struct sType* __dec_obj103;
void* __right_value355 = (void*)0;
struct sType* __dec_obj104;
void* __right_value356 = (void*)0;
char* left_type_name_418;
void* __right_value357 = (void*)0;
char* __dec_obj105;
void* __right_value358 = (void*)0;
struct sType* __dec_obj106;
void* __right_value359 = (void*)0;
struct sType* __dec_obj107;
void* __right_value360 = (void*)0;
char* __dec_obj108;
void* __right_value361 = (void*)0;
struct sType* __dec_obj109;
void* __right_value362 = (void*)0;
struct sType* __dec_obj110;
void* __right_value363 = (void*)0;
char* left_type_name_419;
void* __right_value364 = (void*)0;
char* __dec_obj111;
void* __right_value365 = (void*)0;
struct sType* __dec_obj112;
void* __right_value366 = (void*)0;
struct sType* __dec_obj113;
void* __right_value367 = (void*)0;
char* left_type_name_420;
void* __right_value368 = (void*)0;
char* __dec_obj114;
void* __right_value369 = (void*)0;
struct sType* __dec_obj115;
void* __right_value370 = (void*)0;
struct sType* __dec_obj116;
_Bool __result283__;
_Bool __result284__;
_Bool __result285__;
_Bool __result286__;
_Bool __result287__;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct buffer* buf2_421;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
char* __dec_obj117;
void* __right_value379 = (void*)0;
struct sType* __dec_obj118;
void* __right_value380 = (void*)0;
struct sType* __dec_obj119;
_Bool __result288__;
_Bool __result289__;
_Bool __result290__;
_Bool __result291__;
void* __right_value381 = (void*)0;
char* tmp_422;
void* __right_value382 = (void*)0;
char* __dec_obj120;
void* __right_value383 = (void*)0;
struct sType* __dec_obj121;
void* __right_value384 = (void*)0;
struct sType* __dec_obj122;
_Bool __result292__;
_Bool __result293__;
void* __right_value385 = (void*)0;
char* tmp_423;
void* __right_value386 = (void*)0;
char* __dec_obj123;
void* __right_value387 = (void*)0;
struct sType* __dec_obj124;
_Bool __result294__;
int i_424;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
_Bool __result295__;
    right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_406=((void*)0);
    if(    left_type->mNoSolvedGenericsType) {
        left_no_solved_generics_type_406=left_type->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_407=((void*)0);
    if(    right_type2_405->mNoSolvedGenericsType) {
        right_no_solved_generics_type_407=right_type2_405->mNoSolvedGenericsType;
    }
    left_class_408=left_type->mClass;
    right_class_409=right_type2_405->mClass;
    parent_class_410=(_Bool)0;
    if(    string_operator_not_equals(left_class_408->mName,right_class_409->mName)) {
        while(left_class_408&&right_class_409) {
            if(            string_operator_equals(left_class_408->mName,right_class_409->mName)) {
                parent_class_410=(_Bool)1;
            }
            if(            right_class_409->mParentClassName) {
                right_class_409=((struct sClass*)((void*)(__right_value341=map$2voidphvoidphp_operator_load_element(info->classes,right_class_409->mParentClassName))));
                come_call_finalizer3(__right_value341,(void*)0, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_409=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
        }
        else if(        left_type->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_406&&right_no_solved_generics_type_407) {
        if(        strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                err_msg(info,"tuple err");
                puts(msg);
                printf("left type is tuple, right type is none tuple\n");
                exit(2);
            }
        }
        else if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_411=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj96=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_411,come_value->c_value));
                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj97=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj98=right_type2_405;
                right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_411 = come_decrement_ref_count2(left_type_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_412=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj99=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_412,come_value->c_value));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj100=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj101=right_type2_405;
                right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_412 = come_decrement_ref_count2(left_type_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_405->mClass->mName)&&left_type->mPointerNum==right_type2_405->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum>0&&string_operator_equals(left_type->mClass->mName,right_type2_405->mClass->mName)&&(left_type->mPointerNum!=right_type2_405->mPointerNum||left_type->mHeap!=right_type2_405->mHeap)) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_405->mClass->mName)&&(left_type->mPointerNum!=right_type2_405->mPointerNum||left_type->mHeap!=right_type2_405->mHeap)) {
            err_msg(info,"poinetr num err");
            puts(msg);
            printf("left type class_name %s\n",left_type->mClass->mName);
            printf("right type class_name %s\n",right_type2_405->mClass->mName);
            printf("left type pointernum %d\n",left_type->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
            exit(2);
        }
        else if(        list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_406->mClass->mName,"void")&&left_no_solved_generics_type_406->mPointerNum>0&&right_no_solved_generics_type_407->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_407->mClass->mName,"void")&&right_no_solved_generics_type_407->mPointerNum>0&&left_no_solved_generics_type_406->mPointerNum>0)) {
            }
            else {
                if(                list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes)!=list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        puts(msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
                        exit(2);
                    }
                    __result280__ = (_Bool)0;
                    come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result280__;
                }
                for(                i_413=0;                i_413<list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes);                i_413++                ){
                    check_assign_type(msg,((struct sType*)((void*)(__right_value350=list$1voidphp_operator_load_element(left_no_solved_generics_type_406->mGenericsTypes,i_413)))),((struct sType*)((void*)(__right_value351=list$1voidphp_operator_load_element(right_no_solved_generics_type_407->mGenericsTypes,i_413)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value350,(void*)0, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value351,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_406,right_no_solved_generics_type_407,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            err_msg(info,"tuple err");
            puts(msg);
            printf("left type is tuple, right type is none tuple\n");
            exit(2);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_417=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj102=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_417,come_value->c_value));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj103=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj104=right_type2_405;
            right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_417 = come_decrement_ref_count2(left_type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_406->mGenericsTypes),left_no_solved_generics_type_406->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_407->mGenericsTypes),right_no_solved_generics_type_407->mClass->mName,right_type2_405->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_418=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj105=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_418,come_value->c_value));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj106=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj107=right_type2_405;
            right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_418 = come_decrement_ref_count2(left_type_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_405->mHeap&&left_type->mPointerNum>0&&right_type2_405->mPointerNum>0&&string_operator_not_equals(right_type2_405->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum,right_type2_405->mHeap);
        exit(2);
    }
    else if(    parent_class_410&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj108=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj109=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj110=right_type2_405;
        right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_419=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj111=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_419,come_value->c_value));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj112=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj113=right_type2_405;
            right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_419 = come_decrement_ref_count2(left_type_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_420=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj114=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_420,come_value->c_value));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj115=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj116=right_type2_405;
            right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_420 = come_decrement_ref_count2(left_type_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_405->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_405->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_405->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                        exit(2);
                    }
                    __result283__ = (_Bool)0;
                    come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result283__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                    exit(2);
                }
                __result284__ = (_Bool)0;
                come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result284__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_405->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result285__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result285__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_405->mPointerNum==0&&string_operator_equals(right_type2_405->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_405->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result286__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result286__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_405->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_405->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"void")&&right_type2_405->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result287__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result287__;
        }
        else {
            buf2_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 814, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(buf2_421,((char*)(__right_value377=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value373=string_to_string(come_value->c_value))),((char*)(__right_value374=string_to_string(info->sname))),((char*)(__right_value375=int_to_string(info->sline))),((char*)(__right_value376=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj117=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_421));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj118=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj119=right_type2_405;
            right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_405->mClass->mName,"char")&&right_type2_405->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_405->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result288__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result288__;
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"void")&&right_type2_405->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result289__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result289__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_405->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_405->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result290__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result290__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_405->mClass->mName,"void")&&right_type2_405->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_405->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"void")&&right_type2_405->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_405->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result291__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result291__;
        }
        else if(        right_type2_405->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_422=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj120=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_422));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj121=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj122=right_type2_405;
                right_type2_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_422 = come_decrement_ref_count2(tmp_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_405->mPointerNum>0||(right_type2_405->mPointerNum==0&&right_type2_405->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_405->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_405->mClass->mName)) {
                if(                print_err_msg) {
                    puts(msg);
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                    exit(2);
                }
                __result292__ = (_Bool)0;
                come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result292__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_405->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
            }
            else if(            list$1sNodephp_length(right_type2_405->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodephp_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum,list$1sNodephp_length(right_type2_405->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_405->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_405->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_405->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_405->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_405->mPointerNum==0&&string_operator_equals(right_type2_405->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            __result293__ = (_Bool)0;
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result293__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_405->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_405->mPointerNum==0) {
            tmp_423=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj123=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_423));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj124=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result294__ = (_Bool)1;
            tmp_423 = come_decrement_ref_count2(tmp_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result294__;
            tmp_423 = come_decrement_ref_count2(tmp_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1voidphp_length(left_type->mGenericsTypes)>0) {
            if(            list$1voidphp_length(left_type->mGenericsTypes)!=list$1voidphp_length(right_type2_405->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                puts(msg);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_405->mClass->mName,right_type2_405->mPointerNum);
                exit(2);
            }
            for(            i_424=0;            i_424<list$1voidphp_length(left_type->mGenericsTypes);            i_424++            ){
                check_assign_type(msg,((struct sType*)((void*)(__right_value388=list$1voidphp_operator_load_element(left_type->mGenericsTypes,i_424)))),((struct sType*)((void*)(__right_value389=list$1voidphp_operator_load_element(right_type2_405->mGenericsTypes,i_424)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value388,(void*)0, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value389,(void*)0, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result295__ = (_Bool)1;
    come_call_finalizer3(right_type2_405,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_414;
int i_415;
void* __result281__;
void* default_value_416;
void* __result282__;
default_value_416 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_414=self->head;
    i_415=0;
    while(it_414!=((void*)0)) {
        if(        position==i_415) {
            __result281__ = gComeFunResultObject = __result_obj__ = it_414->item;
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
        it_414=it_414->next;
        i_415++;
    }
    memset(&default_value_416,0,sizeof(void*));
    __result282__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_416);
    come_call_finalizer3(default_value_416, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct sType* result_type_425;
char* var_name_426;
char* p_427;
int sline_428;
void* __right_value391 = (void*)0;
char* word_429;
_Bool between_brace_430;
char* p_431;
int sline_432;
void* __right_value392 = (void*)0;
char* word_433;
void* __right_value393 = (void*)0;
char* __dec_obj125;
void* __right_value394 = (void*)0;
char* __dec_obj126;
_Bool no_comma_435;
void* __right_value395 = (void*)0;
struct sNode* node_436;
struct sNode* __dec_obj127;
char* p_437;
int sline_438;
void* __right_value396 = (void*)0;
char* word_439;
void* __right_value397 = (void*)0;
struct sNode* node_440;
void* __right_value401 = (void*)0;
char* attribute_444;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
void* __right_value404 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple2$2sTypephcharph* __result300__;
    result_type_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_425->mPointerNum=result_type_425->mTypedefOriginalPointerNum;
    }
    var_name_426=((void*)0);
    {
        p_427=info->p;
        sline_428=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_429=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_429,"const")||string_operator_equals(word_429,"__restrict")||string_operator_equals(word_429,"restrict")||string_operator_equals(word_429,"__user")||string_operator_equals(word_429,"volatile")||string_operator_equals(word_429,"_Nonnull")||string_operator_equals(word_429,"_Nullable")||string_operator_equals(word_429,"_Null_unspecified")||string_operator_equals(word_429,"__user")||string_operator_equals(word_429,"_Addr")) {
            }
            else {
                info->p=p_427;
                info->sline=sline_428;
            }
            word_429 = come_decrement_ref_count2(word_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_427;
            info->sline=sline_428;
        }
    }
    between_brace_430=(_Bool)0;
    {
        p_431=info->p;
        sline_432=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_433=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_433,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_430=(_Bool)1;
                    }
                }
                word_433 = come_decrement_ref_count2(word_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_431;
        info->sline=sline_432;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_425->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_430&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj125=var_name_426;
        var_name_426=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_434=0;
        num_anonymous_var_name_434++;
        __dec_obj126=var_name_426;
        var_name_426=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_434));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_430&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_435=info->no_comma;
        info->no_comma=(_Bool)1;
        node_436=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_435;
        __dec_obj127=result_type_425->mSizeNum;
        result_type_425->mSizeNum=(struct sNode*)come_increment_ref_count(node_436);
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_436) { node_436 = come_decrement_ref_count2(node_436, ((struct sNode*)node_436)->finalize, ((struct sNode*)node_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_437=info->p;
            sline_438=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_439=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_439,"const")||string_operator_equals(word_439,"__restrict")||string_operator_equals(word_439,"restrict")||string_operator_equals(word_439,"__user")||string_operator_equals(word_439,"volatile")||string_operator_equals(word_439,"_Nonnull")||string_operator_equals(word_439,"_Nullable")||string_operator_equals(word_439,"_Null_unspecified")||string_operator_equals(word_439,"__user")||string_operator_equals(word_439,"_Addr")) {
                }
                else {
                    info->p=p_437;
                    info->sline=sline_438;
                }
                word_439 = come_decrement_ref_count2(word_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_437;
                info->sline=sline_438;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_425->mArrayPointerType=(_Bool)1;
            result_type_425->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_440=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(result_type_425->mArrayNum,(struct sNode*)come_increment_ref_count(node_440));
        parse_sharp_v5(info);
        result_type_425->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_444=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_444,"")) {
        if(        result_type_425->mAttribute) {
            __dec_obj131=result_type_425->mAttribute;
            result_type_425->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_425->mAttribute,((char*)(__right_value402=charp_operator_add(" ",attribute_444)))));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj132=result_type_425->mAttribute;
            result_type_425->mAttribute=(char*)come_increment_ref_count(attribute_444);
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value404=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value404,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value409=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1138, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(result_type_425),(char*)come_increment_ref_count(var_name_426))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_426 = come_decrement_ref_count2(var_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_444 = come_decrement_ref_count2(attribute_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value409,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
struct list_item$1sNodeph* litem_441;
struct sNode* __dec_obj128;
void* __right_value399 = (void*)0;
struct list_item$1sNodeph* litem_442;
struct sNode* __dec_obj129;
void* __right_value400 = (void*)0;
struct list_item$1sNodeph* litem_443;
struct sNode* __dec_obj130;
struct list$1sNodeph* __result296__;
    if(    self->len==0) {
        litem_441=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value398=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_441->prev=((void*)0);
        litem_441->next=((void*)0);
        __dec_obj128=litem_441->item;
        litem_441->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_441;
        self->head=litem_441;
    }
    else if(    self->len==1) {
        litem_442=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value399=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_442->prev=self->head;
        litem_442->next=((void*)0);
        __dec_obj129=litem_442->item;
        litem_442->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_442;
        self->head->next=litem_442;
    }
    else {
        litem_443=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value400=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=self->tail;
        litem_443->next=((void*)0);
        __dec_obj130=litem_443->item;
        litem_443->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_443;
        self->tail=litem_443;
    }
    self->len++;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj133;
char* __dec_obj134;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj133=self->v1;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj134=self->v2;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj135;
char* __dec_obj136;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj135=self->v1;
            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj136=self->v2;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result297__;
void* __right_value405 = (void*)0;
struct tuple2$2sTypephcharph* result_446;
void* __right_value406 = (void*)0;
struct sType* __dec_obj137;
void* __right_value407 = (void*)0;
char* __dec_obj138;
struct tuple2$2sTypephcharph* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_446=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj137=result_446->v1;
        result_446->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj138=result_446->v2;
        result_446->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_446;
    come_call_finalizer3(result_446,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_445;
    result_445=0;
    result_445+=int_get_hash_key(((int)self->v1));
    result_445+=int_get_hash_key(((int)self->v2));
    return result_445;
}

static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj139;
char* __dec_obj140;
struct tuple2$2sTypephcharph* __result299__;
    __dec_obj139=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj140=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj141=self->v1;
            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj142=self->v2;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_447;
int sline_448;
void* __right_value410 = (void*)0;
char* word_449;
int nest_450;
    p_447=info->p;
    sline_448=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_449=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_449,"__attribute")||string_operator_equals(word_449,"__attribute__"))&&*info->p==40) {
            nest_450=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_450++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_450--;
                    if(                    nest_450==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_449,"const")||string_operator_equals(word_449,"__restrict")||string_operator_equals(word_449,"restrict")||string_operator_equals(word_449,"__user")||string_operator_equals(word_449,"volatile")||string_operator_equals(word_449,"_Nonnull")||string_operator_equals(word_449,"_Nullable")||string_operator_equals(word_449,"__nonnull")||string_operator_equals(word_449,"_Null_unspecified")||string_operator_equals(word_449,"__user")||string_operator_equals(word_449,"_Addr")||string_operator_equals(word_449,"__noreturn")||string_operator_equals(word_449,"_noreturn")||string_operator_equals(word_449,"_Noreturn")) {
        }
        else {
            info->p=p_447;
            info->sline=sline_448;
        }
        word_449 = come_decrement_ref_count2(word_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_447;
        info->sline=sline_448;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_451;
void* __right_value411 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_452=0;
char* name_453=0;
_Bool err_454=0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct tuple3$3sTypephcharphbool* __result304__;
    no_output_err_451=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value411=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_452=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_453=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_454=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value411,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_451;
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value416=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1195, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_452),(char*)come_increment_ref_count(name_453),err_454)));
    come_call_finalizer3(type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_453 = come_decrement_ref_count2(name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value416,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj143=self->v1;
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphbool* __result301__;
void* __right_value412 = (void*)0;
struct tuple3$3sTypephcharphbool* result_456;
void* __right_value413 = (void*)0;
struct sType* __dec_obj145;
void* __right_value414 = (void*)0;
char* __dec_obj146;
struct tuple3$3sTypephcharphbool* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_456=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "tuple3$3sTypephcharphbool_clone", 3, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj145=result_456->v1;
        result_456->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj146=result_456->v2;
        result_456->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_456->v3=self->v3;
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_456;
    come_call_finalizer3(result_456,tuple3$3sTypephcharphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self){
unsigned int result_455;
    result_455=0;
    result_455+=int_get_hash_key(((int)self->v1));
    result_455+=int_get_hash_key(((int)self->v2));
    result_455+=int_get_hash_key(((int)self->v3));
    return result_455;
}

static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj147;
char* __dec_obj148;
struct tuple3$3sTypephcharphbool* __result303__;
    __dec_obj147=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj148=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_457;
int head_sline_458;
void* __right_value417 = (void*)0;
char* type_name_459;
_Bool record__460;
_Bool exception__461;
_Bool constant_462;
_Bool static__463;
_Bool volatile__464;
_Bool register__465;
_Bool unsigned__466;
_Bool long__467;
_Bool long_long_468;
_Bool short__469;
_Bool restrict__470;
_Bool struct__471;
_Bool union__472;
_Bool enum__473;
_Bool no_heap_474;
_Bool extern__475;
_Bool inline__476;
_Bool uniq__477;
_Bool tuple__478;
_Bool generate__479;
struct sNode* alignas__480;
_Bool anonymous_type_481;
_Bool anonymous_name_482;
_Bool atomic__483;
_Bool object_interface_484;
void* __right_value418 = (void*)0;
char* __dec_obj149;
void* __right_value419 = (void*)0;
char* __dec_obj150;
void* __right_value420 = (void*)0;
char* __dec_obj151;
int brace_num_485;
void* __right_value421 = (void*)0;
char* __dec_obj152;
int brace_num_486;
void* __right_value422 = (void*)0;
char* __dec_obj153;
void* __right_value423 = (void*)0;
char* __dec_obj154;
void* __right_value424 = (void*)0;
char* __dec_obj155;
void* __right_value425 = (void*)0;
char* __dec_obj156;
void* __right_value426 = (void*)0;
char* __dec_obj157;
void* __right_value427 = (void*)0;
struct sNode* exp_487;
struct sNode* __dec_obj158;
void* __right_value428 = (void*)0;
char* __dec_obj159;
void* __right_value429 = (void*)0;
char* __dec_obj160;
void* __right_value430 = (void*)0;
char* __dec_obj161;
void* __right_value431 = (void*)0;
char* __dec_obj162;
void* __right_value432 = (void*)0;
char* __dec_obj163;
void* __right_value433 = (void*)0;
char* __dec_obj164;
void* __right_value434 = (void*)0;
char* __dec_obj165;
void* __right_value435 = (void*)0;
char* __dec_obj166;
void* __right_value436 = (void*)0;
char* __dec_obj167;
void* __right_value437 = (void*)0;
char* __dec_obj168;
char* p_488;
int sline_489;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
char* __dec_obj169;
void* __right_value440 = (void*)0;
char* __dec_obj170;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* __dec_obj171;
char* p_490;
int sline_491;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct tuple3$3sTypephcharphbool* __result305__;
char* p_492;
int sline_493;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple3$3sTypephcharphbool* __result306__;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* node_494;
_Bool Value_495;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct tuple3$3sTypephcharphbool* __result307__;
char* p_496;
int sline_497;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj172;
void* __right_value456 = (void*)0;
char* __dec_obj173;
void* __right_value457 = (void*)0;
char* __dec_obj174;
char* p_498;
int sline_499;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple3$3sTypephcharphbool* __result308__;
void* __right_value461 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_500=0;
char* name_501=0;
_Bool err_502=0;
char* p_503;
int sline_504;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple3$3sTypephcharphbool* __result309__;
void* __right_value466 = (void*)0;
char* __dec_obj175;
void* __right_value467 = (void*)0;
char* __dec_obj176;
void* __right_value468 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_505=0;
char* name_506=0;
_Bool err_507=0;
char* p_508;
int sline_509;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct tuple3$3sTypephcharphbool* __result310__;
char* p_510;
int sline_511;
void* __right_value472 = (void*)0;
char* __dec_obj177;
void* __right_value473 = (void*)0;
char* __dec_obj178;
void* __right_value474 = (void*)0;
char* __dec_obj179;
void* __right_value475 = (void*)0;
char* __dec_obj180;
void* __right_value476 = (void*)0;
char* __dec_obj181;
void* __right_value477 = (void*)0;
char* __dec_obj182;
void* __right_value478 = (void*)0;
char* __dec_obj183;
char* p_512;
int sline_513;
void* __right_value479 = (void*)0;
char* __dec_obj184;
char* p_514;
int sline_515;
void* __right_value480 = (void*)0;
char* __dec_obj185;
void* __right_value481 = (void*)0;
char* __dec_obj186;
void* __right_value482 = (void*)0;
char* __dec_obj187;
char* p_516;
int sline_517;
void* __right_value483 = (void*)0;
char* __dec_obj188;
void* __right_value484 = (void*)0;
char* __dec_obj189;
void* __right_value485 = (void*)0;
char* __dec_obj190;
void* __right_value486 = (void*)0;
char* __dec_obj191;
void* __right_value487 = (void*)0;
char* __dec_obj192;
void* __right_value488 = (void*)0;
char* __dec_obj193;
void* __right_value489 = (void*)0;
char* __dec_obj194;
void* __right_value490 = (void*)0;
char* __dec_obj195;
void* __right_value491 = (void*)0;
char* __dec_obj196;
void* __right_value492 = (void*)0;
char* __dec_obj197;
void* __right_value493 = (void*)0;
char* __dec_obj198;
char* p_518;
int sline_519;
void* __right_value494 = (void*)0;
char* __dec_obj199;
void* __right_value495 = (void*)0;
char* __dec_obj200;
void* __right_value496 = (void*)0;
char* attribute_520;
int pointer_num_521;
_Bool heap_522;
_Bool refference_523;
_Bool no_refference_524;
_Bool channel_525;
_Bool any_class_526;
_Bool vtable_527;
char* tuple_name_528;
void* __right_value497 = (void*)0;
char* __dec_obj201;
_Bool lambda_flag_529;
char* pX_530;
int slineX_531;
void* __right_value498 = (void*)0;
struct sType* type_532;
char* var_name_533;
_Bool function_pointer_flag_534;
char* p_535;
int sline_536;
void* __right_value499 = (void*)0;
char* word_537;
_Bool var_name_between_brace_538;
char* p_539;
int sline_540;
void* __right_value500 = (void*)0;
char* word_541;
void* __right_value501 = (void*)0;
char* __dec_obj202;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* node_543;
_Bool Value_544;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple3$3sTypephcharphbool* __result311__;
int pointer_num_545;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj203;
void* __right_value508 = (void*)0;
char* __dec_obj204;
void* __right_value509 = (void*)0;
struct sNode* node_546;
_Bool Value_547;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple3$3sTypephcharphbool* __result312__;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj205;
void* __right_value514 = (void*)0;
char* __dec_obj206;
void* __right_value515 = (void*)0;
struct sNode* node_548;
_Bool Value_549;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct tuple3$3sTypephcharphbool* __result313__;
int pointer_num_550;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj207;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct tuple3$3sTypephcharphbool* __result314__;
void* __right_value522 = (void*)0;
char* attribute_551;
char* __dec_obj208;
void* __right_value523 = (void*)0;
char* __dec_obj209;
void* __right_value524 = (void*)0;
char* __dec_obj210;
void* __right_value525 = (void*)0;
char* __dec_obj211;
void* __right_value526 = (void*)0;
char* __dec_obj212;
_Bool no_comma_554;
void* __right_value527 = (void*)0;
struct sNode* node_555;
struct sNode* __dec_obj213;
void* __right_value528 = (void*)0;
char* attribute2_556;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj214;
char* __dec_obj215;
struct sType* result_type_557;
void* __right_value531 = (void*)0;
_Bool _if_conditional3;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj216;
void* __right_value534 = (void*)0;
int i_558;
void* __right_value535 = (void*)0;
_Bool _if_conditional4;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj217;
int i_562;
void* __right_value539 = (void*)0;
_Bool _if_conditional5;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj218;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj219;
struct sNode* __dec_obj220;
void* __right_value545 = (void*)0;
char* __dec_obj221;
void* __right_value546 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1voidph* param_types_563=0;
struct list$1charph* param_names_564=0;
struct list$1charph* param_default_parametors_565=0;
_Bool var_args_566=0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj222;
struct sType* __dec_obj223;
struct list$1voidph* __dec_obj224;
struct list$1charph* __dec_obj225;
int function_pointer_num_567;
struct sType* result_type_568;
void* __right_value549 = (void*)0;
_Bool _if_conditional6;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj226;
void* __right_value552 = (void*)0;
int i_569;
void* __right_value553 = (void*)0;
_Bool _if_conditional7;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj227;
int i_570;
void* __right_value557 = (void*)0;
_Bool _if_conditional8;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* __dec_obj228;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj229;
struct sNode* __dec_obj230;
void* __right_value563 = (void*)0;
char* __dec_obj231;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct tuple3$3sTypephcharphbool* __result317__;
void* __right_value566 = (void*)0;
char* __dec_obj232;
_Bool function_pointer_array_572;
int function_pointer_array_num_573;
int n_574;
void* __right_value567 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1voidph* param_types_575=0;
struct list$1charph* param_names_576=0;
struct list$1charph* param_default_parametors_577=0;
_Bool var_args_578=0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sType* __dec_obj233;
void* __right_value570 = (void*)0;
struct sType* __dec_obj234;
struct list$1voidph* __dec_obj235;
struct list$1charph* __dec_obj236;
void* __right_value571 = (void*)0;
struct sNode* exp_579;
_Bool Value_580;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct tuple3$3sTypephcharphbool* __result318__;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_581;
void* __right_value575 = (void*)0;
struct sType* __dec_obj237;
void* __right_value576 = (void*)0;
char* attribute_582;
char* __dec_obj238;
void* __right_value577 = (void*)0;
char* __dec_obj239;
void* __right_value578 = (void*)0;
char* __dec_obj240;
void* __right_value579 = (void*)0;
char* __dec_obj241;
void* __right_value580 = (void*)0;
char* __dec_obj242;
_Bool no_comma_585;
void* __right_value581 = (void*)0;
struct sNode* node_586;
struct sNode* __dec_obj243;
void* __right_value582 = (void*)0;
char* attribute2_587;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
char* __dec_obj244;
char* __dec_obj245;
void* __right_value585 = (void*)0;
_Bool _if_conditional9;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj250;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
char* __dec_obj251;
struct sNode* __dec_obj252;
char* __dec_obj253;
int i_588;
void* __right_value590 = (void*)0;
_Bool _if_conditional10;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sType* __dec_obj254;
struct sNode* __dec_obj255;
char* __dec_obj256;
int i_589;
void* __right_value594 = (void*)0;
_Bool _if_conditional11;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* __dec_obj257;
struct sNode* __dec_obj258;
char* __dec_obj259;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _if_conditional12;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct tuple3$3sTypephcharphbool* __result319__;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __dec_obj260;
void* __right_value604 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_590=0;
char* var_name_591=0;
_Bool err_592=0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct tuple3$3sTypephcharphbool* __result320__;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct tuple3$3sTypephcharphbool* __result321__;
void* __right_value609 = (void*)0;
struct sType* __dec_obj261;
void* __right_value610 = (void*)0;
char* new_name_593;
struct sNode* __dec_obj262;
char* __dec_obj263;
char* __dec_obj264;
void* __right_value611 = (void*)0;
struct sClass* klass_594;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sClass* klass_641;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sType* __dec_obj275;
struct sNode* __dec_obj276;
char* __dec_obj277;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1voidph* types_642;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_643=0;
char* name_644=0;
_Bool err_645=0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct tuple3$3sTypephcharphbool* __result346__;
void* __right_value639 = (void*)0;
int num_tuples_646;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj278;
struct list$1voidph* o2_saved_647;
struct sType* it_648;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* __dec_obj279;
void* __right_value645 = (void*)0;
char* new_name_649;
char* __dec_obj280;
void* __right_value646 = (void*)0;
char* attribute_650;
char* __dec_obj281;
void* __right_value647 = (void*)0;
char* __dec_obj282;
void* __right_value648 = (void*)0;
char* __dec_obj283;
void* __right_value649 = (void*)0;
char* __dec_obj284;
void* __right_value650 = (void*)0;
char* __dec_obj285;
_Bool no_comma_653;
void* __right_value651 = (void*)0;
struct sNode* node_654;
struct sNode* __dec_obj286;
void* __right_value652 = (void*)0;
char* attribute2_655;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* __dec_obj287;
char* __dec_obj288;
void* __right_value655 = (void*)0;
struct sNode* node_656;
void* __right_value656 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_657=0;
char* attribute2_658=0;
char* __dec_obj289;
char* __dec_obj290;
void* __right_value657 = (void*)0;
struct sType* type_before_659;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* __dec_obj291;
void* __right_value660 = (void*)0;
struct sNode* __list_values1___660[1];
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1sNodeph* __dec_obj292;
struct sType* __dec_obj293;
void* __right_value664 = (void*)0;
struct sType* type_before_664;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sType* __dec_obj294;
struct sType* __dec_obj295;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* type2_665;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* type3_671;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* type4_672;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct tuple3$3sTypephcharphbool* __result352__;
char* __dec_obj297;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct tuple3$3sTypephcharphbool* __result353__;
type_532 = (void*)0;
var_name_533 = (void*)0;
result_type_557 = (void*)0;
result_type_568 = (void*)0;
    head_457=info->p;
    head_sline_458=info->sline;
    info->define_struct=(_Bool)0;
    type_name_459=(char*)come_increment_ref_count(parse_word(info));
    record__460=(_Bool)0;
    exception__461=(_Bool)0;
    constant_462=(_Bool)0;
    static__463=(_Bool)0;
    volatile__464=(_Bool)0;
    register__465=(_Bool)0;
    unsigned__466=(_Bool)0;
    long__467=(_Bool)0;
    long_long_468=(_Bool)0;
    short__469=(_Bool)0;
    restrict__470=(_Bool)0;
    struct__471=(_Bool)0;
    union__472=(_Bool)0;
    enum__473=(_Bool)0;
    no_heap_474=(_Bool)0;
    extern__475=(_Bool)0;
    inline__476=(_Bool)0;
    uniq__477=(_Bool)0;
    tuple__478=(_Bool)0;
    generate__479=(_Bool)0;
    alignas__480=((void*)0);
    anonymous_type_481=(_Bool)0;
    anonymous_name_482=(_Bool)0;
    atomic__483=(_Bool)0;
    object_interface_484=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_459,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_484=(_Bool)1;
            __dec_obj149=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj150=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__483=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_459,"__extension__")) {
            __dec_obj151=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_485=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_485++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_485--;
                        if(                        brace_num_485==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj152=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"__declspec")) {
            if(            *info->p==40) {
                brace_num_486=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_486++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_486--;
                        if(                        brace_num_486==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj153=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_Noreturn")) {
            __dec_obj154=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"__noreturn")) {
            __dec_obj155=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_Nullable")) {
            __dec_obj156=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_noreturn")) {
            __dec_obj157=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_Alignas")) {
            expected_next_character(40,info);
            exp_487=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj158=alignas__480;
            alignas__480=(struct sNode*)come_increment_ref_count(exp_487);
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj159=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_487) { exp_487 = come_decrement_ref_count2(exp_487, ((struct sNode*)exp_487)->finalize, ((struct sNode*)exp_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_459,"const")) {
            constant_462=(_Bool)1;
            __dec_obj160=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"static")) {
            static__463=(_Bool)1;
            __dec_obj161=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"uniq")) {
            uniq__477=(_Bool)1;
            __dec_obj162=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"record")) {
            record__460=(_Bool)1;
            __dec_obj163=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"exception")) {
            exception__461=(_Bool)1;
            __dec_obj164=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"extern")) {
            extern__475=(_Bool)1;
            __dec_obj165=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"inline")||string_operator_equals(type_name_459,"__inline")||string_operator_equals(type_name_459,"__inline__")||string_operator_equals(type_name_459,"__always_inline")||string_operator_equals(type_name_459,"__forceinline")) {
            inline__476=(_Bool)1;
            __dec_obj166=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"volatile")) {
            volatile__464=(_Bool)1;
            __dec_obj167=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"generate")) {
            generate__479=(_Bool)1;
            __dec_obj168=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"struct")) {
            struct__471=(_Bool)1;
            if(            *info->p==123) {
                p_488=info->p;
                sline_489=info->sline;
                ((char*)(__right_value438=skip_block(info)));
                __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_482=(_Bool)1;
                    anonymous_type_481=(_Bool)1;
                    __dec_obj169=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_488;
                    info->sline=sline_489;
                    break;
                }
                else {
                    anonymous_type_481=(_Bool)1;
                    __dec_obj170=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_488;
                    info->sline=sline_489;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value441=parse_struct_attribute(info)));
                __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj171=type_name_459;
                type_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_490=info->p;
                    sline_491=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_490;
                                info->sline=sline_491;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value444=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1430, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value444,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result305__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_492=info->p;
                    sline_493=info->sline;
                    ((char*)(__right_value445=skip_block(info)));
                    __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value446=parse_struct_attribute(info)));
                    __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_457;
                        info->sline=head_sline_458;
                        info->define_struct=(_Bool)1;
                        __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value448=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1450, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value448,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result306__;
                    }
                    else {
                        info->p=p_492;
                        info->sline=sline_493;
                        node_494=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_459),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_495=node_compile(node_494,info);
                        if(                        !Value_495) {
                            __result307__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value452=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1462, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value452,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result307__;
                        }
                        else {
                        }
                        if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_459,"union")) {
            union__472=(_Bool)1;
            if(            *info->p==123) {
                p_496=info->p;
                sline_497=info->sline;
                ((char*)(__right_value453=skip_block(info)));
                __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value454=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value454,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_457;
                    info->sline=head_sline_458;
                    info->define_struct=(_Bool)0;
                    anonymous_type_481=(_Bool)1;
                    __dec_obj172=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_496;
                    info->sline=sline_497;
                    break;
                }
                else {
                    anonymous_type_481=(_Bool)1;
                    __dec_obj173=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_496;
                    info->sline=sline_497;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj174=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_498=info->p;
                sline_499=info->sline;
                ((char*)(__right_value458=skip_block(info)));
                __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_457;
                    info->sline=head_sline_458;
                    info->define_struct=(_Bool)1;
                    __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value460=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1519, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value460,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result308__;
                }
                else {
                    anonymous_type_481=(_Bool)1;
                    info->p=p_498;
                    info->sline=sline_499;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_459,"enum")) {
            enum__473=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value461=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_500=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_501=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_502=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value461,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_500,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_501 = come_decrement_ref_count2(name_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_503=info->p;
                sline_504=info->sline;
                ((char*)(__right_value462=skip_block(info)));
                __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value463=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value463,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_457;
                    info->sline=head_sline_458;
                    info->define_struct=(_Bool)1;
                    __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value465=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1557, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value465,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result309__;
                }
                else {
                    anonymous_type_481=(_Bool)1;
                    __dec_obj175=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_503;
                    info->sline=sline_504;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj176=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value468=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_505=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_506=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_507=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value468,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_508=info->p;
                sline_509=info->sline;
                ((char*)(__right_value469=skip_block(info)));
                __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_457;
                    info->sline=head_sline_458;
                    info->define_struct=(_Bool)1;
                    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value471=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1593, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value471,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result310__;
                }
                else {
                    anonymous_type_481=(_Bool)1;
                    info->p=p_508;
                    info->sline=sline_509;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_459,"long")) {
            {
                p_510=info->p;
                sline_511=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_510;
                    info->sline=sline_511;
                    __dec_obj177=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj178=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_459,"unsigned")) {
                        __dec_obj179=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_459,"int")) {
                            long__467=(_Bool)1;
                            unsigned__466=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_459,"signed")) {
                        __dec_obj180=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_459,"int")) {
                            long__467=(_Bool)1;
                            unsigned__466=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_459,"long")) {
                        p_510=info->p;
                        sline_511=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_468=(_Bool)1;
                            __dec_obj181=type_name_459;
                            type_name_459=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__467=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_459,"int")) {
                            long_long_468=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_459,info)) {
                            __dec_obj182=type_name_459;
                            type_name_459=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_468=(_Bool)1;
                            info->p=p_510;
                            info->sline=sline_511;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_459,info)) {
                        if(                        long__467) {
                            long_long_468=(_Bool)1;
                            long__467=(_Bool)0;
                        }
                        else {
                            long__467=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_510;
                        info->sline=sline_511;
                        __dec_obj183=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_459,"unsigned")) {
            unsigned__466=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_512=info->p;
                sline_513=info->sline;
                __dec_obj184=type_name_459;
                type_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_459,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_514=info->p;
                        sline_515=info->sline;
                        __dec_obj185=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_459,info)) {
                            short__469=(_Bool)1;
                        }
                        else {
                            short__469=(_Bool)1;
                            __dec_obj186=type_name_459;
                            type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_514;
                            info->sline=sline_515;
                        }
                    }
                    else {
                        short__469=(_Bool)1;
                        __dec_obj187=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_459,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_516=info->p;
                        sline_517=info->sline;
                        __dec_obj188=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_459,info)) {
                            long__467=(_Bool)1;
                        }
                        else {
                            long__467=(_Bool)1;
                            __dec_obj189=type_name_459;
                            type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_516;
                            info->sline=sline_517;
                        }
                    }
                    else {
                        long__467=(_Bool)1;
                        __dec_obj190=type_name_459;
                        type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_459,info)) {
                    __dec_obj191=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_512;
                    info->sline=sline_513;
                    break;
                }
            }
            else {
                __dec_obj192=type_name_459;
                type_name_459=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_459,"signed")||string_operator_equals(type_name_459,"__signed__")) {
            unsigned__466=(_Bool)0;
            __dec_obj193=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"register")) {
            register__465=(_Bool)1;
            __dec_obj194=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"restrict")) {
            restrict__470=(_Bool)1;
            __dec_obj195=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"_Addr")) {
            __dec_obj196=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"__restrict")) {
            restrict__470=(_Bool)1;
            __dec_obj197=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_459,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj198=type_name_459;
            type_name_459=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__478=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_459,"short")) {
            short__469=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_518=info->p;
                sline_519=info->sline;
                __dec_obj199=type_name_459;
                type_name_459=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_459,"int")) {
                    short__469=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_459,"short")) {
                    short__469=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_459,info)) {
                    info->p=p_518;
                    info->sline=sline_519;
                }
                else {
                    __dec_obj200=type_name_459;
                    type_name_459=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_518;
                    info->sline=sline_519;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_520=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_521=0;
    heap_522=(_Bool)0;
    refference_523=(_Bool)0;
    no_refference_524=(_Bool)0;
    channel_525=(_Bool)0;
    any_class_526=(_Bool)0;
    vtable_527=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_521++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_527=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_526=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_522=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_525=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_528=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__478) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj201=tuple_name_528;
        tuple_name_528=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__483) {
        expected_next_character(41,info);
    }
    lambda_flag_529=(_Bool)0;
    {
        pX_530=info->p;
        slineX_531=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value498=parse_word(info)));
            __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_529=(_Bool)1;
            }
        }
        info->p=pX_530;
        info->sline=slineX_531;
    }
    function_pointer_flag_534=(_Bool)0;
    {
        p_535=info->p;
        sline_536=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_534=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_537=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_534=(_Bool)1;
                    }
                }
                word_537 = come_decrement_ref_count2(word_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_535;
        info->sline=sline_536;
    }
    var_name_between_brace_538=(_Bool)0;
    {
        p_539=info->p;
        sline_540=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_541=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_541,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_538=(_Bool)1;
                    }
                }
                word_541 = come_decrement_ref_count2(word_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_539;
        info->sline=sline_540;
    }
    if(    anonymous_type_481&&*info->p==123) {
        static int anonymous_num_542=0;
        if(        struct__471) {
            if(            string_operator_equals(type_name_459,"")) {
                __dec_obj202=type_name_459;
                type_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_542));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_543=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_459),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_544=node_compile(node_543,info);
            if(            !Value_544) {
                err_msg(info,"parse_struct is failed");
                __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value505=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2007, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value505,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result311__;
            }
            else {
            }
            pointer_num_545=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_545++;
            }
            __dec_obj203=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2020, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_532->mPointerNum=pointer_num_545;
            if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__473) {
            if(            string_operator_equals(type_name_459,"")) {
                __dec_obj204=type_name_459;
                type_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_542));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_546=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_459),info));
            if(            !info->no_output_err) {
                Value_547=node_compile(node_546,info);
                if(                !Value_547) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value511=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2034, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_546) { node_546 = come_decrement_ref_count2(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value511,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result312__;
                }
                else {
                }
            }
            __dec_obj205=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2038, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_546) { node_546 = come_decrement_ref_count2(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__472) {
            if(            string_operator_equals(type_name_459,"")) {
                __dec_obj206=type_name_459;
                type_name_459=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_542));
                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_548=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_459),info));
            Value_549=node_compile(node_548,info);
            if(            !Value_549) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value517=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2050, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_548) { node_548 = come_decrement_ref_count2(node_548, ((struct sNode*)node_548)->finalize, ((struct sNode*)node_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value517,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
            else {
            }
            pointer_num_550=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_550++;
            }
            __dec_obj207=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2064, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_532->mPointerNum=pointer_num_550;
            if(node_548) { node_548 = come_decrement_ref_count2(node_548, ((struct sNode*)node_548)->finalize, ((struct sNode*)node_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value521=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2070, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value521,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
        attribute_551=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_551,"")) {
            __dec_obj208=type_532->mAttribute;
            type_532->mAttribute=(char*)come_increment_ref_count(attribute_551);
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_538&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj209=var_name_533;
                var_name_533=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_482) {
                static int num_anonymous_var_name_552=0;
                num_anonymous_var_name_552++;
                __dec_obj210=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_552));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj211=var_name_533;
                var_name_533=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_553=0;
                num_anonymous_var_name_553++;
                __dec_obj212=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_553));
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_538&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_554=info->no_comma;
                info->no_comma=(_Bool)1;
                node_555=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_554;
                __dec_obj213=type_532->mSizeNum;
                type_532->mSizeNum=(struct sNode*)come_increment_ref_count(node_555);
                if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_556=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_551,"")&&string_operator_not_equals(attribute2_556,"")) {
                __dec_obj214=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_551,((char*)(__right_value529=charp_operator_add(" ",attribute2_556)))));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_556,"")) {
                __dec_obj215=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(attribute2_556);
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_556 = come_decrement_ref_count2(attribute2_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_551 = come_decrement_ref_count2(attribute_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_529) {
        if(        (_if_conditional3=(((struct sType*)((void*)(__right_value531=map$2voidphvoidphp_operator_load_element(info->types,type_name_459)))))),        come_call_finalizer3(__right_value531,(void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj216=result_type_557;
            result_type_557=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value532=map$2voidphvoidphp_operator_load_element(info->types,type_name_459))))));
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value532,(void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_557->mClass=((struct sClass*)((void*)(__right_value534=map$2voidphvoidphp_operator_load_element(info->classes,result_type_557->mClass->mName))));
            come_call_finalizer3(__right_value534,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_459)) {
            for(            i_558=0;            i_558<list$1charphp_length(info->generics_type_names);            i_558++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)(__right_value535=list$1charphp_operator_load_element(info->generics_type_names,i_558))),type_name_459))),                (__right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj217=result_type_557;
                    result_type_557=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2138, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value537=xsprintf("generics_type%d",i_558))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_459)) {
            for(            i_562=0;            i_562<list$1charphp_length(info->method_generics_type_names);            i_562++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value539=list$1charphp_operator_load_element(info->method_generics_type_names,i_562))),type_name_459))),                (__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj218=result_type_557;
                    result_type_557=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2145, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value541=xsprintf("mgenerics_type%d",i_562))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj219=result_type_557;
            result_type_557=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2150, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_557->mAtomic=result_type_557->mAtomic||atomic__483;
        result_type_557->mConstant=result_type_557->mConstant||constant_462;
        __dec_obj220=result_type_557->mAlignas;
        result_type_557->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_557->mRegister=register__465;
        result_type_557->mUnsigned=result_type_557->mUnsigned||unsigned__466;
        result_type_557->mVolatile=volatile__464;
        result_type_557->mGenerate=generate__479;
        result_type_557->mRecord=result_type_557->mRecord||record__460;
        result_type_557->mUniq=result_type_557->mUniq||uniq__477;
        result_type_557->mStatic=(result_type_557->mStatic||static__463)&&!result_type_557->mUniq;
        result_type_557->mException=result_type_557->mException||exception__461;
        result_type_557->mExtern=result_type_557->mExtern||extern__475;
        result_type_557->mInline=result_type_557->mInline||inline__476;
        result_type_557->mRestrict=result_type_557->mRestrict||restrict__470;
        result_type_557->mLongLong=result_type_557->mLongLong||long_long_468;
        result_type_557->mLong=result_type_557->mLong||long__467;
        result_type_557->mShort=result_type_557->mShort||short__469;
        result_type_557->mPointerNum=pointer_num_521;
        result_type_557->mHeap=result_type_557->mHeap||heap_522;
        result_type_557->mChannel=result_type_557->mChannel||channel_525;
        result_type_557->mAnyClass=result_type_557->mAnyClass||any_class_526;
        result_type_557->mCreateVTable=result_type_557->mCreateVTable||vtable_527;
        __dec_obj221=var_name_533;
        var_name_533=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value546=parse_params(info,(_Bool)0)));
        param_types_563=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_564=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_565=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_566=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value546,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj222=type_532;
        type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2180, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj223=type_532->mResultType;
        type_532->mResultType=(struct sType*)come_increment_ref_count(result_type_557);
        come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj224=type_532->mParamTypes;
        type_532->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_563);
        come_call_finalizer3(__dec_obj224,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj225=type_532->mParamNames;
        type_532->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_564);
        come_call_finalizer3(__dec_obj225,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_532->mVarArgs=var_args_566;
        type_532->mExtern=extern__475;
        come_call_finalizer3(result_type_557,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_563,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_565,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_534) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_567=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_567++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)((void*)(__right_value549=map$2voidphvoidphp_operator_load_element(info->types,type_name_459)))))),        come_call_finalizer3(__right_value549,(void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj226=result_type_568;
            result_type_568=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value550=map$2voidphvoidphp_operator_load_element(info->types,type_name_459))))));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value550,(void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_568->mClass=((struct sClass*)((void*)(__right_value552=map$2voidphvoidphp_operator_load_element(info->classes,result_type_568->mClass->mName))));
            come_call_finalizer3(__right_value552,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_459)) {
            for(            i_569=0;            i_569<list$1charphp_length(info->generics_type_names);            i_569++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value553=list$1charphp_operator_load_element(info->generics_type_names,i_569))),type_name_459))),                (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj227=result_type_568;
                    result_type_568=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2213, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value555=xsprintf("generics_type%d",i_569))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_459)) {
            for(            i_570=0;            i_570<list$1charphp_length(info->method_generics_type_names);            i_570++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value557=list$1charphp_operator_load_element(info->method_generics_type_names,i_570))),type_name_459))),                (__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj228=result_type_568;
                    result_type_568=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2220, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value559=xsprintf("mgenerics_type%d",i_570))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj229=result_type_568;
            result_type_568=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2225, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_568->mConstant=result_type_568->mConstant||constant_462;
        result_type_568->mAtomic=result_type_568->mAtomic||atomic__483;
        __dec_obj230=result_type_568->mAlignas;
        result_type_568->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_568->mRegister=register__465;
        result_type_568->mUnsigned=result_type_568->mUnsigned||unsigned__466;
        result_type_568->mVolatile=volatile__464;
        result_type_568->mGenerate=generate__479;
        result_type_568->mUniq=result_type_568->mUniq||uniq__477;
        result_type_568->mStatic=(result_type_568->mStatic||static__463)&&!result_type_568->mUniq;
        result_type_568->mRecord=result_type_568->mRecord||record__460;
        result_type_568->mException=result_type_568->mException||exception__461;
        result_type_568->mExtern=result_type_568->mExtern||extern__475;
        result_type_568->mInline=result_type_568->mInline||inline__476;
        result_type_568->mRestrict=result_type_568->mRestrict||restrict__470;
        result_type_568->mLongLong=result_type_568->mLongLong||long_long_468;
        result_type_568->mLong=result_type_568->mLong||long__467;
        result_type_568->mShort=result_type_568->mShort||short__469;
        result_type_568->mPointerNum+=pointer_num_521;
        result_type_568->mHeap=result_type_568->mHeap||heap_522;
        result_type_568->mChannel=result_type_568->mChannel||channel_525;
        result_type_568->mAnyClass=result_type_568->mAnyClass||any_class_526;
        result_type_568->mCreateVTable=result_type_568->mCreateVTable||vtable_527;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj231=var_name_533;
            var_name_533=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result317__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value565=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2254, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(result_type_568),(char*)come_increment_ref_count(var_name_533),(_Bool)0)));
                come_call_finalizer3(result_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value565,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
        }
        else {
            static int num_anonymous_var_name_571=0;
            num_anonymous_var_name_571++;
            __dec_obj232=var_name_533;
            var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_571));
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_572=(_Bool)0;
        function_pointer_array_num_573=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_574=0;
            while(xisdigit(*info->p)) {
                n_574=n_574*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_573=n_574;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_572=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value567=parse_params(info,(_Bool)0)));
        param_types_575=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_576=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_577=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_578=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value567,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj233=type_532;
        type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2286, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj234=type_532->mResultType;
        type_532->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_568));
        come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj235=type_532->mParamTypes;
        type_532->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_575);
        come_call_finalizer3(__dec_obj235,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj236=type_532->mParamNames;
        type_532->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_576);
        come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_532->mVarArgs=var_args_578;
        type_532->mExtern=extern__475;
        if(        function_pointer_array_572) {
            type_532->mLambdaArray=(_Bool)1;
            type_532->mLambdaArrayNum=function_pointer_array_num_573;
        }
        type_532->mFunctionPointerNum=function_pointer_num_567;
        come_call_finalizer3(result_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_575,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_576,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_577,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_459,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_579=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_580=node_compile(exp_579,info);
        if(        !Value_580) {
            err_msg(info,"invalid __typeof__ expression");
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value573=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2310, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_579) { exp_579 = come_decrement_ref_count2(exp_579, ((struct sNode*)exp_579)->finalize, ((struct sNode*)exp_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value573,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        else {
        }
        come_value_581=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj237=type_532;
        type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_581->type));
        come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_582=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_582,"")) {
            __dec_obj238=type_532->mAttribute;
            type_532->mAttribute=(char*)come_increment_ref_count(attribute_582);
            __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_538&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj239=var_name_533;
                var_name_533=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_482) {
                static int num_anonymous_var_name_583=0;
                num_anonymous_var_name_583++;
                __dec_obj240=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_583));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj241=var_name_533;
                var_name_533=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_584=0;
                num_anonymous_var_name_584++;
                __dec_obj242=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_584));
                __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_538&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_585=info->no_comma;
                info->no_comma=(_Bool)1;
                node_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_585;
                __dec_obj243=type_532->mSizeNum;
                type_532->mSizeNum=(struct sNode*)come_increment_ref_count(node_586);
                if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_587=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_582,"")&&string_operator_not_equals(attribute2_587,"")) {
                __dec_obj244=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_582,((char*)(__right_value583=charp_operator_add(" ",attribute2_587)))));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_587,"")) {
                __dec_obj245=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(attribute2_587);
                __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_587 = come_decrement_ref_count2(attribute2_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_579) { exp_579 = come_decrement_ref_count2(exp_579, ((struct sNode*)exp_579)->finalize, ((struct sNode*)exp_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_582 = come_decrement_ref_count2(attribute_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)((void*)(__right_value585=map$2voidphvoidphp_operator_load_element(info->types,type_name_459)))))),        come_call_finalizer3(__right_value585,(void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj250=type_532;
            type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value586=map$2voidphvoidphp_operator_load_element(info->types,type_name_459))))));
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value586,(void*)0, 0, 1, 0, 0, __result_obj__);
            type_532->mTypedefOriginalPointerNum=type_532->mPointerNum;
            type_532->mClass=((struct sClass*)((void*)(__right_value588=map$2voidphvoidphp_operator_load_element(info->classes,type_532->mClass->mName))));
            come_call_finalizer3(__right_value588,(void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj251=type_532->mOriginalTypeName;
            type_532->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_459));
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_532->mOriginalTypeNamePointerNum=pointer_num_521;
            type_532->mOriginalTypeNameHeap=heap_522;
            type_532->mConstant=type_532->mConstant||constant_462;
            type_532->mAtomic=type_532->mAtomic||atomic__483;
            __dec_obj252=type_532->mAlignas;
            type_532->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
            type_532->mRegister=register__465;
            type_532->mUnsigned=type_532->mUnsigned||unsigned__466;
            type_532->mVolatile=volatile__464;
            type_532->mGenerate=generate__479;
            type_532->mUniq=type_532->mUniq||uniq__477;
            type_532->mStatic=(type_532->mStatic||static__463)&&!type_532->mUniq;
            type_532->mRecord=type_532->mRecord||record__460;
            type_532->mException=type_532->mException||exception__461;
            type_532->mExtern=type_532->mExtern||extern__475;
            type_532->mInline=type_532->mInline||inline__476;
            type_532->mRestrict=type_532->mRestrict||restrict__470;
            type_532->mLongLong=type_532->mLongLong||long_long_468;
            type_532->mLong=type_532->mLong||long__467;
            type_532->mShort=type_532->mShort||short__469;
            type_532->mPointerNum+=pointer_num_521;
            type_532->mHeap=type_532->mHeap||heap_522;
            type_532->mChannel=type_532->mChannel||channel_525;
            type_532->mAnyClass=type_532->mAnyClass||any_class_526;
            type_532->mCreateVTable=type_532->mCreateVTable||vtable_527;
            __dec_obj253=type_532->mTupleName;
            type_532->mTupleName=(char*)come_increment_ref_count(tuple_name_528);
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_459)) {
            for(            i_588=0;            i_588<list$1charphp_length(info->generics_type_names);            i_588++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value590=list$1charphp_operator_load_element(info->generics_type_names,i_588))),type_name_459))),                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj254=type_532;
                    type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2410, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value592=xsprintf("generics_type%d",i_588))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_532->mConstant=type_532->mConstant||constant_462;
            type_532->mAtomic=type_532->mAtomic||atomic__483;
            __dec_obj255=type_532->mAlignas;
            type_532->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
            if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
            type_532->mRegister=register__465;
            type_532->mUnsigned=type_532->mUnsigned||unsigned__466;
            type_532->mVolatile=volatile__464;
            type_532->mGenerate=generate__479;
            type_532->mUniq=type_532->mUniq||uniq__477;
            type_532->mStatic=(type_532->mStatic||static__463)&&!type_532->mUniq;
            type_532->mRecord=type_532->mRecord||record__460;
            type_532->mException=type_532->mException||exception__461;
            type_532->mExtern=type_532->mExtern||extern__475;
            type_532->mInline=type_532->mInline||inline__476;
            type_532->mRestrict=type_532->mRestrict||restrict__470;
            type_532->mLongLong=type_532->mLongLong||long_long_468;
            type_532->mLong=type_532->mLong||long__467;
            type_532->mShort=type_532->mShort||short__469;
            type_532->mPointerNum+=pointer_num_521;
            type_532->mHeap=type_532->mHeap||heap_522;
            type_532->mChannel=type_532->mChannel||channel_525;
            type_532->mAnyClass=type_532->mAnyClass||any_class_526;
            type_532->mCreateVTable=type_532->mCreateVTable||vtable_527;
            __dec_obj256=type_532->mTupleName;
            type_532->mTupleName=(char*)come_increment_ref_count(tuple_name_528);
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_459)) {
            for(            i_589=0;            i_589<list$1charphp_length(info->method_generics_type_names);            i_589++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value594=list$1charphp_operator_load_element(info->method_generics_type_names,i_589))),type_name_459))),                (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj257=type_532;
                    type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2441, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value596=xsprintf("mgenerics_type%d",i_589))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_532->mConstant=type_532->mConstant||constant_462;
            type_532->mAtomic=type_532->mAtomic||atomic__483;
            __dec_obj258=type_532->mAlignas;
            type_532->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
            type_532->mRegister=register__465;
            type_532->mUnsigned=type_532->mUnsigned||unsigned__466;
            type_532->mVolatile=volatile__464;
            type_532->mGenerate=generate__479;
            type_532->mUniq=type_532->mUniq||uniq__477;
            type_532->mStatic=(type_532->mStatic||static__463)&&!type_532->mUniq;
            type_532->mRecord=type_532->mRecord||record__460;
            type_532->mException=type_532->mException||exception__461;
            type_532->mExtern=type_532->mExtern||extern__475;
            type_532->mInline=type_532->mInline||inline__476;
            type_532->mRestrict=type_532->mRestrict||restrict__470;
            type_532->mLongLong=type_532->mLongLong||long_long_468;
            type_532->mLong=type_532->mLong||long__467;
            type_532->mShort=type_532->mShort||short__469;
            type_532->mPointerNum+=pointer_num_521;
            type_532->mHeap=type_532->mHeap||heap_522;
            type_532->mChannel=type_532->mChannel||channel_525;
            type_532->mAnyClass=type_532->mAnyClass||any_class_526;
            type_532->mCreateVTable=type_532->mCreateVTable||vtable_527;
            __dec_obj259=type_532->mTupleName;
            type_532->mTupleName=(char*)come_increment_ref_count(tuple_name_528);
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)((void*)(__right_value599=map$2voidphvoidphp_operator_load_element(info->generics_classes,((char*)(__right_value598=__builtin_string(type_name_459)))))))==((void*)0))),            (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
            come_call_finalizer3(__right_value599,(void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result319__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value601=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2475, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value601,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result319__;
            }
            __dec_obj260=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2478, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value604=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_590=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_591=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_592=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value604,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_592) {
                    __result320__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value606=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2484, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_591 = come_decrement_ref_count2(var_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value606,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result320__;
                }
                list$1voidphp_push_back(type_532->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_590));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_591 = come_decrement_ref_count2(var_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result321__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value608=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2501, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_591 = come_decrement_ref_count2(var_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value608,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result321__;
                }
                come_call_finalizer3(generics_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_591 = come_decrement_ref_count2(var_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_532,info)) {
                __dec_obj261=type_532;
                type_532=(struct sType*)come_increment_ref_count(solve_generics(type_532,info->generics_type,info));
                come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_532,type_532,info)) {
                    new_name_593=(char*)come_increment_ref_count(create_generics_name(type_532,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_593);
                    exit(7);
                    new_name_593 = come_decrement_ref_count2(new_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_532->mConstant=type_532->mConstant||constant_462;
            type_532->mAtomic=type_532->mAtomic||atomic__483;
            __dec_obj262=type_532->mAlignas;
            type_532->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
            if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
            type_532->mRegister=register__465;
            type_532->mUnsigned=type_532->mUnsigned||unsigned__466;
            type_532->mVolatile=volatile__464;
            type_532->mGenerate=generate__479;
            type_532->mUniq=type_532->mUniq||uniq__477;
            type_532->mStatic=(type_532->mStatic||static__463)&&!type_532->mUniq;
            type_532->mRecord=type_532->mRecord||record__460;
            type_532->mException=type_532->mException||exception__461;
            type_532->mExtern=type_532->mExtern||extern__475;
            type_532->mInline=type_532->mInline||inline__476;
            type_532->mRestrict=type_532->mRestrict||restrict__470;
            type_532->mLongLong=type_532->mLongLong||long_long_468;
            type_532->mLong=type_532->mLong||long__467;
            type_532->mShort=type_532->mShort||short__469;
            type_532->mPointerNum+=pointer_num_521;
            type_532->mHeap=type_532->mHeap||heap_522;
            type_532->mChannel=type_532->mChannel||channel_525;
            type_532->mAnyClass=type_532->mAnyClass||any_class_526;
            type_532->mCreateVTable=type_532->mCreateVTable||vtable_527;
            __dec_obj263=type_532->mTupleName;
            type_532->mTupleName=(char*)come_increment_ref_count(tuple_name_528);
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj264=type_name_459;
            type_name_459=(char*)come_increment_ref_count(type_532->mClass->mName);
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__471) {
                klass_594=((struct sClass*)((void*)(__right_value611=map$2voidphvoidphp_operator_load_element(info->classes,type_name_459))));
                come_call_finalizer3(__right_value611,(void*)0, 0, 1, 0, 0, __result_obj__);
                if(                klass_594==((void*)0)&&*info->p!=60) {
                    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_459),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2548, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_459,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__472) {
                klass_641=((struct sClass*)((void*)(__right_value628=map$2voidphvoidphp_operator_load_element(info->classes,type_name_459))));
                come_call_finalizer3(__right_value628,(void*)0, 0, 1, 0, 0, __result_obj__);
                if(                klass_641==((void*)0)&&*info->p!=60) {
                    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(type_name_459),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2555, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_459,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj275=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2559, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_459,(_Bool)0,info));
            come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_532->mConstant=type_532->mConstant||constant_462;
            type_532->mAtomic=type_532->mAtomic||atomic__483;
            __dec_obj276=type_532->mAlignas;
            type_532->mAlignas=(struct sNode*)come_increment_ref_count(alignas__480);
            if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
            type_532->mRegister=register__465;
            type_532->mUnsigned=type_532->mUnsigned||unsigned__466;
            type_532->mVolatile=volatile__464;
            type_532->mGenerate=generate__479;
            type_532->mUniq=type_532->mUniq||uniq__477;
            type_532->mStatic=(type_532->mStatic||static__463)&&!type_532->mUniq;
            type_532->mRecord=type_532->mRecord||record__460;
            type_532->mException=type_532->mException||exception__461;
            type_532->mExtern=type_532->mExtern||extern__475;
            type_532->mInline=type_532->mInline||inline__476;
            type_532->mRestrict=type_532->mRestrict||restrict__470;
            type_532->mLongLong=type_532->mLongLong||long_long_468;
            type_532->mLong=type_532->mLong||long__467;
            type_532->mShort=type_532->mShort||short__469;
            type_532->mPointerNum+=pointer_num_521;
            type_532->mHeap=type_532->mHeap||heap_522;
            type_532->mChannel=type_532->mChannel||channel_525;
            type_532->mAnyClass=type_532->mAnyClass||any_class_526;
            type_532->mCreateVTable=type_532->mCreateVTable||vtable_527;
            __dec_obj277=type_532->mTupleName;
            type_532->mTupleName=(char*)come_increment_ref_count(tuple_name_528);
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_532->mPointerNum++;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mHeap=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mNoHeap=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_532->mGuardValue=(_Bool)1;
                }
                else {
                    type_532->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_532->mPointerNum++;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mHeap=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_532->mCreateVTable=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mAnyClass=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_532->mChannel=(_Bool)1;
                if(                type_532->mNoSolvedGenericsType) {
                    type_532->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_642=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 2702, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            list$1voidphp_push_back(types_642,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_532)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value636=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_643=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_644=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_645=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value636,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_645) {
                    __result346__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value638=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2713, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_644 = come_decrement_ref_count2(name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_642,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value638,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result346__;
                }
                list$1voidphp_push_back(types_642,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_643)));
                come_call_finalizer3(type2_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_644 = come_decrement_ref_count2(name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_646=list$1voidphp_length(types_642);
            __dec_obj278=type_532;
            type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2726, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value641=xsprintf("tuple%d",num_tuples_646))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj278,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_532->mPointerNum++;
            type_532->mHeap=(_Bool)1;
            for(            o2_saved_647=(struct list$1voidph*)come_increment_ref_count((types_642)),it_648=((struct sType*)list$1voidphp_begin((o2_saved_647)));            !list$1voidphp_end((o2_saved_647));            it_648=((struct sType*)list$1voidphp_next((o2_saved_647)))            ){
                list$1voidphp_push_back(type_532->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value643=come_call_cloner(sType_clone, it_648))))));
                come_call_finalizer3(__right_value643,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_647,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_532->mPointerNum++;
                    if(                    type_532->mNoSolvedGenericsType) {
                        type_532->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_532->mHeap=(_Bool)1;
                    if(                    type_532->mNoSolvedGenericsType) {
                        type_532->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_532->mCreateVTable=(_Bool)1;
                    if(                    type_532->mNoSolvedGenericsType) {
                        type_532->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_532->mAnyClass=(_Bool)1;
                    if(                    type_532->mNoSolvedGenericsType) {
                        type_532->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_532->mChannel=(_Bool)1;
                    if(                    type_532->mNoSolvedGenericsType) {
                        type_532->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_532,info)) {
                __dec_obj279=type_532;
                type_532=(struct sType*)come_increment_ref_count(solve_generics(type_532,info->generics_type,info));
                come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_532,type_532,info)) {
                    new_name_649=(char*)come_increment_ref_count(create_generics_name(type_532,info));
                    printf("output generics is failed(%s)\n",new_name_649);
                    exit(9);
                    new_name_649 = come_decrement_ref_count2(new_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_532->mMultipleTypes=(_Bool)1;
            __dec_obj280=type_name_459;
            type_name_459=(char*)come_increment_ref_count(type_532->mClass->mName);
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_642,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_650=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_650,"")) {
            __dec_obj281=type_532->mAttribute;
            type_532->mAttribute=(char*)come_increment_ref_count(attribute_650);
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_538&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj282=var_name_533;
                var_name_533=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_482) {
                static int num_anonymous_var_name_651=0;
                num_anonymous_var_name_651++;
                __dec_obj283=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_651));
                __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj284=var_name_533;
                var_name_533=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_652=0;
                num_anonymous_var_name_652++;
                __dec_obj285=var_name_533;
                var_name_533=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_652));
                __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_538&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_653=info->no_comma;
                info->no_comma=(_Bool)1;
                node_654=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_653;
                __dec_obj286=type_532->mSizeNum;
                type_532->mSizeNum=(struct sNode*)come_increment_ref_count(node_654);
                if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_654) { node_654 = come_decrement_ref_count2(node_654, ((struct sNode*)node_654)->finalize, ((struct sNode*)node_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_655=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_650,"")&&string_operator_not_equals(attribute2_655,"")) {
                __dec_obj287=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_650,((char*)(__right_value653=charp_operator_add(" ",attribute2_655)))));
                __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value653 = come_decrement_ref_count2(__right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_655,"")) {
                __dec_obj288=type_532->mAttribute;
                type_532->mAttribute=(char*)come_increment_ref_count(attribute2_655);
                __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_655 = come_decrement_ref_count2(attribute2_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_650 = come_decrement_ref_count2(attribute_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_532->mArrayPointerType=(_Bool)1;
            type_532->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_656=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(type_532->mArrayNum,(struct sNode*)come_increment_ref_count(node_656));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_656) { node_656 = come_decrement_ref_count2(node_656, ((struct sNode*)node_656)->finalize, ((struct sNode*)node_656)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value656=parse_attribute(info,(_Bool)0)));
    asm_name_657=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_658=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value656,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_658,"")) {
        __dec_obj289=type_532->mAttribute;
        type_532->mAttribute=(char*)come_increment_ref_count(attribute2_658);
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj290=type_532->mAsmName;
    type_532->mAsmName=(char*)come_increment_ref_count(asm_name_657);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_532->mChannel) {
        type_before_659=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_532));
        __dec_obj291=type_532;
        type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2899, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj292=type_532->mArrayNum;
        type_532->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___660[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value660=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2900, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),1,__list_values1___660)));
        come_call_finalizer3(__dec_obj292,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj293=type_532->mChannelType;
        type_532->mChannelType=(struct sType*)come_increment_ref_count(type_before_659);
        come_call_finalizer3(__dec_obj293,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_532->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_659,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_532->mAnyClass&&!type_532->mClass->mProtocol) {
        type_before_664=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_532));
        type_before_664->mHeap=(_Bool)1;
        type_before_664->mPointerNum=1;
        __dec_obj294=type_532;
        type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2908, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_532->mHeap=(_Bool)1;
        type_532->mPointerNum=1;
        __dec_obj295=type_532->mAnyOriginalType;
        type_532->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_664);
        come_call_finalizer3(__dec_obj295,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_532->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_532->mException) {
        type2_665=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2915, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type2_665->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2916, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type0",(_Bool)0,info)));
        list$1voidphp_operator_store_element(type2_665->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2917, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type1",(_Bool)0,info)));
        type2_665->mPointerNum=1;
        type2_665->mHeap=(_Bool)1;
        type3_671=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2921, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type3_671->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_532));
        list$1voidphp_operator_store_element(type3_671->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2923, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)));
        ((struct sType*)((void*)(__right_value677=list$1voidphp_operator_load_element(type3_671->mGenericsTypes,1))))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value677,(void*)0, 0, 1, 0, 0, __result_obj__);
        type4_672=(struct sType*)come_increment_ref_count(solve_generics(type2_665,type3_671,info));
        type4_672->mException=(_Bool)1;
        type4_672->mUniq=type_532->mUniq;
        __result352__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value680=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2931, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type4_672),(char*)come_increment_ref_count(var_name_533),(_Bool)1)));
        come_call_finalizer3(type2_665,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_657 = come_decrement_ref_count2(asm_name_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_658 = come_decrement_ref_count2(attribute2_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value680,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result352__;
        come_call_finalizer3(type2_665,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_672,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_520,"")) {
        __dec_obj297=type_532->mAttribute;
        type_532->mAttribute=(char*)come_increment_ref_count(attribute_520);
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value682=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2938, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_532),(char*)come_increment_ref_count(var_name_533),(_Bool)1)));
    type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__480) { alignas__480 = come_decrement_ref_count2(alignas__480, ((struct sNode*)alignas__480)->finalize, ((struct sNode*)alignas__480)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_520 = come_decrement_ref_count2(attribute_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_528 = come_decrement_ref_count2(tuple_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_533 = come_decrement_ref_count2(var_name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_657 = come_decrement_ref_count2(asm_name_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_658 = come_decrement_ref_count2(attribute2_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value682,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_559;
int i_560;
char* __result315__;
char* default_value_561;
char* __result316__;
default_value_561 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_559=self->head;
    i_560=0;
    while(it_559!=((void*)0)) {
        if(        position==i_560) {
            __result315__ = gComeFunResultObject = __result_obj__ = it_559->item;
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
        it_559=it_559->next;
        i_560++;
    }
    memset(&default_value_561,0,sizeof(char*));
    __result316__ = gComeFunResultObject = __result_obj__ = default_value_561;
    default_value_561 = come_decrement_ref_count2(default_value_561, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj246;
struct sType* __dec_obj247;
char* __dec_obj248;
char* __dec_obj249;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj246=self->c_value;
            __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj247=self->type;
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj248=self->c_value_without_right_value_objects;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj249=self->c_value_without_cast_object_value;
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_612;
unsigned int it_613;
_Bool same_key_exist_630;
char* it2_633;
struct map$2voidphvoidph* __result343__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_612=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_613=hash_612;
    while((_Bool)1) {
        if(        self->item_existance[it_613]) {
            if(            come_call_equals((void*)0, self->keys[it_613], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_613]);
                    come_call_finalizer3(self->keys[it_613], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_613]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_613]);
                    self->keys[it_613]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_613], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_613]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_613]=item;
                }
                break;
            }
            it_613++;
            if(            it_613>=self->size) {
                it_613=0;
            }
            else if(            it_613==hash_612) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_613]=(_Bool)1;
            if(            1) {
                self->keys[it_613]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_613]=key;
            }
            if(            1) {
                self->items[it_613]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_613]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_630=(_Bool)0;
    for(    it2_633=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_633=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_633, key)) {
            same_key_exist_630=(_Bool)1;
        }
    }
    if(    !same_key_exist_630) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_595;
void* __right_value612 = (void*)0;
void** keys_596;
void* __right_value613 = (void*)0;
void** items_597;
void* __right_value614 = (void*)0;
_Bool* item_existance_598;
int len_599;
void* it_602;
void* default_value_605;
void* __right_value615 = (void*)0;
void* it2_606;
unsigned int hash_609;
int n_610;
void* default_value_611;
void* __right_value616 = (void*)0;
default_value_605 = (void*)0;
default_value_611 = (void*)0;
    size_595=self->size*10;
    keys_596=(void**)come_increment_ref_count(((void**)(__right_value612=(void**)come_calloc(1, sizeof(void*)*(1*(size_595)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_597=(void**)come_increment_ref_count(((void**)(__right_value613=(void**)come_calloc(1, sizeof(void*)*(1*(size_595)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_598=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value614=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_595)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_599=0;
    for(    it_602=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_602=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_605,0,sizeof(void*));
        it2_606=((void*)(__right_value615=map$2voidphvoidphp_at(self,it_602,default_value_605)));
        come_call_finalizer3(__right_value615,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_609=come_call_get_hash_key((void*)0, ((void*)it_602))%size_595;
        n_610=hash_609;
        while((_Bool)1) {
            if(            item_existance_598[n_610]) {
                n_610++;
                if(                n_610>=size_595) {
                    n_610=0;
                }
                else if(                n_610==hash_609) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_598[n_610]=(_Bool)1;
                keys_596[n_610]=it_602;
                items_597[n_610]=((void*)(__right_value616=map$2voidphvoidphp_at(self,it_602,default_value_611)));
                come_call_finalizer3(__right_value616,(void*)0, 0, 1, 0, 0, (void*)0);
                len_599++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_596;
    self->items=items_597;
    self->item_existance=item_existance_598;
    self->size=size_595;
    self->len=len_599;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_600;
void* __result322__;
void* __result323__;
void* result_601;
void* __result324__;
result_600 = (void*)0;
result_601 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_600,0,sizeof(void*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_600;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_601,0,sizeof(void*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_601;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_603;
void* __result325__;
void* __result326__;
void* result_604;
void* __result327__;
result_603 = (void*)0;
result_604 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_603,0,sizeof(void*));
        __result325__ = gComeFunResultObject = __result_obj__ = result_603;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result326__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    memset(&result_604,0,sizeof(void*));
    __result327__ = gComeFunResultObject = __result_obj__ = result_604;
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_607;
unsigned int it_608;
void* __result328__;
void* __result329__;
void* __result330__;
void* __result331__;
    hash_607=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_608=hash_607;
    while((_Bool)1) {
        if(        self->item_existance[it_608]) {
            if(            come_call_equals((void*)0, self->keys[it_608], key)) {
                __result328__ = gComeFunResultObject = __result_obj__ = self->items[it_608];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result328__;
            }
            it_608++;
            if(            it_608>=self->size) {
                it_608=0;
            }
            else if(            it_608==hash_607) {
                __result329__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result329__;
            }
        }
        else {
            __result330__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result330__;
        }
    }
    __result331__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_614;
struct list_item$1voidp* it_615;
struct list$1voidp* __result335__;
    it2_614=0;
    it_615=self->head;
    while(it_615!=((void*)0)) {
        if(        come_call_equals((void*)0, it_615->item, item)) {
            list$1voidpp_delete(self,it2_614,it2_614+1);
            break;
        }
        it2_614++;
        it_615=it_615->next;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_616;
struct list$1voidp* __result332__;
struct list_item$1voidp* it_619;
int i_620;
struct list_item$1voidp* prev_it_621;
struct list_item$1voidp* it_622;
int i_623;
struct list_item$1voidp* prev_it_624;
struct list_item$1voidp* it_625;
struct list_item$1voidp* head_prev_it_626;
struct list_item$1voidp* tail_it_627;
int i_628;
struct list_item$1voidp* prev_it_629;
struct list$1voidp* __result334__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_616=tail;
        tail=head;
        head=tmp_616;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result332__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_619=self->head;
        i_620=0;
        while(it_619!=((void*)0)) {
            if(            i_620<tail) {
                prev_it_621=it_619;
                it_619=it_619->next;
                i_620++;
                come_call_finalizer3(prev_it_621,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_620==tail) {
                self->head=it_619;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_619=it_619->next;
                i_620++;
            }
        }
    }
    else if(    tail==self->len) {
        it_622=self->head;
        i_623=0;
        while(it_622!=((void*)0)) {
            if(            i_623==head) {
                self->tail=it_622->prev;
                self->tail->next=((void*)0);
            }
            if(            i_623>=head) {
                prev_it_624=it_622;
                it_622=it_622->next;
                i_623++;
                come_call_finalizer3(prev_it_624,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_622=it_622->next;
                i_623++;
            }
        }
    }
    else {
        it_625=self->head;
        head_prev_it_626=((void*)0);
        tail_it_627=((void*)0);
        i_628=0;
        while(it_625!=((void*)0)) {
            if(            i_628==head) {
                head_prev_it_626=it_625->prev;
            }
            if(            i_628==tail) {
                tail_it_627=it_625;
            }
            if(            i_628>=head&&i_628<tail) {
                prev_it_629=it_625;
                it_625=it_625->next;
                i_628++;
                come_call_finalizer3(prev_it_629,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_625=it_625->next;
                i_628++;
            }
        }
        if(        head_prev_it_626!=((void*)0)) {
            head_prev_it_626->next=tail_it_627;
        }
        if(        tail_it_627!=((void*)0)) {
            tail_it_627->prev=head_prev_it_626;
        }
    }
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_617;
struct list_item$1voidp* prev_it_618;
struct list$1voidp* __result333__;
    it_617=self->head;
    while(it_617!=((void*)0)) {
        prev_it_618=it_617;
        it_617=it_617->next;
        come_call_finalizer3(prev_it_618,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_631;
void* __result336__;
void* __result337__;
void* result_632;
void* __result338__;
result_631 = (void*)0;
result_632 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_631,0,sizeof(void*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_631;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->head;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_632,0,sizeof(void*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_632;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_634;
void* __result339__;
void* __result340__;
void* result_635;
void* __result341__;
result_634 = (void*)0;
result_635 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_634,0,sizeof(void*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_634;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_635,0,sizeof(void*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_635;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value617 = (void*)0;
struct list_item$1voidp* litem_636;
void* __right_value618 = (void*)0;
struct list_item$1voidp* litem_637;
void* __right_value619 = (void*)0;
struct list_item$1voidp* litem_638;
struct list$1voidp* __result342__;
    if(    self->len==0) {
        litem_636=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value617=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_636->prev=((void*)0);
        litem_636->next=((void*)0);
        litem_636->item=item;
        self->tail=litem_636;
        self->head=litem_636;
    }
    else if(    self->len==1) {
        litem_637=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value618=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_637->prev=self->head;
        litem_637->next=((void*)0);
        litem_637->item=item;
        self->tail=litem_637;
        self->head->next=litem_637;
    }
    else {
        litem_638=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value619=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_638->prev=self->tail;
        litem_638->next=((void*)0);
        litem_638->item=item;
        self->tail->next=litem_638;
        self->tail=litem_638;
    }
    self->len++;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj265;
struct list$1voidph* __dec_obj266;
char* __dec_obj267;
char* __dec_obj268;
char* __dec_obj269;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj265=self->mName;
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj266=self->mFields;
            come_call_finalizer3(__dec_obj266,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj267=self->mDeclareSName;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj268=self->mParentClassName;
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj269=self->mAttribute;
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result344__;
void* __right_value620 = (void*)0;
struct sClass* result_640;
void* __right_value621 = (void*)0;
char* __dec_obj270;
void* __right_value622 = (void*)0;
struct list$1voidph* __dec_obj271;
void* __right_value623 = (void*)0;
char* __dec_obj272;
void* __right_value624 = (void*)0;
char* __dec_obj273;
void* __right_value625 = (void*)0;
char* __dec_obj274;
struct sClass* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_640=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_640->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_640->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_640->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_640->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_640->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_640->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_640->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_640->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj270=result_640->mName;
        result_640->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_640->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj271=result_640->mFields;
        result_640->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj271,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_640->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj272=result_640->mDeclareSName;
        result_640->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj273=result_640->mParentClassName;
        result_640->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj274=result_640->mAttribute;
        result_640->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_640;
    come_call_finalizer3(result_640,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_639;
    result_639=0;
    result_639+=int_get_hash_key(((int)self->mStruct));
    result_639+=int_get_hash_key(((int)self->mFloat));
    result_639+=int_get_hash_key(((int)self->mUnion));
    result_639+=int_get_hash_key(((int)self->mGenerics));
    result_639+=int_get_hash_key(((int)self->mMethodGenerics));
    result_639+=int_get_hash_key(((int)self->mEnum));
    result_639+=int_get_hash_key(((int)self->mProtocol));
    result_639+=int_get_hash_key(((int)self->mNumber));
    result_639+=int_get_hash_key(((int)self->mName));
    result_639+=int_get_hash_key(((int)self->mGenericsNum));
    result_639+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_639+=int_get_hash_key(((int)self->mFields));
    result_639+=int_get_hash_key(((int)self->mOutputed));
    result_639+=int_get_hash_key(((int)self->mOutputed2));
    result_639+=int_get_hash_key(((int)self->mDeclareSName));
    result_639+=int_get_hash_key(((int)self->mNobodyStruct));
    result_639+=int_get_hash_key(((int)self->mParentClassName));
    result_639+=int_get_hash_key(((int)self->mAttribute));
    return result_639;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_661;
struct list$1sNodeph* __result347__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_661=0;    i_661<num_value;    i_661++    ){
        list$1sNodephp_push_back(self,values[i_661]);
    }
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result348__;
void* __right_value661 = (void*)0;
struct list$1sNodeph* result_663;
struct list$1sNodeph* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_663=(struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "list$1sNodeph_clone", 3, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals));
    if(    self!=((void*)0)) {
        result_663->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_663->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_663->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_663->it=self->it;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_663;
    come_call_finalizer3(result_663,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_662;
    result_662=0;
    result_662+=int_get_hash_key(((int)self->head));
    result_662+=int_get_hash_key(((int)self->tail));
    result_662+=int_get_hash_key(((int)self->len));
    result_662+=int_get_hash_key(((int)self->it));
    return result_662;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    if(    !list_item$1sNodeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_666;
int i_667;
void* default_value_668;
struct list$1voidph* __result350__;
struct list_item$1voidph* it_669;
int i_670;
void* __dec_obj296;
struct list$1voidph* __result351__;
default_value_668 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_666=self->len;
        for(        i_667=0;        i_667<position-len_666;        i_667++        ){
            memset(&default_value_668,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_668));
            come_call_finalizer3(default_value_668, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result350__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    it_669=self->head;
    i_670=0;
    while(it_669!=((void*)0)) {
        if(        position==i_670) {
            __dec_obj296=it_669->item;
            it_669->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj296,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_669=it_669->next;
        i_670++;
    }
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

