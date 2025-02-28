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
    int mBlockLevel;
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
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
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
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
    (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
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
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    (__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result233__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_317;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* result_type_318;
void* __right_value293 = (void*)0;
int block_level_354;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_355;
void* __right_value296 = (void*)0;
char* __dec_obj75;
void* __right_value297 = (void*)0;
struct sType* __dec_obj76;
_Bool __result250__;
    come_fun_317=info->come_fun;
    info->come_fun=self->mFun;
    result_type_318=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value293=make_define_var(result_type_318,"__result_obj__",(_Bool)0,info))));
        (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    block_level_354=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_354;
    come_value_355=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj75=come_value_355->c_value;
    come_value_355->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=come_value_355->type;
    come_value_355->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct list$1voidph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1voidph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
struct sNode* __dec_obj46;
char* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj37=self->mChannelType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj40=self->mArrayNum;
            come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj42=self->mParamTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj43=self->mParamNames;
            come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj44=self->mResultType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj45=self->mSizeNum;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj46=self->mAlignas;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj49=self->mTupleName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj50=self->mAttribute;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
void* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
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
struct sNode* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
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
struct sType* __dec_obj51;
void* __right_value258 = (void*)0;
struct sType* __dec_obj52;
void* __right_value259 = (void*)0;
struct sType* __dec_obj53;
void* __right_value260 = (void*)0;
struct sType* __dec_obj54;
void* __right_value267 = (void*)0;
struct list$1voidph* __dec_obj58;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj62;
void* __right_value276 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj67;
void* __right_value284 = (void*)0;
struct sType* __dec_obj68;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value287 = (void*)0;
char* __dec_obj71;
void* __right_value288 = (void*)0;
char* __dec_obj72;
void* __right_value289 = (void*)0;
char* __dec_obj73;
void* __right_value290 = (void*)0;
char* __dec_obj74;
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
        __dec_obj51=result_336->mNoSolvedGenericsType;
        result_336->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj52=result_336->mOriginalLoadVarType;
        result_336->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj53=result_336->mAnyOriginalType;
        result_336->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj54=result_336->mChannelType;
        result_336->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj58=result_336->mGenericsTypes;
        result_336->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj58,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj62=result_336->mArrayNum;
        result_336->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj62,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj63=result_336->mParamTypes;
        result_336->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj67=result_336->mParamNames;
        result_336->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj68=result_336->mResultType;
        result_336->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mVarArgs=self->mVarArgs;
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
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj69=result_336->mSizeNum;
        result_336->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj70=result_336->mAlignas;
        result_336->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
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
        result_336->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj71=result_336->mOriginalTypeName;
        result_336->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mAllocaValue=self->mAllocaValue;
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
        __dec_obj72=result_336->mAsmName;
        result_336->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj73=result_336->mTupleName;
        result_336->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj74=result_336->mAttribute;
        result_336->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    result_329+=int_get_hash_key(((int)self->mChannelType));
    result_329+=int_get_hash_key(((int)self->mAnyClass));
    result_329+=int_get_hash_key(((int)self->mGenericsTypes));
    result_329+=int_get_hash_key(((int)self->mArrayNum));
    result_329+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_329+=int_get_hash_key(((int)self->mParamTypes));
    result_329+=int_get_hash_key(((int)self->mParamNames));
    result_329+=int_get_hash_key(((int)self->mResultType));
    result_329+=int_get_hash_key(((int)self->mVarArgs));
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
    result_329+=int_get_hash_key(((int)self->mSizeNum));
    result_329+=int_get_hash_key(((int)self->mAlignas));
    result_329+=int_get_hash_key(((int)self->mPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_329+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_329+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mAllocaValue));
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
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1voidph* result_338;
struct list_item$1voidph* it_339;
void* __right_value266 = (void*)0;
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
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj55;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj56;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_342;
void* __dec_obj57;
struct list$1voidph* __result237__;
    if(    self->len==0) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj55=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj56=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj57=litem_342->item;
        litem_342->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
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
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_343;
struct list_item$1sNodeph* it_344;
void* __right_value274 = (void*)0;
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
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj59;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj60;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj61;
struct list$1sNodeph* __result241__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj59=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj60=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj61=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_347;
        self->tail=litem_347;
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
void* __right_value273 = (void*)0;
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
    ((result_348) ? result_348 = come_decrement_ref_count2(result_348, ((struct sNode*)result_348)->finalize, ((struct sNode*)result_348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result245__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_349;
struct list_item$1charph* it_350;
void* __right_value282 = (void*)0;
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
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj64;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj65;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_353;
char* __dec_obj66;
struct list$1charph* __result246__;
    if(    self->len==0) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj64=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj65=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj66=litem_353->item;
        litem_353->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj77;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_357;
struct CVALUE* __dec_obj82;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_358;
struct CVALUE* __dec_obj83;
struct list$1CVALUEph* __result249__;
    if(    self->len==0) {
        litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj77=litem_356->item;
        litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj82=litem_357->item;
        litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj83=litem_358->item;
        litem_358->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
char* __dec_obj78;
struct sType* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj78=self->c_value;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj79=self->type;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj80=self->c_value_without_right_value_objects;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj81=self->c_value_without_cast_object_value;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct sFun* __dec_obj84;
struct sFunNode* __result251__;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj84,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sFunNode")));
    (__right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_359;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* result_type_360;
void* __right_value305 = (void*)0;
int block_level_361;
void* __right_value306 = (void*)0;
    come_fun_359=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_360=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value305=make_define_var(result_type_360,"__result_obj__",(_Bool)0,info))));
            (__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_level_361=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_361;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value306=xsprintf("come_heap_final();\n"))));
            (__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(result_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_359;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj85;
struct sType* __dec_obj86;
struct list$1voidph* __dec_obj87;
struct list$1charph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct sType* __dec_obj90;
struct sBlock* __dec_obj91;
struct buffer* __dec_obj94;
struct buffer* __dec_obj95;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj85=self->mName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj86=self->mResultType;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj87=self->mParamTypes;
            come_call_finalizer3(__dec_obj87,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj88=self->mParamNames;
            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj89=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj90=self->mLambdaType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj91=self->mBlock;
            come_call_finalizer3(__dec_obj91,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj94=self->mSource;
            come_call_finalizer3(__dec_obj94,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj95=self->mSourceHead;
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead2;
            come_call_finalizer3(__dec_obj96,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj97=self->mSourceDefer;
            come_call_finalizer3(__dec_obj97,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj98=self->mAttribute;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj99=self->mFunAttribute;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj92;
struct sVarTable* __dec_obj93;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj92=self->mNodes;
            come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj93=self->mVarTable;
            come_call_finalizer3(__dec_obj93,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj100;
struct sFun* __dec_obj101;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj100=self->sname;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj101=self->mFun;
            come_call_finalizer3(__dec_obj101,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1sNodeph* __dec_obj102;
struct sBlock* __result253__;
    __dec_obj102=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj103;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj104;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj105;
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1voidph* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
char* __dec_obj111;
void* __right_value312 = (void*)0;
char* __dec_obj112;
struct sGenericsFun* __result254__;
    __dec_obj103=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj104=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj105=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj108=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj108,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj109=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj110=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj111=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj112=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj113;
struct list$1charph* __dec_obj114;
struct list$1charph* __dec_obj115;
char* __dec_obj116;
struct sType* __dec_obj117;
struct list$1voidph* __dec_obj118;
struct list$1charph* __dec_obj119;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj113=self->mImplType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj114=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj117=self->mResultType;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj118=self->mParamTypes;
            come_call_finalizer3(__dec_obj118,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj119=self->mParamNames;
            come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj120=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj121=self->mBlock;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj122=self->mGenericsSName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sBlock* result_362;
int sline_top_363;
int block_level_364;
char* p_saved_365;
int sline_saved_366;
char* sname_saved_367;
void* __right_value315 = (void*)0;
char* __dec_obj123;
char* __dec_obj124;
struct map$2voidphvoidph* __dec_obj125;
char* p_372;
int sline_373;
void* __right_value316 = (void*)0;
char* sname_374;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* module_name_375;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* params_376;
void* __right_value321 = (void*)0;
char* word_377;
void* __right_value322 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_378=0;
char* Err_379=0;
void* __right_value323 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_380=0;
char* Err_381=0;
void* __right_value324 = (void*)0;
char* __dec_obj127;
void* __right_value325 = (void*)0;
char* __dec_obj128;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool _if_conditional1;
void* __right_value328 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_385=0;
char* Err_386=0;
struct sBlock* __result259__;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sClassModule* module_387;
void* __right_value331 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_388=0;
char* Err_389=0;
void* __right_value339 = (void*)0;
void* __right_value345 = (void*)0;
struct map$2voidphvoidph* __dec_obj131;
int i_403;
struct list$1charph* o2_saved_404;
char* it_407;
void* __right_value346 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* __dec_obj132;
void* __right_value358 = (void*)0;
struct sNode* node_457;
void* __right_value359 = (void*)0;
char* __dec_obj133;
void* __right_value360 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_458=0;
char* Err_459=0;
_Bool omit_semicolon_463;
void* __right_value364 = (void*)0;
char* __dec_obj137;
char* head_478;
void* __right_value365 = (void*)0;
struct sNode* value_479;
char* tail_480;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* node_482;
void* __right_value369 = (void*)0;
char* __dec_obj139;
struct sNode* node_483;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value376 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_485=0;
char* Err_486=0;
_Bool omit_semicolon_487;
char* p_488;
char* head_489;
void* __right_value377 = (void*)0;
char* source_490;
void* __right_value378 = (void*)0;
struct sNode* node_491;
void* __right_value379 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_492=0;
char* Err_493=0;
struct sBlock* __result304__;
node_483 = (void*)0;
    result_362=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_363=info->sline_top;
    info->sline_top=info->sline;
    block_level_364=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_365=((void*)0);
        sline_saved_366=0;
        sname_saved_367=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_365) {
                if(                *info->p==0) {
                    info->p=p_saved_365;
                    info->sline=sline_saved_366;
                    __dec_obj123=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_367));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_365=((void*)0);
                    sline_saved_366=0;
                    __dec_obj124=sname_saved_367;
                    sname_saved_367=((void*)0);
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj125=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj125,map$2voidphvoidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            p_372=info->p;
            sline_373=info->sline;
            sname_374=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_373;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value317=parse_word(info)));
                (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                module_name_375=(char*)come_increment_ref_count(parse_word(info));
                params_376=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_377=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_376,(char*)come_increment_ref_count(word_377));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2intcharph*)(__right_value322=err_msg(info,"invalid source end")));
                            come_exception_var_c1_378=multiple_assign_var1->v1;
                            Err_379=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_379)?(puts(Err_379),exit(0)):(0));
                            come_call_finalizer3(__right_value322,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_379 = come_decrement_ref_count2(Err_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_377 = come_decrement_ref_count2(word_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2intcharph*)(__right_value323=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_380=multiple_assign_var2->v1;
                            Err_381=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_381)?(puts(Err_381),exit(0)):(0));
                            come_call_finalizer3(__right_value323,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_381 = come_decrement_ref_count2(Err_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_377 = come_decrement_ref_count2(word_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_365=info->p;
                sline_saved_366=info->sline;
                __dec_obj127=sname_saved_367;
                sname_saved_367=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj128=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_375));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value327=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value326=__builtin_string(module_name_375)))))))==((void*)0))),                (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                come_call_finalizer3(__right_value327,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2intcharph*)(__right_value328=err_msg(info,"module not found")));
                    come_exception_var_c3_385=multiple_assign_var3->v1;
                    Err_386=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_386)?(puts(Err_386),exit(0)):(0));
                    come_call_finalizer3(__right_value328,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    __result259__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_386 = come_decrement_ref_count2(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_375 = come_decrement_ref_count2(module_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_367 = come_decrement_ref_count2(sname_saved_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_362,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result259__;
                    (Err_386 = come_decrement_ref_count2(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_387=((struct sClassModule*)((void*)(__right_value330=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value329=__builtin_string(module_name_375)))))));
                (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value330,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                list$1charphp_length(module_387->mParams)!=list$1charphp_length(params_376)) {
                    multiple_assign_var4=((struct tuple2$2intcharph*)(__right_value331=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_388=multiple_assign_var4->v1;
                    Err_389=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_389)?(puts(Err_389),exit(0)):(0));
                    come_call_finalizer3(__right_value331,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(1);
                    (Err_389 = come_decrement_ref_count2(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj131=info->module_params;
                info->module_params=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "05function.c", 277, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
                come_call_finalizer3(__dec_obj131,map$2voidphvoidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_403=0;
                for(                o2_saved_404=(struct list$1charph*)come_increment_ref_count((module_387->mParams)),it_407=list$1charphp_begin((o2_saved_404));                !list$1charphp_end((o2_saved_404));                it_407=list$1charphp_next((o2_saved_404))                ){
                    map$2voidphvoidphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_407)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value355=list$1charphp_operator_load_element(params_376,i_403))))));
                    (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    i_403++;
                }
                come_call_finalizer3(o2_saved_404,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_387->mText;
                info->sline=module_387->mSLine;
                __dec_obj132=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_387->mSName));
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_375 = come_decrement_ref_count2(module_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_457=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj133=info->sname;
            info->sname=(char*)come_increment_ref_count(node_457->sname(node_457->_protocol_obj));
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_457->sline(node_457->_protocol_obj);
            if(            node_457==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2intcharph*)(__right_value360=err_msg(info,"Invalid expression")));
                come_exception_var_c5_458=multiple_assign_var5->v1;
                Err_459=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_459)?(puts(Err_459),exit(0)):(0));
                come_call_finalizer3(__right_value360,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(1);
                (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_457));
            parse_sharp_v5(info);
            if(            node_457->terminated(node_457->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_463=(_Bool)1;
            if(            node_457->terminated(node_457->_protocol_obj)) {
                omit_semicolon_463=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_463=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_362->mOmitSemicolon=omit_semicolon_463;
                if(                omit_semicolon_463&&in_function) {
                    list$1sNodephp_delete(result_362->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_372;
                    info->sline=sline_373;
                    __dec_obj137=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_374));
                    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_478=info->p;
                    value_479=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_480=info->p;
                    __dec_obj138=value_479;
                    value_479=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_479),info));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_481[tail_480-head_478+1];
                    memset(&buf_481, 0, sizeof(char)                    *(tail_480-head_478+1)                    );
                    memcpy(buf_481,head_478,tail_480-head_478);
                    buf_481[tail_480-head_478]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_482=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_479),(char*)come_increment_ref_count(__builtin_string(buf_481)),info));
                    list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_482));
                    ((value_479) ? value_479 = come_decrement_ref_count2(value_479, ((struct sNode*)value_479)->finalize, ((struct sNode*)value_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node_482) ? node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    (sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_457) ? node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                    ((value_479) ? value_479 = come_decrement_ref_count2(value_479, ((struct sNode*)value_479)->finalize, ((struct sNode*)value_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node_482) ? node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_457) ? node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                }
            }
            (sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_457) ? node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        if(        p_saved_365) {
            if(            info->p==0) {
                info->p=p_saved_365;
                info->sline=sline_saved_366;
                __dec_obj139=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_367));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_365=((void*)0);
                sline_saved_366=0;
            }
        }
        (sname_saved_367 = come_decrement_ref_count2(sname_saved_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value371=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj141=node_483;
            node_483=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value371,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_483));
        }
        else {
            __dec_obj142=node_483;
            node_483=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_483==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2intcharph*)(__right_value376=err_msg(info,"Invalid expression")));
                come_exception_var_c6_485=multiple_assign_var6->v1;
                Err_486=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_486)?(puts(Err_486),exit(0)):(0));
                come_call_finalizer3(__right_value376,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(1);
                (Err_486 = come_decrement_ref_count2(Err_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_483->terminated(node_483->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_487=(_Bool)1;
            if(            node_483->terminated(node_483->_protocol_obj)) {
                omit_semicolon_487=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_487=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_362->mOmitSemicolon=omit_semicolon_487;
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_483));
        }
        ((node_483) ? node_483 = come_decrement_ref_count2(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    if(    return_self_at_last) {
        p_488=info->p;
        head_489=info->head;
        source_490=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_490;
        info->head=source_490;
        node_491=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_491==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2intcharph*)(__right_value379=err_msg(info,"Invalid expression")));
            come_exception_var_c7_492=multiple_assign_var7->v1;
            Err_493=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_493)?(puts(Err_493),exit(0)):(0));
            come_call_finalizer3(__right_value379,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(1);
            (Err_493 = come_decrement_ref_count2(Err_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_491));
        info->p=p_488;
        info->head=head_489;
        (source_490 = come_decrement_ref_count2(source_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_491) ? node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    info->block_level=block_level_364;
    __result304__ = gComeFunResultObject = __result_obj__ = result_362;
    come_call_finalizer3(result_362,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
int i_368;
int i_369;
    for(    i_368=0;    i_368<self->size;    i_368++    ){
        if(        self->item_existance[i_368]) {
            if(            1) {
                come_call_finalizer3(self->items[i_368],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_369=0;    i_369<self->size;    i_369++    ){
        if(        self->item_existance[i_369]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_369],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_370;
struct list_item$1voidp* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj126;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj126=self->v2;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_382;
unsigned int hash_383;
unsigned int it_384;
void* __result255__;
void* __result256__;
void* __result257__;
void* __result258__;
default_value_382 = (void*)0;
    memset(&default_value_382,0,sizeof(void*));
    hash_383=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_384=hash_383;
    while((_Bool)1) {
        if(        self->item_existance[it_384]) {
            if(            come_call_equals((void*)0, self->keys[it_384], ((char*)key))) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_384];
                come_call_finalizer3(default_value_382,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_384++;
            if(            it_384>=self->size) {
                it_384=0;
            }
            else if(            it_384==hash_383) {
                __result256__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_382);
                come_call_finalizer3(default_value_382,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_382);
            come_call_finalizer3(default_value_382,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_382);
    come_call_finalizer3(default_value_382,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_390;
int i_391;
    for(    i_390=0;    i_390<self->size;    i_390++    ){
        if(        self->item_existance[i_390]) {
            if(            1) {
                come_call_finalizer3(self->items[i_390],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_391=0;    i_391<self->size;    i_391++    ){
        if(        self->item_existance[i_391]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_391],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result260__;
void* __right_value332 = (void*)0;
struct map$2voidphvoidph* result_392;
void* __right_value338 = (void*)0;
struct list$1voidp* __dec_obj129;
struct map$2voidphvoidph* __result265__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_392=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_392->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_392->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_392->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_392->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_392->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj129=result_392->key_list;
        result_392->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj129,list$1voidp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->it=self->it;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_392;
    come_call_finalizer3(result_392,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result261__;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1voidp* result_394;
struct list_item$1voidp* it_395;
struct list$1voidp* __result264__;
    if(    self==((void*)0)) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_394=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_395=self->head;
    while(it_395!=((void*)0)) {
        list$1voidpp_add(result_394,it_395->item);
        it_395=it_395->next;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_394;
    come_call_finalizer3(result_394,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_393;
    result_393=0;
    result_393+=int_get_hash_key(((int)self->head));
    result_393+=int_get_hash_key(((int)self->tail));
    result_393+=int_get_hash_key(((int)self->len));
    result_393+=int_get_hash_key(((int)self->it));
    return result_393;
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
struct list$1voidp* __result262__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1voidp* list$1voidpp_add(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
struct list_item$1voidp* litem_396;
void* __right_value336 = (void*)0;
struct list_item$1voidp* litem_397;
void* __right_value337 = (void*)0;
struct list_item$1voidp* litem_398;
struct list$1voidp* __result263__;
    if(    self->len==0) {
        litem_396=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value335=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=((void*)0);
        litem_396->next=((void*)0);
        litem_396->item=item;
        self->tail=litem_396;
        self->head=litem_396;
    }
    else if(    self->len==1) {
        litem_397=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value336=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=self->head;
        litem_397->next=((void*)0);
        litem_397->item=item;
        self->tail=litem_397;
        self->head->next=litem_397;
    }
    else {
        litem_398=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value337=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->tail;
        litem_398->next=((void*)0);
        litem_398->item=item;
        self->tail->next=litem_398;
        self->tail=litem_398;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_399;
struct list_item$1voidp* prev_it_400;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        prev_it_400=it_399;
        it_399=it_399->next;
        come_call_finalizer3(prev_it_400,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_401;
    result_401=0;
    result_401+=int_get_hash_key(((int)self->keys));
    result_401+=int_get_hash_key(((int)self->item_existance));
    result_401+=int_get_hash_key(((int)self->items));
    result_401+=int_get_hash_key(((int)self->size));
    result_401+=int_get_hash_key(((int)self->len));
    result_401+=int_get_hash_key(((int)self->key_list));
    result_401+=int_get_hash_key(((int)self->it));
    return result_401;
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
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
int i_402;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1voidp* __dec_obj130;
struct map$2voidphvoidph* __result267__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value340=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value341=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value342=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_402=0;    i_402<128;    i_402++    ){
        self->item_existance[i_402]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj130=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj130,list$1voidp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result266__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_405;
char* __result268__;
char* __result269__;
char* result_406;
char* __result270__;
result_405 = (void*)0;
result_406 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_405,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_405;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->head;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_406,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_408;
char* __result271__;
char* __result272__;
char* result_409;
char* __result273__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_408,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_409,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item){
    map$2voidphvoidphp_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_427;
unsigned int it_428;
_Bool same_key_exist_445;
char* it2_448;
struct map$2voidphvoidph* __result295__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_427=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_428=hash_427;
    while((_Bool)1) {
        if(        self->item_existance[it_428]) {
            if(            come_call_equals((void*)0, self->keys[it_428], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_428]);
                    come_call_finalizer3(self->keys[it_428],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_428]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_428]);
                    self->keys[it_428]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_428],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_428]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_428]=item;
                }
                break;
            }
            it_428++;
            if(            it_428>=self->size) {
                it_428=0;
            }
            else if(            it_428==hash_427) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_428]=(_Bool)1;
            if(            1) {
                self->keys[it_428]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_428]=key;
            }
            if(            1) {
                self->items[it_428]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_428]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_445=(_Bool)0;
    for(    it2_448=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_448=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_448, key)) {
            same_key_exist_445=(_Bool)1;
        }
    }
    if(    !same_key_exist_445) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_410;
void* __right_value347 = (void*)0;
void** keys_411;
void* __right_value348 = (void*)0;
void** items_412;
void* __right_value349 = (void*)0;
_Bool* item_existance_413;
int len_414;
void* it_417;
void* default_value_420;
void* __right_value350 = (void*)0;
void* it2_421;
unsigned int hash_424;
int n_425;
void* default_value_426;
void* __right_value351 = (void*)0;
default_value_420 = (void*)0;
default_value_426 = (void*)0;
    size_410=self->size*10;
    keys_411=(void**)come_increment_ref_count(((void**)(__right_value347=(void**)come_calloc(1, sizeof(void*)*(1*(size_410)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_412=(void**)come_increment_ref_count(((void**)(__right_value348=(void**)come_calloc(1, sizeof(void*)*(1*(size_410)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_413=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value349=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_410)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_414=0;
    for(    it_417=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_417=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_420,0,sizeof(void*));
        it2_421=((void*)(__right_value350=map$2voidphvoidphp_at(self,it_417,default_value_420)));
        come_call_finalizer3(__right_value350,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_424=come_call_get_hash_key((void*)0, ((void*)it_417))%size_410;
        n_425=hash_424;
        while((_Bool)1) {
            if(            item_existance_413[n_425]) {
                n_425++;
                if(                n_425>=size_410) {
                    n_425=0;
                }
                else if(                n_425==hash_424) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_413[n_425]=(_Bool)1;
                keys_411[n_425]=it_417;
                items_412[n_425]=((void*)(__right_value351=map$2voidphvoidphp_at(self,it_417,default_value_426)));
                come_call_finalizer3(__right_value351,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_414++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_411;
    self->items=items_412;
    self->item_existance=item_existance_413;
    self->size=size_410;
    self->len=len_414;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_415;
void* __result274__;
void* __result275__;
void* result_416;
void* __result276__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_415,0,sizeof(void*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_416,0,sizeof(void*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_418;
void* __result277__;
void* __result278__;
void* result_419;
void* __result279__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_418,0,sizeof(void*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_419,0,sizeof(void*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_422;
unsigned int it_423;
void* __result280__;
void* __result281__;
void* __result282__;
void* __result283__;
    hash_422=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_423=hash_422;
    while((_Bool)1) {
        if(        self->item_existance[it_423]) {
            if(            come_call_equals((void*)0, self->keys[it_423], key)) {
                __result280__ = gComeFunResultObject = __result_obj__ = self->items[it_423];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result280__;
            }
            it_423++;
            if(            it_423>=self->size) {
                it_423=0;
            }
            else if(            it_423==hash_422) {
                __result281__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
        }
        else {
            __result282__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
    }
    __result283__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_429;
struct list_item$1voidp* it_430;
struct list$1voidp* __result287__;
    it2_429=0;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        if(        come_call_equals((void*)0, it_430->item, item)) {
            list$1voidpp_delete(self,it2_429,it2_429+1);
            break;
        }
        it2_429++;
        it_430=it_430->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_431;
struct list$1voidp* __result284__;
struct list_item$1voidp* it_434;
int i_435;
struct list_item$1voidp* prev_it_436;
struct list_item$1voidp* it_437;
int i_438;
struct list_item$1voidp* prev_it_439;
struct list_item$1voidp* it_440;
struct list_item$1voidp* head_prev_it_441;
struct list_item$1voidp* tail_it_442;
int i_443;
struct list_item$1voidp* prev_it_444;
struct list$1voidp* __result286__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_431=tail;
        tail=head;
        head=tmp_431;
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
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_434=self->head;
        i_435=0;
        while(it_434!=((void*)0)) {
            if(            i_435<tail) {
                prev_it_436=it_434;
                it_434=it_434->next;
                i_435++;
                come_call_finalizer3(prev_it_436,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_435==tail) {
                self->head=it_434;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_434=it_434->next;
                i_435++;
            }
        }
    }
    else if(    tail==self->len) {
        it_437=self->head;
        i_438=0;
        while(it_437!=((void*)0)) {
            if(            i_438==head) {
                self->tail=it_437->prev;
                self->tail->next=((void*)0);
            }
            if(            i_438>=head) {
                prev_it_439=it_437;
                it_437=it_437->next;
                i_438++;
                come_call_finalizer3(prev_it_439,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_437=it_437->next;
                i_438++;
            }
        }
    }
    else {
        it_440=self->head;
        head_prev_it_441=((void*)0);
        tail_it_442=((void*)0);
        i_443=0;
        while(it_440!=((void*)0)) {
            if(            i_443==head) {
                head_prev_it_441=it_440->prev;
            }
            if(            i_443==tail) {
                tail_it_442=it_440;
            }
            if(            i_443>=head&&i_443<tail) {
                prev_it_444=it_440;
                it_440=it_440->next;
                i_443++;
                come_call_finalizer3(prev_it_444,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_440=it_440->next;
                i_443++;
            }
        }
        if(        head_prev_it_441!=((void*)0)) {
            head_prev_it_441->next=tail_it_442;
        }
        if(        tail_it_442!=((void*)0)) {
            tail_it_442->prev=head_prev_it_441;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_432;
struct list_item$1voidp* prev_it_433;
struct list$1voidp* __result285__;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        come_call_finalizer3(prev_it_433,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_446;
void* __result288__;
void* __result289__;
void* result_447;
void* __result290__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_446,0,sizeof(void*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->head;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_447,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_449;
void* __result291__;
void* __result292__;
void* result_450;
void* __result293__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_449,0,sizeof(void*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_450,0,sizeof(void*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct list_item$1voidp* litem_451;
void* __right_value353 = (void*)0;
struct list_item$1voidp* litem_452;
void* __right_value354 = (void*)0;
struct list_item$1voidp* litem_453;
struct list$1voidp* __result294__;
    if(    self->len==0) {
        litem_451=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value352=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        litem_451->item=item;
        self->tail=litem_451;
        self->head=litem_451;
    }
    else if(    self->len==1) {
        litem_452=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value353=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->head;
        litem_452->next=((void*)0);
        litem_452->item=item;
        self->tail=litem_452;
        self->head->next=litem_452;
    }
    else {
        litem_453=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value354=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_453->prev=self->tail;
        litem_453->next=((void*)0);
        litem_453->item=item;
        self->tail->next=litem_453;
        self->tail=litem_453;
    }
    self->len++;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_454;
int i_455;
char* __result296__;
char* default_value_456;
char* __result297__;
default_value_456 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_454=self->head;
    i_455=0;
    while(it_454!=((void*)0)) {
        if(        position==i_455) {
            __result296__ = gComeFunResultObject = __result_obj__ = it_454->item;
            gComeFunResultObject = (void*)0;
            return __result296__;
        }
        it_454=it_454->next;
        i_455++;
    }
    memset(&default_value_456,0,sizeof(char*));
    __result297__ = gComeFunResultObject = __result_obj__ = default_value_456;
    (default_value_456 = come_decrement_ref_count2(default_value_456, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct list_item$1sNodeph* litem_460;
struct sNode* __dec_obj134;
void* __right_value362 = (void*)0;
struct list_item$1sNodeph* litem_461;
struct sNode* __dec_obj135;
void* __right_value363 = (void*)0;
struct list_item$1sNodeph* litem_462;
struct sNode* __dec_obj136;
struct list$1sNodeph* __result298__;
    if(    self->len==0) {
        litem_460=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value361=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=((void*)0);
        litem_460->next=((void*)0);
        __dec_obj134=litem_460->item;
        litem_460->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_460;
        self->head=litem_460;
    }
    else if(    self->len==1) {
        litem_461=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value362=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_461->prev=self->head;
        litem_461->next=((void*)0);
        __dec_obj135=litem_461->item;
        litem_461->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_461;
        self->head->next=litem_461;
    }
    else {
        litem_462=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value363=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_462->prev=self->tail;
        litem_462->next=((void*)0);
        __dec_obj136=litem_462->item;
        litem_462->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_462;
        self->tail=litem_462;
    }
    self->len++;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_464;
struct list$1sNodeph* __result299__;
struct list_item$1sNodeph* it_467;
int i_468;
struct list_item$1sNodeph* prev_it_469;
struct list_item$1sNodeph* it_470;
int i_471;
struct list_item$1sNodeph* prev_it_472;
struct list_item$1sNodeph* it_473;
struct list_item$1sNodeph* head_prev_it_474;
struct list_item$1sNodeph* tail_it_475;
int i_476;
struct list_item$1sNodeph* prev_it_477;
struct list$1sNodeph* __result301__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_464=tail;
        tail=head;
        head=tmp_464;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result299__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_467=self->head;
        i_468=0;
        while(it_467!=((void*)0)) {
            if(            i_468<tail) {
                prev_it_469=it_467;
                it_467=it_467->next;
                i_468++;
                come_call_finalizer3(prev_it_469,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_468==tail) {
                self->head=it_467;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_467=it_467->next;
                i_468++;
            }
        }
    }
    else if(    tail==self->len) {
        it_470=self->head;
        i_471=0;
        while(it_470!=((void*)0)) {
            if(            i_471==head) {
                self->tail=it_470->prev;
                self->tail->next=((void*)0);
            }
            if(            i_471>=head) {
                prev_it_472=it_470;
                it_470=it_470->next;
                i_471++;
                come_call_finalizer3(prev_it_472,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_470=it_470->next;
                i_471++;
            }
        }
    }
    else {
        it_473=self->head;
        head_prev_it_474=((void*)0);
        tail_it_475=((void*)0);
        i_476=0;
        while(it_473!=((void*)0)) {
            if(            i_476==head) {
                head_prev_it_474=it_473->prev;
            }
            if(            i_476==tail) {
                tail_it_475=it_473;
            }
            if(            i_476>=head&&i_476<tail) {
                prev_it_477=it_473;
                it_473=it_473->next;
                i_476++;
                come_call_finalizer3(prev_it_477,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_473=it_473->next;
                i_476++;
            }
        }
        if(        head_prev_it_474!=((void*)0)) {
            head_prev_it_474->next=tail_it_475;
        }
        if(        tail_it_475!=((void*)0)) {
            tail_it_475->prev=head_prev_it_474;
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_465;
struct list_item$1sNodeph* prev_it_466;
struct list$1sNodeph* __result300__;
    it_465=self->head;
    while(it_465!=((void*)0)) {
        prev_it_466=it_465;
        it_465=it_465->next;
        come_call_finalizer3(prev_it_466,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result302__;
void* __right_value372 = (void*)0;
struct sSemicolonNode* result_484;
void* __right_value373 = (void*)0;
char* __dec_obj140;
struct sSemicolonNode* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_484=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_484->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj140=result_484->sname;
        result_484->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_484->sline_real=self->sline_real;
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_484;
    come_call_finalizer3(result_484,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_494;
struct sVarTable* old_table_495;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_508;
int i_509;
struct list$1charph* o2_saved_510;
char* name_511;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* type_512;
void* __right_value397 = (void*)0;
int block_level_516;
int i_517;
struct list$1sNodeph* o2_saved_518;
struct sNode* node_521;
struct list$1voidph* right_value_objects_524;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1voidph* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
int stack_num_before_525;
int sline_526;
void* __right_value400 = (void*)0;
char* sname_527;
void* __right_value401 = (void*)0;
char* __dec_obj157;
_Bool Value_528;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value408 = (void*)0;
struct CVALUE* come_value2_530;
void* __right_value409 = (void*)0;
char* __dec_obj162;
void* __right_value410 = (void*)0;
struct CVALUE* come_value2_532;
struct sVar* var__533;
void* __right_value411 = (void*)0;
struct CVALUE* come_value3_534;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_537=0;
char* Err_538=0;
_Bool _if_conditional2;
int __result322__;
void* __right_value414 = (void*)0;
struct sType* __dec_obj164;
void* __right_value415 = (void*)0;
char* c_value_539;
void* __right_value416 = (void*)0;
char* __dec_obj165;
void* __right_value417 = (void*)0;
char* __dec_obj166;
void* __right_value418 = (void*)0;
char* __dec_obj167;
_Bool Value_540;
void* __right_value419 = (void*)0;
char* __dec_obj168;
struct list$1voidph* __dec_obj169;
void* __if_result__0_543 = (void*)0;
struct list$1voidph* o2_saved_544;
struct sVar* it_547;
void* __right_value420 = (void*)0;
struct list$1voidph* __dec_obj170;
memset(&i_509, 0, sizeof(int));
memset(&i_517, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_494=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_495=info->lv_table;
    if(    !no_var_table) {
        __dec_obj153=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_495));
        come_call_finalizer3(__dec_obj153,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_508=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_510=(param_names),name_511=list$1charphp_begin((o2_saved_510));        !list$1charphp_end((o2_saved_510));        name_511=list$1charphp_next((o2_saved_510))        ){
            type_512=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value395=list$1voidphp_operator_load_element(param_types,i_509))))));
            come_call_finalizer3(__right_value395,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type_512->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_511,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_512)),info,(_Bool)1);
            i_509++;
            come_call_finalizer3(type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_516=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_518=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_521=list$1sNodephp_begin((o2_saved_518));        !list$1sNodephp_end((o2_saved_518));        node_521=list$1sNodephp_next((o2_saved_518))        ){
            right_value_objects_524=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 493, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj155=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj156=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_525=list$1CVALUEphp_length(info->stack);
            sline_526=info->sline;
            sname_527=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_521->sline(node_521->_protocol_obj);
            __dec_obj157=info->sname;
            info->sname=(char*)come_increment_ref_count(node_521->sname(node_521->_protocol_obj));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_517==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_528=node_compile(node_521,info);
                if(                !Value_528) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_525+1) {
                    come_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_529->type->mClass->mName,"void")&&come_value_529->type->mPointerNum==0) {
                        come_value2_530=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_529));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_530));
                        __dec_obj162=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_530->c_value));
                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_532=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_529));
                        var__533=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__533) {
                            come_value3_534=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 529, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__533->mType->mClass=="void"&&var__533->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2boolcharph*)(__right_value413=check_assign_type("invalid if result value",var__533->mType,((struct sType*)(__right_value412=come_call_cloner(sType_clone, come_value_529->type))),come_value3_534,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_537=multiple_assign_var8->v1;
                                Err_538=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_538)),                                come_call_finalizer3(__right_value412,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value413,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result322__ = (_Bool)1;
                                    (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_524,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_527 = come_decrement_ref_count2(sname_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_518,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result322__;
                                }
                                else {
                                }
                                (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj164=var__533->mType;
                            var__533->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_529->type));
                            come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_529->type->mHeap) {
                                c_value_539=(char*)come_increment_ref_count(increment_ref_count_object(come_value_529->type,come_value_529->c_value,info));
                                __dec_obj165=come_value2_532->c_value;
                                come_value2_532->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__533->mCValueName,c_value_539));
                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_539 = come_decrement_ref_count2(c_value_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj166=come_value2_532->c_value;
                                come_value2_532->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__533->mCValueName,come_value_529->c_value));
                                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_532));
                        __dec_obj167=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_532->c_value));
                        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_540=node_compile(node_521,info);
                if(                !Value_540) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_526;
            __dec_obj168=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_527));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_525);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj169=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_524);
            come_call_finalizer3(__dec_obj169,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_517++;
            come_call_finalizer3(right_value_objects_524,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            (sname_527 = come_decrement_ref_count2(sname_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_518,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_516==0) {
            for(            o2_saved_544=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_547=((struct sVar*)list$1voidphp_begin((o2_saved_544)));            !list$1voidphp_end((o2_saved_544));            it_547=((struct sVar*)list$1voidphp_next((o2_saved_544)))            ){
                free_object(((struct sType*)(__right_value420=come_call_cloner(sType_clone, it_547->mType))),it_547->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_544,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj170=info->match_it_var;
            __if_result__0_543=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj170,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_543,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_495;
    info->block_level=block_level_516;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_508;
    info->inhibits_output_code=inhibits_output_code_494;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result305__;
void* __right_value380 = (void*)0;
struct sVarTable* result_497;
void* __right_value392 = (void*)0;
struct map$2voidphvoidph* __dec_obj152;
struct sVarTable* __result311__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_497=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj152=result_497->mVars;
        result_497->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj152,map$2voidphvoidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_497->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_497->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_497->mID=self->mID;
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_497;
    come_call_finalizer3(result_497,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_496;
    result_496=0;
    result_496+=int_get_hash_key(((int)self->mVars));
    result_496+=int_get_hash_key(((int)self->mGlobal));
    result_496+=int_get_hash_key(((int)self->mParent));
    result_496+=int_get_hash_key(((int)self->mID));
    return result_496;
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
struct map$2voidphvoidph* __result306__;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct map$2voidphvoidph* result_498;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1voidp* __dec_obj143;
char* it_499;
void* default_value_500;
void* __right_value385 = (void*)0;
struct sVar* it2_501;
void* __right_value391 = (void*)0;
struct map$2voidphvoidph* __result310__;
default_value_500 = (void*)0;
    if(    self==((void*)0)) {
        __result306__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_498=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidphp_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj143=result_498->key_list;
    result_498->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj143,list$1voidp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_499=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_499=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_500,0,sizeof(void*));
        it2_501=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_499,((struct sVar*)default_value_500)));
        map$2voidphvoidphp_put(result_498,it_499,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_501)));
        come_call_finalizer3(it2_501,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_498;
    come_call_finalizer3(result_498,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_502;
int it_503;
_Bool same_key_exist_504;
char* it2_505;
struct map$2voidphvoidph* __result307__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_502=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_503=hash_502;
    while((_Bool)1) {
        if(        self->item_existance[it_503]) {
            if(            come_call_equals((void*)0, self->keys[it_503], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_503],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_503]);
                    self->keys[it_503]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_503]);
                    self->keys[it_503]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_503],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_503]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_503]=item;
                }
                break;
            }
            it_503++;
            if(            it_503>=self->size) {
                it_503=0;
            }
            else if(            it_503==hash_502) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_503]=(_Bool)1;
            if(            1) {
                self->keys[it_503]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_503]=key;
            }
            if(            1) {
                self->items[it_503]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_503]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_504=(_Bool)0;
    for(    it2_505=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_505=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_505, key)) {
            same_key_exist_504=(_Bool)1;
        }
    }
    if(    !same_key_exist_504) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result308__;
void* __right_value386 = (void*)0;
struct sVar* result_507;
void* __right_value387 = (void*)0;
char* __dec_obj148;
void* __right_value388 = (void*)0;
char* __dec_obj149;
void* __right_value389 = (void*)0;
struct sType* __dec_obj150;
void* __right_value390 = (void*)0;
char* __dec_obj151;
struct sVar* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_507=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj148=result_507->mName;
        result_507->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj149=result_507->mCValueName;
        result_507->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj150=result_507->mType;
        result_507->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_507->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_507->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_507->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_507->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj151=result_507->mFunName;
        result_507->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_507;
    come_call_finalizer3(result_507,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj144;
char* __dec_obj145;
struct sType* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj144=self->mName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj145=self->mCValueName;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj146=self->mType;
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj147=self->mFunName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_506;
    result_506=0;
    result_506+=int_get_hash_key(((int)self->mName));
    result_506+=int_get_hash_key(((int)self->mCValueName));
    result_506+=int_get_hash_key(((int)self->mType));
    result_506+=int_get_hash_key(((int)self->mBlockLevel));
    result_506+=int_get_hash_key(((int)self->mGlobal));
    result_506+=int_get_hash_key(((int)self->mAllocaValue));
    result_506+=int_get_hash_key(((int)self->mNoFree));
    result_506+=int_get_hash_key(((int)self->mFunName));
    return result_506;
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
struct list_item$1voidph* it_513;
int i_514;
void* __result312__;
void* default_value_515;
void* __result313__;
default_value_515 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_513=self->head;
    i_514=0;
    while(it_513!=((void*)0)) {
        if(        position==i_514) {
            __result312__ = gComeFunResultObject = __result_obj__ = it_513->item;
            gComeFunResultObject = (void*)0;
            return __result312__;
        }
        it_513=it_513->next;
        i_514++;
    }
    memset(&default_value_515,0,sizeof(void*));
    __result313__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_515);
    come_call_finalizer3(default_value_515,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_519;
struct sNode* __result314__;
struct sNode* __result315__;
struct sNode* result_520;
struct sNode* __result316__;
result_519 = (void*)0;
result_520 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_519,0,sizeof(struct sNode*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_519;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->head;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_520,0,sizeof(struct sNode*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_522;
struct sNode* __result317__;
struct sNode* __result318__;
struct sNode* result_523;
struct sNode* __result319__;
result_522 = (void*)0;
result_523 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_522,0,sizeof(struct sNode*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_522;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_523,0,sizeof(struct sNode*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_523;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result320__;
void* __right_value403 = (void*)0;
struct CVALUE* result_531;
void* __right_value404 = (void*)0;
char* __dec_obj158;
void* __right_value405 = (void*)0;
struct sType* __dec_obj159;
void* __right_value406 = (void*)0;
char* __dec_obj160;
void* __right_value407 = (void*)0;
char* __dec_obj161;
struct CVALUE* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_531=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj158=result_531->c_value;
        result_531->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj159=result_531->type;
        result_531->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_531->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_531->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj160=result_531->c_value_without_right_value_objects;
        result_531->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj161=result_531->c_value_without_cast_object_value;
        result_531->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_531;
    come_call_finalizer3(result_531,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
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
struct list_item$1voidph* it_535;
struct list_item$1voidph* it2_536;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_535=left->head;
    it2_536=right->head;
    while(it_535!=((void*)0)) {
        if(        !(voidp_operator_equals(it_535->item,it2_536->item))) {
            return (_Bool)0;
        }
        it_535=it_535->next;
        it2_536=it2_536->next;
    }
    return (_Bool)1;
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj163;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj163=self->v2;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_541;
struct list_item$1voidph* prev_it_542;
struct list$1voidph* __result323__;
    it_541=self->head;
    while(it_541!=((void*)0)) {
        prev_it_542=it_541;
        it_541=it_541->next;
        come_call_finalizer3(prev_it_542,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* result_545;
void* __result324__;
void* __result325__;
void* result_546;
void* __result326__;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_545,0,sizeof(void*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_545;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_546,0,sizeof(void*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_546;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_548;
void* __result327__;
void* __result328__;
void* result_549;
void* __result329__;
result_548 = (void*)0;
result_549 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_548,0,sizeof(void*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_548;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_549,0,sizeof(void*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_549;
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
void* __right_value421 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_550=0;
char* Err_551=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2intcharph*)(__right_value421=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_550=multiple_assign_var9->v1;
            Err_551=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_551)?(puts(Err_551),exit(0)):(0));
            come_call_finalizer3(__right_value421,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_551 = come_decrement_ref_count2(Err_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_552;
_Bool dquort_553;
_Bool squort_554;
int sline_555;
int nest_556;
void* __right_value422 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_557=0;
char* Err_558=0;
void* __right_value423 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_559=0;
char* Err_560=0;
void* __right_value424 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_561=0;
char* Err_562=0;
void* __right_value425 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_563=0;
char* Err_564=0;
void* __right_value426 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_565=0;
char* Err_566=0;
void* __right_value427 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_567=0;
char* Err_568=0;
void* __right_value428 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_569=0;
char* Err_570=0;
void* __right_value429 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_571=0;
char* Err_572=0;
char* tail_573;
void* __right_value430 = (void*)0;
char* buf_574;
void* __right_value431 = (void*)0;
char* __result330__;
    head_552=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_553=(_Bool)0;
        squort_554=(_Bool)0;
        sline_555=0;
        nest_556=0;
        while(1) {
            if(            dquort_553) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2intcharph*)(__right_value422=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c9_557=multiple_assign_var10->v1;
                        Err_558=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_558)?(puts(Err_558),exit(0)):(0));
                        come_call_finalizer3(__right_value422,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_558 = come_decrement_ref_count2(Err_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_553=!dquort_553;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2intcharph*)(__right_value423=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c10_559=multiple_assign_var11->v1;
                        Err_560=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_560)?(puts(Err_560),exit(0)):(0));
                        come_call_finalizer3(__right_value423,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_560 = come_decrement_ref_count2(Err_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value424=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c11_561=multiple_assign_var12->v1;
                        Err_562=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_562)?(puts(Err_562),exit(0)):(0));
                        come_call_finalizer3(__right_value424,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_562 = come_decrement_ref_count2(Err_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_554) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2intcharph*)(__right_value425=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c12_563=multiple_assign_var13->v1;
                        Err_564=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_564)?(puts(Err_564),exit(0)):(0));
                        come_call_finalizer3(__right_value425,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_554=!squort_554;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2intcharph*)(__right_value426=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c13_565=multiple_assign_var14->v1;
                        Err_566=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_566)?(puts(Err_566),exit(0)):(0));
                        come_call_finalizer3(__right_value426,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_566 = come_decrement_ref_count2(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2intcharph*)(__right_value427=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_555)));
                        come_exception_var_c14_567=multiple_assign_var15->v1;
                        Err_568=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_568)?(puts(Err_568),exit(0)):(0));
                        come_call_finalizer3(__right_value427,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_568 = come_decrement_ref_count2(Err_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_555=info->sline;
                info->p++;
                squort_554=!squort_554;
            }
            else if(            *info->p==34) {
                sline_555=info->sline;
                info->p++;
                dquort_553=!dquort_553;
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
                nest_556++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_556==0) {
                    break;
                }
                nest_556--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2intcharph*)(__right_value428=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_569=multiple_assign_var16->v1;
                Err_570=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_570)?(puts(Err_570),exit(0)):(0));
                come_call_finalizer3(__right_value428,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_570 = come_decrement_ref_count2(Err_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value429=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c16_571=multiple_assign_var17->v1;
        Err_572=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_572)?(puts(Err_572),exit(0)):(0));
        come_call_finalizer3(__right_value429,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        (Err_572 = come_decrement_ref_count2(Err_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_573=info->p;
    buf_574=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_573-head_552+1)), "05function.c", 764, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_574,head_552,tail_573-head_552);
    buf_574[tail_573-head_552]=0;
    skip_spaces_and_lf(info);
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value431=__builtin_string(buf_574)));
    (buf_574 = come_decrement_ref_count2(buf_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_575;
char* p3_576;
int i_577;
    terminated_575=(_Bool)0;
    p3_576=p;
    for(    i_577=0;    i_577<strlen(p2);    i_577++    ){
        if(        *p3_576==0) {
            terminated_575=(_Bool)1;
            break;
        }
        p3_576++;
    }
    return !terminated_575&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* asm_fun_name_578;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* result_579;
char* head_580;
int brace_num_581;
char* tail_582;
char* head_583;
int brace_num_584;
char* tail_585;
char* head_586;
char* tail_587;
char* head_588;
char* tail_589;
int len_590;
_Bool in_dquort_591;
int brace_num_592;
char* head_593;
char* tail_594;
char* head_595;
char* tail_596;
char* head_597;
char* tail_598;
char* head_599;
int nest_600;
char* tail_601;
char* head_602;
int nest_603;
char* tail_604;
char* head_605;
int nest_606;
char* tail_607;
char* head_608;
int nest_609;
char* tail_610;
char* head_611;
int nest_612;
char* tail_613;
char* head_614;
char* tail_615;
char* head_616;
char* tail_617;
char* head_618;
char* tail_619;
char* head_620;
char* tail_621;
char* head_622;
char* tail_623;
char* head_624;
int brace_num_625;
char* tail_626;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple2$2charphcharph* __result334__;
    asm_fun_name_578=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 789, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_579=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_580=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_581=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_581++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_581--;
                        if(                        brace_num_581==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_582=info->p;
            buffer_append(result_579,head_580,tail_582-head_580);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_583=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_584=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_584++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_584--;
                        if(                        brace_num_584==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_585=info->p;
            buffer_append(result_579,head_583,tail_585-head_583);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_586=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_587=info->p;
            buffer_append(result_579,head_586,tail_587-head_586);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_588=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_589=info->p;
            buffer_append(result_579,head_588,tail_589-head_588);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_590=0;
            if(            *info->p==40) {
                in_dquort_591=(_Bool)0;
                brace_num_592=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_591=!in_dquort_591;
                    }
                    else if(                    in_dquort_591) {
                        buffer_append_char(asm_fun_name_578,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_592++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_592--;
                        if(                        brace_num_592==0) {
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
            head_593=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_594=info->p;
            buffer_append(result_579,head_593,tail_594-head_593);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_595=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_596=info->p;
            buffer_append(result_579,head_595,tail_596-head_595);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_597=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_598=info->p;
            buffer_append(result_579,head_597,tail_598-head_597);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_599=info->p;
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
            tail_601=info->p;
            buffer_append(result_579,head_599,tail_601-head_599);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_602=info->p;
            info->p+=strlen("__alloc_size");
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
            tail_604=info->p;
            buffer_append(result_579,head_602,tail_604-head_602);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_605=info->p;
            info->p+=strlen("__nonnull");
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
            tail_607=info->p;
            buffer_append(result_579,head_605,tail_607-head_605);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_608=info->p;
            info->p+=strlen("_Nonnull");
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
            tail_610=info->p;
            buffer_append(result_579,head_608,tail_610-head_608);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_611=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_612=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_612++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_612--;
                        if(                        nest_612==0) {
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
            tail_613=info->p;
            buffer_append(result_579,head_611,tail_613-head_611);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_614=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_615=info->p;
            buffer_append(result_579,head_614,tail_615-head_614);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_616=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_617=info->p;
            buffer_append(result_579,head_616,tail_617-head_616);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_618=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_619=info->p;
            buffer_append(result_579,head_618,tail_619-head_618);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_620=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_621=info->p;
            buffer_append(result_579,head_620,tail_621-head_620);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_622=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_623=info->p;
            buffer_append(result_579,head_622,tail_623-head_622);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_624=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_625=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_625++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_625--;
                        if(                        brace_num_625==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_626=info->p;
            buffer_append(result_579,head_624,tail_626-head_624);
        }
        else {
            break;
        }
    }
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value442=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1204, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_578)),(char*)come_increment_ref_count(buffer_to_string(result_579)))));
    come_call_finalizer3(asm_fun_name_578,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value442,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj171;
char* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result331__;
void* __right_value438 = (void*)0;
struct tuple2$2charphcharph* result_627;
void* __right_value439 = (void*)0;
char* __dec_obj173;
void* __right_value440 = (void*)0;
char* __dec_obj174;
struct tuple2$2charphcharph* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_627=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_627->v1;
        result_627->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_627->v2;
        result_627->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_627;
    come_call_finalizer3(result_627,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_628;
    result_628=0;
    result_628+=int_get_hash_key(((int)self->v1));
    result_628+=int_get_hash_key(((int)self->v2));
    return result_628;
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
char* __dec_obj175;
char* __dec_obj176;
struct tuple2$2charphcharph* __result333__;
    __dec_obj175=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj176=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj177;
char* __dec_obj178;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj177=self->v1;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj178=self->v2;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* asm_fun_name_629;
void* __right_value445 = (void*)0;
char* attribute_630;
int nest_631;
int nest_632;
int nest_633;
int nest_634;
int nest_635;
void* __right_value446 = (void*)0;
char* __dec_obj179;
int len_636;
_Bool in_dquort_637;
int brace_num_638;
int brace_num_639;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct tuple2$2charphcharph* __result335__;
    asm_fun_name_629=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1209, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_630=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_631=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631--;
                        if(                        nest_631==0) {
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
                nest_632=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_632--;
                        if(                        nest_632==0) {
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
                nest_633=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_633++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_633--;
                        if(                        nest_633==0) {
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
                nest_634=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634--;
                        if(                        nest_634==0) {
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
                nest_635=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_635--;
                        if(                        nest_635==0) {
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
            __dec_obj179=attribute_630;
            attribute_630=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_636=0;
            if(            *info->p==40) {
                in_dquort_637=(_Bool)0;
                brace_num_638=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_637=!in_dquort_637;
                    }
                    else if(                    in_dquort_637) {
                        buffer_append_char(asm_fun_name_629,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_638++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_638--;
                        if(                        brace_num_638==0) {
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
                brace_num_639=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_639++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_639--;
                        if(                        brace_num_639==0) {
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
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value449=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1478, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_629)),(char*)come_increment_ref_count(attribute_630))));
    come_call_finalizer3(asm_fun_name_629,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_630 = come_decrement_ref_count2(attribute_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value449,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value450 = (void*)0;
char* __dec_obj180;
char* head_640;
int head_sline_641;
void* __right_value451 = (void*)0;
char* buf_642;
void* __right_value452 = (void*)0;
struct sNode* node_643;
_Bool Value_644;
    while(*info->p) {
        __dec_obj180=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_640=info->p;
        head_sline_641=info->sline;
        buf_642=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_642 = come_decrement_ref_count2(buf_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_643=(struct sNode*)come_increment_ref_count(top_level_v99(buf_642,head_640,head_sline_641,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_643!=((void*)0)) {
            Value_644=node_compile(node_643,info);
            if(            !Value_644) {
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
            (buf_642 = come_decrement_ref_count2(buf_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_643) ? node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            break;
        }
        (buf_642 = come_decrement_ref_count2(buf_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_643) ? node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value453 = (void*)0;
char* name_645;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* result_type_646;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __list_values1___647[9];
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sTypeph* param_types_658;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
char* __list_values2___659[9];
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1charph* param_names_663;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1charph* param_default_parametors_664;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sFun* main_fun_668;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* name_669;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* result_type_670;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __list_values3___671[1];
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct list$1sTypeph* param_types_672;
void* __right_value526 = (void*)0;
char* __list_values4___673[1];
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1charph* param_names_674;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1charph* param_default_parametors_675;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sFun* main_fun_676;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
char* name_677;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* result_type_678;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
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
struct sType* __list_values5___679[7];
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1sTypeph* param_types_680;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* __list_values6___681[7];
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1charph* param_names_682;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1charph* param_default_parametors_683;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sFun* main_fun_684;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
char* name_685;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* result_type_686;
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
struct sType* __list_values7___687[5];
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1sTypeph* param_types_688;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
char* __list_values8___689[5];
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1charph* param_names_690;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct list$1charph* param_default_parametors_691;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sFun* main_fun_692;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
char* name_693;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* result_type_694;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* __list_values9___695[1];
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1sTypeph* param_types_696;
void* __right_value607 = (void*)0;
char* __list_values10___697[1];
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1charph* param_names_698;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1charph* param_default_parametors_699;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sFun* main_fun_700;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
char* name_701;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* result_type_702;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __list_values11___703[4];
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1sTypeph* param_types_704;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
char* __list_values12___705[4];
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1charph* param_names_706;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1charph* param_default_parametors_707;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sFun* main_fun_708;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* name_709;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sType* result_type_710;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sType* __list_values13___711[3];
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1sTypeph* param_types_712;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
char* __list_values14___713[3];
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_names_714;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charph* param_default_parametors_715;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sFun* main_fun_716;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
char* name_717;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sType* result_type_718;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sType* __list_values15___719[1];
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct list$1sTypeph* param_types_720;
void* __right_value676 = (void*)0;
char* __list_values16___721[1];
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1charph* param_names_722;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1charph* param_default_parametors_723;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sFun* main_fun_724;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
char* name_725;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* result_type_726;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sType* __list_values17___727[3];
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1sTypeph* param_types_728;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
char* __list_values18___729[3];
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct list$1charph* param_names_730;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct list$1charph* param_default_parametors_731;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sFun* main_fun_732;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
char* name_733;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sType* result_type_734;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1voidph* param_types_735;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1charph* param_names_736;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1charph* param_default_parametors_737;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sFun* main_fun_738;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
char* name_739;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* result_type_740;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sType* __list_values19___741[4];
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1sTypeph* param_types_742;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
char* __list_values20___743[4];
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1charph* param_names_744;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1charph* param_default_parametors_745;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sFun* main_fun_746;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
char* name_747;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sType* result_type_748;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct list$1voidph* param_types_749;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1charph* param_names_750;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1charph* param_default_parametors_751;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sFun* fun_752;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
char* name_753;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sType* result_type_754;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1voidph* param_types_755;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct list$1charph* param_names_756;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct list$1charph* param_default_parametors_757;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sFun* fun_758;
void* __right_value776 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1534, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_658=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___647[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value457=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___647[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___647[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value461=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___647[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value463=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___647[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value465=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___647[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___647[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___647[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___647[8]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1535, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),9,__list_values1___647)));
        come_call_finalizer3(__right_value457,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value465,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_663=(struct list$1charph*)come_increment_ref_count((__list_values2___659[0]=(char*)come_increment_ref_count(((char*)(__right_value480=__builtin_string("count")))),
__list_values2___659[1]=(char*)come_increment_ref_count(((char*)(__right_value481=__builtin_string("size")))),
__list_values2___659[2]=(char*)come_increment_ref_count(((char*)(__right_value482=__builtin_string("sname")))),
__list_values2___659[3]=(char*)come_increment_ref_count(((char*)(__right_value483=__builtin_string("sline")))),
__list_values2___659[4]=(char*)come_increment_ref_count(((char*)(__right_value484=__builtin_string("class_name")))),
__list_values2___659[5]=(char*)come_increment_ref_count(((char*)(__right_value485=__builtin_string("finalizer_fun")))),
__list_values2___659[6]=(char*)come_increment_ref_count(((char*)(__right_value486=__builtin_string("cloner_fun")))),
__list_values2___659[7]=(char*)come_increment_ref_count(((char*)(__right_value487=__builtin_string("get_hash_key_fun")))),
__list_values2___659[8]=(char*)come_increment_ref_count(((char*)(__right_value488=__builtin_string("equaler_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1536, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),9,__list_values2___659)));
        (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_664=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_664,((void*)0));
        list$1charphp_push_back(param_default_parametors_664,((void*)0));
        list$1charphp_push_back(param_default_parametors_664,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_664,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_664,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_668=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1543, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_658),(struct list$1charph*)come_increment_ref_count(param_names_663),(struct list$1charph*)come_increment_ref_count(param_default_parametors_664),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(main_fun_668));
        (name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_663,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_668,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_669=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_670=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1552, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_672=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___671[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value523=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1553, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___671)));
        come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_674=(struct list$1charph*)come_increment_ref_count((__list_values4___673[0]=(char*)come_increment_ref_count(((char*)(__right_value526=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1554, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___673)));
        (__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_675=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1555, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_676=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1556, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_669),(struct sType*)come_increment_ref_count(result_type_670),(struct list$1sTypeph*)come_increment_ref_count(param_types_672),(struct list$1charph*)come_increment_ref_count(param_names_674),(struct list$1charph*)come_increment_ref_count(param_default_parametors_675),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_669)),(struct sFun*)come_increment_ref_count(main_fun_676));
        (name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_672,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_677=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_678=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1565, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_680=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___679[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value540=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___679[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value542=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___679[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value544=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___679[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value546=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___679[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value548=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___679[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value550=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___679[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value552=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1566, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),7,__list_values5___679)));
        come_call_finalizer3(__right_value540,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value542,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value544,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value546,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value548,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value550,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value552,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_682=(struct list$1charph*)come_increment_ref_count((__list_values6___681[0]=(char*)come_increment_ref_count(((char*)(__right_value555=__builtin_string("fun")))),
__list_values6___681[1]=(char*)come_increment_ref_count(((char*)(__right_value556=__builtin_string("mem")))),
__list_values6___681[2]=(char*)come_increment_ref_count(((char*)(__right_value557=__builtin_string("protocol_fun")))),
__list_values6___681[3]=(char*)come_increment_ref_count(((char*)(__right_value558=__builtin_string("protocol_obj")))),
__list_values6___681[4]=(char*)come_increment_ref_count(((char*)(__right_value559=__builtin_string("call_finalizer_only")))),
__list_values6___681[5]=(char*)come_increment_ref_count(((char*)(__right_value560=__builtin_string("no_decrement")))),
__list_values6___681[6]=(char*)come_increment_ref_count(((char*)(__right_value561=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1567, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),7,__list_values6___681)));
        (__right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_683=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1568, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_684=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1569, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_677),(struct sType*)come_increment_ref_count(result_type_678),(struct list$1sTypeph*)come_increment_ref_count(param_types_680),(struct list$1charph*)come_increment_ref_count(param_names_682),(struct list$1charph*)come_increment_ref_count(param_default_parametors_683),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_677)),(struct sFun*)come_increment_ref_count(main_fun_684));
        (name_677 = come_decrement_ref_count2(name_677, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_680,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_684,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_685=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_686=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_688=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___687[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value575=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___687[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value577=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___687[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value579=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___687[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value581=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
__list_values7___687[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value583=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1579, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),5,__list_values7___687)));
        come_call_finalizer3(__right_value575,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_690=(struct list$1charph*)come_increment_ref_count((__list_values8___689[0]=(char*)come_increment_ref_count(((char*)(__right_value586=__builtin_string("mem")))),
__list_values8___689[1]=(char*)come_increment_ref_count(((char*)(__right_value587=__builtin_string("protocol_fun")))),
__list_values8___689[2]=(char*)come_increment_ref_count(((char*)(__right_value588=__builtin_string("protocol_obj")))),
__list_values8___689[3]=(char*)come_increment_ref_count(((char*)(__right_value589=__builtin_string("no_decrement")))),
__list_values8___689[4]=(char*)come_increment_ref_count(((char*)(__right_value590=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),5,__list_values8___689)));
        (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_691=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1581, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_692=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1582, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_685),(struct sType*)come_increment_ref_count(result_type_686),(struct list$1sTypeph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_690),(struct list$1charph*)come_increment_ref_count(param_default_parametors_691),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_685)),(struct sFun*)come_increment_ref_count(main_fun_692));
        (name_685 = come_decrement_ref_count2(name_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_688,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_691,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_692,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_693=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_694=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1591, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_696=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___695[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value604=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1592, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values9___695)));
        come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_698=(struct list$1charph*)come_increment_ref_count((__list_values10___697[0]=(char*)come_increment_ref_count(((char*)(__right_value607=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1593, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values10___697)));
        (__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_699=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_700=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1595, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_693),(struct sType*)come_increment_ref_count(result_type_694),(struct list$1sTypeph*)come_increment_ref_count(param_types_696),(struct list$1charph*)come_increment_ref_count(param_names_698),(struct list$1charph*)come_increment_ref_count(param_default_parametors_699),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_693)),(struct sFun*)come_increment_ref_count(main_fun_700));
        (name_693 = come_decrement_ref_count2(name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_696,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_700,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_701=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_702=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1604, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_704=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___703[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value621=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values11___703[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value623=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values11___703[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value625=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values11___703[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value627=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1605, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values11___703)));
        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value623,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value625,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_706=(struct list$1charph*)come_increment_ref_count((__list_values12___705[0]=(char*)come_increment_ref_count(((char*)(__right_value630=__builtin_string("block")))),
__list_values12___705[1]=(char*)come_increment_ref_count(((char*)(__right_value631=__builtin_string("sname")))),
__list_values12___705[2]=(char*)come_increment_ref_count(((char*)(__right_value632=__builtin_string("sline")))),
__list_values12___705[3]=(char*)come_increment_ref_count(((char*)(__right_value633=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1606, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values12___705)));
        (__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_707=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1607, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_707,((void*)0));
        list$1charphp_push_back(param_default_parametors_707,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_707,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_707,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_708=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1612, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_701),(struct sType*)come_increment_ref_count(result_type_702),(struct list$1sTypeph*)come_increment_ref_count(param_types_704),(struct list$1charph*)come_increment_ref_count(param_names_706),(struct list$1charph*)come_increment_ref_count(param_default_parametors_707),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_701)),(struct sFun*)come_increment_ref_count(main_fun_708));
        (name_701 = come_decrement_ref_count2(name_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_704,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_707,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_708,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_709=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_710=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1621, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_712=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___711[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value650=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values13___711[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value652=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values13___711[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value654=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1622, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values13___711)));
        come_call_finalizer3(__right_value650,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value652,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value654,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_714=(struct list$1charph*)come_increment_ref_count((__list_values14___713[0]=(char*)come_increment_ref_count(((char*)(__right_value657=__builtin_string("b")))),
__list_values14___713[1]=(char*)come_increment_ref_count(((char*)(__right_value658=__builtin_string("c")))),
__list_values14___713[2]=(char*)come_increment_ref_count(((char*)(__right_value659=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1623, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values14___713)));
        (__right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_715=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1624, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_716=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1625, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_709),(struct sType*)come_increment_ref_count(result_type_710),(struct list$1sTypeph*)come_increment_ref_count(param_types_712),(struct list$1charph*)come_increment_ref_count(param_names_714),(struct list$1charph*)come_increment_ref_count(param_default_parametors_715),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_709)),(struct sFun*)come_increment_ref_count(main_fun_716));
        (name_709 = come_decrement_ref_count2(name_709, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_712,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_714,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_715,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_716,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_717=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_718=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_720=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___719[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value673=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values15___719)));
        come_call_finalizer3(__right_value673,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_722=(struct list$1charph*)come_increment_ref_count((__list_values16___721[0]=(char*)come_increment_ref_count(((char*)(__right_value676=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values16___721)));
        (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_723=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_724=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_717),(struct sType*)come_increment_ref_count(result_type_718),(struct list$1sTypeph*)come_increment_ref_count(param_types_720),(struct list$1charph*)come_increment_ref_count(param_names_722),(struct list$1charph*)come_increment_ref_count(param_default_parametors_723),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_717)),(struct sFun*)come_increment_ref_count(main_fun_724));
        (name_717 = come_decrement_ref_count2(name_717, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_720,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_722,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_724,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_725=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_726=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1647, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_728=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___727[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value690=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___727[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value692=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___727[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value694=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1648, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values17___727)));
        come_call_finalizer3(__right_value690,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value692,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value694,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_730=(struct list$1charph*)come_increment_ref_count((__list_values18___729[0]=(char*)come_increment_ref_count(((char*)(__right_value697=xsprintf("come_malloc")))),
__list_values18___729[1]=(char*)come_increment_ref_count(((char*)(__right_value698=xsprintf("come_debug")))),
__list_values18___729[2]=(char*)come_increment_ref_count(((char*)(__right_value699=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1649, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values18___729)));
        (__right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_731=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1650, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_731,((void*)0));
        main_fun_732=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1652, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_725),(struct sType*)come_increment_ref_count(result_type_726),(struct list$1sTypeph*)come_increment_ref_count(param_types_728),(struct list$1charph*)come_increment_ref_count(param_names_730),(struct list$1charph*)come_increment_ref_count(param_default_parametors_731),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_725)),(struct sFun*)come_increment_ref_count(main_fun_732));
        (name_725 = come_decrement_ref_count2(name_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_728,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_730,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_732,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_733=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_734=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1661, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_735=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1662, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_736=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1663, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_737=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1664, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_738=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1665, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_733),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1voidph*)come_increment_ref_count(param_types_735),(struct list$1charph*)come_increment_ref_count(param_names_736),(struct list$1charph*)come_increment_ref_count(param_default_parametors_737),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_733)),(struct sFun*)come_increment_ref_count(main_fun_738));
        (name_733 = come_decrement_ref_count2(name_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_735,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_736,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_737,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_738,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_739=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_740=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1674, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_742=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___741[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value727=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values19___741[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value729=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values19___741[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value731=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values19___741[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value733=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1675, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values19___741)));
        come_call_finalizer3(__right_value727,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value729,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value731,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value733,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_744=(struct list$1charph*)come_increment_ref_count((__list_values20___743[0]=(char*)come_increment_ref_count(((char*)(__right_value736=__builtin_string("mem")))),
__list_values20___743[1]=(char*)come_increment_ref_count(((char*)(__right_value737=__builtin_string("sname")))),
__list_values20___743[2]=(char*)come_increment_ref_count(((char*)(__right_value738=__builtin_string("sline")))),
__list_values20___743[3]=(char*)come_increment_ref_count(((char*)(__right_value739=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1676, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values20___743)));
        (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_745=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1677, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_746=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1678, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_739),(struct sType*)come_increment_ref_count(result_type_740),(struct list$1sTypeph*)come_increment_ref_count(param_types_742),(struct list$1charph*)come_increment_ref_count(param_names_744),(struct list$1charph*)come_increment_ref_count(param_default_parametors_745),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_739)),(struct sFun*)come_increment_ref_count(main_fun_746));
        (name_739 = come_decrement_ref_count2(name_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_742,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_744,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_745,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_747=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_748=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1687, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_749=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1688, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_750=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1689, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_751=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1690, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_752=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1691, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_747),(struct sType*)come_increment_ref_count(result_type_748),(struct list$1voidph*)come_increment_ref_count(param_types_749),(struct list$1charph*)come_increment_ref_count(param_names_750),(struct list$1charph*)come_increment_ref_count(param_default_parametors_751),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_747)),(struct sFun*)come_increment_ref_count(fun_752));
        (name_747 = come_decrement_ref_count2(name_747, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_749,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_750,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_751,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_752,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_753=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_754=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1700, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_755=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1701, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_756=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1702, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_757=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1703, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_758=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1704, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_753),(struct sType*)come_increment_ref_count(result_type_754),(struct list$1voidph*)come_increment_ref_count(param_types_755),(struct list$1charph*)come_increment_ref_count(param_names_756),(struct list$1charph*)come_increment_ref_count(param_default_parametors_757),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_753)),(struct sFun*)come_increment_ref_count(fun_758));
        (name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_755,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_756,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_757,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_758,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_648;
struct list$1sTypeph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_648=0;    i_648<num_value;    i_648++    ){
        list$1sTypephp_push_back(self,values[i_648]);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
struct list_item$1sTypeph* litem_649;
struct sType* __dec_obj181;
void* __right_value475 = (void*)0;
struct list_item$1sTypeph* litem_650;
struct sType* __dec_obj182;
void* __right_value476 = (void*)0;
struct list_item$1sTypeph* litem_651;
struct sType* __dec_obj183;
struct list$1sTypeph* __result336__;
    if(    self->len==0) {
        litem_649=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value474=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1452, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_649->prev=((void*)0);
        litem_649->next=((void*)0);
        __dec_obj181=litem_649->item;
        litem_649->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_649;
        self->head=litem_649;
    }
    else if(    self->len==1) {
        litem_650=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value475=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1462, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_650->prev=self->head;
        litem_650->next=((void*)0);
        __dec_obj182=litem_650->item;
        litem_650->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_650;
        self->head->next=litem_650;
    }
    else {
        litem_651=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value476=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1472, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_651->prev=self->tail;
        litem_651->next=((void*)0);
        __dec_obj183=litem_651->item;
        litem_651->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_651;
        self->tail=litem_651;
    }
    self->len++;
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_652;
struct list_item$1sTypeph* prev_it_653;
    it_652=self->head;
    while(it_652!=((void*)0)) {
        prev_it_653=it_652;
        it_652=it_652->next;
        come_call_finalizer3(prev_it_653,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj184;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj184=self->item;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_654;
struct list_item$1sTypeph* prev_it_655;
    it_654=self->head;
    while(it_654!=((void*)0)) {
        prev_it_655=it_654;
        it_654=it_654->next;
        come_call_finalizer3(prev_it_655,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result338__;
void* __right_value477 = (void*)0;
struct list$1sTypeph* result_656;
struct list$1sTypeph* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_656=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_656->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_656->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_656->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_656->it=self->it;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_656;
    come_call_finalizer3(result_656,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_657;
    result_657=0;
    result_657+=int_get_hash_key(((int)self->head));
    result_657+=int_get_hash_key(((int)self->tail));
    result_657+=int_get_hash_key(((int)self->len));
    result_657+=int_get_hash_key(((int)self->it));
    return result_657;
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
int i_660;
struct list$1charph* __result340__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_660=0;    i_660<num_value;    i_660++    ){
        list$1charphp_push_back(self,values[i_660]);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result341__;
void* __right_value489 = (void*)0;
struct list$1charph* result_661;
struct list$1charph* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_661=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_661->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_661->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_661->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_661->it=self->it;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_661;
    come_call_finalizer3(result_661,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_662;
    result_662=0;
    result_662+=int_get_hash_key(((int)self->head));
    result_662+=int_get_hash_key(((int)self->tail));
    result_662+=int_get_hash_key(((int)self->len));
    result_662+=int_get_hash_key(((int)self->it));
    return result_662;
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
void* __right_value497 = (void*)0;
struct sFun* result_666;
void* __right_value498 = (void*)0;
char* __dec_obj185;
void* __right_value499 = (void*)0;
struct sType* __dec_obj186;
void* __right_value500 = (void*)0;
struct list$1voidph* __dec_obj187;
void* __right_value501 = (void*)0;
struct list$1charph* __dec_obj188;
void* __right_value502 = (void*)0;
struct list$1charph* __dec_obj189;
void* __right_value503 = (void*)0;
struct sType* __dec_obj190;
void* __right_value507 = (void*)0;
struct sBlock* __dec_obj193;
void* __right_value508 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value509 = (void*)0;
struct buffer* __dec_obj195;
void* __right_value510 = (void*)0;
struct buffer* __dec_obj196;
void* __right_value511 = (void*)0;
struct buffer* __dec_obj197;
void* __right_value512 = (void*)0;
char* __dec_obj198;
void* __right_value513 = (void*)0;
char* __dec_obj199;
struct sFun* __result346__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_666=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj185=result_666->mName;
        result_666->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj186=result_666->mResultType;
        result_666->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj187=result_666->mParamTypes;
        result_666->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj187,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj188=result_666->mParamNames;
        result_666->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj188,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj189=result_666->mParamDefaultParametors;
        result_666->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj189,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj190=result_666->mLambdaType;
        result_666->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj193=result_666->mBlock;
        result_666->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj193,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj194=result_666->mSource;
        result_666->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj195=result_666->mSourceHead;
        result_666->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj195,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj196=result_666->mSourceHead2;
        result_666->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj197=result_666->mSourceDefer;
        result_666->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj197,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_666->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_666->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_666->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_666->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_666->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_666->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_666->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj198=result_666->mAttribute;
        result_666->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj199=result_666->mFunAttribute;
        result_666->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_666;
    come_call_finalizer3(result_666,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_665;
    result_665=0;
    result_665+=int_get_hash_key(((int)self->mName));
    result_665+=int_get_hash_key(((int)self->mResultType));
    result_665+=int_get_hash_key(((int)self->mParamTypes));
    result_665+=int_get_hash_key(((int)self->mParamNames));
    result_665+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_665+=int_get_hash_key(((int)self->mLambdaType));
    result_665+=int_get_hash_key(((int)self->mBlock));
    result_665+=int_get_hash_key(((int)self->mSource));
    result_665+=int_get_hash_key(((int)self->mSourceHead));
    result_665+=int_get_hash_key(((int)self->mSourceHead2));
    result_665+=int_get_hash_key(((int)self->mSourceDefer));
    result_665+=int_get_hash_key(((int)self->mStatic));
    result_665+=int_get_hash_key(((int)self->mInline));
    result_665+=int_get_hash_key(((int)self->mUniq));
    result_665+=int_get_hash_key(((int)self->mGenerate));
    result_665+=int_get_hash_key(((int)self->mExternal));
    result_665+=int_get_hash_key(((int)self->mVarArgs));
    result_665+=int_get_hash_key(((int)self->mNoResultType));
    result_665+=int_get_hash_key(((int)self->mAttribute));
    result_665+=int_get_hash_key(((int)self->mFunAttribute));
    return result_665;
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

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result344__;
void* __right_value504 = (void*)0;
struct sBlock* result_667;
void* __right_value505 = (void*)0;
struct list$1sNodeph* __dec_obj191;
void* __right_value506 = (void*)0;
struct sVarTable* __dec_obj192;
struct sBlock* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_667=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj191=result_667->mNodes;
        result_667->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj191,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj192=result_667->mVarTable;
        result_667->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj192,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_759;
_Bool is_type_name_flag_760;
int sline_761;
_Bool define_struct_nobody_762;
char* p_763;
int sline_764;
void* __right_value777 = (void*)0;
char* word_765;
_Bool define_function_pointer_result_function_766;
_Bool define_variable_between_brace_767;
char* p_768;
void* __right_value778 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18 = (void*)0;
struct sType* result_type_769=0;
char* fun_name_770=0;
_Bool err_771=0;
void* __right_value779 = (void*)0;
char* word_772;
_Bool define_function_flag_773;
char* p_774;
void* __right_value780 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var19 = (void*)0;
struct sType* result_type_775=0;
char* fun_name_776=0;
_Bool err_777=0;
char* word_778;
void* __right_value781 = (void*)0;
char* __dec_obj202;
void* __right_value782 = (void*)0;
char* __dec_obj203;
char* __dec_obj204;
void* __right_value783 = (void*)0;
char* __dec_obj205;
_Bool define_variable_779;
char* p_780;
void* __right_value784 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* result_type_781=0;
char* fun_name_782=0;
_Bool err_783=0;
void* __right_value785 = (void*)0;
char* word_784;
void* __right_value786 = (void*)0;
char* word_785;
char* p_786;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
char* word_787;
void* __right_value790 = (void*)0;
char* __dec_obj206;
void* __right_value791 = (void*)0;
char* word_788;
void* __right_value792 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_791=0;
char* Err_792=0;
void* __right_value793 = (void*)0;
char* word_793;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* node_794;
struct sNode* __result348__;
void* __right_value796 = (void*)0;
struct sNode* __result349__;
char* header_head_795;
void* __right_value797 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var22 = (void*)0;
struct sType* result_type_796=0;
char* fun_name_797=0;
_Bool err_798=0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct list$1voidph* param_types_799;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct list$1charph* param_names_800;
void* __right_value802 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var23 = (void*)0;
struct sType* param_type_801=0;
char* param_name_802=0;
_Bool err_803=0;
void* __right_value803 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_804=0;
char* Err_805=0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_810=0;
char* Err_811=0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1voidph* param_types2_812;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1charph* param_names2_813;
void* __right_value814 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var26 = (void*)0;
struct sType* param_type_814=0;
char* param_name_815=0;
_Bool err_816=0;
void* __right_value815 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_817=0;
char* Err_818=0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_820=0;
char* Err_821=0;
char* header_tail_822;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sType* result_type2_823;
struct sType* __dec_obj210;
void* __right_value821 = (void*)0;
struct list$1voidph* __dec_obj211;
void* __right_value822 = (void*)0;
struct list$1charph* __dec_obj212;
_Bool var_args_824;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1charph* param_default_parametors_825;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sFun* fun_826;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sFun* fun2_827;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value838 = (void*)0;
struct sNode* __result353__;
void* __right_value839 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_829=0;
char* Err_830=0;
void* __right_value840 = (void*)0;
struct sNode* node_831;
struct sNode* __result354__;
void* __right_value841 = (void*)0;
struct sNode* node_832;
struct sNode* __result355__;
void* __right_value842 = (void*)0;
struct sNode* node_833;
char* source_tail_834;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_835;
struct sNode* __result356__;
void* __right_value845 = (void*)0;
char* buf2_836;
void* __right_value846 = (void*)0;
struct sNode* __result357__;
    info->in_top_level=(_Bool)1;
    source_head_759=info->p;
    is_type_name_flag_760=is_type_name(buf,info);
    sline_761=info->sline;
    define_struct_nobody_762=(_Bool)0;
    {
        p_763=info->p;
        sline_764=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_765=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_762=(_Bool)1;
                }
                (word_765 = come_decrement_ref_count2(word_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_764;
    }
    define_function_pointer_result_function_766=(_Bool)0;
    define_variable_between_brace_767=(_Bool)0;
    if(    is_type_name_flag_760) {
        p_768=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value778=backtrace_parse_type((_Bool)0,info)));
            result_type_769=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_770=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_771=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value778,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_766=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_772=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_772,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_767=(_Bool)1;
                            }
                        }
                        (word_772 = come_decrement_ref_count2(word_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_770 = come_decrement_ref_count2(fun_name_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_761;
    }
    define_function_flag_773=(_Bool)0;
    if(    is_type_name_flag_760&&!define_function_pointer_result_function_766&&charp_operator_not_equals(buf,"__typeof__")) {
        p_774=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sTypephcharphbool*)(__right_value780=backtrace_parse_type((_Bool)0,info)));
            result_type_775=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_776=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_777=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value780,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_775,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_776 = come_decrement_ref_count2(fun_name_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_778=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj202=word_778;
                word_778=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_778,"extern")) {
                    __dec_obj203=word_778;
                    word_778=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj204=word_778;
                word_778=((void*)0);
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_778) {
                if(                is_type_name(word_778,info)) {
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
                        __dec_obj205=word_778;
                        word_778=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_778)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_760) {
                        define_function_flag_773=(_Bool)1;
                    }
                }
            }
            (word_778 = come_decrement_ref_count2(word_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_774;
        info->sline=sline_761;
    }
    define_variable_779=(_Bool)1;
    if(    is_type_name_flag_760&&!define_function_pointer_result_function_766) {
        p_780=info->p;
        info->p=head;
        if(        !is_type_name_flag_760) {
            define_variable_779=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value784=backtrace_parse_type((_Bool)0,info)));
            result_type_781=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_782=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_783=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value784,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_784=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_779=(_Bool)1;
                            }
                        }
                        (word_784 = come_decrement_ref_count2(word_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_785=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_785,info)&&*info->p!=40) {
                            define_variable_779=(_Bool)1;
                        }
                    }
                    (word_785 = come_decrement_ref_count2(word_785, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_781,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_782 = come_decrement_ref_count2(fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_779=(_Bool)0;
        }
        else if(        define_variable_779) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_779=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_779=(_Bool)0;
            }
        }
        info->p=p_780;
        info->sline=sline_761;
    }
    else {
        define_variable_779=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_766) {
        p_786=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value787=parse_struct_attribute(info)));
            (__right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value788=parse_word(info)));
                (__right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_787=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj206=word_787;
                        word_787=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_787,"extends")) {
                            define_variable_779=(_Bool)0;
                        }
                    }
                    (word_787 = come_decrement_ref_count2(word_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_779=(_Bool)0;
        }
        else if(        define_variable_779) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_779=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_779=(_Bool)0;
            }
        }
        info->p=p_786;
        info->sline=sline_761;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_788=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var21=((struct tuple2$2intcharph*)(__right_value792=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_791=multiple_assign_var21->v1;
                    Err_792=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_792)?(puts(Err_792),exit(0)):(0));
                    come_call_finalizer3(__right_value792,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_792 = come_decrement_ref_count2(Err_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_793=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_793)));
                    (word_793 = come_decrement_ref_count2(word_793, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_794=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result348__ = gComeFunResultObject = __result_obj__ = node_794;
            ((node_794) ? node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (word_788 = come_decrement_ref_count2(word_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result348__;
            ((node_794) ? node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        (word_788 = come_decrement_ref_count2(word_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_762) {
    }
    else if(    define_variable_between_brace_767) {
        info->p=head;
        info->sline=sline_761;
        __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value796=parse_global_variable(info)));
        ((__right_value796) ? __right_value796 = come_decrement_ref_count2(__right_value796, ((struct sNode*)__right_value796)->finalize, ((struct sNode*)__right_value796)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    else if(    define_function_pointer_result_function_766) {
        header_head_795=info->p;
        multiple_assign_var22=((struct tuple3$3sTypephcharphbool*)(__right_value797=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_796=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_797=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_798=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value797,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_799=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2028, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            param_names_800=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2029, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sTypephcharphbool*)(__right_value802=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_801=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_802=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_803=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value802,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_803) {
                        multiple_assign_var24=((struct tuple2$2intcharph*)(__right_value803=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_804=multiple_assign_var24->v1;
                        Err_805=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_805)?(puts(Err_805),exit(0)):(0));
                        come_call_finalizer3(__right_value803,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_805 = come_decrement_ref_count2(Err_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1voidphp_push_back(param_types_799,(struct sType*)come_increment_ref_count(param_type_801));
                    static int num_function_pointer_result_var_name_a_809=0;
                    list$1charphp_push_back(param_names_800,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_809)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value808=parse_word(info)));
                        (__right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_802 = come_decrement_ref_count2(param_name_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2intcharph*)(__right_value809=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_810=multiple_assign_var25->v1;
                        Err_811=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_811)?(puts(Err_811),exit(0)):(0));
                        come_call_finalizer3(__right_value809,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_811 = come_decrement_ref_count2(Err_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_802 = come_decrement_ref_count2(param_name_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_812=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2075, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
                param_names2_813=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2076, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sTypephcharphbool*)(__right_value814=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_814=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_815=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_816=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value814,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_816) {
                            multiple_assign_var27=((struct tuple2$2intcharph*)(__right_value815=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_817=multiple_assign_var27->v1;
                            Err_818=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_818)?(puts(Err_818),exit(0)):(0));
                            come_call_finalizer3(__right_value815,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1voidphp_push_back(param_types2_812,(struct sType*)come_increment_ref_count(param_type_814));
                        static int num_function_pointer_result_var_name_b_819=0;
                        list$1charphp_push_back(param_names2_813,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_819)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value817=parse_word(info)));
                            (__right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_815 = come_decrement_ref_count2(param_name_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2intcharph*)(__right_value818=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_820=multiple_assign_var28->v1;
                            Err_821=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_821)?(puts(Err_821),exit(0)):(0));
                            come_call_finalizer3(__right_value818,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_821 = come_decrement_ref_count2(Err_821, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_815 = come_decrement_ref_count2(param_name_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_822=info->p;
                result_type2_823=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2118, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj210=result_type2_823->mResultType;
                result_type2_823->mResultType=(struct sType*)come_increment_ref_count(result_type_796);
                come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj211=result_type2_823->mParamTypes;
                result_type2_823->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_812));
                come_call_finalizer3(__dec_obj211,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj212=result_type2_823->mParamNames;
                result_type2_823->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_813));
                come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_823->mVarArgs=(_Bool)0;
                result_type2_823->mStatic=(_Bool)0;
                var_args_824=(_Bool)0;
                param_default_parametors_825=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2128, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_826=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2130, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_797)),(struct sType*)come_increment_ref_count(result_type2_823),(struct list$1voidph*)come_increment_ref_count(param_types_799),(struct list$1charph*)come_increment_ref_count(param_names_800),(struct list$1charph*)come_increment_ref_count(param_default_parametors_825),(_Bool)1,var_args_824,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_827=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value830=__builtin_string(fun_name_797)))));
                (__right_value830 = come_decrement_ref_count2(__right_value830, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                if(                fun2_827==((void*)0)||fun2_827->mExternal) {
                    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_797)),(struct sFun*)come_increment_ref_count(fun_826));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2143, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value834=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2143, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_826),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value838=_inf_value2));
                come_call_finalizer3(param_types2_812,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_813,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_823,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_826,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_827,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_799,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_800,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_797 = come_decrement_ref_count2(fun_name_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value834,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value838) ? __right_value838 = come_decrement_ref_count2(__right_value838, ((struct sNode*)__right_value838)->finalize, ((struct sNode*)__right_value838)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result353__;
                come_call_finalizer3(param_types2_812,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_813,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_823,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_826,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_827,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value839=err_msg(info,"require (")));
                come_exception_var_c22_829=multiple_assign_var29->v1;
                Err_830=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_830)?(puts(Err_830),exit(0)):(0));
                come_call_finalizer3(__right_value839,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_830 = come_decrement_ref_count2(Err_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_799,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_800,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_797 = come_decrement_ref_count2(fun_name_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_761;
        node_831=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_831;
        ((node_831) ? node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result354__;
        ((node_831) ? node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    define_function_flag_773) {
        info->p=head;
        info->sline=sline_761;
        node_832=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result355__ = gComeFunResultObject = __result_obj__ = node_832;
        ((node_832) ? node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result355__;
        ((node_832) ? node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    define_variable_779) {
        info->p=head;
        info->sline=sline_761;
        node_833=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_834=info->p;
        header_835=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2175, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_835,source_head_759,source_tail_834-source_head_759);
        __result356__ = gComeFunResultObject = __result_obj__ = node_833;
        ((node_833) ? node_833 = come_decrement_ref_count2(node_833, ((struct sNode*)node_833)->finalize, ((struct sNode*)node_833)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(header_835,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result356__;
        ((node_833) ? node_833 = come_decrement_ref_count2(node_833, ((struct sNode*)node_833)->finalize, ((struct sNode*)node_833)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(header_835,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_761;
    buf2_836=(char*)come_increment_ref_count(parse_word(info));
    __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=top_level_v98(buf2_836,head,head_sline,info)));
    (buf2_836 = come_decrement_ref_count2(buf2_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value846) ? __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj200;
char* __dec_obj201;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj200=self->v1;
            come_call_finalizer3(__dec_obj200,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj201=self->v2;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_789;
struct list_item$1charph* prev_it_790;
struct list$1charph* __result347__;
    it_789=self->head;
    while(it_789!=((void*)0)) {
        prev_it_790=it_789;
        it_789=it_789->next;
        come_call_finalizer3(prev_it_790,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value804 = (void*)0;
struct list_item$1voidph* litem_806;
void* __dec_obj207;
void* __right_value805 = (void*)0;
struct list_item$1voidph* litem_807;
void* __dec_obj208;
void* __right_value806 = (void*)0;
struct list_item$1voidph* litem_808;
void* __dec_obj209;
struct list$1voidph* __result350__;
    if(    self->len==0) {
        litem_806=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value804=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_806->prev=((void*)0);
        litem_806->next=((void*)0);
        __dec_obj207=litem_806->item;
        litem_806->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_806;
        self->head=litem_806;
    }
    else if(    self->len==1) {
        litem_807=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value805=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_807->prev=self->head;
        litem_807->next=((void*)0);
        __dec_obj208=litem_807->item;
        litem_807->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_807;
        self->head->next=litem_807;
    }
    else {
        litem_808=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value806=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_808->prev=self->tail;
        litem_808->next=((void*)0);
        __dec_obj209=litem_808->item;
        litem_808->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_808;
        self->tail=litem_808;
    }
    self->len++;
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result351__;
void* __right_value835 = (void*)0;
struct sFunNode* result_828;
void* __right_value836 = (void*)0;
char* __dec_obj213;
void* __right_value837 = (void*)0;
struct sFun* __dec_obj214;
struct sFunNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_828=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_828->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj213=result_828->sname;
        result_828->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_828->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj214=result_828->mFun;
        result_828->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj214,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_828;
    come_call_finalizer3(result_828,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_837;
int caller_line_838;
char* caller_sname_839;
_Bool comma_instead_of_semicolon_840;
char* last_code_841;
char* __dec_obj215;
char* last_code2_842;
char* __dec_obj216;
void* __right_value847 = (void*)0;
char* sname_top_843;
int sline_top_844;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sFun* funX_845;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct tuple2$2charphbool* __result361__;
void* __right_value854 = (void*)0;
struct sType* result_type_848;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1voidph* param_types_849;
struct list$1voidph* o2_saved_850;
struct sType* it_851;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sType* param_type_852;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1charph* param_names_853;
void* __right_value861 = (void*)0;
struct list$1charph* param_default_parametors_854;
char* p_855;
int sline_856;
char* sname_857;
char* head_858;
struct buffer* source_859;
void* __right_value862 = (void*)0;
struct buffer* __dec_obj221;
struct sType* generics_type_saved_860;
void* __right_value863 = (void*)0;
struct sType* __dec_obj222;
struct list$1charph* method_generics_type_names_861;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct list$1charph* __dec_obj223;
struct list$1charph* o2_saved_862;
char* it_863;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1charph* __dec_obj224;
char* __dec_obj225;
void* __right_value868 = (void*)0;
struct sBlock* block_864;
struct buffer* __dec_obj226;
char* __dec_obj227;
_Bool var_args_865;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sFun* fun_866;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value876 = (void*)0;
struct sNode* node_867;
_Bool in_generics_fun_868;
_Bool Value_869;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct tuple2$2charphbool* __result362__;
struct sType* __dec_obj228;
struct list$1charph* __dec_obj229;
void* __right_value880 = (void*)0;
char* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct tuple2$2charphbool* __result363__;
    caller_fun_837=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_838=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_839=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_840=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_841=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj215=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_842=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj216=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_843=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_844=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_845=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value848=__builtin_string(fun_name)))));
    (__right_value848 = come_decrement_ref_count2(__right_value848, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    if(    funX_845) {
        __result361__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value853=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2214, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_841 = come_decrement_ref_count2(last_code_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_842 = come_decrement_ref_count2(last_code2_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_843 = come_decrement_ref_count2(sname_top_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_845,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value853,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_type_848=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_849=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2219, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_850=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_851=((struct sType*)list$1voidphp_begin((o2_saved_850)));    !list$1voidphp_end((o2_saved_850));    it_851=((struct sType*)list$1voidphp_next((o2_saved_850)))    ){
        param_type_852=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value857=come_call_cloner(sType_clone, it_851))),generics_type,info));
        come_call_finalizer3(__right_value857,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1voidphp_add(param_types_849,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_852)));
        come_call_finalizer3(param_type_852,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_850,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_853=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_854=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_855=info->p;
    sline_856=info->sline;
    sname_857=(char*)come_increment_ref_count(info->sname);
    head_858=info->head;
    source_859=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj221=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj221,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_860=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj222=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_861=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj223=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2247, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj223,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_862=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_863=list$1charphp_begin((o2_saved_862));    !list$1charphp_end((o2_saved_862));    it_863=list$1charphp_next((o2_saved_862))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_863)));
    }
    come_call_finalizer3(o2_saved_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj224=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj224,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj225=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_864=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_858;
    __dec_obj226=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_859);
    come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_855;
    info->sline=sline_856;
    __dec_obj227=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_857);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_848->mInline=(_Bool)0;
    result_type_848->mStatic=(_Bool)0;
    result_type_848->mUniq=(_Bool)0;
    var_args_865=generics_fun->mVarArgs;
    fun_866=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2271, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_848),(struct list$1voidph*)come_increment_ref_count(param_types_849),(struct list$1charph*)come_increment_ref_count(param_names_853),(struct list$1charph*)come_increment_ref_count(param_default_parametors_854),(_Bool)0,var_args_865,(struct sBlock*)come_increment_ref_count(block_864),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_866));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2278, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value875=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2278, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_866),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_867=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value875,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_868=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_869=node_compile(node_867,info);
    if(    !Value_869) {
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value879=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2283, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_841 = come_decrement_ref_count2(last_code_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_842 = come_decrement_ref_count2(last_code2_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_843 = come_decrement_ref_count2(sname_top_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_845,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_849,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_853,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_854,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        (sname_857 = come_decrement_ref_count2(sname_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_859,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_860,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_861,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_866,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_867) ? node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value879,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_868;
    __dec_obj228=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_860);
    come_call_finalizer3(__dec_obj228,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj229=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_861);
    come_call_finalizer3(__dec_obj229,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj230=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_843));
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_844;
    __dec_obj231=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_841);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj232=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_842);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_837;
    info->caller_line=caller_line_838;
    info->caller_sname=caller_sname_839;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_840;
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value883=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2303, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_841 = come_decrement_ref_count2(last_code_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_842 = come_decrement_ref_count2(last_code2_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_843 = come_decrement_ref_count2(sname_top_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_845,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_848,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_849,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_853,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_854,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    (sname_857 = come_decrement_ref_count2(sname_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_859,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_860,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_861,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_866,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_867) ? node_867 = come_decrement_ref_count2(node_867, ((struct sNode*)node_867)->finalize, ((struct sNode*)node_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value883,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj217;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj217=self->v1;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result358__;
void* __right_value850 = (void*)0;
struct tuple2$2charphbool* result_846;
void* __right_value851 = (void*)0;
char* __dec_obj218;
struct tuple2$2charphbool* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_846=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj218=result_846->v1;
        result_846->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_846->v2=self->v2;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_846;
    come_call_finalizer3(result_846,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_847;
    result_847=0;
    result_847+=int_get_hash_key(((int)self->v1));
    result_847+=int_get_hash_key(((int)self->v2));
    return result_847;
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
char* __dec_obj219;
struct tuple2$2charphbool* __result360__;
    __dec_obj219=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj220;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj220=self->v1;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_870;
int caller_line_871;
char* caller_sname_872;
_Bool comma_instead_of_semicolon_873;
char* last_code_874;
char* __dec_obj233;
char* last_code2_875;
char* __dec_obj234;
void* __right_value884 = (void*)0;
char* sname_top_876;
int sline_top_877;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct sFun* funX_878;
_Bool __result364__;
void* __right_value887 = (void*)0;
struct sType* result_type_879;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1voidph* param_types_880;
struct list$1voidph* o2_saved_881;
struct sType* it_882;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct sType* param_type_883;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1charph* param_names_884;
void* __right_value894 = (void*)0;
struct list$1charph* param_default_parametors_885;
char* p_886;
int sline_887;
char* sname_888;
char* head_889;
struct buffer* source_890;
void* __right_value895 = (void*)0;
struct buffer* __dec_obj235;
struct list$1charph* method_generics_type_names_891;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1charph* __dec_obj236;
struct list$1charph* o2_saved_892;
char* it_893;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct list$1charph* __dec_obj237;
char* __dec_obj238;
void* __right_value900 = (void*)0;
struct sBlock* block_894;
struct buffer* __dec_obj239;
char* __dec_obj240;
_Bool generate__895;
_Bool var_args_896;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sFun* fun_897;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value909 = (void*)0;
struct sNode* node_898;
_Bool Value_899;
void* __if_result__1_900 = (void*)0;
_Bool __result365__;
struct list$1charph* __dec_obj241;
void* __right_value910 = (void*)0;
char* __dec_obj242;
char* __dec_obj243;
char* __dec_obj244;
_Bool __result366__;
    caller_fun_870=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_871=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_872=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_873=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_874=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj233=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_875=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj234=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_876=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_877=info->sline;
    funX_878=((struct sFun*)((void*)(__right_value886=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value885=__builtin_string(fun_name)))))));
    (__right_value885 = come_decrement_ref_count2(__right_value885, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value886,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    funX_878) {
        __result364__ = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_874 = come_decrement_ref_count2(last_code_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_875 = come_decrement_ref_count2(last_code2_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_876 = come_decrement_ref_count2(sname_top_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result364__;
    }
    result_type_879=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_880=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2332, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_881=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_882=((struct sType*)list$1voidphp_begin((o2_saved_881)));    !list$1voidphp_end((o2_saved_881));    it_882=((struct sType*)list$1voidphp_next((o2_saved_881)))    ){
        param_type_883=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value890=come_call_cloner(sType_clone, it_882))),info));
        come_call_finalizer3(__right_value890,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1voidphp_add(param_types_880,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_883)));
        come_call_finalizer3(param_type_883,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_881,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_884=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_885=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_886=info->p;
    sline_887=info->sline;
    sname_888=(char*)come_increment_ref_count(info->sname);
    head_889=info->head;
    source_890=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj235=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj235,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_891=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2354, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_892=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_893=list$1charphp_begin((o2_saved_892));    !list$1charphp_end((o2_saved_892));    it_893=list$1charphp_next((o2_saved_892))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_893)));
    }
    come_call_finalizer3(o2_saved_892,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj237=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_894=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_889;
    __dec_obj239=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_890);
    come_call_finalizer3(__dec_obj239,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_886;
    info->sline=sline_887;
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_888);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_879->mInline=(_Bool)0;
    result_type_879->mStatic=(_Bool)0;
    result_type_879->mUniq=(_Bool)0;
    generate__895=(_Bool)0;
    if(    result_type_879->mGenerate) {
        result_type_879->mGenerate=(_Bool)0;
        generate__895=(_Bool)1;
    }
    var_args_896=generics_fun->mVarArgs;
    fun_897=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2384, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_879),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_880)),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),(_Bool)0,var_args_896,(struct sBlock*)come_increment_ref_count(block_894),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__895,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_897));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2391, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value908=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2391, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_897),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_898=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value908,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_899=node_compile(node_898,info);
    if(    !Value_899) {
        __result365__ = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_874 = come_decrement_ref_count2(last_code_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_875 = come_decrement_ref_count2(last_code2_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_876 = come_decrement_ref_count2(sname_top_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_879,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_880,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        (sname_888 = come_decrement_ref_count2(sname_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_894,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_897,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_898) ? node_898 = come_decrement_ref_count2(node_898, ((struct sNode*)node_898)->finalize, ((struct sNode*)node_898)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result365__;
    }
    else {
        __if_result__1_900=(void*)(Value_899);
;
    }
    __dec_obj241=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_891);
    come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_876));
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_877;
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_874);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_875);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_870;
    info->caller_line=caller_line_871;
    info->caller_sname=caller_sname_872;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_873;
    __result366__ = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_874 = come_decrement_ref_count2(last_code_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_875 = come_decrement_ref_count2(last_code2_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_876 = come_decrement_ref_count2(sname_top_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_879,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_880,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    (sname_888 = come_decrement_ref_count2(sname_888, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_894,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_897,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_898) ? node_898 = come_decrement_ref_count2(node_898, ((struct sNode*)node_898)->finalize, ((struct sNode*)node_898)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result366__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_901;
char* source_head_902;
void* __right_value911 = (void*)0;
char* attribute_903;
struct sType* result_type_904;
char* var_name_905;
_Bool constructor__906;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sType* __dec_obj245;
void* __right_value914 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var30 = (void*)0;
struct sType* result_type2_907=0;
char* var_name2_908=0;
_Bool err_909=0;
struct sType* __dec_obj246;
char* __dec_obj247;
_Bool method_definition_910;
char* p_911;
int sline_912;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct buffer* buf2_913;
char* fun_name_914;
char* base_fun_name_915;
void* __right_value917 = (void*)0;
char* __dec_obj248;
void* __right_value918 = (void*)0;
char* __dec_obj249;
void* __right_value919 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var31 = (void*)0;
struct sType* obj_type_916=0;
char* name_917=0;
_Bool err_918=0;
void* __right_value920 = (void*)0;
char* __dec_obj250;
void* __right_value921 = (void*)0;
char* __dec_obj251;
void* __right_value922 = (void*)0;
char* __dec_obj252;
void* __right_value923 = (void*)0;
char* __dec_obj253;
void* __right_value924 = (void*)0;
char* __dec_obj254;
void* __right_value925 = (void*)0;
char* __dec_obj255;
void* __right_value926 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var32 = (void*)0;
struct list$1voidph* param_types_919=0;
struct list$1charph* param_names_920=0;
struct list$1charph* param_default_parametors_921=0;
_Bool var_args_922=0;
char* header_tail_923;
int version_924;
int n_925;
_Bool in_top_level_926;
void* __right_value927 = (void*)0;
struct sBlock* block_927;
void* __right_value928 = (void*)0;
char* fun_name_929;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sFun* fun_930;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sFun* fun2_931;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value941 = (void*)0;
struct sNode* __result369__;
void* __right_value942 = (void*)0;
char* none_generics_name_933;
void* __right_value943 = (void*)0;
char* generics_sname_934;
int generics_sline_935;
void* __right_value944 = (void*)0;
char* block_936;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sGenericsFun* fun_939;
void* __right_value962 = (void*)0;
char* fun_name3_940;
void* __right_value963 = (void*)0;
struct sNode* __result372__;
void* __right_value964 = (void*)0;
char* generics_sname_941;
int generics_sline_942;
void* __right_value965 = (void*)0;
char* block_943;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct sGenericsFun* fun_944;
void* __right_value972 = (void*)0;
char* fun_name3_945;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* __result373__;
char* source_tail_946;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct buffer* header_947;
void* __right_value977 = (void*)0;
char* name_948;
void* __right_value978 = (void*)0;
char* name_949;
int i_950;
void* __right_value979 = (void*)0;
struct sType* param_type_951;
void* __right_value980 = (void*)0;
char* param_name_952;
void* __right_value981 = (void*)0;
char* default_parametor_953;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
char* impl_name_954;
void* __right_value985 = (void*)0;
char* result_type_name_955;
void* __right_value986 = (void*)0;
char* impl_name_956;
void* __right_value987 = (void*)0;
char* result_type_name_957;
int i_958;
void* __right_value988 = (void*)0;
struct sType* param_type_959;
void* __right_value989 = (void*)0;
char* param_name_960;
void* __right_value990 = (void*)0;
char* default_parametor_961;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
char* new_fun_name_962;
void* __right_value995 = (void*)0;
char* id_963;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
char* id_964;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sBlock* block_965;
_Bool static_fun_966;
_Bool inline_fun_967;
_Bool uniq_fun_968;
_Bool generate_fun_969;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
char* new_fun_name_970;
void* __right_value1002 = (void*)0;
char* __dec_obj270;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sFun* fun_971;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct sFun* fun2_972;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1014 = (void*)0;
struct sNode* __result374__;
void* __right_value1015 = (void*)0;
char* new_fun_name_973;
void* __right_value1016 = (void*)0;
char* __dec_obj271;
char* source_tail_974;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct buffer* header_975;
_Bool result_type_static_976;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sFun* fun_977;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sFun* fun2_978;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
char* id_979;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1030 = (void*)0;
struct sNode* __result375__;
void* __right_value1031 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var33 = (void*)0;
char* asm_fun_980=0;
char* fun_attribute_981=0;
void* __right_value1032 = (void*)0;
char* __dec_obj272;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct buffer* header_982;
char* source_tail_983;
_Bool result_type_static_984;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sFun* fun_985;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sFun* fun2_986;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
char* id_987;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1045 = (void*)0;
struct sNode* __result376__;
void* __right_value1046 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_988=0;
char* Err_989=0;
struct sNode* __result377__;
fun_name_914 = (void*)0;
    header_head_901=info->p;
    source_head_902=info->p;
    attribute_903=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_904=((void*)0);
    var_name_905=((void*)0);
    constructor__906=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value912=parse_word(info)));
        (__right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __dec_obj245=result_type_904;
        result_type_904=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_904->mHeap=(_Bool)1;
        constructor__906=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sTypephcharphbool*)(__right_value914=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_907=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_908=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_909=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value914,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj246=result_type_904;
        result_type_904=(struct sType*)come_increment_ref_count(result_type2_907);
        come_call_finalizer3(__dec_obj246,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj247=var_name_905;
        var_name_905=(char*)come_increment_ref_count(var_name2_908);
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_909) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_907,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_908 = come_decrement_ref_count2(var_name2_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_910=(_Bool)0;
    {
        p_911=info->p;
        sline_912=info->sline;
        buf2_913=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2457, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_913,*info->p);
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
        if(        buffer_length(buf2_913)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_910=(_Bool)1;
        }
        info->p=p_911;
        info->sline=sline_912;
        come_call_finalizer3(buf2_913,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_915=((void*)0);
    if(    constructor__906) {
        __dec_obj248=base_fun_name_915;
        base_fun_name_915=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj249=fun_name_914;
        fun_name_914=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_915,info,(_Bool)1));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_910) {
        multiple_assign_var31=((struct tuple3$3sTypephcharphbool*)(__right_value919=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_916=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_917=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_918=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value919,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_918) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj250=base_fun_name_915;
        base_fun_name_915=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj251=fun_name_914;
        fun_name_914=(char*)come_increment_ref_count(create_method_name(obj_type_916,(_Bool)0,base_fun_name_915,info,(_Bool)1));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_916,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_917 = come_decrement_ref_count2(name_917, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj252=base_fun_name_915;
        base_fun_name_915=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=fun_name_914;
        fun_name_914=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_915,info,(_Bool)1));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj254=fun_name_914;
        fun_name_914=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj255=base_fun_name_915;
        base_fun_name_915=(char*)come_increment_ref_count(__builtin_string(fun_name_914));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_915,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value926=parse_params(info,constructor__906)));
    param_types_919=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_920=(struct list$1charph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_921=(struct list$1charph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_922=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value926,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_923=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_915,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_924=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_925=0;
        while(xisdigit(*info->p)) {
            n_925=n_925*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_924=n_925;
    }
    in_top_level_926=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_915,"lambda")) {
        block_927=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_928=0;
        lambda_num_928++;
        fun_name_929=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_928));
        result_type_904->mInline=(_Bool)0;
        result_type_904->mStatic=(_Bool)0;
        result_type_904->mUniq=(_Bool)0;
        result_type_904->mGenerate=(_Bool)0;
        fun_930=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2556, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_929)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),(_Bool)0,var_args_922,(struct sBlock*)come_increment_ref_count(block_927),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_931=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value934=__builtin_string(fun_name_929)))));
        (__right_value934 = come_decrement_ref_count2(__right_value934, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_931==((void*)0)||fun2_931->mExternal) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_929)),(struct sFun*)come_increment_ref_count(fun_930));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2566, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value938=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2566, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_930,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value941=_inf_value5));
        come_call_finalizer3(block_927,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_929 = come_decrement_ref_count2(fun_name_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_930,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value938,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value941) ? __right_value941 = come_decrement_ref_count2(__right_value941, ((struct sNode*)__right_value941)->finalize, ((struct sNode*)__right_value941)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(block_927,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_929 = come_decrement_ref_count2(fun_name_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_930,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_933=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_934=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_935=info->sline;
        block_936=(char*)come_increment_ref_count(skip_block(info));
        fun_939=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2576, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value957=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value958=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),var_args_922,(char*)come_increment_ref_count(block_936),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_934)),generics_sline_935));
        come_call_finalizer3(__right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_940=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_933,base_fun_name_915));
        map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_940)),(struct sGenericsFun*)come_increment_ref_count(fun_939));
        __result372__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        (none_generics_name_933 = come_decrement_ref_count2(none_generics_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_934 = come_decrement_ref_count2(generics_sname_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_936 = come_decrement_ref_count2(block_936, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_939,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_940 = come_decrement_ref_count2(fun_name3_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
        (none_generics_name_933 = come_decrement_ref_count2(none_generics_name_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_934 = come_decrement_ref_count2(generics_sname_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_936 = come_decrement_ref_count2(block_936, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_939,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_940 = come_decrement_ref_count2(fun_name3_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_941=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_942=info->sline;
        block_943=(char*)come_increment_ref_count(skip_block(info));
        fun_944=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2590, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value967=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value968=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),var_args_922,(char*)come_increment_ref_count(block_943),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_941)),generics_sline_942));
        come_call_finalizer3(__right_value967,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value968,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_945=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_915));
        if(        method_definition_910) {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sGenericsFun*)come_increment_ref_count(fun_944));
        }
        else {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_945)),(struct sGenericsFun*)come_increment_ref_count(fun_944));
        }
        __result373__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        (generics_sname_941 = come_decrement_ref_count2(generics_sname_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_943 = come_decrement_ref_count2(block_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_944,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_945 = come_decrement_ref_count2(fun_name3_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result373__;
        (generics_sname_941 = come_decrement_ref_count2(generics_sname_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_943 = come_decrement_ref_count2(block_943, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_944,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_945 = come_decrement_ref_count2(fun_name3_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_946=info->p-1;
        header_947=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2606, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__906) {
            if(            list$1voidphp_length(param_types_919)==1) {
                name_948=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_947,"extern %s*%% %s*::initialize(%s*%% self);\n",name_948,name_948,name_948);
                (name_948 = come_decrement_ref_count2(name_948, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_949=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_947,"extern %s*%% %s*::initialize(%s*%% self, ",name_949,name_949,name_949);
                for(                i_950=1;                i_950<list$1voidphp_length(param_types_919);                i_950++                ){
                    param_type_951=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_919,i_950));
                    param_name_952=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_920,i_950));
                    default_parametor_953=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_921,i_950));
                    if(                    default_parametor_953) {
                        buffer_append_format(header_947,"extern %s %s=%s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_951,(_Bool)0,info))),param_name_952,default_parametor_953);
                        (__right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        buffer_append_format(header_947,"extern %s %s",((char*)(__right_value983=make_come_type_name_string_no_solved(param_type_951,(_Bool)0,info))),param_name_952);
                        (__right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    i_950!=list$1voidphp_length(param_types_919)-1) {
                        buffer_append_str(header_947,",");
                    }
                    come_call_finalizer3(param_type_951,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_952 = come_decrement_ref_count2(param_name_952, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_953 = come_decrement_ref_count2(default_parametor_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_947,");\n");
                (name_949 = come_decrement_ref_count2(name_949, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_919)==1) {
                impl_name_954=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_955=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_904,(_Bool)0,info));
                buffer_append_format(header_947,"extern %s %s*::%s(%s* self);\n",result_type_name_955,impl_name_954,base_fun_name_915,impl_name_954);
                (impl_name_954 = come_decrement_ref_count2(impl_name_954, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_955 = come_decrement_ref_count2(result_type_name_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_956=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_957=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_904,(_Bool)0,info));
                buffer_append_format(header_947,"extern %s %s*::%s(%s* self, ",result_type_name_957,impl_name_956,base_fun_name_915,impl_name_956);
                for(                i_958=1;                i_958<list$1voidphp_length(param_types_919);                i_958++                ){
                    param_type_959=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_919,i_958));
                    param_name_960=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_920,i_958));
                    default_parametor_961=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_921,i_958));
                    if(                    default_parametor_961) {
                        buffer_append_format(header_947,"extern %s %s=%s",((char*)(__right_value991=make_come_type_name_string_no_solved(param_type_959,(_Bool)0,info))),param_name_960,default_parametor_961);
                        (__right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        buffer_append_format(header_947,"extern %s %s",((char*)(__right_value992=make_come_type_name_string_no_solved(param_type_959,(_Bool)0,info))),param_name_960);
                        (__right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    if(                    i_958!=list$1voidphp_length(param_types_919)-1) {
                        buffer_append_str(header_947,",");
                    }
                    come_call_finalizer3(param_type_959,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_960 = come_decrement_ref_count2(param_name_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_961 = come_decrement_ref_count2(default_parametor_961, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_947,");\n");
                (impl_name_956 = come_decrement_ref_count2(impl_name_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_957 = come_decrement_ref_count2(result_type_name_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_947,source_head_902,source_tail_946-source_head_902);
            buffer_append_str(header_947,";\n");
        }
        if(        !result_type_904->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_924>0) {
                    new_fun_name_962=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value993=__builtin_string(fun_name_914))),version_924));
                    (__right_value993 = come_decrement_ref_count2(__right_value993, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    id_963=(char*)come_increment_ref_count(__builtin_string(new_fun_name_962));
                    add_come_code_at_come_header(info,id_963,"%s",((char*)(__right_value996=buffer_to_string(header_947))));
                    (__right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (new_fun_name_962 = come_decrement_ref_count2(new_fun_name_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_963 = come_decrement_ref_count2(id_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_964=(char*)come_increment_ref_count(__builtin_string(fun_name_914));
                    add_come_code_at_come_header(info,id_964,"%s",((char*)(__right_value998=buffer_to_string(header_947))));
                    (__right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_964 = come_decrement_ref_count2(id_964, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_965=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__906,(_Bool)1));
        static_fun_966=(_Bool)0;
        if(        result_type_904->mStatic) {
            result_type_904->mStatic=(_Bool)0;
            result_type_904->mUniq=(_Bool)0;
            static_fun_966=(_Bool)1;
        }
        inline_fun_967=(_Bool)0;
        if(        result_type_904->mInline) {
            result_type_904->mInline=(_Bool)0;
            result_type_904->mUniq=(_Bool)0;
            inline_fun_967=(_Bool)1;
        }
        uniq_fun_968=(_Bool)0;
        if(        result_type_904->mUniq) {
            result_type_904->mUniq=(_Bool)0;
            result_type_904->mInline=(_Bool)0;
            result_type_904->mStatic=(_Bool)0;
            uniq_fun_968=(_Bool)1;
        }
        generate_fun_969=(_Bool)0;
        if(        result_type_904->mUniq) {
            result_type_904->mUniq=(_Bool)0;
            result_type_904->mInline=(_Bool)0;
            result_type_904->mStatic=(_Bool)0;
            generate_fun_969=(_Bool)1;
        }
        if(        version_924>0) {
            new_fun_name_970=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1000=__builtin_string(fun_name_914))),version_924));
            (__right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            __dec_obj270=fun_name_914;
            fun_name_914=(char*)come_increment_ref_count(__builtin_string(new_fun_name_970));
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_970 = come_decrement_ref_count2(new_fun_name_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_971=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2724, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),(_Bool)0,var_args_922,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_965)),static_fun_966,info,inline_fun_967,uniq_fun_968,generate_fun_969,(char*)come_increment_ref_count(attribute_903),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sFun*)come_increment_ref_count(fun_971));
        }
        else {
            fun2_972=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1009=__builtin_string(fun_name_914)))));
            (__right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_972==((void*)0)||fun2_972->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sFun*)come_increment_ref_count(fun_971));
            }
            come_call_finalizer3(fun2_972,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2742, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1013=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2742, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_971),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1014=_inf_value6));
        come_call_finalizer3(header_947,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_965,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_971,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1013,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value1014) ? __right_value1014 = come_decrement_ref_count2(__right_value1014, ((struct sNode*)__right_value1014)->finalize, ((struct sNode*)__right_value1014)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(header_947,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_965,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_971,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_924>0) {
            new_fun_name_973=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_914,version_924));
            __dec_obj271=fun_name_914;
            fun_name_914=(char*)come_increment_ref_count(__builtin_string(new_fun_name_973));
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_973 = come_decrement_ref_count2(new_fun_name_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_974=info->p;
            header_975=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2755, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_975,source_head_902,source_tail_974-source_head_902);
            skip_spaces_and_lf(info);
            result_type_static_976=result_type_904->mStatic;
            result_type_904->mStatic=(_Bool)0;
            result_type_904->mUniq=(_Bool)0;
            result_type_904->mInline=(_Bool)0;
            result_type_904->mGenerate=(_Bool)0;
            fun_977=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2766, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),(_Bool)1,var_args_922,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_903),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_978=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1023=__builtin_string(fun_name_914)))));
            (__right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_978==((void*)0)||fun2_978->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sFun*)come_increment_ref_count(fun_977));
            }
            if(            !result_type_static_976) {
                if(                !info->no_output_come_code) {
                    id_979=(char*)come_increment_ref_count(__builtin_string(fun_name_914));
                    add_come_code_at_come_header(info,id_979,"%s",((char*)(__right_value1027=buffer_to_string(header_975))));
                    (__right_value1027 = come_decrement_ref_count2(__right_value1027, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_979 = come_decrement_ref_count2(id_979, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2786, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1029=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2786, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_977),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1030=_inf_value7));
            come_call_finalizer3(header_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_977,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_978,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1029,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1030) ? __right_value1030 = come_decrement_ref_count2(__right_value1030, ((struct sNode*)__right_value1030)->finalize, ((struct sNode*)__right_value1030)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result375__;
            come_call_finalizer3(header_975,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_977,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_978,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2charphcharph*)(__right_value1031=parse_function_attribute(info)));
            asm_fun_980=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_981=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1031,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_980,"")) {
                __dec_obj272=fun_name_914;
                fun_name_914=(char*)come_increment_ref_count(__builtin_string(asm_fun_980));
                __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_982=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2795, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_983=info->p;
                buffer_append(header_982,source_head_902,source_tail_983-source_head_902);
                skip_spaces_and_lf(info);
            }
            result_type_static_984=result_type_904->mStatic;
            result_type_904->mStatic=(_Bool)0;
            result_type_904->mUniq=(_Bool)0;
            result_type_904->mInline=(_Bool)0;
            result_type_904->mGenerate=(_Bool)0;
            fun_985=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2809, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sType*)come_increment_ref_count(result_type_904),(struct list$1voidph*)come_increment_ref_count(param_types_919),(struct list$1charph*)come_increment_ref_count(param_names_920),(struct list$1charph*)come_increment_ref_count(param_default_parametors_921),(_Bool)1,var_args_922,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_903),(char*)come_increment_ref_count(fun_attribute_981)));
            fun2_986=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1038=__builtin_string(fun_name_914)))));
            (__right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_986==((void*)0)||fun2_986->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_914)),(struct sFun*)come_increment_ref_count(fun_985));
            }
            if(            !result_type_static_984) {
                if(                !info->no_output_come_code) {
                    id_987=(char*)come_increment_ref_count(__builtin_string(fun_name_914));
                    add_come_code_at_come_header(info,id_987,"%s",((char*)(__right_value1042=buffer_to_string(header_982))));
                    (__right_value1042 = come_decrement_ref_count2(__right_value1042, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    (id_987 = come_decrement_ref_count2(id_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2830, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1044=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2830, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_985),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1045=_inf_value8));
            (asm_fun_980 = come_decrement_ref_count2(asm_fun_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_981 = come_decrement_ref_count2(fun_attribute_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_982,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_985,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_986,sFun_finalize, 0, 0, 0, 0, (void*)0);
            (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1044,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1045) ? __right_value1045 = come_decrement_ref_count2(__right_value1045, ((struct sNode*)__right_value1045)->finalize, ((struct sNode*)__right_value1045)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result376__;
            (asm_fun_980 = come_decrement_ref_count2(asm_fun_980, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_981 = come_decrement_ref_count2(fun_attribute_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_982,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_985,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_986,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2intcharph*)(__right_value1046=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_988=multiple_assign_var34->v1;
        Err_989=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_989)?(puts(Err_989),exit(0)):(0));
        come_call_finalizer3(__right_value1046,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        exit(2);
        (Err_989 = come_decrement_ref_count2(Err_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_926;
    __result377__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    (attribute_903 = come_decrement_ref_count2(attribute_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_905 = come_decrement_ref_count2(var_name_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_914 = come_decrement_ref_count2(fun_name_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_915 = come_decrement_ref_count2(base_fun_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_919,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_920,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_921,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj256;
struct list$1charph* __dec_obj257;
struct list$1charph* __dec_obj258;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj256=self->v1;
            come_call_finalizer3(__dec_obj256,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj257=self->v2;
            come_call_finalizer3(__dec_obj257,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj258=self->v3;
            come_call_finalizer3(__dec_obj258,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result367__;
void* __right_value939 = (void*)0;
struct sLambdaNode* result_932;
void* __right_value940 = (void*)0;
char* __dec_obj259;
struct sLambdaNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_932=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_932->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_932->sname;
        result_932->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_932->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_932->mFun=self->mFun;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_932;
    come_call_finalizer3(result_932,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
void* __result_obj__=(void*)0;
struct sGenericsFun* __result370__;
void* __right_value945 = (void*)0;
struct sGenericsFun* result_938;
void* __right_value946 = (void*)0;
struct sType* __dec_obj260;
void* __right_value947 = (void*)0;
struct list$1charph* __dec_obj261;
void* __right_value948 = (void*)0;
struct list$1charph* __dec_obj262;
void* __right_value949 = (void*)0;
char* __dec_obj263;
void* __right_value950 = (void*)0;
struct sType* __dec_obj264;
void* __right_value951 = (void*)0;
struct list$1voidph* __dec_obj265;
void* __right_value952 = (void*)0;
struct list$1charph* __dec_obj266;
void* __right_value953 = (void*)0;
struct list$1charph* __dec_obj267;
void* __right_value954 = (void*)0;
char* __dec_obj268;
void* __right_value955 = (void*)0;
char* __dec_obj269;
struct sGenericsFun* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_938=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj260=result_938->mImplType;
        result_938->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj261=result_938->mGenericsTypeNames;
        result_938->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj261,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj262=result_938->mMethodGenericsTypeNames;
        result_938->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj262,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj263=result_938->mName;
        result_938->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj264=result_938->mResultType;
        result_938->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj264,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj265=result_938->mParamTypes;
        result_938->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj265,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj266=result_938->mParamNames;
        result_938->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj266,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj267=result_938->mParamDefaultParametors;
        result_938->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj267,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj268=result_938->mBlock;
        result_938->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_938->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_938->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_938->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj269=result_938->mGenericsSName;
        result_938->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_938->mGenericsSLine=self->mGenericsSLine;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_938;
    come_call_finalizer3(result_938,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_937;
    result_937=0;
    result_937+=int_get_hash_key(((int)self->mImplType));
    result_937+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_937+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_937+=int_get_hash_key(((int)self->mName));
    result_937+=int_get_hash_key(((int)self->mResultType));
    result_937+=int_get_hash_key(((int)self->mParamTypes));
    result_937+=int_get_hash_key(((int)self->mParamNames));
    result_937+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_937+=int_get_hash_key(((int)self->mBlock));
    result_937+=int_get_hash_key(((int)self->mSLine));
    result_937+=int_get_hash_key(((int)self->mVarArgs));
    result_937+=int_get_hash_key(((int)self->mGenerate));
    result_937+=int_get_hash_key(((int)self->mGenericsSName));
    result_937+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_937;
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
char* last_code_990;
char* __dec_obj273;
char* last_code2_991;
char* __dec_obj274;
_Bool comma_instead_of_semicolon_992;
struct sClass* current_stack_frame_struct_993;
char* real_fun_name_994;
struct sFun* finalizer_995;
void* __right_value1047 = (void*)0;
struct sType* type_before_996;
void* __right_value1048 = (void*)0;
struct sType* type2_997;
void* __right_value1049 = (void*)0;
char* fun_name2_998;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
char* none_generics_name_999;
void* __right_value1052 = (void*)0;
char* generics_fun_name_1000;
void* __right_value1053 = (void*)0;
struct sGenericsFun* generics_fun_1001;
void* __right_value1054 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var35 = (void*)0;
char* name_1002=0;
_Bool err_1003=0;
void* __right_value1055 = (void*)0;
char* __dec_obj275;
int i_1004;
void* __right_value1056 = (void*)0;
char* new_fun_name_1005;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
char* __dec_obj276;
void* __right_value1059 = (void*)0;
char* __dec_obj277;
void* __right_value1060 = (void*)0;
char* __dec_obj278;
void* __right_value1061 = (void*)0;
char* user_real_fun_name_1006;
void* __right_value1062 = (void*)0;
struct sFun* user_finalizer_1007;
void* __right_value1063 = (void*)0;
struct sType* type2_1008;
struct sClass* klass_1009;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct buffer* source_1010;
void* __right_value1066 = (void*)0;
struct list$1voidph* o2_saved_1012;
struct tuple2$2charphsTypeph* it_1013;
struct tuple2$2charphsTypeph* multiple_assign_var36 = (void*)0;
char* name_1014=0;
struct sType* field_type_1015=0;
char* p_1018;
int sline_1019;
char* sname_1020;
char* head_1021;
struct buffer* source3_1022;
struct buffer* __dec_obj279;
void* __right_value1067 = (void*)0;
char* __dec_obj280;
void* __right_value1068 = (void*)0;
struct sBlock* block_1023;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sType* result_type_1024;
void* __right_value1071 = (void*)0;
char* name_1025;
void* __right_value1072 = (void*)0;
struct sType* self_type_1026;
struct sType* __list_values21___1028[1];
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct list$1voidph* param_types_1027;
void* __right_value1075 = (void*)0;
char* __list_values22___1029[1];
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct list$1charph* param_names_1030;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct list$1charph* param_default_parametors_1031;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct sFun* fun2_1032;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sFun* fun_1033;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1089 = (void*)0;
struct sNode* node_1034;
_Bool Value_1035;
struct buffer* __dec_obj281;
char* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct tuple2$2sFunpcharph* __result381__;
memset(&i_1004, 0, sizeof(int));
    last_code_990=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj273=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_991=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj274=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_992=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_993=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_994=((void*)0);
    finalizer_995=((void*)0);
    type_before_996=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_997=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_997->mHeap=(_Bool)0;
    fun_name2_998=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_995=((struct sFun*)((void*)(__right_value1050=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_998))));
        come_call_finalizer3(__right_value1050,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        finalizer_995==((void*)0)) {
            none_generics_name_999=(char*)come_increment_ref_count(get_none_generics_name(type2_997->mClass->mName));
            generics_fun_name_1000=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_999,fun_name));
            generics_fun_1001=((struct sGenericsFun*)((void*)(__right_value1053=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_1000))));
            come_call_finalizer3(__right_value1053,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            generics_fun_1001) {
                multiple_assign_var35=((struct tuple2$2charphbool*)(__right_value1054=create_generics_fun((char*)come_increment_ref_count(fun_name2_998),generics_fun_1001,type,info)));
                name_1002=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1003=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1054,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1003) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_995=((struct sFun*)((void*)(__right_value1055=map$2voidphvoidphp_operator_load_element(info->funcs,name_1002))));
                come_call_finalizer3(__right_value1055,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                (name_1002 = come_decrement_ref_count2(name_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_999 = come_decrement_ref_count2(none_generics_name_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1000 = come_decrement_ref_count2(generics_fun_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj275=real_fun_name_994;
        real_fun_name_994=(char*)come_increment_ref_count(fun_name2_998);
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1004=128-1;        i_1004>=1;        i_1004--        ){
            new_fun_name_1005=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_998,i_1004));
            finalizer_995=((struct sFun*)((void*)(__right_value1057=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1005))));
            come_call_finalizer3(__right_value1057,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            finalizer_995) {
                __dec_obj276=fun_name2_998;
                fun_name2_998=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1005));
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1005 = come_decrement_ref_count2(new_fun_name_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1005 = come_decrement_ref_count2(new_fun_name_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_995==((void*)0)) {
            finalizer_995=((struct sFun*)((void*)(__right_value1059=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_998))));
            come_call_finalizer3(__right_value1059,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj277=real_fun_name_994;
        real_fun_name_994=(char*)come_increment_ref_count(fun_name2_998);
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_995==((void*)0)) {
        type=type_before_996;
        __dec_obj278=real_fun_name_994;
        real_fun_name_994=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1006=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1007=((struct sFun*)((void*)(__right_value1062=map$2voidphvoidphp_operator_load_element(info->funcs,user_real_fun_name_1006))));
        come_call_finalizer3(__right_value1062,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        type2_1008=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1008;
        klass_1009=type->mClass;
        if(        type->mPointerNum>0&&klass_1009->mStruct||type->mAllocaValue) {
            source_1010=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2930, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1010,123);
            if(            user_finalizer_1007) {
                char source2_1011[1024];
                memset(&source2_1011, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1011,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1006);
                buffer_append_str(source_1010,source2_1011);
            }
            klass_1009=((struct sClass*)((void*)(__right_value1066=map$2voidphvoidphp_operator_load_element(info->classes,klass_1009->mName))));
            come_call_finalizer3(__right_value1066,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1012=(struct list$1voidph*)come_increment_ref_count((klass_1009->mFields)),it_1013=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1012)));            !list$1voidphp_end((o2_saved_1012));            it_1013=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1012)))            ){
                multiple_assign_var36=it_1013;
                name_1014=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1015=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1015->mHeap) {
                    char source2_1016[1024];
                    memset(&source2_1016, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1016,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_1014,name_1014,name_1014,name_1014);
                    buffer_append_str(source_1010,source2_1016);
                }
                else if(                field_type_1015->mChannel) {
                    char source2_1017[1024];
                    memset(&source2_1017, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1017,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1014,name_1014);
                    buffer_append_str(source_1010,source2_1017);
                    snprintf(source2_1017,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1014,name_1014);
                    buffer_append_str(source_1010,source2_1017);
                }
                (name_1014 = come_decrement_ref_count2(name_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1015,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1012,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1010,125);
            p_1018=info->p;
            sline_1019=info->sline;
            sname_1020=(char*)come_increment_ref_count(info->sname);
            head_1021=info->head;
            source3_1022=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj279=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1010);
            come_call_finalizer3(__dec_obj279,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1010->buf;
            info->head=source_1010->buf;
            __dec_obj280=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_994));
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1023=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1024=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2979, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_1025=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_994));
            self_type_1026=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1026->mHeap=(_Bool)0;
            if(            self_type_1026->mPointerNum==0) {
                self_type_1026->mPointerNum=1;
            }
            if(            self_type_1026->mPointerNum>1) {
                self_type_1026->mPointerNum=1;
            }
            param_types_1027=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1028[0]=(struct sType*)come_increment_ref_count(self_type_1026),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2989, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values21___1028)));
            param_names_1030=(struct list$1charph*)come_increment_ref_count((__list_values22___1029[0]=(char*)come_increment_ref_count(((char*)(__right_value1075=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2990, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values22___1029)));
            (__right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            param_default_parametors_1031=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2991, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1031,((void*)0));
            result_type_1024->mStatic=(_Bool)0;
            result_type_1024->mUniq=(_Bool)0;
            result_type_1024->mInline=(_Bool)0;
            result_type_1024->mGenerate=(_Bool)0;
            fun2_1032=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1080=__builtin_string(name_1025)))));
            (__right_value1080 = come_decrement_ref_count2(__right_value1080, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            fun2_1032==((void*)0)||fun2_1032->mExternal) {
                fun_1033=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3001, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1025),(struct sType*)come_increment_ref_count(result_type_1024),(struct list$1voidph*)come_increment_ref_count(param_types_1027),(struct list$1charph*)come_increment_ref_count(param_names_1030),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1031),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1023),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1025)),(struct sFun*)come_increment_ref_count(fun_1033));
                finalizer_995=fun_1033;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3011, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1088=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3011, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1033),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1034=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1088,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1035=node_compile(node_1034,info);
                if(                !Value_1035) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1033,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1034) ? node_1034 = come_decrement_ref_count2(node_1034, ((struct sNode*)node_1034)->finalize, ((struct sNode*)node_1034)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                finalizer_995=fun2_1032;
            }
            __dec_obj281=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1022);
            come_call_finalizer3(__dec_obj281,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1018;
            info->head=head_1021;
            info->sline=sline_1019;
            __dec_obj282=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1020);
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1020 = come_decrement_ref_count2(sname_1020, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1022,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1023,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1024,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1025 = come_decrement_ref_count2(name_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1026,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1027,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1030,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1031,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1032,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1006 = come_decrement_ref_count2(user_real_fun_name_1006, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_993;
    __dec_obj283=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_990);
    __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj284=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_991);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_992;
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1093=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3036, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),finalizer_995,(char*)come_increment_ref_count(real_fun_name_994))));
    (last_code_990 = come_decrement_ref_count2(last_code_990, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_991 = come_decrement_ref_count2(last_code2_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_994 = come_decrement_ref_count2(real_fun_name_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_996,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_997,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_998 = come_decrement_ref_count2(fun_name2_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1093,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj285;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj285=self->v2;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result378__;
void* __right_value1090 = (void*)0;
struct tuple2$2sFunpcharph* result_1036;
void* __right_value1091 = (void*)0;
char* __dec_obj286;
struct tuple2$2sFunpcharph* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_1036=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1036->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj286=result_1036->v2;
        result_1036->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_1036;
    come_call_finalizer3(result_1036,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_1037;
    result_1037=0;
    result_1037+=int_get_hash_key(((int)self->v1));
    result_1037+=int_get_hash_key(((int)self->v2));
    return result_1037;
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
char* __dec_obj287;
struct tuple2$2sFunpcharph* __result380__;
    self->v1=v1;
    __dec_obj287=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj288;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj288=self->v2;
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1038;
char* __dec_obj289;
char* last_code2_1039;
char* __dec_obj290;
_Bool comma_instead_of_semicolon_1040;
struct sClass* current_stack_frame_struct_1041;
struct sFun* equaler_1042;
void* __right_value1094 = (void*)0;
char* real_fun_name_1043;
void* __right_value1095 = (void*)0;
struct sType* type2_1044;
struct sClass* klass_1045;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct buffer* source_1046;
char* name_1047;
void* __right_value1098 = (void*)0;
struct list$1voidph* o2_saved_1049;
struct tuple2$2charphsTypeph* it_1050;
struct tuple2$2charphsTypeph* multiple_assign_var37 = (void*)0;
char* name_1051=0;
struct sType* field_type_1052=0;
char* p_1054;
int sline_1055;
char* sname_1056;
char* head_1057;
struct buffer* source3_1058;
struct buffer* __dec_obj291;
void* __right_value1099 = (void*)0;
char* __dec_obj292;
void* __right_value1100 = (void*)0;
struct sBlock* block_1059;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sType* result_type_1060;
void* __right_value1103 = (void*)0;
char* name_1061;
void* __right_value1104 = (void*)0;
struct sType* left_type_1062;
void* __right_value1105 = (void*)0;
struct sType* right_type_1063;
struct sType* __list_values23___1065[2];
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct list$1voidph* param_types_1064;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
char* __list_values24___1066[2];
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct list$1charph* param_names_1067;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct list$1charph* param_default_parametors_1068;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
struct sFun* fun2_1069;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct sFun* fun_1070;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1123 = (void*)0;
struct sNode* node_1071;
_Bool Value_1072;
void* __right_value1124 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1073=0;
char* Err_1074=0;
struct buffer* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
struct tuple2$2sFunpcharph* __result382__;
    last_code_1038=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj289=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1039=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj290=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        source_1046=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3062, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1046,123);
        if(        klass_1045->mProtocol) {
            name_1047="_protocol_obj";
            char source2_1048[1024];
            memset(&source2_1048, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1048,1024,"return left.%s.equals(right.%s);\n",name_1047,name_1047);
            buffer_append_str(source_1046,source2_1048);
        }
        else {
            klass_1045=((struct sClass*)((void*)(__right_value1098=map$2voidphvoidphp_operator_load_element(info->classes,klass_1045->mName))));
            come_call_finalizer3(__right_value1098,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1049=(struct list$1voidph*)come_increment_ref_count((klass_1045->mFields)),it_1050=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1049)));            !list$1voidphp_end((o2_saved_1049));            it_1050=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1049)))            ){
                multiple_assign_var37=it_1050;
                name_1051=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1052=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1053[1024];
                memset(&source2_1053, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1053,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1051,name_1051,name_1051);
                buffer_append_str(source_1046,source2_1053);
                (name_1051 = come_decrement_ref_count2(name_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1052,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1049,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1046,"return true;");
        buffer_append_char(source_1046,125);
        p_1054=info->p;
        sline_1055=info->sline;
        sname_1056=(char*)come_increment_ref_count(info->sname);
        head_1057=info->head;
        source3_1058=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj291=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1046);
        come_call_finalizer3(__dec_obj291,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1046->buf;
        info->head=source_1046->buf;
        __dec_obj292=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1043));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1059=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1060=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3102, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1061=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1043));
        left_type_1062=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1062->mHeap=(_Bool)0;
        right_type_1063=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1063->mHeap=(_Bool)0;
        param_types_1064=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1065[0]=(struct sType*)come_increment_ref_count(left_type_1062),
__list_values23___1065[1]=(struct sType*)come_increment_ref_count(right_type_1063),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3108, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values23___1065)));
        param_names_1067=(struct list$1charph*)come_increment_ref_count((__list_values24___1066[0]=(char*)come_increment_ref_count(((char*)(__right_value1108=__builtin_string("left")))),
__list_values24___1066[1]=(char*)come_increment_ref_count(((char*)(__right_value1109=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3109, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values24___1066)));
        (__right_value1108 = come_decrement_ref_count2(__right_value1108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1109 = come_decrement_ref_count2(__right_value1109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1068=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3110, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1068,((void*)0));
        list$1charphp_push_back(param_default_parametors_1068,((void*)0));
        result_type_1060->mStatic=(_Bool)0;
        result_type_1060->mUniq=(_Bool)0;
        result_type_1060->mInline=(_Bool)0;
        result_type_1060->mGenerate=(_Bool)0;
        fun2_1069=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1114=__builtin_string(name_1061)))));
        (__right_value1114 = come_decrement_ref_count2(__right_value1114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1069==((void*)0)||fun2_1069->mExternal) {
            fun_1070=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3121, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1061),(struct sType*)come_increment_ref_count(result_type_1060),(struct list$1voidph*)come_increment_ref_count(param_types_1064),(struct list$1charph*)come_increment_ref_count(param_names_1067),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1068),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1059),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1061)),(struct sFun*)come_increment_ref_count(fun_1070));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3129, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1122=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3129, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1070),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1071=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1122,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1072=node_compile(node_1071,info);
            if(            !Value_1072) {
                multiple_assign_var38=((struct tuple2$2intcharph*)(__right_value1124=err_msg(info,"compiling error")));
                come_exception_var_c24_1073=multiple_assign_var38->v1;
                Err_1074=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1074)?(puts(Err_1074),exit(0)):(0));
                come_call_finalizer3(__right_value1124,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1074 = come_decrement_ref_count2(Err_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1042=fun_1070;
            come_call_finalizer3(fun_1070,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1071) ? node_1071 = come_decrement_ref_count2(node_1071, ((struct sNode*)node_1071)->finalize, ((struct sNode*)node_1071)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1042=fun2_1069;
        }
        __dec_obj293=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1058);
        come_call_finalizer3(__dec_obj293,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1054;
        info->head=head_1057;
        info->sline=sline_1055;
        __dec_obj294=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1056);
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1056 = come_decrement_ref_count2(sname_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1058,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1059,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1060,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1061 = come_decrement_ref_count2(name_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1063,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1064,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1067,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1068,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1069,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1041;
    __dec_obj295=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1038);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj296=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1039);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1040;
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1126=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1042,(char*)come_increment_ref_count(real_fun_name_1043))));
    (last_code_1038 = come_decrement_ref_count2(last_code_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1039 = come_decrement_ref_count2(last_code2_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1043 = come_decrement_ref_count2(real_fun_name_1043, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1044,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1126,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1075;
char* __dec_obj297;
char* last_code2_1076;
char* __dec_obj298;
_Bool comma_instead_of_semicolon_1077;
struct sClass* current_stack_frame_struct_1078;
struct sFun* equaler_1079;
void* __right_value1127 = (void*)0;
char* real_fun_name_1080;
void* __right_value1128 = (void*)0;
struct sType* type2_1081;
struct sClass* klass_1082;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct buffer* source_1083;
char* name_1084;
int i_1087;
void* __right_value1131 = (void*)0;
struct list$1voidph* o2_saved_1088;
struct tuple2$2charphsTypeph* it_1089;
struct tuple2$2charphsTypeph* multiple_assign_var39 = (void*)0;
char* name_1090=0;
struct sType* field_type_1091=0;
char* p_1095;
int sline_1096;
char* sname_1097;
char* head_1098;
struct buffer* source3_1099;
struct buffer* __dec_obj299;
void* __right_value1132 = (void*)0;
char* __dec_obj300;
void* __right_value1133 = (void*)0;
struct sBlock* block_1100;
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
struct sType* result_type_1101;
void* __right_value1136 = (void*)0;
char* name_1102;
void* __right_value1137 = (void*)0;
struct sType* left_type_1103;
void* __right_value1138 = (void*)0;
struct sType* right_type_1104;
struct sType* __list_values25___1106[2];
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct list$1voidph* param_types_1105;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
char* __list_values26___1107[2];
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct list$1charph* param_names_1108;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct list$1charph* param_default_parametors_1109;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct sFun* fun2_1110;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct sFun* fun_1111;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
void* __right_value1155 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1156 = (void*)0;
struct sNode* node_1112;
_Bool Value_1113;
void* __right_value1157 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1114=0;
char* Err_1115=0;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
struct tuple2$2sFunpcharph* __result383__;
    last_code_1075=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj297=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1076=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj298=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1077=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1078=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1079=((void*)0);
    real_fun_name_1080=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1081=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1081;
    klass_1082=type->mClass;
    if(    type->mPointerNum>0&&!klass_1082->mNumber) {
        source_1083=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3180, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1083,123);
        if(        klass_1082->mProtocol) {
            name_1084="_protocol_obj";
            char source2_1085[1024];
            memset(&source2_1085, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1085,1024,"return left.%s !== right.%s;\n",name_1084,name_1084);
            buffer_append_str(source_1083,source2_1085);
        }
        else {
            char source2_1086[1024];
            memset(&source2_1086, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1086,1024,"return !(");
            buffer_append_str(source_1083,source2_1086);
            snprintf(source2_1086,1024,"( ");
            buffer_append_str(source_1083,source2_1086);
            i_1087=0;
            klass_1082=((struct sClass*)((void*)(__right_value1131=map$2voidphvoidphp_operator_load_element(info->classes,klass_1082->mName))));
            come_call_finalizer3(__right_value1131,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1088=(struct list$1voidph*)come_increment_ref_count((klass_1082->mFields)),it_1089=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1088)));            !list$1voidphp_end((o2_saved_1088));            it_1089=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1088)))            ){
                multiple_assign_var39=it_1089;
                name_1090=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1091=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1092[1024];
                memset(&source2_1092, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1092,1024,"(left.%s === right.%s)",name_1090,name_1090,name_1090);
                buffer_append_str(source_1083,source2_1092);
                if(                i_1087==list$1voidphp_length(klass_1082->mFields)-1) {
                    char source2_1093[1024];
                    memset(&source2_1093, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1093,1024,"));");
                    buffer_append_str(source_1083,source2_1093);
                }
                else {
                    char source2_1094[1024];
                    memset(&source2_1094, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1094,1024," && ");
                    buffer_append_str(source_1083,source2_1094);
                }
                i_1087++;
                (name_1090 = come_decrement_ref_count2(name_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1091,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1088,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1083,125);
        p_1095=info->p;
        sline_1096=info->sline;
        sname_1097=(char*)come_increment_ref_count(info->sname);
        head_1098=info->head;
        source3_1099=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1083);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1083->buf;
        info->head=source_1083->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1080));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1100=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1101=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3240, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1102=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1080));
        left_type_1103=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1103->mHeap=(_Bool)0;
        right_type_1104=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1104->mHeap=(_Bool)0;
        param_types_1105=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1106[0]=(struct sType*)come_increment_ref_count(left_type_1103),
__list_values25___1106[1]=(struct sType*)come_increment_ref_count(right_type_1104),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3246, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values25___1106)));
        param_names_1108=(struct list$1charph*)come_increment_ref_count((__list_values26___1107[0]=(char*)come_increment_ref_count(((char*)(__right_value1141=__builtin_string("left")))),
__list_values26___1107[1]=(char*)come_increment_ref_count(((char*)(__right_value1142=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3247, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values26___1107)));
        (__right_value1141 = come_decrement_ref_count2(__right_value1141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1142 = come_decrement_ref_count2(__right_value1142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1109=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3248, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1109,((void*)0));
        list$1charphp_push_back(param_default_parametors_1109,((void*)0));
        result_type_1101->mStatic=(_Bool)0;
        result_type_1101->mUniq=(_Bool)0;
        result_type_1101->mInline=(_Bool)0;
        result_type_1101->mGenerate=(_Bool)0;
        fun2_1110=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1147=__builtin_string(name_1102)))));
        (__right_value1147 = come_decrement_ref_count2(__right_value1147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1110==((void*)0)||fun2_1110->mExternal) {
            fun_1111=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3259, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1102),(struct sType*)come_increment_ref_count(result_type_1101),(struct list$1voidph*)come_increment_ref_count(param_types_1105),(struct list$1charph*)come_increment_ref_count(param_names_1108),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1109),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1100),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1102)),(struct sFun*)come_increment_ref_count(fun_1111));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3267, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1155=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3267, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1111),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1112=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1155,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1113=node_compile(node_1112,info);
            if(            !Value_1113) {
                multiple_assign_var40=((struct tuple2$2intcharph*)(__right_value1157=err_msg(info,"compiling error")));
                come_exception_var_c25_1114=multiple_assign_var40->v1;
                Err_1115=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1115)?(puts(Err_1115),exit(0)):(0));
                come_call_finalizer3(__right_value1157,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1115 = come_decrement_ref_count2(Err_1115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1079=fun_1111;
            come_call_finalizer3(fun_1111,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1112) ? node_1112 = come_decrement_ref_count2(node_1112, ((struct sNode*)node_1112)->finalize, ((struct sNode*)node_1112)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1079=fun2_1110;
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1099);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1095;
        info->head=head_1098;
        info->sline=sline_1096;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1097);
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1083,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1097 = come_decrement_ref_count2(sname_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1099,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1100,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1101,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1102 = come_decrement_ref_count2(name_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1103,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1104,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1105,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1108,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1109,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1110,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1078;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1075);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1076);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1077;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1159=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3293, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1079,(char*)come_increment_ref_count(real_fun_name_1080))));
    (last_code_1075 = come_decrement_ref_count2(last_code_1075, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1076 = come_decrement_ref_count2(last_code2_1076, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1080 = come_decrement_ref_count2(real_fun_name_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1159,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1116;
char* __dec_obj305;
char* last_code2_1117;
char* __dec_obj306;
_Bool comma_instead_of_semicolon_1118;
struct sClass* current_stack_frame_struct_1119;
struct sFun* equaler_1120;
void* __right_value1160 = (void*)0;
char* real_fun_name_1121;
void* __right_value1161 = (void*)0;
struct sType* type2_1122;
struct sClass* klass_1123;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct buffer* source_1124;
char* name_1125;
int i_1128;
void* __right_value1164 = (void*)0;
struct list$1voidph* o2_saved_1129;
struct tuple2$2charphsTypeph* it_1130;
struct tuple2$2charphsTypeph* multiple_assign_var41 = (void*)0;
char* name_1131=0;
struct sType* field_type_1132=0;
char* p_1136;
int sline_1137;
char* sname_1138;
char* head_1139;
struct buffer* source3_1140;
struct buffer* __dec_obj307;
void* __right_value1165 = (void*)0;
char* __dec_obj308;
void* __right_value1166 = (void*)0;
struct sBlock* block_1141;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct sType* result_type_1142;
void* __right_value1169 = (void*)0;
char* name_1143;
void* __right_value1170 = (void*)0;
struct sType* left_type_1144;
void* __right_value1171 = (void*)0;
struct sType* right_type_1145;
struct sType* __list_values27___1147[2];
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct list$1voidph* param_types_1146;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
char* __list_values28___1148[2];
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct list$1charph* param_names_1149;
void* __right_value1178 = (void*)0;
void* __right_value1179 = (void*)0;
struct list$1charph* param_default_parametors_1150;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sFun* fun2_1151;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
struct sFun* fun_1152;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1189 = (void*)0;
struct sNode* node_1153;
_Bool Value_1154;
void* __right_value1190 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1155=0;
char* Err_1156=0;
struct buffer* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct tuple2$2sFunpcharph* __result384__;
    last_code_1116=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1117=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1118=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1119=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1120=((void*)0);
    real_fun_name_1121=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1122=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1122;
    klass_1123=type->mClass;
    if(    type->mPointerNum>0&&!klass_1123->mNumber) {
        source_1124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3318, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1124,123);
        if(        klass_1123->mProtocol) {
            name_1125="_protocol_obj";
            char source2_1126[1024];
            memset(&source2_1126, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1126,1024,"return !left.%s.equals(right.%s);\n",name_1125,name_1125);
            buffer_append_str(source_1124,source2_1126);
        }
        else {
            char source2_1127[1024];
            memset(&source2_1127, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1127,1024,"return !(");
            buffer_append_str(source_1124,source2_1127);
            i_1128=0;
            klass_1123=((struct sClass*)((void*)(__right_value1164=map$2voidphvoidphp_operator_load_element(info->classes,klass_1123->mName))));
            come_call_finalizer3(__right_value1164,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1129=(struct list$1voidph*)come_increment_ref_count((klass_1123->mFields)),it_1130=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1129)));            !list$1voidphp_end((o2_saved_1129));            it_1130=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1129)))            ){
                multiple_assign_var41=it_1130;
                name_1131=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1132=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1133[1024];
                memset(&source2_1133, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1133,1024,"left.%s.equals(right.%s)",name_1131,name_1131);
                buffer_append_str(source_1124,source2_1133);
                if(                i_1128==list$1voidphp_length(klass_1123->mFields)-1) {
                    char source2_1134[1024];
                    memset(&source2_1134, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1134,1024,");");
                    buffer_append_str(source_1124,source2_1134);
                }
                else {
                    char source2_1135[1024];
                    memset(&source2_1135, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1135,1024," && ");
                    buffer_append_str(source_1124,source2_1135);
                }
                i_1128++;
                (name_1131 = come_decrement_ref_count2(name_1131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1132,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1129,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1124,125);
        p_1136=info->p;
        sline_1137=info->sline;
        sname_1138=(char*)come_increment_ref_count(info->sname);
        head_1139=info->head;
        source3_1140=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1124);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1124->buf;
        info->head=source_1124->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1121));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1141=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1142=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3375, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1143=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1121));
        left_type_1144=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1144->mHeap=(_Bool)0;
        right_type_1145=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1145->mHeap=(_Bool)0;
        param_types_1146=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1147[0]=(struct sType*)come_increment_ref_count(left_type_1144),
__list_values27___1147[1]=(struct sType*)come_increment_ref_count(right_type_1145),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3381, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values27___1147)));
        param_names_1149=(struct list$1charph*)come_increment_ref_count((__list_values28___1148[0]=(char*)come_increment_ref_count(((char*)(__right_value1174=__builtin_string("left")))),
__list_values28___1148[1]=(char*)come_increment_ref_count(((char*)(__right_value1175=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3382, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values28___1148)));
        (__right_value1174 = come_decrement_ref_count2(__right_value1174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1175 = come_decrement_ref_count2(__right_value1175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1150=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3383, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1150,((void*)0));
        list$1charphp_push_back(param_default_parametors_1150,((void*)0));
        result_type_1142->mStatic=(_Bool)0;
        result_type_1142->mUniq=(_Bool)0;
        result_type_1142->mInline=(_Bool)0;
        result_type_1142->mGenerate=(_Bool)0;
        fun2_1151=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1180=__builtin_string(name_1143)))));
        (__right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1151==((void*)0)||fun2_1151->mExternal) {
            fun_1152=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3394, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1143),(struct sType*)come_increment_ref_count(result_type_1142),(struct list$1voidph*)come_increment_ref_count(param_types_1146),(struct list$1charph*)come_increment_ref_count(param_names_1149),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1150),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1141),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1143)),(struct sFun*)come_increment_ref_count(fun_1152));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3402, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1188=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3402, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1152),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1153=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1188,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1154=node_compile(node_1153,info);
            if(            !Value_1154) {
                multiple_assign_var42=((struct tuple2$2intcharph*)(__right_value1190=err_msg(info,"compiling error")));
                come_exception_var_c26_1155=multiple_assign_var42->v1;
                Err_1156=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1156)?(puts(Err_1156),exit(0)):(0));
                come_call_finalizer3(__right_value1190,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1156 = come_decrement_ref_count2(Err_1156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1120=fun_1152;
            come_call_finalizer3(fun_1152,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1153) ? node_1153 = come_decrement_ref_count2(node_1153, ((struct sNode*)node_1153)->finalize, ((struct sNode*)node_1153)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1120=fun2_1151;
        }
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1140);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1136;
        info->head=head_1139;
        info->sline=sline_1137;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1138);
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1124,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1138 = come_decrement_ref_count2(sname_1138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1140,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1141,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1143 = come_decrement_ref_count2(name_1143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1144,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1146,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1149,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1151,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1119;
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1116);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1117);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1118;
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1192=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3428, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1120,(char*)come_increment_ref_count(real_fun_name_1121))));
    (last_code_1116 = come_decrement_ref_count2(last_code_1116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1117 = come_decrement_ref_count2(last_code2_1117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1121 = come_decrement_ref_count2(real_fun_name_1121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1122,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1192,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1157;
char* __dec_obj313;
char* last_code2_1158;
char* __dec_obj314;
_Bool comma_instead_of_semicolon_1159;
struct sClass* current_stack_frame_struct_1160;
struct sFun* equaler_1161;
void* __right_value1193 = (void*)0;
char* real_fun_name_1162;
void* __right_value1194 = (void*)0;
struct sType* type2_1163;
struct sClass* klass_1164;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct buffer* source_1165;
char* name_1166;
void* __right_value1197 = (void*)0;
struct list$1voidph* o2_saved_1169;
struct tuple2$2charphsTypeph* it_1170;
struct tuple2$2charphsTypeph* multiple_assign_var43 = (void*)0;
char* name_1171=0;
struct sType* field_type_1172=0;
char* p_1174;
int sline_1175;
char* sname_1176;
char* head_1177;
struct buffer* source3_1178;
struct buffer* __dec_obj315;
void* __right_value1198 = (void*)0;
char* __dec_obj316;
void* __right_value1199 = (void*)0;
struct sBlock* block_1179;
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
struct sType* result_type_1180;
void* __right_value1202 = (void*)0;
char* name_1181;
void* __right_value1203 = (void*)0;
struct sType* left_type_1182;
void* __right_value1204 = (void*)0;
struct sType* right_type_1183;
struct sType* __list_values29___1185[2];
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct list$1voidph* param_types_1184;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
char* __list_values30___1186[2];
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct list$1charph* param_names_1187;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1charph* param_default_parametors_1188;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct sFun* fun2_1189;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct sFun* fun_1190;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1222 = (void*)0;
struct sNode* node_1191;
_Bool Value_1192;
void* __right_value1223 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1193=0;
char* Err_1194=0;
struct buffer* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct tuple2$2sFunpcharph* __result385__;
    last_code_1157=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj313=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1158=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj314=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1159=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1160=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1161=((void*)0);
    real_fun_name_1162=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1163=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1163;
    klass_1164=type->mClass;
    if(    type->mPointerNum>0&&!klass_1164->mNumber) {
        source_1165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3453, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1165,123);
        if(        klass_1164->mProtocol) {
            name_1166="_protocol_obj";
            char source2_1167[1024];
            memset(&source2_1167, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1167,1024,"return left.%s === right.%s;\n",name_1166,name_1166);
            buffer_append_str(source_1165,source2_1167);
        }
        else {
            char source2_1168[1024];
            memset(&source2_1168, 0, sizeof(char)            *(1024)            );
            klass_1164=((struct sClass*)((void*)(__right_value1197=map$2voidphvoidphp_operator_load_element(info->classes,klass_1164->mName))));
            come_call_finalizer3(__right_value1197,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1169=(struct list$1voidph*)come_increment_ref_count((klass_1164->mFields)),it_1170=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1169)));            !list$1voidphp_end((o2_saved_1169));            it_1170=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1169)))            ){
                multiple_assign_var43=it_1170;
                name_1171=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1172=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1173[1024];
                memset(&source2_1173, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1173,1024,"if(left.%s !== right.%s) { return false; }\n",name_1171,name_1171,name_1171);
                buffer_append_str(source_1165,source2_1173);
                (name_1171 = come_decrement_ref_count2(name_1171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1172,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1169,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1165,"return true;\n");
        buffer_append_char(source_1165,125);
        p_1174=info->p;
        sline_1175=info->sline;
        sname_1176=(char*)come_increment_ref_count(info->sname);
        head_1177=info->head;
        source3_1178=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1165);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1165->buf;
        info->head=source_1165->buf;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1162));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1179=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1180=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3495, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1181=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1162));
        left_type_1182=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1182->mHeap=(_Bool)0;
        right_type_1183=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1183->mHeap=(_Bool)0;
        param_types_1184=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1185[0]=(struct sType*)come_increment_ref_count(left_type_1182),
__list_values29___1185[1]=(struct sType*)come_increment_ref_count(right_type_1183),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3501, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values29___1185)));
        param_names_1187=(struct list$1charph*)come_increment_ref_count((__list_values30___1186[0]=(char*)come_increment_ref_count(((char*)(__right_value1207=__builtin_string("left")))),
__list_values30___1186[1]=(char*)come_increment_ref_count(((char*)(__right_value1208=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3502, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values30___1186)));
        (__right_value1207 = come_decrement_ref_count2(__right_value1207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value1208 = come_decrement_ref_count2(__right_value1208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1188=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3503, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1188,((void*)0));
        list$1charphp_push_back(param_default_parametors_1188,((void*)0));
        result_type_1180->mStatic=(_Bool)0;
        result_type_1180->mUniq=(_Bool)0;
        result_type_1180->mInline=(_Bool)0;
        result_type_1180->mGenerate=(_Bool)0;
        fun2_1189=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1213=__builtin_string(name_1181)))));
        (__right_value1213 = come_decrement_ref_count2(__right_value1213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1189==((void*)0)||fun2_1189->mExternal) {
            fun_1190=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3514, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1181),(struct sType*)come_increment_ref_count(result_type_1180),(struct list$1voidph*)come_increment_ref_count(param_types_1184),(struct list$1charph*)come_increment_ref_count(param_names_1187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1188),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1179),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1181)),(struct sFun*)come_increment_ref_count(fun_1190));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3522, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1221=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3522, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1190),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1191=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1221,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1192=node_compile(node_1191,info);
            if(            !Value_1192) {
                multiple_assign_var44=((struct tuple2$2intcharph*)(__right_value1223=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1193=multiple_assign_var44->v1;
                Err_1194=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1194)?(puts(Err_1194),exit(0)):(0));
                come_call_finalizer3(__right_value1223,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1194 = come_decrement_ref_count2(Err_1194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1161=fun_1190;
            come_call_finalizer3(fun_1190,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1191) ? node_1191 = come_decrement_ref_count2(node_1191, ((struct sNode*)node_1191)->finalize, ((struct sNode*)node_1191)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            equaler_1161=fun2_1189;
        }
        __dec_obj317=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1178);
        come_call_finalizer3(__dec_obj317,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1174;
        info->head=head_1177;
        info->sline=sline_1175;
        __dec_obj318=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1176);
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1165,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1176 = come_decrement_ref_count2(sname_1176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1178,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1180,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1181 = come_decrement_ref_count2(name_1181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1184,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1187,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1188,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1189,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1160;
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1157);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1158);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1159;
    __result385__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1225=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3548, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1161,(char*)come_increment_ref_count(real_fun_name_1162))));
    (last_code_1157 = come_decrement_ref_count2(last_code_1157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1158 = come_decrement_ref_count2(last_code2_1158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1162 = come_decrement_ref_count2(real_fun_name_1162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1163,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1225,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
struct tuple2$2sFunpcharph* __result386__;
char* last_code_1195;
char* __dec_obj321;
char* last_code2_1196;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_1197;
struct sClass* current_stack_frame_struct_1198;
struct sFun* cloner_1199;
void* __right_value1228 = (void*)0;
char* real_fun_name_1200;
void* __right_value1229 = (void*)0;
struct sType* type2_1201;
struct sClass* klass_1202;
char* fun_name2_1203;
void* __right_value1230 = (void*)0;
char* none_generics_name_1204;
void* __right_value1231 = (void*)0;
struct sType* obj_type_1205;
void* __right_value1232 = (void*)0;
char* __dec_obj323;
void* __right_value1233 = (void*)0;
char* fun_name3_1206;
void* __right_value1234 = (void*)0;
struct sGenericsFun* generics_fun_1207;
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var45 = (void*)0;
char* name_1208=0;
_Bool err_1209=0;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct tuple2$2sFunpcharph* __result387__;
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
char* __dec_obj324;
void* __right_value1241 = (void*)0;
char* __dec_obj325;
int i_1210;
void* __right_value1242 = (void*)0;
char* new_fun_name_1211;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
char* __dec_obj326;
void* __right_value1245 = (void*)0;
char* __dec_obj327;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct buffer* source_1212;
void* __right_value1248 = (void*)0;
char* name_1213;
void* __right_value1249 = (void*)0;
struct list$1voidph* o2_saved_1215;
struct tuple2$2charphsTypeph* it_1216;
struct tuple2$2charphsTypeph* multiple_assign_var46 = (void*)0;
char* name_1217=0;
struct sType* field_type_1218=0;
void* __right_value1250 = (void*)0;
struct list$1voidph* o2_saved_1221;
struct tuple2$2charphsTypeph* it_1222;
struct tuple2$2charphsTypeph* multiple_assign_var47 = (void*)0;
char* name_1223=0;
struct sType* field_type_1224=0;
char* p_1228;
int sline_1229;
char* sname_1230;
struct buffer* source3_1231;
char* head_1232;
struct buffer* __dec_obj328;
void* __right_value1251 = (void*)0;
char* __dec_obj329;
void* __right_value1252 = (void*)0;
struct sBlock* block_1233;
void* __right_value1253 = (void*)0;
struct sType* result_type_1234;
void* __right_value1254 = (void*)0;
char* name_1235;
void* __right_value1255 = (void*)0;
struct sType* self_type_1236;
struct sType* __list_values31___1238[1];
void* __right_value1256 = (void*)0;
void* __right_value1257 = (void*)0;
struct list$1voidph* param_types_1237;
void* __right_value1258 = (void*)0;
char* __list_values32___1239[1];
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct list$1charph* param_names_1240;
void* __right_value1261 = (void*)0;
void* __right_value1262 = (void*)0;
struct list$1charph* param_default_parametors_1241;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
struct sFun* fun2_1242;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
struct sFun* fun_1243;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1272 = (void*)0;
struct sNode* node_1244;
_Bool Value_1245;
void* __right_value1273 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1246=0;
char* Err_1247=0;
char* __dec_obj330;
struct buffer* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct tuple2$2sFunpcharph* __result388__;
fun_name2_1203 = (void*)0;
memset(&i_1210, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1227=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3554, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1227,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    last_code_1195=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1196=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1197=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1198=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1199=((void*)0);
    real_fun_name_1200=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1201=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1201;
    klass_1202=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1204=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1205=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj323=fun_name2_1203;
        fun_name2_1203=(char*)come_increment_ref_count(create_method_name(obj_type_1205,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1206=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1204,fun_name));
        generics_fun_1207=((struct sGenericsFun*)((void*)(__right_value1234=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_1206,((void*)0)))));
        come_call_finalizer3(__right_value1234,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        generics_fun_1207) {
            multiple_assign_var45=((struct tuple2$2charphbool*)(__right_value1236=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1203)),generics_fun_1207,obj_type_1205,info)));
            name_1208=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1209=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1236,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1209) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result387__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1238=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3594, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    (name_1208 = come_decrement_ref_count2(name_1208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1204 = come_decrement_ref_count2(none_generics_name_1204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1205,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1206 = come_decrement_ref_count2(fun_name3_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1195 = come_decrement_ref_count2(last_code_1195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1196 = come_decrement_ref_count2(last_code2_1196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1200 = come_decrement_ref_count2(real_fun_name_1200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1203 = come_decrement_ref_count2(fun_name2_1203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1238,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result387__;
                }
            }
            cloner_1199=((struct sFun*)((void*)(__right_value1239=map$2voidphvoidphp_operator_load_element(info->funcs,name_1208))));
            come_call_finalizer3(__right_value1239,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            (name_1208 = come_decrement_ref_count2(name_1208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1199=((struct sFun*)((void*)(__right_value1240=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1203))));
            come_call_finalizer3(__right_value1240,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj324=real_fun_name_1200;
        real_fun_name_1200=(char*)come_increment_ref_count(fun_name2_1203);
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1204 = come_decrement_ref_count2(none_generics_name_1204, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1205,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1206 = come_decrement_ref_count2(fun_name3_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj325=fun_name2_1203;
        fun_name2_1203=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1210=128-1;        i_1210>=1;        i_1210--        ){
            new_fun_name_1211=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1203,i_1210));
            cloner_1199=((struct sFun*)((void*)(__right_value1243=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1211))));
            come_call_finalizer3(__right_value1243,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            cloner_1199) {
                __dec_obj326=fun_name2_1203;
                fun_name2_1203=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1211));
                __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1211 = come_decrement_ref_count2(new_fun_name_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1211 = come_decrement_ref_count2(new_fun_name_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1199==((void*)0)) {
            cloner_1199=((struct sFun*)((void*)(__right_value1245=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1203))));
            come_call_finalizer3(__right_value1245,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        __dec_obj327=real_fun_name_1200;
        real_fun_name_1200=(char*)come_increment_ref_count(fun_name2_1203);
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1199==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1212=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3629, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1212,"{\n");
        buffer_append_str(source_1212,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1212,"var result = new %s;\n",((char*)(__right_value1248=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1248 = come_decrement_ref_count2(__right_value1248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        klass_1202->mProtocol) {
            name_1213="_protocol_obj";
            char source2_1214[1024];
            memset(&source2_1214, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1214,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1212,source2_1214);
            klass_1202=((struct sClass*)((void*)(__right_value1249=map$2voidphvoidphp_operator_load_element(info->classes,klass_1202->mName))));
            come_call_finalizer3(__right_value1249,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1215=(struct list$1voidph*)come_increment_ref_count((klass_1202->mFields)),it_1216=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1215)));            !list$1voidphp_end((o2_saved_1215));            it_1216=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1215)))            ){
                multiple_assign_var46=it_1216;
                name_1217=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1218=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1217,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1218->mArrayNum)>0) {
                    char source2_1219[1024];
                    memset(&source2_1219, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1219,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1217,name_1217,name_1217);
                    buffer_append_str(source_1212,source2_1219);
                }
                else {
                    char source2_1220[1024];
                    memset(&source2_1220, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1220,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1217,name_1217);
                    buffer_append_str(source_1212,source2_1220);
                }
                (name_1217 = come_decrement_ref_count2(name_1217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1218,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1215,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1202=((struct sClass*)((void*)(__right_value1250=map$2voidphvoidphp_operator_load_element(info->classes,klass_1202->mName))));
            come_call_finalizer3(__right_value1250,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            for(            o2_saved_1221=(struct list$1voidph*)come_increment_ref_count((klass_1202->mFields)),it_1222=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1221)));            !list$1voidphp_end((o2_saved_1221));            it_1222=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1221)))            ){
                multiple_assign_var47=it_1222;
                name_1223=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1224=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1224->mHeap) {
                    char source2_1225[1024];
                    memset(&source2_1225, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1225,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1223,name_1223,name_1223);
                    buffer_append_str(source_1212,source2_1225);
                }
                else if(                list$1sNodephp_length(field_type_1224->mArrayNum)>0) {
                    char source2_1226[1024];
                    memset(&source2_1226, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1226,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1223,name_1223,name_1223);
                    buffer_append_str(source_1212,source2_1226);
                }
                else {
                    char source2_1227[1024];
                    memset(&source2_1227, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1227,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1223,name_1223);
                    buffer_append_str(source_1212,source2_1227);
                }
                (name_1223 = come_decrement_ref_count2(name_1223, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1224,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1221,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1212,"return result;");
        buffer_append_char(source_1212,125);
        p_1228=info->p;
        sline_1229=info->sline;
        sname_1230=(char*)come_increment_ref_count(info->sname);
        source3_1231=(struct buffer*)come_increment_ref_count(info->source);
        head_1232=info->head;
        __dec_obj328=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1212);
        come_call_finalizer3(__dec_obj328,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj329=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1200));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1233=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1234=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1235=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1200));
        self_type_1236=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1236->mHeap=(_Bool)0;
        param_types_1237=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1238[0]=(struct sType*)come_increment_ref_count(self_type_1236),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3710, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values31___1238)));
        param_names_1240=(struct list$1charph*)come_increment_ref_count((__list_values32___1239[0]=(char*)come_increment_ref_count(((char*)(__right_value1258=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3711, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values32___1239)));
        (__right_value1258 = come_decrement_ref_count2(__right_value1258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1241=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3712, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1241,((void*)0));
        result_type_1234->mStatic=(_Bool)0;
        result_type_1234->mUniq=(_Bool)0;
        result_type_1234->mInline=(_Bool)0;
        result_type_1234->mGenerate=(_Bool)0;
        fun2_1242=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1263=__builtin_string(name_1235)))));
        (__right_value1263 = come_decrement_ref_count2(__right_value1263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1242==((void*)0)||fun2_1242->mExternal) {
            fun_1243=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1235),(struct sType*)come_increment_ref_count(result_type_1234),(struct list$1voidph*)come_increment_ref_count(param_types_1237),(struct list$1charph*)come_increment_ref_count(param_names_1240),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1241),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1233),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1235)),(struct sFun*)come_increment_ref_count(fun_1243));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3731, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1271=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3731, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1243),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1244=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1271,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1245=node_compile(node_1244,info);
            if(            !Value_1245) {
                multiple_assign_var48=((struct tuple2$2intcharph*)(__right_value1273=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1246=multiple_assign_var48->v1;
                Err_1247=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1247)?(puts(Err_1247),exit(0)):(0));
                come_call_finalizer3(__right_value1273,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1247 = come_decrement_ref_count2(Err_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1199=fun_1243;
            come_call_finalizer3(fun_1243,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1244) ? node_1244 = come_decrement_ref_count2(node_1244, ((struct sNode*)node_1244)->finalize, ((struct sNode*)node_1244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            cloner_1199=fun2_1242;
        }
        __dec_obj330=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1230);
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1229;
        __dec_obj331=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1231);
        come_call_finalizer3(__dec_obj331,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1228;
        info->head=head_1232;
        info->sline=sline_1229;
        come_call_finalizer3(source_1212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1230 = come_decrement_ref_count2(sname_1230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1233,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1234,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1235 = come_decrement_ref_count2(name_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1236,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1237,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1240,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1241,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1242,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1198;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1195);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1196);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1197;
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1275=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1199,(char*)come_increment_ref_count(real_fun_name_1200))));
    (last_code_1195 = come_decrement_ref_count2(last_code_1195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1196 = come_decrement_ref_count2(last_code2_1196, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1200 = come_decrement_ref_count2(real_fun_name_1200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1203 = come_decrement_ref_count2(fun_name2_1203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1275,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1248;
char* __dec_obj334;
char* last_code2_1249;
char* __dec_obj335;
_Bool comma_instead_of_semicolon_1250;
struct sClass* current_stack_frame_struct_1251;
struct sFun* cloner_1252;
void* __right_value1276 = (void*)0;
char* real_fun_name_1253;
void* __right_value1277 = (void*)0;
struct sType* type2_1254;
struct sClass* klass_1255;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct buffer* source_1256;
int i_1257;
void* __right_value1280 = (void*)0;
struct list$1voidph* o2_saved_1258;
struct tuple2$2charphsTypeph* it_1259;
struct tuple2$2charphsTypeph* multiple_assign_var49 = (void*)0;
char* name_1260=0;
struct sType* field_type_1261=0;
char* p_1264;
int sline_1265;
char* sname_1266;
struct buffer* source3_1267;
char* head_1268;
struct buffer* __dec_obj336;
void* __right_value1281 = (void*)0;
char* __dec_obj337;
void* __right_value1282 = (void*)0;
struct sBlock* block_1269;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct sType* result_type_1270;
void* __right_value1285 = (void*)0;
char* name_1271;
void* __right_value1286 = (void*)0;
struct sType* self_type_1272;
struct sType* __list_values33___1274[1];
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
struct list$1voidph* param_types_1273;
void* __right_value1289 = (void*)0;
char* __list_values34___1275[1];
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct list$1charph* param_names_1276;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
struct list$1charph* param_default_parametors_1277;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct sFun* fun2_1278;
void* __right_value1296 = (void*)0;
void* __right_value1297 = (void*)0;
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct sFun* fun_1279;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1303 = (void*)0;
struct sNode* node_1280;
_Bool Value_1281;
void* __right_value1304 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1282=0;
char* Err_1283=0;
char* __dec_obj338;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
struct tuple2$2sFunpcharph* __result389__;
    last_code_1248=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1249=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1250=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1251=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1252=((void*)0);
    real_fun_name_1253=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1254=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1254;
    klass_1255=type->mClass;
    if(    type->mPointerNum>0&&!klass_1255->mNumber) {
        source_1256=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3784, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1256,"{\n");
        buffer_append_str(source_1256,"var result = new buffer();\n");
        buffer_append_format(source_1256,"result.append_str(\"%s {\");\n",klass_1255->mName);
        i_1257=0;
        klass_1255=((struct sClass*)((void*)(__right_value1280=map$2voidphvoidphp_operator_load_element(info->classes,klass_1255->mName))));
        come_call_finalizer3(__right_value1280,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        for(        o2_saved_1258=(struct list$1voidph*)come_increment_ref_count((klass_1255->mFields)),it_1259=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1258)));        !list$1voidphp_end((o2_saved_1258));        it_1259=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1258)))        ){
            multiple_assign_var49=it_1259;
            name_1260=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1261=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1257==list$1voidphp_length(klass_1255->mFields)-1) {
                char source2_1262[1024];
                memset(&source2_1262, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1262,1024,"result.append_str(\"%s:\");\n",name_1260);
                buffer_append_str(source_1256,source2_1262);
                snprintf(source2_1262,1024,"result.append_str(self.%s.to_string());\n",name_1260);
                buffer_append_str(source_1256,source2_1262);
            }
            else {
                char source2_1263[1024];
                memset(&source2_1263, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1263,1024,"result.append_str(\"%s:\");\n",name_1260);
                buffer_append_str(source_1256,source2_1263);
                snprintf(source2_1263,1024,"result.append_str(self.%s.to_string());\n",name_1260);
                buffer_append_str(source_1256,source2_1263);
                snprintf(source2_1263,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1256,source2_1263);
            }
            i_1257++;
            (name_1260 = come_decrement_ref_count2(name_1260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1261,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1258,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1256,"result.append_str(\"}\");\n");
        buffer_append_format(source_1256,"return result.to_string();\n");
        buffer_append_char(source_1256,125);
        p_1264=info->p;
        sline_1265=info->sline;
        sname_1266=(char*)come_increment_ref_count(info->sname);
        source3_1267=(struct buffer*)come_increment_ref_count(info->source);
        head_1268=info->head;
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1256);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1253));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1269=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1270=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3845, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1270->mHeap=(_Bool)1;
        name_1271=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1253));
        self_type_1272=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1272->mHeap=(_Bool)0;
        param_types_1273=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1274[0]=(struct sType*)come_increment_ref_count(self_type_1272),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3850, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values33___1274)));
        param_names_1276=(struct list$1charph*)come_increment_ref_count((__list_values34___1275[0]=(char*)come_increment_ref_count(((char*)(__right_value1289=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3851, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values34___1275)));
        (__right_value1289 = come_decrement_ref_count2(__right_value1289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1277=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3852, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1277,((void*)0));
        result_type_1270->mStatic=(_Bool)0;
        result_type_1270->mUniq=(_Bool)0;
        result_type_1270->mInline=(_Bool)0;
        result_type_1270->mGenerate=(_Bool)0;
        fun2_1278=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1294=__builtin_string(name_1271)))));
        (__right_value1294 = come_decrement_ref_count2(__right_value1294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1278==((void*)0)||fun2_1278->mExternal) {
            fun_1279=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3862, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1271),(struct sType*)come_increment_ref_count(result_type_1270),(struct list$1voidph*)come_increment_ref_count(param_types_1273),(struct list$1charph*)come_increment_ref_count(param_names_1276),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1277),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1269),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1271)),(struct sFun*)come_increment_ref_count(fun_1279));
            cloner_1252=fun_1279;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3872, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1302=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3872, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1279),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1280=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1302,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1281=node_compile(node_1280,info);
            if(            !Value_1281) {
                multiple_assign_var50=((struct tuple2$2intcharph*)(__right_value1304=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1282=multiple_assign_var50->v1;
                Err_1283=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1283)?(puts(Err_1283),exit(0)):(0));
                come_call_finalizer3(__right_value1304,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1283 = come_decrement_ref_count2(Err_1283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1279,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1280) ? node_1280 = come_decrement_ref_count2(node_1280, ((struct sNode*)node_1280)->finalize, ((struct sNode*)node_1280)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            cloner_1252=fun2_1278;
        }
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1266);
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1265;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1267);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1264;
        info->head=head_1268;
        info->sline=sline_1265;
        come_call_finalizer3(source_1256,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1266 = come_decrement_ref_count2(sname_1266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1267,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1269,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1270,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1271 = come_decrement_ref_count2(name_1271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1272,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1273,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1276,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1277,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1278,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1251;
    __dec_obj340=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1248);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj341=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1249);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1250;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1306=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3898, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1252,(char*)come_increment_ref_count(real_fun_name_1253))));
    (last_code_1248 = come_decrement_ref_count2(last_code_1248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1249 = come_decrement_ref_count2(last_code2_1249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1253 = come_decrement_ref_count2(real_fun_name_1253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1254,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1306,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1329;
char* __dec_obj352;
char* last_code2_1330;
char* __dec_obj353;
_Bool comma_instead_of_semicolon_1331;
struct sClass* current_stack_frame_struct_1332;
struct sFun* get_hash_key_fun_1333;
void* __right_value1350 = (void*)0;
char* real_fun_name_1334;
void* __right_value1351 = (void*)0;
struct sType* type2_1335;
struct sClass* klass_1336;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
char* none_generics_name_1337;
void* __right_value1354 = (void*)0;
char* generics_fun_name_1338;
void* __right_value1355 = (void*)0;
struct sGenericsFun* generics_fun_1339;
void* __right_value1356 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var54 = (void*)0;
char* name_1340=0;
_Bool err_1341=0;
void* __right_value1357 = (void*)0;
int i_1342;
void* __right_value1358 = (void*)0;
char* new_fun_name_1343;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
char* __dec_obj354;
void* __right_value1361 = (void*)0;
void* __right_value1362 = (void*)0;
void* __right_value1363 = (void*)0;
struct buffer* source_1344;
int i_1345;
void* __right_value1364 = (void*)0;
struct list$1voidph* o2_saved_1346;
struct tuple2$2charphsTypeph* it_1347;
struct tuple2$2charphsTypeph* multiple_assign_var55 = (void*)0;
char* name_1348=0;
struct sType* field_type_1349=0;
char* p_1351;
int sline_1352;
char* sname_1353;
struct buffer* source3_1354;
char* head_1355;
struct buffer* __dec_obj355;
void* __right_value1365 = (void*)0;
char* __dec_obj356;
void* __right_value1366 = (void*)0;
struct sBlock* block_1356;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
struct sType* result_type_1357;
void* __right_value1369 = (void*)0;
char* name_1358;
void* __right_value1370 = (void*)0;
struct sType* self_type_1359;
struct sType* __list_values37___1361[1];
void* __right_value1371 = (void*)0;
void* __right_value1372 = (void*)0;
struct list$1voidph* param_types_1360;
void* __right_value1373 = (void*)0;
char* __list_values38___1362[1];
void* __right_value1374 = (void*)0;
void* __right_value1375 = (void*)0;
struct list$1charph* param_names_1363;
void* __right_value1376 = (void*)0;
void* __right_value1377 = (void*)0;
struct list$1charph* param_default_parametors_1364;
void* __right_value1378 = (void*)0;
void* __right_value1379 = (void*)0;
struct sFun* fun2_1365;
void* __right_value1380 = (void*)0;
void* __right_value1381 = (void*)0;
void* __right_value1382 = (void*)0;
void* __right_value1383 = (void*)0;
struct sFun* fun_1366;
void* __right_value1384 = (void*)0;
void* __right_value1385 = (void*)0;
void* __right_value1386 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1387 = (void*)0;
struct sNode* node_1367;
_Bool Value_1368;
void* __right_value1388 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1369=0;
char* Err_1370=0;
char* __dec_obj357;
struct buffer* __dec_obj358;
char* __dec_obj359;
char* __dec_obj360;
void* __right_value1389 = (void*)0;
void* __right_value1390 = (void*)0;
struct tuple2$2sFunpcharph* __result391__;
memset(&i_1342, 0, sizeof(int));
    last_code_1329=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj352=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1330=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj353=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1331=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1332=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1333=((void*)0);
    real_fun_name_1334=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1335=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1335;
    klass_1336=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1333=((struct sFun*)((void*)(__right_value1352=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1334))));
        come_call_finalizer3(__right_value1352,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        get_hash_key_fun_1333==((void*)0)) {
            none_generics_name_1337=(char*)come_increment_ref_count(get_none_generics_name(type2_1335->mClass->mName));
            generics_fun_name_1338=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1337,fun_name));
            generics_fun_1339=((struct sGenericsFun*)((void*)(__right_value1355=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_1338))));
            come_call_finalizer3(__right_value1355,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            generics_fun_1339) {
                multiple_assign_var54=((struct tuple2$2charphbool*)(__right_value1356=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1334),generics_fun_1339,type,info)));
                name_1340=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1341=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1356,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1341) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1333=((struct sFun*)((void*)(__right_value1357=map$2voidphvoidphp_operator_load_element(info->funcs,name_1340))));
                come_call_finalizer3(__right_value1357,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                (name_1340 = come_decrement_ref_count2(name_1340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1337 = come_decrement_ref_count2(none_generics_name_1337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1338 = come_decrement_ref_count2(generics_fun_name_1338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1342=128-1;        i_1342>=1;        i_1342--        ){
            new_fun_name_1343=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1334,i_1342));
            get_hash_key_fun_1333=((struct sFun*)((void*)(__right_value1359=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1343))));
            come_call_finalizer3(__right_value1359,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            get_hash_key_fun_1333) {
                __dec_obj354=real_fun_name_1334;
                real_fun_name_1334=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1343));
                __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1343 = come_decrement_ref_count2(new_fun_name_1343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1343 = come_decrement_ref_count2(new_fun_name_1343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1333==((void*)0)) {
            get_hash_key_fun_1333=((struct sFun*)((void*)(__right_value1361=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1334))));
            come_call_finalizer3(__right_value1361,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1333==((void*)0)&&type->mPointerNum>0&&!klass_1336->mNumber&&!klass_1336->mProtocol) {
        source_1344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4161, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1344,"{\n");
        buffer_append_str(source_1344,"unsigned int result = 0;\n");
        i_1345=0;
        klass_1336=((struct sClass*)((void*)(__right_value1364=map$2voidphvoidphp_operator_load_element(info->classes,klass_1336->mName))));
        come_call_finalizer3(__right_value1364,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        for(        o2_saved_1346=(struct list$1voidph*)come_increment_ref_count((klass_1336->mFields)),it_1347=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1346)));        !list$1voidphp_end((o2_saved_1346));        it_1347=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1346)))        ){
            multiple_assign_var55=it_1347;
            name_1348=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1349=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1350[1024];
            memset(&source2_1350, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1350,1024,"result += ((int)self.%s).get_hash_key();\n",name_1348);
            buffer_append_str(source_1344,source2_1350);
            i_1345++;
            (name_1348 = come_decrement_ref_count2(name_1348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1349,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1346,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1344,"return result;\n");
        buffer_append_char(source_1344,125);
        p_1351=info->p;
        sline_1352=info->sline;
        sname_1353=(char*)come_increment_ref_count(info->sname);
        source3_1354=(struct buffer*)come_increment_ref_count(info->source);
        head_1355=info->head;
        __dec_obj355=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1344);
        come_call_finalizer3(__dec_obj355,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj356=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1334));
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1356=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1357=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4198, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1357->mUnsigned=(_Bool)1;
        name_1358=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1334));
        self_type_1359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1359->mHeap=(_Bool)0;
        param_types_1360=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1361[0]=(struct sType*)come_increment_ref_count(self_type_1359),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4203, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values37___1361)));
        param_names_1363=(struct list$1charph*)come_increment_ref_count((__list_values38___1362[0]=(char*)come_increment_ref_count(((char*)(__right_value1373=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4204, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values38___1362)));
        (__right_value1373 = come_decrement_ref_count2(__right_value1373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        param_default_parametors_1364=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4205, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1364,((void*)0));
        result_type_1357->mStatic=(_Bool)0;
        result_type_1357->mUniq=(_Bool)0;
        result_type_1357->mInline=(_Bool)0;
        result_type_1357->mGenerate=(_Bool)0;
        fun2_1365=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1378=__builtin_string(name_1358)))));
        (__right_value1378 = come_decrement_ref_count2(__right_value1378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        if(        fun2_1365==((void*)0)||fun2_1365->mExternal) {
            fun_1366=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4215, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1358),(struct sType*)come_increment_ref_count(result_type_1357),(struct list$1voidph*)come_increment_ref_count(param_types_1360),(struct list$1charph*)come_increment_ref_count(param_names_1363),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1364),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1356),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1358)),(struct sFun*)come_increment_ref_count(fun_1366));
            get_hash_key_fun_1333=fun_1366;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4225, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1386=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4225, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1366),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1367=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1386,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1368=node_compile(node_1367,info);
            if(            !Value_1368) {
                multiple_assign_var56=((struct tuple2$2intcharph*)(__right_value1388=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1369=multiple_assign_var56->v1;
                Err_1370=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1370)?(puts(Err_1370),exit(0)):(0));
                come_call_finalizer3(__right_value1388,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_1370 = come_decrement_ref_count2(Err_1370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1366,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1367) ? node_1367 = come_decrement_ref_count2(node_1367, ((struct sNode*)node_1367)->finalize, ((struct sNode*)node_1367)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            get_hash_key_fun_1333=fun2_1365;
        }
        __dec_obj357=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1353);
        __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1352;
        __dec_obj358=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1354);
        come_call_finalizer3(__dec_obj358,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1351;
        info->head=head_1355;
        info->sline=sline_1352;
        come_call_finalizer3(source_1344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1353 = come_decrement_ref_count2(sname_1353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1356,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1357,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1358 = come_decrement_ref_count2(name_1358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1359,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1360,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1364,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1332;
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1329);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1330);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1331;
    __result391__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1390=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4251, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),get_hash_key_fun_1333,(char*)come_increment_ref_count(real_fun_name_1334))));
    (last_code_1329 = come_decrement_ref_count2(last_code_1329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1330 = come_decrement_ref_count2(last_code2_1330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1334 = come_decrement_ref_count2(real_fun_name_1334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1335,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1390,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

