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
    _Bool mCloner;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
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
        __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj37=self->mChannelType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj40=self->mArrayNum;
            come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj42=self->mParamTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj43=self->mParamNames;
            come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj44=self->mResultType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
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
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj47=self->mOriginalTypeName;
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj48=self->mAsmName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj49=self->mTupleName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj50=self->mAttribute;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,(void*)0, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
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
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj52=result_336->mOriginalLoadVarType;
        result_336->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj53=result_336->mAnyOriginalType;
        result_336->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj54=result_336->mChannelType;
        result_336->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj58=result_336->mGenericsTypes;
        result_336->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj58,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj62=result_336->mArrayNum;
        result_336->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj62,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj63=result_336->mParamTypes;
        result_336->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj67=result_336->mParamNames;
        result_336->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj68=result_336->mResultType;
        result_336->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(__dec_obj55,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj56=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj57=litem_342->item;
        litem_342->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
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
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    if(result_348) { result_348 = come_decrement_ref_count2(result_348, ((struct sNode*)result_348)->finalize, ((struct sNode*)result_348)->_protocol_obj, 0, 1, 0, (void*)0); } 
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
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj82=litem_357->item;
        litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj83=litem_358->item;
        litem_358->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj79=self->type;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
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
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj81=self->c_value_without_cast_object_value;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj84,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_361=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_361;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value306=xsprintf("come_heap_final();\n"))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj86=self->mResultType;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj87=self->mParamTypes;
            come_call_finalizer3(__dec_obj87,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj88=self->mParamNames;
            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj89=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj90=self->mLambdaType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj91=self->mBlock;
            come_call_finalizer3(__dec_obj91,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj94=self->mSource;
            come_call_finalizer3(__dec_obj94,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj95=self->mSourceHead;
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead2;
            come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj97=self->mSourceDefer;
            come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj99=self->mFunAttribute;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj92;
struct sVarTable* __dec_obj93;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj92=self->mNodes;
            come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj93=self->mVarTable;
            come_call_finalizer3(__dec_obj93,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
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
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj101=self->mFun;
            come_call_finalizer3(__dec_obj101,sFun_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj104=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj105=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj108=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj108,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj109=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj110=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
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
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj114=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
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
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj117=self->mResultType;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj118=self->mParamTypes;
            come_call_finalizer3(__dec_obj118,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj119=self->mParamNames;
            come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj120=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
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
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj122=self->mGenericsSName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
char* __dec_obj126;
void* __right_value323 = (void*)0;
char* __dec_obj127;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result259__;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sClassModule* module_381;
void* __right_value335 = (void*)0;
void* __right_value341 = (void*)0;
struct map$2voidphvoidph* __dec_obj130;
int i_395;
struct list$1charph* o2_saved_396;
char* it_399;
void* __right_value342 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* __dec_obj131;
void* __right_value354 = (void*)0;
struct sNode* node_449;
void* __right_value355 = (void*)0;
char* __dec_obj132;
_Bool omit_semicolon_453;
void* __right_value359 = (void*)0;
char* __dec_obj136;
char* head_468;
void* __right_value360 = (void*)0;
struct sNode* value_469;
char* tail_470;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* node_472;
void* __right_value364 = (void*)0;
char* __dec_obj138;
struct sNode* node_473;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value369 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj141;
_Bool omit_semicolon_475;
char* p_476;
char* head_477;
void* __right_value371 = (void*)0;
char* source_478;
void* __right_value372 = (void*)0;
struct sNode* node_479;
struct sBlock* __result304__;
node_473 = (void*)0;
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
                    come_call_finalizer3(__dec_obj125,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
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
                __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            word_377 = come_decrement_ref_count2(word_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_377 = come_decrement_ref_count2(word_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_365=info->p;
                sline_saved_366=info->sline;
                __dec_obj126=sname_saved_367;
                sname_saved_367=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj127=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_375));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)((void*)(__right_value325=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value324=__builtin_string(module_name_375)))))))==((void*)0))),                (__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                come_call_finalizer3(__right_value325,(void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result259__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_375 = come_decrement_ref_count2(module_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_367 = come_decrement_ref_count2(sname_saved_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_362,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result259__;
                }
                module_381=((struct sClassModule*)((void*)(__right_value327=map$2voidphvoidphp_operator_load_element(info->modules,((char*)(__right_value326=__builtin_string(module_name_375)))))));
                __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value327,(void*)0, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_381->mParams)!=list$1charphp_length(params_376)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj130=info->module_params;
                info->module_params=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "05function.c", 277, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
                come_call_finalizer3(__dec_obj130,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
                i_395=0;
                for(                o2_saved_396=(struct list$1charph*)come_increment_ref_count((module_381->mParams)),it_399=list$1charphp_begin((o2_saved_396));                !list$1charphp_end((o2_saved_396));                it_399=list$1charphp_next((o2_saved_396))                ){
                    map$2voidphvoidphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_399)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value351=list$1charphp_operator_load_element(params_376,i_395))))));
                    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_395++;
                }
                come_call_finalizer3(o2_saved_396,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_381->mText;
                info->sline=module_381->mSLine;
                __dec_obj131=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_381->mSName));
                __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_375 = come_decrement_ref_count2(module_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_449=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj132=info->sname;
            info->sname=(char*)come_increment_ref_count(node_449->sname(node_449->_protocol_obj));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_449->sline(node_449->_protocol_obj);
            if(            node_449==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_449));
            parse_sharp_v5(info);
            if(            node_449->terminated(node_449->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_453=(_Bool)1;
            if(            node_449->terminated(node_449->_protocol_obj)) {
                omit_semicolon_453=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_453=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_362->mOmitSemicolon=omit_semicolon_453;
                if(                omit_semicolon_453&&in_function) {
                    list$1sNodephp_delete(result_362->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_372;
                    info->sline=sline_373;
                    __dec_obj136=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_374));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_468=info->p;
                    value_469=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_470=info->p;
                    __dec_obj137=value_469;
                    value_469=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_469),info));
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_471[tail_470-head_468+1];
                    memset(&buf_471, 0, sizeof(char)                    *(tail_470-head_468+1)                    );
                    memcpy(buf_471,head_468,tail_470-head_468);
                    buf_471[tail_470-head_468]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_472=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_469),(char*)come_increment_ref_count(__builtin_string(buf_471)),info));
                    list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_472));
                    if(value_469) { value_469 = come_decrement_ref_count2(value_469, ((struct sNode*)value_469)->finalize, ((struct sNode*)value_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_469) { value_469 = come_decrement_ref_count2(value_469, ((struct sNode*)value_469)->finalize, ((struct sNode*)value_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_374 = come_decrement_ref_count2(sname_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_365) {
            if(            info->p==0) {
                info->p=p_saved_365;
                info->sline=sline_saved_366;
                __dec_obj138=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_367));
                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_365=((void*)0);
                sline_saved_366=0;
            }
        }
        sname_saved_367 = come_decrement_ref_count2(sname_saved_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value366=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj140=node_473;
            node_473=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value366,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_473));
        }
        else {
            __dec_obj141=node_473;
            node_473=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_473==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_473->terminated(node_473->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_475=(_Bool)1;
            if(            node_473->terminated(node_473->_protocol_obj)) {
                omit_semicolon_475=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_475=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_362->mOmitSemicolon=omit_semicolon_475;
            list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_473));
        }
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_476=info->p;
        head_477=info->head;
        source_478=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_478;
        info->head=source_478;
        node_479=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_479==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_362->mNodes,(struct sNode*)come_increment_ref_count(node_479));
        info->p=p_476;
        info->head=head_477;
        source_478 = come_decrement_ref_count2(source_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_479) { node_479 = come_decrement_ref_count2(node_479, ((struct sNode*)node_479)->finalize, ((struct sNode*)node_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                come_call_finalizer3(self->items[i_368], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_369=0;    i_369<self->size;    i_369++    ){
        if(        self->item_existance[i_369]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_369], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_378;
unsigned int hash_379;
unsigned int it_380;
void* __result255__;
void* __result256__;
void* __result257__;
void* __result258__;
default_value_378 = (void*)0;
    memset(&default_value_378,0,sizeof(void*));
    hash_379=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_380=hash_379;
    while((_Bool)1) {
        if(        self->item_existance[it_380]) {
            if(            come_call_equals((void*)0, self->keys[it_380], ((char*)key))) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_380];
                come_call_finalizer3(default_value_378, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_380++;
            if(            it_380>=self->size) {
                it_380=0;
            }
            else if(            it_380==hash_379) {
                __result256__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_378);
                come_call_finalizer3(default_value_378, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_378);
            come_call_finalizer3(default_value_378, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct sClassModule*)default_value_378);
    come_call_finalizer3(default_value_378, (void*)0, 0, 0, 1, 0, (void*)0);
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
int i_382;
int i_383;
    for(    i_382=0;    i_382<self->size;    i_382++    ){
        if(        self->item_existance[i_382]) {
            if(            1) {
                come_call_finalizer3(self->items[i_382], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_383=0;    i_383<self->size;    i_383++    ){
        if(        self->item_existance[i_383]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_383], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result260__;
void* __right_value328 = (void*)0;
struct map$2voidphvoidph* result_384;
void* __right_value334 = (void*)0;
struct list$1voidp* __dec_obj128;
struct map$2voidphvoidph* __result265__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_384=(struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "map$2voidphvoidph_clone", 3, "struct map$2voidphvoidph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_384->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_384->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_384->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_384->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_384->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj128=result_384->key_list;
        result_384->key_list=(struct list$1voidp*)come_increment_ref_count(come_call_cloner(list$1voidpp_clone, self->key_list));
        come_call_finalizer3(__dec_obj128,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_384->it=self->it;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_384;
    come_call_finalizer3(result_384,map$2voidphvoidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1voidp* list$1voidpp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result261__;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct list$1voidp* result_386;
struct list_item$1voidp* it_387;
struct list$1voidp* __result264__;
    if(    self==((void*)0)) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_386=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 1368, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    it_387=self->head;
    while(it_387!=((void*)0)) {
        list$1voidpp_add(result_386,it_387->item);
        it_387=it_387->next;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_386;
    come_call_finalizer3(result_386,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_385;
    result_385=0;
    result_385+=int_get_hash_key(((int)self->head));
    result_385+=int_get_hash_key(((int)self->tail));
    result_385+=int_get_hash_key(((int)self->len));
    result_385+=int_get_hash_key(((int)self->it));
    return result_385;
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
void* __right_value331 = (void*)0;
struct list_item$1voidp* litem_388;
void* __right_value332 = (void*)0;
struct list_item$1voidp* litem_389;
void* __right_value333 = (void*)0;
struct list_item$1voidp* litem_390;
struct list$1voidp* __result263__;
    if(    self->len==0) {
        litem_388=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value331=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1382, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        litem_388->item=item;
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1) {
        litem_389=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value332=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1392, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        litem_389->item=item;
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value333=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1402, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        litem_390->item=item;
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_391;
struct list_item$1voidp* prev_it_392;
    it_391=self->head;
    while(it_391!=((void*)0)) {
        prev_it_392=it_391;
        it_391=it_391->next;
        come_call_finalizer3(prev_it_392,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_393;
    result_393=0;
    result_393+=int_get_hash_key(((int)self->keys));
    result_393+=int_get_hash_key(((int)self->item_existance));
    result_393+=int_get_hash_key(((int)self->items));
    result_393+=int_get_hash_key(((int)self->size));
    result_393+=int_get_hash_key(((int)self->len));
    result_393+=int_get_hash_key(((int)self->key_list));
    result_393+=int_get_hash_key(((int)self->it));
    return result_393;
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
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
int i_394;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1voidp* __dec_obj129;
struct map$2voidphvoidph* __result267__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value336=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value337=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_394=0;    i_394<128;    i_394++    ){
        self->item_existance[i_394]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj129=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj129,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_397;
char* __result268__;
char* __result269__;
char* result_398;
char* __result270__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_397,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->head;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_398,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_400;
char* __result271__;
char* __result272__;
char* result_401;
char* __result273__;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_400,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_400;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_401,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_401;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2voidphvoidphp_operator_store_element(struct map$2voidphvoidph* self, void* key, void* item){
    map$2voidphvoidphp_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_419;
unsigned int it_420;
_Bool same_key_exist_437;
char* it2_440;
struct map$2voidphvoidph* __result295__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_419=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_420=hash_419;
    while((_Bool)1) {
        if(        self->item_existance[it_420]) {
            if(            come_call_equals((void*)0, self->keys[it_420], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_420]);
                    come_call_finalizer3(self->keys[it_420], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_420]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_420]);
                    self->keys[it_420]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_420], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_420]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_420]=item;
                }
                break;
            }
            it_420++;
            if(            it_420>=self->size) {
                it_420=0;
            }
            else if(            it_420==hash_419) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_420]=(_Bool)1;
            if(            1) {
                self->keys[it_420]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_420]=key;
            }
            if(            1) {
                self->items[it_420]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_420]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_437=(_Bool)0;
    for(    it2_440=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_440=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_440, key)) {
            same_key_exist_437=(_Bool)1;
        }
    }
    if(    !same_key_exist_437) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_402;
void* __right_value343 = (void*)0;
void** keys_403;
void* __right_value344 = (void*)0;
void** items_404;
void* __right_value345 = (void*)0;
_Bool* item_existance_405;
int len_406;
void* it_409;
void* default_value_412;
void* __right_value346 = (void*)0;
void* it2_413;
unsigned int hash_416;
int n_417;
void* default_value_418;
void* __right_value347 = (void*)0;
default_value_412 = (void*)0;
default_value_418 = (void*)0;
    size_402=self->size*10;
    keys_403=(void**)come_increment_ref_count(((void**)(__right_value343=(void**)come_calloc(1, sizeof(void*)*(1*(size_402)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_404=(void**)come_increment_ref_count(((void**)(__right_value344=(void**)come_calloc(1, sizeof(void*)*(1*(size_402)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_405=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value345=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_402)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_406=0;
    for(    it_409=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_409=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_412,0,sizeof(void*));
        it2_413=((void*)(__right_value346=map$2voidphvoidphp_at(self,it_409,default_value_412)));
        come_call_finalizer3(__right_value346,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_416=come_call_get_hash_key((void*)0, ((void*)it_409))%size_402;
        n_417=hash_416;
        while((_Bool)1) {
            if(            item_existance_405[n_417]) {
                n_417++;
                if(                n_417>=size_402) {
                    n_417=0;
                }
                else if(                n_417==hash_416) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_405[n_417]=(_Bool)1;
                keys_403[n_417]=it_409;
                items_404[n_417]=((void*)(__right_value347=map$2voidphvoidphp_at(self,it_409,default_value_418)));
                come_call_finalizer3(__right_value347,(void*)0, 0, 1, 0, 0, (void*)0);
                len_406++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_403;
    self->items=items_404;
    self->item_existance=item_existance_405;
    self->size=size_402;
    self->len=len_406;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_407;
void* __result274__;
void* __result275__;
void* result_408;
void* __result276__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_407,0,sizeof(void*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_408,0,sizeof(void*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_410;
void* __result277__;
void* __result278__;
void* result_411;
void* __result279__;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_410,0,sizeof(void*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_410;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_411,0,sizeof(void*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_411;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_414;
unsigned int it_415;
void* __result280__;
void* __result281__;
void* __result282__;
void* __result283__;
    hash_414=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_415=hash_414;
    while((_Bool)1) {
        if(        self->item_existance[it_415]) {
            if(            come_call_equals((void*)0, self->keys[it_415], key)) {
                __result280__ = gComeFunResultObject = __result_obj__ = self->items[it_415];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result280__;
            }
            it_415++;
            if(            it_415>=self->size) {
                it_415=0;
            }
            else if(            it_415==hash_414) {
                __result281__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
        }
        else {
            __result282__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
    }
    __result283__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_421;
struct list_item$1voidp* it_422;
struct list$1voidp* __result287__;
    it2_421=0;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        if(        come_call_equals((void*)0, it_422->item, item)) {
            list$1voidpp_delete(self,it2_421,it2_421+1);
            break;
        }
        it2_421++;
        it_422=it_422->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_423;
struct list$1voidp* __result284__;
struct list_item$1voidp* it_426;
int i_427;
struct list_item$1voidp* prev_it_428;
struct list_item$1voidp* it_429;
int i_430;
struct list_item$1voidp* prev_it_431;
struct list_item$1voidp* it_432;
struct list_item$1voidp* head_prev_it_433;
struct list_item$1voidp* tail_it_434;
int i_435;
struct list_item$1voidp* prev_it_436;
struct list$1voidp* __result286__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_423=tail;
        tail=head;
        head=tmp_423;
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
        it_426=self->head;
        i_427=0;
        while(it_426!=((void*)0)) {
            if(            i_427<tail) {
                prev_it_428=it_426;
                it_426=it_426->next;
                i_427++;
                come_call_finalizer3(prev_it_428,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_427==tail) {
                self->head=it_426;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_426=it_426->next;
                i_427++;
            }
        }
    }
    else if(    tail==self->len) {
        it_429=self->head;
        i_430=0;
        while(it_429!=((void*)0)) {
            if(            i_430==head) {
                self->tail=it_429->prev;
                self->tail->next=((void*)0);
            }
            if(            i_430>=head) {
                prev_it_431=it_429;
                it_429=it_429->next;
                i_430++;
                come_call_finalizer3(prev_it_431,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_429=it_429->next;
                i_430++;
            }
        }
    }
    else {
        it_432=self->head;
        head_prev_it_433=((void*)0);
        tail_it_434=((void*)0);
        i_435=0;
        while(it_432!=((void*)0)) {
            if(            i_435==head) {
                head_prev_it_433=it_432->prev;
            }
            if(            i_435==tail) {
                tail_it_434=it_432;
            }
            if(            i_435>=head&&i_435<tail) {
                prev_it_436=it_432;
                it_432=it_432->next;
                i_435++;
                come_call_finalizer3(prev_it_436,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_432=it_432->next;
                i_435++;
            }
        }
        if(        head_prev_it_433!=((void*)0)) {
            head_prev_it_433->next=tail_it_434;
        }
        if(        tail_it_434!=((void*)0)) {
            tail_it_434->prev=head_prev_it_433;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_424;
struct list_item$1voidp* prev_it_425;
struct list$1voidp* __result285__;
    it_424=self->head;
    while(it_424!=((void*)0)) {
        prev_it_425=it_424;
        it_424=it_424->next;
        come_call_finalizer3(prev_it_425,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
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
void* result_438;
void* __result288__;
void* __result289__;
void* result_439;
void* __result290__;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_438,0,sizeof(void*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_438;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->head;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_439,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_439;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_441;
void* __result291__;
void* __result292__;
void* result_442;
void* __result293__;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_441,0,sizeof(void*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_441;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_442,0,sizeof(void*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_442;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct list_item$1voidp* litem_443;
void* __right_value349 = (void*)0;
struct list_item$1voidp* litem_444;
void* __right_value350 = (void*)0;
struct list_item$1voidp* litem_445;
struct list$1voidp* __result294__;
    if(    self->len==0) {
        litem_443=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value348=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=((void*)0);
        litem_443->next=((void*)0);
        litem_443->item=item;
        self->tail=litem_443;
        self->head=litem_443;
    }
    else if(    self->len==1) {
        litem_444=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value349=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=self->head;
        litem_444->next=((void*)0);
        litem_444->item=item;
        self->tail=litem_444;
        self->head->next=litem_444;
    }
    else {
        litem_445=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value350=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=self->tail;
        litem_445->next=((void*)0);
        litem_445->item=item;
        self->tail->next=litem_445;
        self->tail=litem_445;
    }
    self->len++;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_446;
int i_447;
char* __result296__;
char* default_value_448;
char* __result297__;
default_value_448 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_446=self->head;
    i_447=0;
    while(it_446!=((void*)0)) {
        if(        position==i_447) {
            __result296__ = gComeFunResultObject = __result_obj__ = it_446->item;
            gComeFunResultObject = (void*)0;
            return __result296__;
        }
        it_446=it_446->next;
        i_447++;
    }
    memset(&default_value_448,0,sizeof(char*));
    __result297__ = gComeFunResultObject = __result_obj__ = default_value_448;
    default_value_448 = come_decrement_ref_count2(default_value_448, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct list_item$1sNodeph* litem_450;
struct sNode* __dec_obj133;
void* __right_value357 = (void*)0;
struct list_item$1sNodeph* litem_451;
struct sNode* __dec_obj134;
void* __right_value358 = (void*)0;
struct list_item$1sNodeph* litem_452;
struct sNode* __dec_obj135;
struct list$1sNodeph* __result298__;
    if(    self->len==0) {
        litem_450=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value356=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_450->prev=((void*)0);
        litem_450->next=((void*)0);
        __dec_obj133=litem_450->item;
        litem_450->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_450;
        self->head=litem_450;
    }
    else if(    self->len==1) {
        litem_451=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value357=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=self->head;
        litem_451->next=((void*)0);
        __dec_obj134=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_451;
        self->head->next=litem_451;
    }
    else {
        litem_452=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value358=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->tail;
        litem_452->next=((void*)0);
        __dec_obj135=litem_452->item;
        litem_452->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_452;
        self->tail=litem_452;
    }
    self->len++;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_454;
struct list$1sNodeph* __result299__;
struct list_item$1sNodeph* it_457;
int i_458;
struct list_item$1sNodeph* prev_it_459;
struct list_item$1sNodeph* it_460;
int i_461;
struct list_item$1sNodeph* prev_it_462;
struct list_item$1sNodeph* it_463;
struct list_item$1sNodeph* head_prev_it_464;
struct list_item$1sNodeph* tail_it_465;
int i_466;
struct list_item$1sNodeph* prev_it_467;
struct list$1sNodeph* __result301__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_454=tail;
        tail=head;
        head=tmp_454;
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
        it_457=self->head;
        i_458=0;
        while(it_457!=((void*)0)) {
            if(            i_458<tail) {
                prev_it_459=it_457;
                it_457=it_457->next;
                i_458++;
                come_call_finalizer3(prev_it_459,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_458==tail) {
                self->head=it_457;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_457=it_457->next;
                i_458++;
            }
        }
    }
    else if(    tail==self->len) {
        it_460=self->head;
        i_461=0;
        while(it_460!=((void*)0)) {
            if(            i_461==head) {
                self->tail=it_460->prev;
                self->tail->next=((void*)0);
            }
            if(            i_461>=head) {
                prev_it_462=it_460;
                it_460=it_460->next;
                i_461++;
                come_call_finalizer3(prev_it_462,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_460=it_460->next;
                i_461++;
            }
        }
    }
    else {
        it_463=self->head;
        head_prev_it_464=((void*)0);
        tail_it_465=((void*)0);
        i_466=0;
        while(it_463!=((void*)0)) {
            if(            i_466==head) {
                head_prev_it_464=it_463->prev;
            }
            if(            i_466==tail) {
                tail_it_465=it_463;
            }
            if(            i_466>=head&&i_466<tail) {
                prev_it_467=it_463;
                it_463=it_463->next;
                i_466++;
                come_call_finalizer3(prev_it_467,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_463=it_463->next;
                i_466++;
            }
        }
        if(        head_prev_it_464!=((void*)0)) {
            head_prev_it_464->next=tail_it_465;
        }
        if(        tail_it_465!=((void*)0)) {
            tail_it_465->prev=head_prev_it_464;
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_455;
struct list_item$1sNodeph* prev_it_456;
struct list$1sNodeph* __result300__;
    it_455=self->head;
    while(it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        come_call_finalizer3(prev_it_456,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value367 = (void*)0;
struct sSemicolonNode* result_474;
void* __right_value368 = (void*)0;
char* __dec_obj139;
struct sSemicolonNode* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_474=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_474->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj139=result_474->sname;
        result_474->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_474->sline_real=self->sline_real;
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_474;
    come_call_finalizer3(result_474,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_480;
struct sVarTable* old_table_481;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sVarTable* __dec_obj152;
struct sVarTable* current_loop_vtable_494;
int i_495;
struct list$1charph* o2_saved_496;
char* name_497;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* type_498;
void* __right_value390 = (void*)0;
int block_level_502;
int i_503;
struct list$1sNodeph* o2_saved_504;
struct sNode* node_507;
struct list$1voidph* right_value_objects_510;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1voidph* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
int stack_num_before_511;
int sline_512;
void* __right_value393 = (void*)0;
char* sname_513;
void* __right_value394 = (void*)0;
char* __dec_obj156;
_Bool Value_514;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_515;
void* __right_value401 = (void*)0;
struct CVALUE* come_value2_516;
void* __right_value402 = (void*)0;
char* __dec_obj161;
void* __right_value403 = (void*)0;
struct CVALUE* come_value2_518;
struct sVar* var__519;
void* __right_value404 = (void*)0;
struct CVALUE* come_value3_520;
void* __right_value405 = (void*)0;
_Bool _if_conditional2;
void* __right_value406 = (void*)0;
struct sType* __dec_obj162;
void* __right_value407 = (void*)0;
char* c_value_523;
void* __right_value408 = (void*)0;
char* __dec_obj163;
void* __right_value409 = (void*)0;
char* __dec_obj164;
void* __right_value410 = (void*)0;
char* __dec_obj165;
_Bool Value_524;
void* __right_value411 = (void*)0;
char* __dec_obj166;
struct list$1voidph* __dec_obj167;
void* __if_result__0_527 = (void*)0;
struct list$1voidph* o2_saved_528;
struct sVar* it_531;
struct list$1voidph* __dec_obj168;
memset(&i_495, 0, sizeof(int));
memset(&i_503, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_480=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_481=info->lv_table;
    if(    !no_var_table) {
        __dec_obj152=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_481));
        come_call_finalizer3(__dec_obj152,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_494=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_496=(param_names),name_497=list$1charphp_begin((o2_saved_496));        !list$1charphp_end((o2_saved_496));        name_497=list$1charphp_next((o2_saved_496))        ){
            type_498=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value388=list$1voidphp_operator_load_element(param_types,i_495))))));
            come_call_finalizer3(__right_value388,(void*)0, 0, 1, 0, 0, (void*)0);
            type_498->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_497,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_498)),info,(_Bool)1);
            i_495++;
            come_call_finalizer3(type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_502=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_504=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_507=list$1sNodephp_begin((o2_saved_504));        !list$1sNodephp_end((o2_saved_504));        node_507=list$1sNodephp_next((o2_saved_504))        ){
            right_value_objects_510=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj153=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 493, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj153,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj154=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj155=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_511=list$1CVALUEphp_length(info->stack);
            sline_512=info->sline;
            sname_513=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_507->sline(node_507->_protocol_obj);
            __dec_obj156=info->sname;
            info->sname=(char*)come_increment_ref_count(node_507->sname(node_507->_protocol_obj));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_503==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_514=node_compile(node_507,info);
                if(                !Value_514) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_511+1) {
                    come_value_515=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_515->type->mClass->mName,"void")&&come_value_515->type->mPointerNum==0) {
                        come_value2_516=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_515));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_516));
                        __dec_obj161=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_516->c_value));
                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_518=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_515));
                        var__519=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__519) {
                            come_value3_520=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 529, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__519->mType->mClass=="void"&&var__519->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__519->mType,((struct sType*)(__right_value405=come_call_cloner(sType_clone, come_value_515->type))),come_value3_520,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value405,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj162=var__519->mType;
                            var__519->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_515->type));
                            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_515->type->mHeap) {
                                c_value_523=(char*)come_increment_ref_count(increment_ref_count_object(come_value_515->type,come_value_515->c_value,info));
                                __dec_obj163=come_value2_518->c_value;
                                come_value2_518->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__519->mCValueName,c_value_523));
                                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_523 = come_decrement_ref_count2(c_value_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj164=come_value2_518->c_value;
                                come_value2_518->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__519->mCValueName,come_value_515->c_value));
                                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_518));
                        __dec_obj165=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_518->c_value));
                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_524=node_compile(node_507,info);
                if(                !Value_524) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_512;
            __dec_obj166=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_513));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_511);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj167=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_510);
            come_call_finalizer3(__dec_obj167,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_503++;
            come_call_finalizer3(right_value_objects_510,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_513 = come_decrement_ref_count2(sname_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_504,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_502==0) {
            for(            o2_saved_528=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_531=((struct sVar*)list$1voidphp_begin((o2_saved_528)));            !list$1voidphp_end((o2_saved_528));            it_531=((struct sVar*)list$1voidphp_next((o2_saved_528)))            ){
                free_object(it_531->mType,it_531->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj168=info->match_it_var;
            __if_result__0_527=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_527,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_481;
    info->block_level=block_level_502;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_494;
    info->inhibits_output_code=inhibits_output_code_480;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result305__;
void* __right_value373 = (void*)0;
struct sVarTable* result_483;
void* __right_value385 = (void*)0;
struct map$2voidphvoidph* __dec_obj151;
struct sVarTable* __result311__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_483=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj151=result_483->mVars;
        result_483->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj151,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_483->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_483->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_483->mID=self->mID;
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_483;
    come_call_finalizer3(result_483,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_482;
    result_482=0;
    result_482+=int_get_hash_key(((int)self->mVars));
    result_482+=int_get_hash_key(((int)self->mGlobal));
    result_482+=int_get_hash_key(((int)self->mParent));
    result_482+=int_get_hash_key(((int)self->mID));
    return result_482;
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
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct map$2voidphvoidph* result_484;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1voidp* __dec_obj142;
char* it_485;
void* default_value_486;
void* __right_value378 = (void*)0;
struct sVar* it2_487;
void* __right_value384 = (void*)0;
struct map$2voidphvoidph* __result310__;
default_value_486 = (void*)0;
    if(    self==((void*)0)) {
        __result306__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_484=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidphp_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj142=result_484->key_list;
    result_484->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidpp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj142,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_485=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_485=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_486,0,sizeof(void*));
        it2_487=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_485,((struct sVar*)default_value_486)));
        map$2voidphvoidphp_put(result_484,it_485,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_487)));
        come_call_finalizer3(it2_487,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_484;
    come_call_finalizer3(result_484,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_488;
int it_489;
_Bool same_key_exist_490;
char* it2_491;
struct map$2voidphvoidph* __result307__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_488=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_489=hash_488;
    while((_Bool)1) {
        if(        self->item_existance[it_489]) {
            if(            come_call_equals((void*)0, self->keys[it_489], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_489], (void*)0, 0, 0, 0, 0, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_489]);
                    self->keys[it_489]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_489]);
                    self->keys[it_489]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_489], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_489]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_489]=item;
                }
                break;
            }
            it_489++;
            if(            it_489>=self->size) {
                it_489=0;
            }
            else if(            it_489==hash_488) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_489]=(_Bool)1;
            if(            1) {
                self->keys[it_489]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_489]=key;
            }
            if(            1) {
                self->items[it_489]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_489]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_490=(_Bool)0;
    for(    it2_491=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_491=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_491, key)) {
            same_key_exist_490=(_Bool)1;
        }
    }
    if(    !same_key_exist_490) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result308__;
void* __right_value379 = (void*)0;
struct sVar* result_493;
void* __right_value380 = (void*)0;
char* __dec_obj147;
void* __right_value381 = (void*)0;
char* __dec_obj148;
void* __right_value382 = (void*)0;
struct sType* __dec_obj149;
void* __right_value383 = (void*)0;
char* __dec_obj150;
struct sVar* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_493=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj147=result_493->mName;
        result_493->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj148=result_493->mCValueName;
        result_493->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj149=result_493->mType;
        result_493->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_493->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_493->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_493->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj150=result_493->mFunName;
        result_493->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_493;
    come_call_finalizer3(result_493,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj143;
char* __dec_obj144;
struct sType* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj143=self->mName;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj144=self->mCValueName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj145=self->mType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj146=self->mFunName;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_492;
    result_492=0;
    result_492+=int_get_hash_key(((int)self->mName));
    result_492+=int_get_hash_key(((int)self->mCValueName));
    result_492+=int_get_hash_key(((int)self->mType));
    result_492+=int_get_hash_key(((int)self->mBlockLevel));
    result_492+=int_get_hash_key(((int)self->mGlobal));
    result_492+=int_get_hash_key(((int)self->mAllocaValue));
    result_492+=int_get_hash_key(((int)self->mNoFree));
    result_492+=int_get_hash_key(((int)self->mFunName));
    return result_492;
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
struct list_item$1voidph* it_499;
int i_500;
void* __result312__;
void* default_value_501;
void* __result313__;
default_value_501 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_499=self->head;
    i_500=0;
    while(it_499!=((void*)0)) {
        if(        position==i_500) {
            __result312__ = gComeFunResultObject = __result_obj__ = it_499->item;
            gComeFunResultObject = (void*)0;
            return __result312__;
        }
        it_499=it_499->next;
        i_500++;
    }
    memset(&default_value_501,0,sizeof(void*));
    __result313__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_501);
    come_call_finalizer3(default_value_501, (void*)0, 0, 0, 1, 0, (void*)0);
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
struct sNode* result_505;
struct sNode* __result314__;
struct sNode* __result315__;
struct sNode* result_506;
struct sNode* __result316__;
result_505 = (void*)0;
result_506 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_505,0,sizeof(struct sNode*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_505;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->head;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_506,0,sizeof(struct sNode*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_506;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_508;
struct sNode* __result317__;
struct sNode* __result318__;
struct sNode* result_509;
struct sNode* __result319__;
result_508 = (void*)0;
result_509 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_508,0,sizeof(struct sNode*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_508;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_509,0,sizeof(struct sNode*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_509;
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
void* __right_value396 = (void*)0;
struct CVALUE* result_517;
void* __right_value397 = (void*)0;
char* __dec_obj157;
void* __right_value398 = (void*)0;
struct sType* __dec_obj158;
void* __right_value399 = (void*)0;
char* __dec_obj159;
void* __right_value400 = (void*)0;
char* __dec_obj160;
struct CVALUE* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_517=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj157=result_517->c_value;
        result_517->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj158=result_517->type;
        result_517->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_517->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_517->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj159=result_517->c_value_without_right_value_objects;
        result_517->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj160=result_517->c_value_without_cast_object_value;
        result_517->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_517;
    come_call_finalizer3(result_517,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1voidph* it_521;
struct list_item$1voidph* it2_522;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_521=left->head;
    it2_522=right->head;
    while(it_521!=((void*)0)) {
        if(        !(voidp_operator_equals(it_521->item,it2_522->item))) {
            return (_Bool)0;
        }
        it_521=it_521->next;
        it2_522=it2_522->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_525;
struct list_item$1voidph* prev_it_526;
struct list$1voidph* __result322__;
    it_525=self->head;
    while(it_525!=((void*)0)) {
        prev_it_526=it_525;
        it_525=it_525->next;
        come_call_finalizer3(prev_it_526,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_529;
void* __result323__;
void* __result324__;
void* result_530;
void* __result325__;
result_529 = (void*)0;
result_530 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_529,0,sizeof(void*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_529;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->head;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_530,0,sizeof(void*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_530;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_532;
void* __result326__;
void* __result327__;
void* result_533;
void* __result328__;
result_532 = (void*)0;
result_533 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_532,0,sizeof(void*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_532;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_533,0,sizeof(void*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_533;
    gComeFunResultObject = (void*)0;
    return __result328__;
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
char* head_534;
_Bool dquort_535;
_Bool squort_536;
int sline_537;
int nest_538;
char* tail_539;
void* __right_value412 = (void*)0;
char* buf_540;
void* __right_value413 = (void*)0;
char* __result329__;
    head_534=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_535=(_Bool)0;
        squort_536=(_Bool)0;
        sline_537=0;
        nest_538=0;
        while(1) {
            if(            dquort_535) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_535=!dquort_535;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                }
            }
            else if(            squort_536) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_536=!squort_536;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_537);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_537=info->sline;
                info->p++;
                squort_536=!squort_536;
            }
            else if(            *info->p==34) {
                sline_537=info->sline;
                info->p++;
                dquort_535=!dquort_535;
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
                nest_538++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_538==0) {
                    break;
                }
                nest_538--;
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
    tail_539=info->p;
    buf_540=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_539-head_534+1)), "05function.c", 766, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_540,head_534,tail_539-head_534);
    buf_540[tail_539-head_534]=0;
    skip_spaces_and_lf(info);
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value413=__builtin_string(buf_540)));
    buf_540 = come_decrement_ref_count2(buf_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_541;
char* p3_542;
int i_543;
    terminated_541=(_Bool)0;
    p3_542=p;
    for(    i_543=0;    i_543<strlen(p2);    i_543++    ){
        if(        *p3_542==0) {
            terminated_541=(_Bool)1;
            break;
        }
        p3_542++;
    }
    return !terminated_541&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct buffer* asm_fun_name_544;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct buffer* result_545;
char* head_546;
int brace_num_547;
char* tail_548;
char* head_549;
int brace_num_550;
char* tail_551;
char* head_552;
char* tail_553;
char* head_554;
char* tail_555;
int len_556;
_Bool in_dquort_557;
int brace_num_558;
char* head_559;
char* tail_560;
char* head_561;
char* tail_562;
char* head_563;
char* tail_564;
char* head_565;
int nest_566;
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
char* tail_581;
char* head_582;
char* tail_583;
char* head_584;
char* tail_585;
char* head_586;
char* tail_587;
char* head_588;
char* tail_589;
char* head_590;
int brace_num_591;
char* tail_592;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct tuple2$2charphcharph* __result333__;
    asm_fun_name_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_545=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 792, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_546=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_547=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_547--;
                        if(                        brace_num_547==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_548=info->p;
            buffer_append(result_545,head_546,tail_548-head_546);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_549=info->p;
            info->p+=strlen("__declspec");
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
            buffer_append(result_545,head_549,tail_551-head_549);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_552=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_553=info->p;
            buffer_append(result_545,head_552,tail_553-head_552);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_554=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_555=info->p;
            buffer_append(result_545,head_554,tail_555-head_554);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_556=0;
            if(            *info->p==40) {
                in_dquort_557=(_Bool)0;
                brace_num_558=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_557=!in_dquort_557;
                    }
                    else if(                    in_dquort_557) {
                        buffer_append_char(asm_fun_name_544,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
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
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_559=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_560=info->p;
            buffer_append(result_545,head_559,tail_560-head_559);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_561=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_562=info->p;
            buffer_append(result_545,head_561,tail_562-head_561);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_563=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_564=info->p;
            buffer_append(result_545,head_563,tail_564-head_563);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_565=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_566=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566--;
                        if(                        nest_566==0) {
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
            tail_567=info->p;
            buffer_append(result_545,head_565,tail_567-head_565);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_568=info->p;
            info->p+=strlen("__alloc_size");
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
            buffer_append(result_545,head_568,tail_570-head_568);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_571=info->p;
            info->p+=strlen("__nonnull");
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
            buffer_append(result_545,head_571,tail_573-head_571);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_574=info->p;
            info->p+=strlen("_Nonnull");
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
            buffer_append(result_545,head_574,tail_576-head_574);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_577=info->p;
            info->p+=strlen("__alloc_align");
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
            buffer_append(result_545,head_577,tail_579-head_577);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_580=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_581=info->p;
            buffer_append(result_545,head_580,tail_581-head_580);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_582=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_583=info->p;
            buffer_append(result_545,head_582,tail_583-head_582);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_584=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_585=info->p;
            buffer_append(result_545,head_584,tail_585-head_584);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_586=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_587=info->p;
            buffer_append(result_545,head_586,tail_587-head_586);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_588=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_589=info->p;
            buffer_append(result_545,head_588,tail_589-head_588);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_590=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_591=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_591++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_591--;
                        if(                        brace_num_591==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_592=info->p;
            buffer_append(result_545,head_590,tail_592-head_590);
        }
        else {
            break;
        }
    }
    __result333__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value424=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1206, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_544)),(char*)come_increment_ref_count(buffer_to_string(result_545)))));
    come_call_finalizer3(asm_fun_name_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_545,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value424,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj169=self->v1;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj170=self->v2;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result330__;
void* __right_value420 = (void*)0;
struct tuple2$2charphcharph* result_593;
void* __right_value421 = (void*)0;
char* __dec_obj171;
void* __right_value422 = (void*)0;
char* __dec_obj172;
struct tuple2$2charphcharph* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_593=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj171=result_593->v1;
        result_593->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj172=result_593->v2;
        result_593->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_593;
    come_call_finalizer3(result_593,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_594;
    result_594=0;
    result_594+=int_get_hash_key(((int)self->v1));
    result_594+=int_get_hash_key(((int)self->v2));
    return result_594;
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
char* __dec_obj173;
char* __dec_obj174;
struct tuple2$2charphcharph* __result332__;
    __dec_obj173=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj175;
char* __dec_obj176;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj175=self->v1;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct buffer* asm_fun_name_595;
void* __right_value427 = (void*)0;
char* attribute_596;
int nest_597;
int nest_598;
int nest_599;
int nest_600;
int nest_601;
void* __right_value428 = (void*)0;
char* __dec_obj177;
int len_602;
_Bool in_dquort_603;
int brace_num_604;
int brace_num_605;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct tuple2$2charphcharph* __result334__;
    asm_fun_name_595=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1211, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_596=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_597=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_597++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_597--;
                        if(                        nest_597==0) {
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
                nest_598=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_598++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_598--;
                        if(                        nest_598==0) {
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
                nest_599=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_599++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_599--;
                        if(                        nest_599==0) {
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
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
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
            __dec_obj177=attribute_596;
            attribute_596=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_602=0;
            if(            *info->p==40) {
                in_dquort_603=(_Bool)0;
                brace_num_604=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_603=!in_dquort_603;
                    }
                    else if(                    in_dquort_603) {
                        buffer_append_char(asm_fun_name_595,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_604++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_604--;
                        if(                        brace_num_604==0) {
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
                brace_num_605=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_605++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_605--;
                        if(                        brace_num_605==0) {
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
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value431=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1480, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_595)),(char*)come_increment_ref_count(attribute_596))));
    come_call_finalizer3(asm_fun_name_595,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_596 = come_decrement_ref_count2(attribute_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value431,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value432 = (void*)0;
char* __dec_obj178;
char* head_606;
int head_sline_607;
void* __right_value433 = (void*)0;
char* buf_608;
void* __right_value434 = (void*)0;
struct sNode* node_609;
_Bool Value_610;
    while(*info->p) {
        __dec_obj178=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_606=info->p;
        head_sline_607=info->sline;
        buf_608=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_608 = come_decrement_ref_count2(buf_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_609=(struct sNode*)come_increment_ref_count(top_level_v99(buf_608,head_606,head_sline_607,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_609!=((void*)0)) {
            Value_610=node_compile(node_609,info);
            if(            !Value_610) {
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
            buf_608 = come_decrement_ref_count2(buf_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_608 = come_decrement_ref_count2(buf_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value435 = (void*)0;
char* name_611;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sType* result_type_612;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
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
struct sType* __list_values1___613[9];
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1sTypeph* param_types_624;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __list_values2___625[9];
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1charph* param_names_629;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1charph* param_default_parametors_630;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sFun* main_fun_634;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* name_635;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* result_type_636;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __list_values3___637[1];
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sTypeph* param_types_638;
void* __right_value508 = (void*)0;
char* __list_values4___639[1];
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct list$1charph* param_names_640;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1charph* param_default_parametors_641;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* main_fun_642;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* name_643;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* result_type_644;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __list_values5___645[7];
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct list$1sTypeph* param_types_646;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* __list_values6___647[7];
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1charph* param_names_648;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1charph* param_default_parametors_649;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sFun* main_fun_650;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
char* name_651;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* result_type_652;
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
struct sType* __list_values7___653[5];
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1sTypeph* param_types_654;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __list_values8___655[5];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_names_656;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1charph* param_default_parametors_657;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sFun* main_fun_658;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* name_659;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* result_type_660;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __list_values9___661[1];
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct list$1sTypeph* param_types_662;
void* __right_value589 = (void*)0;
char* __list_values10___663[1];
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1charph* param_names_664;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1charph* param_default_parametors_665;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sFun* main_fun_666;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* name_667;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* result_type_668;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sType* __list_values11___669[4];
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1sTypeph* param_types_670;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
char* __list_values12___671[4];
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1charph* param_names_672;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1charph* param_default_parametors_673;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sFun* main_fun_674;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
char* name_675;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sType* result_type_676;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sType* __list_values13___677[3];
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1sTypeph* param_types_678;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* __list_values14___679[3];
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct list$1charph* param_names_680;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1charph* param_default_parametors_681;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sFun* main_fun_682;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
char* name_683;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* result_type_684;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __list_values15___685[1];
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1sTypeph* param_types_686;
void* __right_value658 = (void*)0;
char* __list_values16___687[1];
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* param_names_688;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_689;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sFun* main_fun_690;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
char* name_691;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* result_type_692;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sType* __list_values17___693[3];
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1sTypeph* param_types_694;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
char* __list_values18___695[3];
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1charph* param_names_696;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1charph* param_default_parametors_697;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sFun* main_fun_698;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* name_699;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sType* result_type_700;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct list$1voidph* param_types_701;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1charph* param_names_702;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1charph* param_default_parametors_703;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sFun* main_fun_704;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
char* name_705;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sType* result_type_706;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sType* __list_values19___707[4];
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1sTypeph* param_types_708;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
char* __list_values20___709[4];
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1charph* param_names_710;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1charph* param_default_parametors_711;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* main_fun_712;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
char* name_713;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sType* result_type_714;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1voidph* param_types_715;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1charph* param_names_716;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct list$1charph* param_default_parametors_717;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sFun* fun_718;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
char* name_719;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* result_type_720;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1voidph* param_types_721;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1charph* param_names_722;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct list$1charph* param_default_parametors_723;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sFun* fun_724;
void* __right_value758 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_611=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_612=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_624=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___613[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value439=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___613[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value441=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___613[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value443=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___613[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value445=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___613[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___613[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value449=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___613[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value451=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___613[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value453=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___613[8]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value455=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1537, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),9,__list_values1___613)));
        come_call_finalizer3(__right_value439,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value443,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value451,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_629=(struct list$1charph*)come_increment_ref_count((__list_values2___625[0]=(char*)come_increment_ref_count(((char*)(__right_value462=__builtin_string("count")))),
__list_values2___625[1]=(char*)come_increment_ref_count(((char*)(__right_value463=__builtin_string("size")))),
__list_values2___625[2]=(char*)come_increment_ref_count(((char*)(__right_value464=__builtin_string("sname")))),
__list_values2___625[3]=(char*)come_increment_ref_count(((char*)(__right_value465=__builtin_string("sline")))),
__list_values2___625[4]=(char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("class_name")))),
__list_values2___625[5]=(char*)come_increment_ref_count(((char*)(__right_value467=__builtin_string("finalizer_fun")))),
__list_values2___625[6]=(char*)come_increment_ref_count(((char*)(__right_value468=__builtin_string("cloner_fun")))),
__list_values2___625[7]=(char*)come_increment_ref_count(((char*)(__right_value469=__builtin_string("get_hash_key_fun")))),
__list_values2___625[8]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("equaler_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),9,__list_values2___625)));
        __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_630=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1539, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_630,((void*)0));
        list$1charphp_push_back(param_default_parametors_630,((void*)0));
        list$1charphp_push_back(param_default_parametors_630,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_630,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_630,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_634=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1545, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_611),(struct sType*)come_increment_ref_count(result_type_612),(struct list$1sTypeph*)come_increment_ref_count(param_types_624),(struct list$1charph*)come_increment_ref_count(param_names_629),(struct list$1charph*)come_increment_ref_count(param_default_parametors_630),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_611)),(struct sFun*)come_increment_ref_count(main_fun_634));
        name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_629,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_630,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_634,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_635=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_638=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___637[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value505=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1555, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___637)));
        come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_640=(struct list$1charph*)come_increment_ref_count((__list_values4___639[0]=(char*)come_increment_ref_count(((char*)(__right_value508=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1556, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___639)));
        __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_641=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_642=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1558, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_635),(struct sType*)come_increment_ref_count(result_type_636),(struct list$1sTypeph*)come_increment_ref_count(param_types_638),(struct list$1charph*)come_increment_ref_count(param_names_640),(struct list$1charph*)come_increment_ref_count(param_default_parametors_641),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_635)),(struct sFun*)come_increment_ref_count(main_fun_642));
        name_635 = come_decrement_ref_count2(name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_638,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_640,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_641,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_642,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_643=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_644=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_646=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___645[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___645[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___645[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value526=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___645[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value528=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___645[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value530=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___645[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value532=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___645[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value534=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1568, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),7,__list_values5___645)));
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value532,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_648=(struct list$1charph*)come_increment_ref_count((__list_values6___647[0]=(char*)come_increment_ref_count(((char*)(__right_value537=__builtin_string("fun")))),
__list_values6___647[1]=(char*)come_increment_ref_count(((char*)(__right_value538=__builtin_string("mem")))),
__list_values6___647[2]=(char*)come_increment_ref_count(((char*)(__right_value539=__builtin_string("protocol_fun")))),
__list_values6___647[3]=(char*)come_increment_ref_count(((char*)(__right_value540=__builtin_string("protocol_obj")))),
__list_values6___647[4]=(char*)come_increment_ref_count(((char*)(__right_value541=__builtin_string("call_finalizer_only")))),
__list_values6___647[5]=(char*)come_increment_ref_count(((char*)(__right_value542=__builtin_string("no_decrement")))),
__list_values6___647[6]=(char*)come_increment_ref_count(((char*)(__right_value543=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1569, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),7,__list_values6___647)));
        __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_649=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1570, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_650=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1571, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_643),(struct sType*)come_increment_ref_count(result_type_644),(struct list$1sTypeph*)come_increment_ref_count(param_types_646),(struct list$1charph*)come_increment_ref_count(param_names_648),(struct list$1charph*)come_increment_ref_count(param_default_parametors_649),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_643)),(struct sFun*)come_increment_ref_count(main_fun_650));
        name_643 = come_decrement_ref_count2(name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_646,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_648,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_651=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_652=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1580, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_654=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___653[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value557=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1581, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___653[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value559=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1581, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___653[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value561=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1581, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___653[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value563=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1581, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
__list_values7___653[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value565=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1581, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1581, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),5,__list_values7___653)));
        come_call_finalizer3(__right_value557,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value559,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value561,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value563,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value565,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_656=(struct list$1charph*)come_increment_ref_count((__list_values8___655[0]=(char*)come_increment_ref_count(((char*)(__right_value568=__builtin_string("mem")))),
__list_values8___655[1]=(char*)come_increment_ref_count(((char*)(__right_value569=__builtin_string("protocol_fun")))),
__list_values8___655[2]=(char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("protocol_obj")))),
__list_values8___655[3]=(char*)come_increment_ref_count(((char*)(__right_value571=__builtin_string("no_decrement")))),
__list_values8___655[4]=(char*)come_increment_ref_count(((char*)(__right_value572=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1582, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),5,__list_values8___655)));
        __right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_657=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1583, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_658=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1584, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_651),(struct sType*)come_increment_ref_count(result_type_652),(struct list$1sTypeph*)come_increment_ref_count(param_types_654),(struct list$1charph*)come_increment_ref_count(param_names_656),(struct list$1charph*)come_increment_ref_count(param_default_parametors_657),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_651)),(struct sFun*)come_increment_ref_count(main_fun_658));
        name_651 = come_decrement_ref_count2(name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_654,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_657,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_658,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_659=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_660=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_662=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___661[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value586=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1594, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1594, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values9___661)));
        come_call_finalizer3(__right_value586,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_664=(struct list$1charph*)come_increment_ref_count((__list_values10___663[0]=(char*)come_increment_ref_count(((char*)(__right_value589=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values10___663)));
        __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_665=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1596, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_666=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1597, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_659),(struct sType*)come_increment_ref_count(result_type_660),(struct list$1sTypeph*)come_increment_ref_count(param_types_662),(struct list$1charph*)come_increment_ref_count(param_names_664),(struct list$1charph*)come_increment_ref_count(param_default_parametors_665),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_659)),(struct sFun*)come_increment_ref_count(main_fun_666));
        name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_662,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_666,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_667=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1606, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_670=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___669[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value603=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values11___669[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value605=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values11___669[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value607=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values11___669[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value609=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1607, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values11___669)));
        come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value609,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_672=(struct list$1charph*)come_increment_ref_count((__list_values12___671[0]=(char*)come_increment_ref_count(((char*)(__right_value612=__builtin_string("block")))),
__list_values12___671[1]=(char*)come_increment_ref_count(((char*)(__right_value613=__builtin_string("sname")))),
__list_values12___671[2]=(char*)come_increment_ref_count(((char*)(__right_value614=__builtin_string("sline")))),
__list_values12___671[3]=(char*)come_increment_ref_count(((char*)(__right_value615=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1608, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values12___671)));
        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_673=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_673,((void*)0));
        list$1charphp_push_back(param_default_parametors_673,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_673,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_673,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_674=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1614, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_670),(struct list$1charph*)come_increment_ref_count(param_names_672),(struct list$1charph*)come_increment_ref_count(param_default_parametors_673),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(main_fun_674));
        name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_672,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_674,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_675=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_676=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1623, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_678=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___677[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value632=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1624, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values13___677[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value634=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1624, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values13___677[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value636=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1624, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1624, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values13___677)));
        come_call_finalizer3(__right_value632,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value634,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value636,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_680=(struct list$1charph*)come_increment_ref_count((__list_values14___679[0]=(char*)come_increment_ref_count(((char*)(__right_value639=__builtin_string("b")))),
__list_values14___679[1]=(char*)come_increment_ref_count(((char*)(__right_value640=__builtin_string("c")))),
__list_values14___679[2]=(char*)come_increment_ref_count(((char*)(__right_value641=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1625, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values14___679)));
        __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_681=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1626, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_682=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1627, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_675),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1sTypeph*)come_increment_ref_count(param_types_678),(struct list$1charph*)come_increment_ref_count(param_names_680),(struct list$1charph*)come_increment_ref_count(param_default_parametors_681),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_675)),(struct sFun*)come_increment_ref_count(main_fun_682));
        name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_678,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_680,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_681,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_682,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_683=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_684=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_686=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___685[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value655=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1637, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1637, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values15___685)));
        come_call_finalizer3(__right_value655,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_688=(struct list$1charph*)come_increment_ref_count((__list_values16___687[0]=(char*)come_increment_ref_count(((char*)(__right_value658=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1638, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values16___687)));
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_689=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1639, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_690=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1640, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_683),(struct sType*)come_increment_ref_count(result_type_684),(struct list$1sTypeph*)come_increment_ref_count(param_types_686),(struct list$1charph*)come_increment_ref_count(param_names_688),(struct list$1charph*)come_increment_ref_count(param_default_parametors_689),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_683)),(struct sFun*)come_increment_ref_count(main_fun_690));
        name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_684,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_686,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_688,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_690,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_691=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_692=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_694=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___693[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value672=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___693[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value674=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___693[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value676=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values17___693)));
        come_call_finalizer3(__right_value672,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value676,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_696=(struct list$1charph*)come_increment_ref_count((__list_values18___695[0]=(char*)come_increment_ref_count(((char*)(__right_value679=xsprintf("come_malloc")))),
__list_values18___695[1]=(char*)come_increment_ref_count(((char*)(__right_value680=xsprintf("come_debug")))),
__list_values18___695[2]=(char*)come_increment_ref_count(((char*)(__right_value681=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values18___695)));
        __right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_697=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_697,((void*)0));
        main_fun_698=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1654, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_691),(struct sType*)come_increment_ref_count(result_type_692),(struct list$1sTypeph*)come_increment_ref_count(param_types_694),(struct list$1charph*)come_increment_ref_count(param_names_696),(struct list$1charph*)come_increment_ref_count(param_default_parametors_697),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_691)),(struct sFun*)come_increment_ref_count(main_fun_698));
        name_691 = come_decrement_ref_count2(name_691, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_694,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_698,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_699=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_700=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_701=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1664, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_702=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1665, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_703=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1666, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_704=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1667, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_699),(struct sType*)come_increment_ref_count(result_type_700),(struct list$1voidph*)come_increment_ref_count(param_types_701),(struct list$1charph*)come_increment_ref_count(param_names_702),(struct list$1charph*)come_increment_ref_count(param_default_parametors_703),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_699)),(struct sFun*)come_increment_ref_count(main_fun_704));
        name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_700,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_701,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_702,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_703,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_704,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_705=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_706=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1676, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_708=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___707[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value709=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1677, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values19___707[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value711=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1677, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values19___707[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value713=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1677, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values19___707[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value715=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1677, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1677, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values19___707)));
        come_call_finalizer3(__right_value709,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value711,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value713,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value715,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_710=(struct list$1charph*)come_increment_ref_count((__list_values20___709[0]=(char*)come_increment_ref_count(((char*)(__right_value718=__builtin_string("mem")))),
__list_values20___709[1]=(char*)come_increment_ref_count(((char*)(__right_value719=__builtin_string("sname")))),
__list_values20___709[2]=(char*)come_increment_ref_count(((char*)(__right_value720=__builtin_string("sline")))),
__list_values20___709[3]=(char*)come_increment_ref_count(((char*)(__right_value721=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1678, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values20___709)));
        __right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_711=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1679, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_712=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1680, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_705),(struct sType*)come_increment_ref_count(result_type_706),(struct list$1sTypeph*)come_increment_ref_count(param_types_708),(struct list$1charph*)come_increment_ref_count(param_names_710),(struct list$1charph*)come_increment_ref_count(param_default_parametors_711),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_705)),(struct sFun*)come_increment_ref_count(main_fun_712));
        name_705 = come_decrement_ref_count2(name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_706,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_708,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_710,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_711,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_712,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_713=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_714=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1689, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_715=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1690, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_716=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1691, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_717=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1692, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_718=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1693, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_713),(struct sType*)come_increment_ref_count(result_type_714),(struct list$1voidph*)come_increment_ref_count(param_types_715),(struct list$1charph*)come_increment_ref_count(param_names_716),(struct list$1charph*)come_increment_ref_count(param_default_parametors_717),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_713)),(struct sFun*)come_increment_ref_count(fun_718));
        name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_715,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_716,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_717,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_718,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_719=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_720=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1702, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_721=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1703, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_722=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1704, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_723=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_724=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1706, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_719),(struct sType*)come_increment_ref_count(result_type_720),(struct list$1voidph*)come_increment_ref_count(param_types_721),(struct list$1charph*)come_increment_ref_count(param_names_722),(struct list$1charph*)come_increment_ref_count(param_default_parametors_723),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_719)),(struct sFun*)come_increment_ref_count(fun_724));
        name_719 = come_decrement_ref_count2(name_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_721,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_722,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_724,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_614;
struct list$1sTypeph* __result336__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_614=0;    i_614<num_value;    i_614++    ){
        list$1sTypephp_push_back(self,values[i_614]);
    }
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
struct list_item$1sTypeph* litem_615;
struct sType* __dec_obj179;
void* __right_value457 = (void*)0;
struct list_item$1sTypeph* litem_616;
struct sType* __dec_obj180;
void* __right_value458 = (void*)0;
struct list_item$1sTypeph* litem_617;
struct sType* __dec_obj181;
struct list$1sTypeph* __result335__;
    if(    self->len==0) {
        litem_615=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value456=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1452, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_615->prev=((void*)0);
        litem_615->next=((void*)0);
        __dec_obj179=litem_615->item;
        litem_615->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_615;
        self->head=litem_615;
    }
    else if(    self->len==1) {
        litem_616=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value457=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1462, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_616->prev=self->head;
        litem_616->next=((void*)0);
        __dec_obj180=litem_616->item;
        litem_616->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_616;
        self->head->next=litem_616;
    }
    else {
        litem_617=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value458=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1472, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_617->prev=self->tail;
        litem_617->next=((void*)0);
        __dec_obj181=litem_617->item;
        litem_617->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_617;
        self->tail=litem_617;
    }
    self->len++;
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_618;
struct list_item$1sTypeph* prev_it_619;
    it_618=self->head;
    while(it_618!=((void*)0)) {
        prev_it_619=it_618;
        it_618=it_618->next;
        come_call_finalizer3(prev_it_619,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj182;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj182=self->item;
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_620;
struct list_item$1sTypeph* prev_it_621;
    it_620=self->head;
    while(it_620!=((void*)0)) {
        prev_it_621=it_620;
        it_620=it_620->next;
        come_call_finalizer3(prev_it_621,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result337__;
void* __right_value459 = (void*)0;
struct list$1sTypeph* result_622;
struct list$1sTypeph* __result338__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_622=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_622->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_622->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_622->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_622->it=self->it;
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_622;
    come_call_finalizer3(result_622,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_623;
    result_623=0;
    result_623+=int_get_hash_key(((int)self->head));
    result_623+=int_get_hash_key(((int)self->tail));
    result_623+=int_get_hash_key(((int)self->len));
    result_623+=int_get_hash_key(((int)self->it));
    return result_623;
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
int i_626;
struct list$1charph* __result339__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_626=0;    i_626<num_value;    i_626++    ){
        list$1charphp_push_back(self,values[i_626]);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result340__;
void* __right_value471 = (void*)0;
struct list$1charph* result_627;
struct list$1charph* __result341__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_627=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_627->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_627->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_627->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_627->it=self->it;
    }
    __result341__ = gComeFunResultObject = __result_obj__ = result_627;
    come_call_finalizer3(result_627,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_628;
    result_628=0;
    result_628+=int_get_hash_key(((int)self->head));
    result_628+=int_get_hash_key(((int)self->tail));
    result_628+=int_get_hash_key(((int)self->len));
    result_628+=int_get_hash_key(((int)self->it));
    return result_628;
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
struct sFun* __result342__;
void* __right_value479 = (void*)0;
struct sFun* result_632;
void* __right_value480 = (void*)0;
char* __dec_obj183;
void* __right_value481 = (void*)0;
struct sType* __dec_obj184;
void* __right_value482 = (void*)0;
struct list$1voidph* __dec_obj185;
void* __right_value483 = (void*)0;
struct list$1charph* __dec_obj186;
void* __right_value484 = (void*)0;
struct list$1charph* __dec_obj187;
void* __right_value485 = (void*)0;
struct sType* __dec_obj188;
void* __right_value489 = (void*)0;
struct sBlock* __dec_obj191;
void* __right_value490 = (void*)0;
struct buffer* __dec_obj192;
void* __right_value491 = (void*)0;
struct buffer* __dec_obj193;
void* __right_value492 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value493 = (void*)0;
struct buffer* __dec_obj195;
void* __right_value494 = (void*)0;
char* __dec_obj196;
void* __right_value495 = (void*)0;
char* __dec_obj197;
struct sFun* __result345__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_632=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj183=result_632->mName;
        result_632->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj184=result_632->mResultType;
        result_632->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj185=result_632->mParamTypes;
        result_632->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj185,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj186=result_632->mParamNames;
        result_632->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj186,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj187=result_632->mParamDefaultParametors;
        result_632->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj187,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj188=result_632->mLambdaType;
        result_632->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj191=result_632->mBlock;
        result_632->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj191,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_632->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj192=result_632->mSource;
        result_632->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj192,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj193=result_632->mSourceHead;
        result_632->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj194=result_632->mSourceHead2;
        result_632->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj195=result_632->mSourceDefer;
        result_632->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_632->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_632->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_632->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_632->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_632->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)) {
        result_632->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_632->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj196=result_632->mAttribute;
        result_632->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj197=result_632->mFunAttribute;
        result_632->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_632;
    come_call_finalizer3(result_632,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_631;
    result_631=0;
    result_631+=int_get_hash_key(((int)self->mName));
    result_631+=int_get_hash_key(((int)self->mResultType));
    result_631+=int_get_hash_key(((int)self->mParamTypes));
    result_631+=int_get_hash_key(((int)self->mParamNames));
    result_631+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_631+=int_get_hash_key(((int)self->mLambdaType));
    result_631+=int_get_hash_key(((int)self->mBlock));
    result_631+=int_get_hash_key(((int)self->mExternal));
    result_631+=int_get_hash_key(((int)self->mVarArgs));
    result_631+=int_get_hash_key(((int)self->mSource));
    result_631+=int_get_hash_key(((int)self->mSourceHead));
    result_631+=int_get_hash_key(((int)self->mSourceHead2));
    result_631+=int_get_hash_key(((int)self->mSourceDefer));
    result_631+=int_get_hash_key(((int)self->mStatic));
    result_631+=int_get_hash_key(((int)self->mInline));
    result_631+=int_get_hash_key(((int)self->mUniq));
    result_631+=int_get_hash_key(((int)self->mGenerate));
    result_631+=int_get_hash_key(((int)self->mCloner));
    result_631+=int_get_hash_key(((int)self->mNoResultType));
    result_631+=int_get_hash_key(((int)self->mDeclaredResultObject));
    result_631+=int_get_hash_key(((int)self->mAttribute));
    result_631+=int_get_hash_key(((int)self->mFunAttribute));
    return result_631;
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
    if(    !bool_equals(left->mCloner,right->mCloner)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDeclaredResultObject,right->mDeclaredResultObject)) {
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
struct sBlock* __result343__;
void* __right_value486 = (void*)0;
struct sBlock* result_633;
void* __right_value487 = (void*)0;
struct list$1sNodeph* __dec_obj189;
void* __right_value488 = (void*)0;
struct sVarTable* __dec_obj190;
struct sBlock* __result344__;
    if(    self==(void*)0) {
        __result343__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_633=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj189=result_633->mNodes;
        result_633->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj189,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj190=result_633->mVarTable;
        result_633->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj190,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_633;
    come_call_finalizer3(result_633,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_725;
_Bool is_type_name_flag_726;
int sline_727;
_Bool define_struct_nobody_728;
char* p_729;
int sline_730;
void* __right_value759 = (void*)0;
char* word_731;
_Bool define_function_pointer_result_function_732;
_Bool define_variable_between_brace_733;
char* p_734;
void* __right_value760 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_735=0;
char* fun_name_736=0;
_Bool err_737=0;
void* __right_value761 = (void*)0;
char* word_738;
_Bool define_function_flag_739;
char* p_740;
void* __right_value762 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_741=0;
char* fun_name_742=0;
_Bool err_743=0;
char* word_744;
void* __right_value763 = (void*)0;
char* __dec_obj200;
void* __right_value764 = (void*)0;
char* __dec_obj201;
char* __dec_obj202;
void* __right_value765 = (void*)0;
char* __dec_obj203;
_Bool define_variable_745;
char* p_746;
void* __right_value766 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_747=0;
char* fun_name_748=0;
_Bool err_749=0;
void* __right_value767 = (void*)0;
char* word_750;
void* __right_value768 = (void*)0;
char* word_751;
char* p_752;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* word_753;
void* __right_value772 = (void*)0;
char* __dec_obj204;
void* __right_value773 = (void*)0;
char* word_754;
void* __right_value774 = (void*)0;
char* word_757;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* node_758;
struct sNode* __result347__;
void* __right_value777 = (void*)0;
struct sNode* __result348__;
char* header_head_759;
void* __right_value778 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_760=0;
char* fun_name_761=0;
_Bool err_762=0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1voidph* param_types_763;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1charph* param_names_764;
void* __right_value783 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_765=0;
char* param_name_766=0;
_Bool err_767=0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1voidph* param_types2_772;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1charph* param_names2_773;
void* __right_value793 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_774=0;
char* param_name_775=0;
_Bool err_776=0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
char* header_tail_778;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sType* result_type2_779;
struct sType* __dec_obj208;
void* __right_value798 = (void*)0;
struct list$1voidph* __dec_obj209;
void* __right_value799 = (void*)0;
struct list$1charph* __dec_obj210;
_Bool var_args_780;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct list$1charph* param_default_parametors_781;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sFun* fun_782;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct sFun* fun2_783;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value815 = (void*)0;
struct sNode* __result352__;
void* __right_value816 = (void*)0;
struct sNode* node_785;
struct sNode* __result353__;
void* __right_value817 = (void*)0;
struct sNode* node_786;
struct sNode* __result354__;
void* __right_value818 = (void*)0;
struct sNode* node_787;
char* source_tail_788;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct buffer* header_789;
struct sNode* __result355__;
void* __right_value821 = (void*)0;
char* buf2_790;
void* __right_value822 = (void*)0;
struct sNode* __result356__;
    info->in_top_level=(_Bool)1;
    source_head_725=info->p;
    is_type_name_flag_726=is_type_name(buf,info);
    sline_727=info->sline;
    define_struct_nobody_728=(_Bool)0;
    {
        p_729=info->p;
        sline_730=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_731=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_728=(_Bool)1;
                }
                word_731 = come_decrement_ref_count2(word_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_730;
    }
    define_function_pointer_result_function_732=(_Bool)0;
    define_variable_between_brace_733=(_Bool)0;
    if(    is_type_name_flag_726) {
        p_734=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value760=backtrace_parse_type((_Bool)0,info)));
            result_type_735=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_736=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_737=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value760,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_732=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_738=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_738,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_733=(_Bool)1;
                            }
                        }
                        word_738 = come_decrement_ref_count2(word_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_735,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_736 = come_decrement_ref_count2(fun_name_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_727;
    }
    define_function_flag_739=(_Bool)0;
    if(    is_type_name_flag_726&&!define_function_pointer_result_function_732&&charp_operator_not_equals(buf,"__typeof__")) {
        p_740=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value762=backtrace_parse_type((_Bool)0,info)));
            result_type_741=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_742=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_743=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value762,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_741,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_742 = come_decrement_ref_count2(fun_name_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_744=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj200=word_744;
                word_744=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_744,"extern")) {
                    __dec_obj201=word_744;
                    word_744=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj202=word_744;
                word_744=((void*)0);
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_744) {
                if(                is_type_name(word_744,info)) {
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
                        __dec_obj203=word_744;
                        word_744=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_744)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_726) {
                        define_function_flag_739=(_Bool)1;
                    }
                }
            }
            word_744 = come_decrement_ref_count2(word_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_740;
        info->sline=sline_727;
    }
    define_variable_745=(_Bool)1;
    if(    is_type_name_flag_726&&!define_function_pointer_result_function_732) {
        p_746=info->p;
        info->p=head;
        if(        !is_type_name_flag_726) {
            define_variable_745=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value766=backtrace_parse_type((_Bool)0,info)));
            result_type_747=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_748=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_749=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value766,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_750=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_745=(_Bool)1;
                            }
                        }
                        word_750 = come_decrement_ref_count2(word_750, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_751=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_751,info)&&*info->p!=40) {
                            define_variable_745=(_Bool)1;
                        }
                    }
                    word_751 = come_decrement_ref_count2(word_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_748 = come_decrement_ref_count2(fun_name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_745=(_Bool)0;
        }
        else if(        define_variable_745) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_745=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_745=(_Bool)0;
            }
        }
        info->p=p_746;
        info->sline=sline_727;
    }
    else {
        define_variable_745=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_732) {
        p_752=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value769=parse_struct_attribute(info)));
            __right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value770=parse_word(info)));
                __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_753=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj204=word_753;
                        word_753=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_753,"extends")) {
                            define_variable_745=(_Bool)0;
                        }
                    }
                    word_753 = come_decrement_ref_count2(word_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_745=(_Bool)0;
        }
        else if(        define_variable_745) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_745=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_745=(_Bool)0;
            }
        }
        info->p=p_752;
        info->sline=sline_727;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_754=(char*)come_increment_ref_count(parse_word(info));
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
                    word_757=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_757)));
                    word_757 = come_decrement_ref_count2(word_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_758=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result347__ = gComeFunResultObject = __result_obj__ = node_758;
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_754 = come_decrement_ref_count2(word_754, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result347__;
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_754 = come_decrement_ref_count2(word_754, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_728) {
    }
    else if(    define_variable_between_brace_733) {
        info->p=head;
        info->sline=sline_727;
        __result348__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=parse_global_variable(info)));
        if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    else if(    define_function_pointer_result_function_732) {
        header_head_759=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value778=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_760=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_761=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_762=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value778,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_763=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2030, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            param_names_764=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2031, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value783=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_765=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_766=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_767=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value783,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_767) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_763,(struct sType*)come_increment_ref_count(param_type_765));
                    static int num_function_pointer_result_var_name_a_771=0;
                    list$1charphp_push_back(param_names_764,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_771)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value788=parse_word(info)));
                        __right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_766 = come_decrement_ref_count2(param_name_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_766 = come_decrement_ref_count2(param_name_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_772=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2077, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
                param_names2_773=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2078, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value793=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_774=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_775=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_776=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value793,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_776) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_772,(struct sType*)come_increment_ref_count(param_type_774));
                        static int num_function_pointer_result_var_name_b_777=0;
                        list$1charphp_push_back(param_names2_773,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_777)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value795=parse_word(info)));
                            __right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_774,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_775 = come_decrement_ref_count2(param_name_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_774,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_775 = come_decrement_ref_count2(param_name_775, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_778=info->p;
                result_type2_779=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2120, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj208=result_type2_779->mResultType;
                result_type2_779->mResultType=(struct sType*)come_increment_ref_count(result_type_760);
                come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj209=result_type2_779->mParamTypes;
                result_type2_779->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_772));
                come_call_finalizer3(__dec_obj209,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj210=result_type2_779->mParamNames;
                result_type2_779->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_773));
                come_call_finalizer3(__dec_obj210,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_779->mVarArgs=(_Bool)0;
                result_type2_779->mStatic=(_Bool)0;
                var_args_780=(_Bool)0;
                param_default_parametors_781=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2130, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_782=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2132, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_761)),(struct sType*)come_increment_ref_count(result_type2_779),(struct list$1voidph*)come_increment_ref_count(param_types_763),(struct list$1charph*)come_increment_ref_count(param_names_764),(struct list$1charph*)come_increment_ref_count(param_default_parametors_781),(_Bool)1,var_args_780,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_783=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value807=__builtin_string(fun_name_761)))));
                __right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_783==((void*)0)||fun2_783->mExternal) {
                    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_761)),(struct sFun*)come_increment_ref_count(fun_782));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2145, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value811=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2145, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_782),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result352__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=_inf_value2));
                come_call_finalizer3(param_types2_772,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_779,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_782,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_783,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_763,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_764,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_761 = come_decrement_ref_count2(fun_name_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value811,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result352__;
                come_call_finalizer3(param_types2_772,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_773,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_779,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_782,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_783,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_763,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_764,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_761 = come_decrement_ref_count2(fun_name_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_727;
        node_785=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result353__ = gComeFunResultObject = __result_obj__ = node_785;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result353__;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_739) {
        info->p=head;
        info->sline=sline_727;
        node_786=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_786;
        if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_745) {
        info->p=head;
        info->sline=sline_727;
        node_787=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_788=info->p;
        header_789=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2177, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_789,source_head_725,source_tail_788-source_head_725);
        __result355__ = gComeFunResultObject = __result_obj__ = node_787;
        if(node_787) { node_787 = come_decrement_ref_count2(node_787, ((struct sNode*)node_787)->finalize, ((struct sNode*)node_787)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result355__;
        if(node_787) { node_787 = come_decrement_ref_count2(node_787, ((struct sNode*)node_787)->finalize, ((struct sNode*)node_787)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_727;
    buf2_790=(char*)come_increment_ref_count(parse_word(info));
    __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value822=top_level_v98(buf2_790,head,head_sline,info)));
    buf2_790 = come_decrement_ref_count2(buf2_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value822) { __right_value822 = come_decrement_ref_count2(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj198;
char* __dec_obj199;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj198=self->v1;
            come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj199=self->v2;
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_755;
struct list_item$1charph* prev_it_756;
struct list$1charph* __result346__;
    it_755=self->head;
    while(it_755!=((void*)0)) {
        prev_it_756=it_755;
        it_755=it_755->next;
        come_call_finalizer3(prev_it_756,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value784 = (void*)0;
struct list_item$1voidph* litem_768;
void* __dec_obj205;
void* __right_value785 = (void*)0;
struct list_item$1voidph* litem_769;
void* __dec_obj206;
void* __right_value786 = (void*)0;
struct list_item$1voidph* litem_770;
void* __dec_obj207;
struct list$1voidph* __result349__;
    if(    self->len==0) {
        litem_768=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value784=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_768->prev=((void*)0);
        litem_768->next=((void*)0);
        __dec_obj205=litem_768->item;
        litem_768->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_768;
        self->head=litem_768;
    }
    else if(    self->len==1) {
        litem_769=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value785=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_769->prev=self->head;
        litem_769->next=((void*)0);
        __dec_obj206=litem_769->item;
        litem_769->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_769;
        self->head->next=litem_769;
    }
    else {
        litem_770=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value786=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_770->prev=self->tail;
        litem_770->next=((void*)0);
        __dec_obj207=litem_770->item;
        litem_770->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_770;
        self->tail=litem_770;
    }
    self->len++;
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result350__;
void* __right_value812 = (void*)0;
struct sFunNode* result_784;
void* __right_value813 = (void*)0;
char* __dec_obj211;
void* __right_value814 = (void*)0;
struct sFun* __dec_obj212;
struct sFunNode* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_784=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_784->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_784->sname;
        result_784->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_784->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj212=result_784->mFun;
        result_784->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj212,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_784;
    come_call_finalizer3(result_784,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_791;
int caller_line_792;
char* caller_sname_793;
_Bool comma_instead_of_semicolon_794;
char* last_code_795;
char* __dec_obj213;
char* last_code2_796;
char* __dec_obj214;
void* __right_value823 = (void*)0;
char* sname_top_797;
int sline_top_798;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sFun* funX_799;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct tuple2$2charphbool* __result360__;
void* __right_value830 = (void*)0;
struct sType* result_type_802;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct list$1voidph* param_types_803;
struct list$1voidph* o2_saved_804;
struct sType* it_805;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sType* param_type_806;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct list$1charph* param_names_807;
void* __right_value837 = (void*)0;
struct list$1charph* param_default_parametors_808;
char* p_809;
int sline_810;
char* sname_811;
char* head_812;
struct buffer* source_813;
void* __right_value838 = (void*)0;
struct buffer* __dec_obj219;
struct sType* generics_type_saved_814;
void* __right_value839 = (void*)0;
struct sType* __dec_obj220;
struct list$1charph* method_generics_type_names_815;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct list$1charph* __dec_obj221;
struct list$1charph* o2_saved_816;
char* it_817;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1charph* __dec_obj222;
char* __dec_obj223;
void* __right_value844 = (void*)0;
struct sBlock* block_818;
struct buffer* __dec_obj224;
char* __dec_obj225;
_Bool var_args_819;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sFun* fun_820;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value852 = (void*)0;
struct sNode* node_821;
_Bool in_generics_fun_822;
_Bool Value_823;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct tuple2$2charphbool* __result361__;
struct sType* __dec_obj226;
struct list$1charph* __dec_obj227;
void* __right_value856 = (void*)0;
char* __dec_obj228;
char* __dec_obj229;
char* __dec_obj230;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct tuple2$2charphbool* __result362__;
    caller_fun_791=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_792=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_793=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_794=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_795=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj213=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_796=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj214=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_797=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_798=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_799=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value824=__builtin_string(fun_name)))));
    __right_value824 = come_decrement_ref_count2(__right_value824, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(    funX_799) {
        __result360__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value829=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2216, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value829,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_type_802=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_803=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2221, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_804=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_805=((struct sType*)list$1voidphp_begin((o2_saved_804)));    !list$1voidphp_end((o2_saved_804));    it_805=((struct sType*)list$1voidphp_next((o2_saved_804)))    ){
        param_type_806=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value833=come_call_cloner(sType_clone, it_805))),generics_type,info));
        come_call_finalizer3(__right_value833,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1voidphp_add(param_types_803,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_806)));
        come_call_finalizer3(param_type_806,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_804,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_807=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_808=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_809=info->p;
    sline_810=info->sline;
    sname_811=(char*)come_increment_ref_count(info->sname);
    head_812=info->head;
    source_813=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj219=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_814=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj220=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_815=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj221=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2249, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj221,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_816=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_817=list$1charphp_begin((o2_saved_816));    !list$1charphp_end((o2_saved_816));    it_817=list$1charphp_next((o2_saved_816))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_817)));
    }
    come_call_finalizer3(o2_saved_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj222=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj222,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj223=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_818=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_812;
    __dec_obj224=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_813);
    come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_809;
    info->sline=sline_810;
    __dec_obj225=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_811);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_802->mInline=(_Bool)0;
    result_type_802->mStatic=(_Bool)0;
    result_type_802->mUniq=(_Bool)0;
    var_args_819=generics_fun->mVarArgs;
    fun_820=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2273, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_802),(struct list$1voidph*)come_increment_ref_count(param_types_803),(struct list$1charph*)come_increment_ref_count(param_names_807),(struct list$1charph*)come_increment_ref_count(param_default_parametors_808),(_Bool)0,var_args_819,(struct sBlock*)come_increment_ref_count(block_818),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_820));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2280, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value851=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2280, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_820),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_821=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value851,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_822=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_823=node_compile(node_821,info);
    if(    !Value_823) {
        __result361__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value855=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2285, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_802,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_803,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_808,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_811 = come_decrement_ref_count2(sname_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_814,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_815,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_818,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_820,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value855,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_822;
    __dec_obj226=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_814);
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj227=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_815);
    come_call_finalizer3(__dec_obj227,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj228=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_797));
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_798;
    __dec_obj229=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_795);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj230=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_796);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_791;
    info->caller_line=caller_line_792;
    info->caller_sname=caller_sname_793;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_794;
    __result362__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value859=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2305, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_802,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_803,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_808,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_811 = come_decrement_ref_count2(sname_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_814,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_815,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_818,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_820,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value859,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj215;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj215=self->v1;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result357__;
void* __right_value826 = (void*)0;
struct tuple2$2charphbool* result_800;
void* __right_value827 = (void*)0;
char* __dec_obj216;
struct tuple2$2charphbool* __result358__;
    if(    self==(void*)0) {
        __result357__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    result_800=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj216=result_800->v1;
        result_800->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_800->v2=self->v2;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_800;
    come_call_finalizer3(result_800,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_801;
    result_801=0;
    result_801+=int_get_hash_key(((int)self->v1));
    result_801+=int_get_hash_key(((int)self->v2));
    return result_801;
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
char* __dec_obj217;
struct tuple2$2charphbool* __result359__;
    __dec_obj217=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj218;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj218=self->v1;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_824;
int caller_line_825;
char* caller_sname_826;
_Bool comma_instead_of_semicolon_827;
char* last_code_828;
char* __dec_obj231;
char* last_code2_829;
char* __dec_obj232;
void* __right_value860 = (void*)0;
char* sname_top_830;
int sline_top_831;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sFun* funX_832;
_Bool __result363__;
void* __right_value863 = (void*)0;
struct sType* result_type_833;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct list$1voidph* param_types_834;
struct list$1voidph* o2_saved_835;
struct sType* it_836;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sType* param_type_837;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct list$1charph* param_names_838;
void* __right_value870 = (void*)0;
struct list$1charph* param_default_parametors_839;
char* p_840;
int sline_841;
char* sname_842;
char* head_843;
struct buffer* source_844;
void* __right_value871 = (void*)0;
struct buffer* __dec_obj233;
struct list$1charph* method_generics_type_names_845;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1charph* __dec_obj234;
struct list$1charph* o2_saved_846;
char* it_847;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1charph* __dec_obj235;
char* __dec_obj236;
void* __right_value876 = (void*)0;
struct sBlock* block_848;
struct buffer* __dec_obj237;
char* __dec_obj238;
_Bool generate__849;
_Bool var_args_850;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sFun* fun_851;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value885 = (void*)0;
struct sNode* node_852;
_Bool Value_853;
void* __if_result__1_854 = (void*)0;
_Bool __result364__;
struct list$1charph* __dec_obj239;
void* __right_value886 = (void*)0;
char* __dec_obj240;
char* __dec_obj241;
char* __dec_obj242;
_Bool __result365__;
    caller_fun_824=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_825=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_826=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_827=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_828=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj231=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_829=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj232=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_830=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_831=info->sline;
    funX_832=((struct sFun*)((void*)(__right_value862=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value861=__builtin_string(fun_name)))))));
    __right_value861 = come_decrement_ref_count2(__right_value861, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value862,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    funX_832) {
        __result363__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    result_type_833=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_834=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2334, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_835=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_836=((struct sType*)list$1voidphp_begin((o2_saved_835)));    !list$1voidphp_end((o2_saved_835));    it_836=((struct sType*)list$1voidphp_next((o2_saved_835)))    ){
        param_type_837=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value866=come_call_cloner(sType_clone, it_836))),info));
        come_call_finalizer3(__right_value866,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1voidphp_add(param_types_834,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_837)));
        come_call_finalizer3(param_type_837,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_835,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_838=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_839=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_840=info->p;
    sline_841=info->sline;
    sname_842=(char*)come_increment_ref_count(info->sname);
    head_843=info->head;
    source_844=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_845=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj234=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2356, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj234,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_846=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_847=list$1charphp_begin((o2_saved_846));    !list$1charphp_end((o2_saved_846));    it_847=list$1charphp_next((o2_saved_846))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_847)));
    }
    come_call_finalizer3(o2_saved_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj235=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj236=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_848=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_843;
    __dec_obj237=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_844);
    come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_840;
    info->sline=sline_841;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_842);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_833->mInline=(_Bool)0;
    result_type_833->mStatic=(_Bool)0;
    result_type_833->mUniq=(_Bool)0;
    generate__849=(_Bool)0;
    if(    result_type_833->mGenerate) {
        result_type_833->mGenerate=(_Bool)0;
        generate__849=(_Bool)1;
    }
    var_args_850=generics_fun->mVarArgs;
    fun_851=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2386, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_834)),(struct list$1charph*)come_increment_ref_count(param_names_838),(struct list$1charph*)come_increment_ref_count(param_default_parametors_839),(_Bool)0,var_args_850,(struct sBlock*)come_increment_ref_count(block_848),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__849,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_851));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2393, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value884=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2393, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_851),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_852=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value884,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_853=node_compile(node_852,info);
    if(    !Value_853) {
        __result364__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_834,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_842 = come_decrement_ref_count2(sname_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_844,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_851,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result364__;
    }
    else {
        __if_result__1_854=(void*)(Value_853);
;
    }
    __dec_obj239=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_845);
    come_call_finalizer3(__dec_obj239,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_830));
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_831;
    __dec_obj241=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_828);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_829);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_824;
    info->caller_line=caller_line_825;
    info->caller_sname=caller_sname_826;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_827;
    __result365__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_830 = come_decrement_ref_count2(sname_top_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_834,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_838,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_842 = come_decrement_ref_count2(sname_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_844,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_848,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_851,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result365__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_855;
char* source_head_856;
void* __right_value887 = (void*)0;
char* attribute_857;
struct sType* result_type_858;
char* var_name_859;
_Bool constructor__860;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sType* __dec_obj243;
void* __right_value890 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_861=0;
char* var_name2_862=0;
_Bool err_863=0;
struct sType* __dec_obj244;
char* __dec_obj245;
_Bool method_definition_864;
char* p_865;
int sline_866;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct buffer* buf2_867;
char* fun_name_868;
char* base_fun_name_869;
void* __right_value893 = (void*)0;
char* __dec_obj246;
void* __right_value894 = (void*)0;
char* __dec_obj247;
void* __right_value895 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_870=0;
char* name_871=0;
_Bool err_872=0;
void* __right_value896 = (void*)0;
char* __dec_obj248;
void* __right_value897 = (void*)0;
char* __dec_obj249;
void* __right_value898 = (void*)0;
char* __dec_obj250;
void* __right_value899 = (void*)0;
char* __dec_obj251;
void* __right_value900 = (void*)0;
char* __dec_obj252;
void* __right_value901 = (void*)0;
char* __dec_obj253;
void* __right_value902 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1voidph* param_types_873=0;
struct list$1charph* param_names_874=0;
struct list$1charph* param_default_parametors_875=0;
_Bool var_args_876=0;
char* header_tail_877;
int version_878;
int n_879;
_Bool in_top_level_880;
void* __right_value903 = (void*)0;
struct sBlock* block_881;
void* __right_value904 = (void*)0;
char* fun_name_883;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sFun* fun_884;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun2_885;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value917 = (void*)0;
struct sNode* __result368__;
void* __right_value918 = (void*)0;
char* none_generics_name_887;
void* __right_value919 = (void*)0;
char* generics_sname_888;
int generics_sline_889;
void* __right_value920 = (void*)0;
char* block_890;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct sGenericsFun* fun_893;
void* __right_value938 = (void*)0;
char* fun_name3_894;
void* __right_value939 = (void*)0;
struct sNode* __result371__;
void* __right_value940 = (void*)0;
char* generics_sname_895;
int generics_sline_896;
void* __right_value941 = (void*)0;
char* block_897;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sGenericsFun* fun_898;
void* __right_value948 = (void*)0;
char* fun_name3_899;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sNode* __result372__;
char* source_tail_900;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct buffer* header_901;
void* __right_value953 = (void*)0;
char* name_902;
void* __right_value954 = (void*)0;
char* name_903;
int i_904;
void* __right_value955 = (void*)0;
struct sType* param_type_905;
void* __right_value956 = (void*)0;
char* param_name_906;
void* __right_value957 = (void*)0;
char* default_parametor_907;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
char* impl_name_908;
void* __right_value961 = (void*)0;
char* result_type_name_909;
void* __right_value962 = (void*)0;
char* impl_name_910;
void* __right_value963 = (void*)0;
char* result_type_name_911;
int i_912;
void* __right_value964 = (void*)0;
struct sType* param_type_913;
void* __right_value965 = (void*)0;
char* param_name_914;
void* __right_value966 = (void*)0;
char* default_parametor_915;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
char* new_fun_name_916;
void* __right_value971 = (void*)0;
char* id_917;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
char* id_918;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sBlock* block_919;
_Bool static_fun_920;
_Bool inline_fun_921;
_Bool uniq_fun_922;
_Bool generate_fun_923;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
char* new_fun_name_924;
void* __right_value978 = (void*)0;
char* __dec_obj268;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sFun* fun_925;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct sFun* fun2_926;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value990 = (void*)0;
struct sNode* __result373__;
void* __right_value991 = (void*)0;
char* new_fun_name_927;
void* __right_value992 = (void*)0;
char* __dec_obj269;
char* source_tail_928;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct buffer* header_929;
_Bool result_type_static_930;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sFun* fun_931;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sFun* fun2_932;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
char* id_933;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1006 = (void*)0;
struct sNode* __result374__;
void* __right_value1007 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_934=0;
char* fun_attribute_935=0;
void* __right_value1008 = (void*)0;
char* __dec_obj270;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct buffer* header_936;
char* source_tail_937;
_Bool result_type_static_938;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sFun* fun_939;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun2_940;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
char* id_941;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1021 = (void*)0;
struct sNode* __result375__;
struct sNode* __result376__;
fun_name_868 = (void*)0;
    header_head_855=info->p;
    source_head_856=info->p;
    attribute_857=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_858=((void*)0);
    var_name_859=((void*)0);
    constructor__860=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value888=parse_word(info)));
        __right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj243=result_type_858;
        result_type_858=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_858->mHeap=(_Bool)1;
        constructor__860=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value890=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_861=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_862=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_863=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value890,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj244=result_type_858;
        result_type_858=(struct sType*)come_increment_ref_count(result_type2_861);
        come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj245=var_name_859;
        var_name_859=(char*)come_increment_ref_count(var_name2_862);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_863) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_862 = come_decrement_ref_count2(var_name2_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_864=(_Bool)0;
    {
        p_865=info->p;
        sline_866=info->sline;
        buf2_867=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2459, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_867,*info->p);
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
        if(        buffer_length(buf2_867)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_864=(_Bool)1;
        }
        info->p=p_865;
        info->sline=sline_866;
        come_call_finalizer3(buf2_867,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_869=((void*)0);
    if(    constructor__860) {
        __dec_obj246=base_fun_name_869;
        base_fun_name_869=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=fun_name_868;
        fun_name_868=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_869,info,(_Bool)1));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_864) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value895=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_870=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_871=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_872=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value895,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_872) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj248=base_fun_name_869;
        base_fun_name_869=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj249=fun_name_868;
        fun_name_868=(char*)come_increment_ref_count(create_method_name(obj_type_870,(_Bool)0,base_fun_name_869,info,(_Bool)1));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_870,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_871 = come_decrement_ref_count2(name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj250=base_fun_name_869;
        base_fun_name_869=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj251=fun_name_868;
        fun_name_868=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_869,info,(_Bool)1));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj252=fun_name_868;
        fun_name_868=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=base_fun_name_869;
        base_fun_name_869=(char*)come_increment_ref_count(__builtin_string(fun_name_868));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_869,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value902=parse_params(info,constructor__860)));
    param_types_873=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_874=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_875=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_876=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value902,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_877=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_869,"initialize")) {
        info->in_class=(_Bool)1;
    }
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
    if(    charp_operator_equals(base_fun_name_869,"lambda")) {
        block_881=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_882=0;
        lambda_num_882++;
        fun_name_883=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_882));
        result_type_858->mInline=(_Bool)0;
        result_type_858->mStatic=(_Bool)0;
        result_type_858->mUniq=(_Bool)0;
        result_type_858->mGenerate=(_Bool)0;
        fun_884=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2558, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_883)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),(_Bool)0,var_args_876,(struct sBlock*)come_increment_ref_count(block_881),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_885=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value910=__builtin_string(fun_name_883)))));
        __right_value910 = come_decrement_ref_count2(__right_value910, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_885==((void*)0)||fun2_885->mExternal) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_883)),(struct sFun*)come_increment_ref_count(fun_884));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2568, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value914=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2568, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_884,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value917=_inf_value5));
        come_call_finalizer3(block_881,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_883 = come_decrement_ref_count2(fun_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_885,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value914,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value917) { __right_value917 = come_decrement_ref_count2(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(block_881,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_883 = come_decrement_ref_count2(fun_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_885,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_887=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_888=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_889=info->sline;
        block_890=(char*)come_increment_ref_count(skip_block(info));
        fun_893=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2578, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value933=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value934=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),var_args_876,(char*)come_increment_ref_count(block_890),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_888)),generics_sline_889));
        come_call_finalizer3(__right_value933,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value934,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_894=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_887,base_fun_name_869));
        map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_894)),(struct sGenericsFun*)come_increment_ref_count(fun_893));
        __result371__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_887 = come_decrement_ref_count2(none_generics_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_888 = come_decrement_ref_count2(generics_sname_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_890 = come_decrement_ref_count2(block_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result371__;
        none_generics_name_887 = come_decrement_ref_count2(none_generics_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_888 = come_decrement_ref_count2(generics_sname_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_890 = come_decrement_ref_count2(block_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_895=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_896=info->sline;
        block_897=(char*)come_increment_ref_count(skip_block(info));
        fun_898=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2592, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value943=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value944=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),var_args_876,(char*)come_increment_ref_count(block_897),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_895)),generics_sline_896));
        come_call_finalizer3(__right_value943,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value944,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_899=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_869));
        if(        method_definition_864) {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sGenericsFun*)come_increment_ref_count(fun_898));
        }
        else {
            map$2voidphvoidphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_899)),(struct sGenericsFun*)come_increment_ref_count(fun_898));
        }
        __result372__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_895 = come_decrement_ref_count2(generics_sname_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_897 = come_decrement_ref_count2(block_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_898,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_899 = come_decrement_ref_count2(fun_name3_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
        generics_sname_895 = come_decrement_ref_count2(generics_sname_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_897 = come_decrement_ref_count2(block_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_898,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_899 = come_decrement_ref_count2(fun_name3_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_900=info->p-1;
        header_901=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2608, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__860) {
            if(            list$1voidphp_length(param_types_873)==1) {
                name_902=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_901,"extern %s*%% %s*::initialize(%s*%% self);\n",name_902,name_902,name_902);
                name_902 = come_decrement_ref_count2(name_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_903=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_901,"extern %s*%% %s*::initialize(%s*%% self, ",name_903,name_903,name_903);
                for(                i_904=1;                i_904<list$1voidphp_length(param_types_873);                i_904++                ){
                    param_type_905=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_873,i_904));
                    param_name_906=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_874,i_904));
                    default_parametor_907=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_875,i_904));
                    if(                    default_parametor_907) {
                        buffer_append_format(header_901,"extern %s %s=%s",((char*)(__right_value958=make_come_type_name_string_no_solved(param_type_905,(_Bool)0,info))),param_name_906,default_parametor_907);
                        __right_value958 = come_decrement_ref_count2(__right_value958, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_901,"extern %s %s",((char*)(__right_value959=make_come_type_name_string_no_solved(param_type_905,(_Bool)0,info))),param_name_906);
                        __right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_904!=list$1voidphp_length(param_types_873)-1) {
                        buffer_append_str(header_901,",");
                    }
                    come_call_finalizer3(param_type_905,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_906 = come_decrement_ref_count2(param_name_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_907 = come_decrement_ref_count2(default_parametor_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_901,");\n");
                name_903 = come_decrement_ref_count2(name_903, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_873)==1) {
                impl_name_908=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_909=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_858,(_Bool)0,info));
                buffer_append_format(header_901,"extern %s %s*::%s(%s* self);\n",result_type_name_909,impl_name_908,base_fun_name_869,impl_name_908);
                impl_name_908 = come_decrement_ref_count2(impl_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_909 = come_decrement_ref_count2(result_type_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_910=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_911=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_858,(_Bool)0,info));
                buffer_append_format(header_901,"extern %s %s*::%s(%s* self, ",result_type_name_911,impl_name_910,base_fun_name_869,impl_name_910);
                for(                i_912=1;                i_912<list$1voidphp_length(param_types_873);                i_912++                ){
                    param_type_913=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_873,i_912));
                    param_name_914=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_874,i_912));
                    default_parametor_915=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_875,i_912));
                    if(                    default_parametor_915) {
                        buffer_append_format(header_901,"extern %s %s=%s",((char*)(__right_value967=make_come_type_name_string_no_solved(param_type_913,(_Bool)0,info))),param_name_914,default_parametor_915);
                        __right_value967 = come_decrement_ref_count2(__right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_901,"extern %s %s",((char*)(__right_value968=make_come_type_name_string_no_solved(param_type_913,(_Bool)0,info))),param_name_914);
                        __right_value968 = come_decrement_ref_count2(__right_value968, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_912!=list$1voidphp_length(param_types_873)-1) {
                        buffer_append_str(header_901,",");
                    }
                    come_call_finalizer3(param_type_913,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_914 = come_decrement_ref_count2(param_name_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_915 = come_decrement_ref_count2(default_parametor_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_901,");\n");
                impl_name_910 = come_decrement_ref_count2(impl_name_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_911 = come_decrement_ref_count2(result_type_name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_901,source_head_856,source_tail_900-source_head_856);
            buffer_append_str(header_901,";\n");
        }
        if(        !result_type_858->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_878>0) {
                    new_fun_name_916=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value969=__builtin_string(fun_name_868))),version_878));
                    __right_value969 = come_decrement_ref_count2(__right_value969, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    id_917=(char*)come_increment_ref_count(__builtin_string(new_fun_name_916));
                    add_come_code_at_come_header(info,id_917,"%s",((char*)(__right_value972=buffer_to_string(header_901))));
                    __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_916 = come_decrement_ref_count2(new_fun_name_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    id_917 = come_decrement_ref_count2(id_917, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    id_918=(char*)come_increment_ref_count(__builtin_string(fun_name_868));
                    add_come_code_at_come_header(info,id_918,"%s",((char*)(__right_value974=buffer_to_string(header_901))));
                    __right_value974 = come_decrement_ref_count2(__right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    id_918 = come_decrement_ref_count2(id_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        block_919=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__860,(_Bool)1));
        static_fun_920=(_Bool)0;
        if(        result_type_858->mStatic) {
            result_type_858->mStatic=(_Bool)0;
            result_type_858->mUniq=(_Bool)0;
            static_fun_920=(_Bool)1;
        }
        inline_fun_921=(_Bool)0;
        if(        result_type_858->mInline) {
            result_type_858->mInline=(_Bool)0;
            result_type_858->mUniq=(_Bool)0;
            inline_fun_921=(_Bool)1;
        }
        uniq_fun_922=(_Bool)0;
        if(        result_type_858->mUniq) {
            result_type_858->mUniq=(_Bool)0;
            result_type_858->mInline=(_Bool)0;
            result_type_858->mStatic=(_Bool)0;
            uniq_fun_922=(_Bool)1;
        }
        generate_fun_923=(_Bool)0;
        if(        result_type_858->mUniq) {
            result_type_858->mUniq=(_Bool)0;
            result_type_858->mInline=(_Bool)0;
            result_type_858->mStatic=(_Bool)0;
            generate_fun_923=(_Bool)1;
        }
        if(        version_878>0) {
            new_fun_name_924=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value976=__builtin_string(fun_name_868))),version_878));
            __right_value976 = come_decrement_ref_count2(__right_value976, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj268=fun_name_868;
            fun_name_868=(char*)come_increment_ref_count(__builtin_string(new_fun_name_924));
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_924 = come_decrement_ref_count2(new_fun_name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_925=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2726, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),(_Bool)0,var_args_876,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_919)),static_fun_920,info,inline_fun_921,uniq_fun_922,generate_fun_923,(char*)come_increment_ref_count(attribute_857),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sFun*)come_increment_ref_count(fun_925));
        }
        else {
            fun2_926=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value985=__builtin_string(fun_name_868)))));
            __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_926==((void*)0)||fun2_926->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sFun*)come_increment_ref_count(fun_925));
            }
            come_call_finalizer3(fun2_926,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2744, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value989=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2744, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_925),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value990=_inf_value6));
        come_call_finalizer3(header_901,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_919,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value989,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value990) { __right_value990 = come_decrement_ref_count2(__right_value990, ((struct sNode*)__right_value990)->finalize, ((struct sNode*)__right_value990)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        come_call_finalizer3(header_901,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_919,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_878>0) {
            new_fun_name_927=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_868,version_878));
            __dec_obj269=fun_name_868;
            fun_name_868=(char*)come_increment_ref_count(__builtin_string(new_fun_name_927));
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_927 = come_decrement_ref_count2(new_fun_name_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_928=info->p;
            header_929=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2757, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_929,source_head_856,source_tail_928-source_head_856);
            skip_spaces_and_lf(info);
            result_type_static_930=result_type_858->mStatic;
            result_type_858->mStatic=(_Bool)0;
            result_type_858->mUniq=(_Bool)0;
            result_type_858->mInline=(_Bool)0;
            result_type_858->mGenerate=(_Bool)0;
            fun_931=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2768, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),(_Bool)1,var_args_876,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_857),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_932=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value999=__builtin_string(fun_name_868)))));
            __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_932==((void*)0)||fun2_932->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sFun*)come_increment_ref_count(fun_931));
            }
            if(            !result_type_static_930) {
                if(                !info->no_output_come_code) {
                    id_933=(char*)come_increment_ref_count(__builtin_string(fun_name_868));
                    add_come_code_at_come_header(info,id_933,"%s",((char*)(__right_value1003=buffer_to_string(header_929))));
                    __right_value1003 = come_decrement_ref_count2(__right_value1003, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    id_933 = come_decrement_ref_count2(id_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2788, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1005=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2788, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_931),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1006=_inf_value7));
            come_call_finalizer3(header_929,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1005,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1006) { __right_value1006 = come_decrement_ref_count2(__right_value1006, ((struct sNode*)__right_value1006)->finalize, ((struct sNode*)__right_value1006)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result374__;
            come_call_finalizer3(header_929,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1007=parse_function_attribute(info)));
            asm_fun_934=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_935=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1007,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_934,"")) {
                __dec_obj270=fun_name_868;
                fun_name_868=(char*)come_increment_ref_count(__builtin_string(asm_fun_934));
                __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2797, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_937=info->p;
                buffer_append(header_936,source_head_856,source_tail_937-source_head_856);
                skip_spaces_and_lf(info);
            }
            result_type_static_938=result_type_858->mStatic;
            result_type_858->mStatic=(_Bool)0;
            result_type_858->mUniq=(_Bool)0;
            result_type_858->mInline=(_Bool)0;
            result_type_858->mGenerate=(_Bool)0;
            fun_939=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2811, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sType*)come_increment_ref_count(result_type_858),(struct list$1voidph*)come_increment_ref_count(param_types_873),(struct list$1charph*)come_increment_ref_count(param_names_874),(struct list$1charph*)come_increment_ref_count(param_default_parametors_875),(_Bool)1,var_args_876,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_857),(char*)come_increment_ref_count(fun_attribute_935)));
            fun2_940=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1014=__builtin_string(fun_name_868)))));
            __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_940==((void*)0)||fun2_940->mExternal) {
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_868)),(struct sFun*)come_increment_ref_count(fun_939));
            }
            if(            !result_type_static_938) {
                if(                !info->no_output_come_code) {
                    id_941=(char*)come_increment_ref_count(__builtin_string(fun_name_868));
                    add_come_code_at_come_header(info,id_941,"%s",((char*)(__right_value1018=buffer_to_string(header_936))));
                    __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    id_941 = come_decrement_ref_count2(id_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2832, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1020=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2832, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_939),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1021=_inf_value8));
            asm_fun_934 = come_decrement_ref_count2(asm_fun_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_935 = come_decrement_ref_count2(fun_attribute_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_939,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1020,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1021) { __right_value1021 = come_decrement_ref_count2(__right_value1021, ((struct sNode*)__right_value1021)->finalize, ((struct sNode*)__right_value1021)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
            asm_fun_934 = come_decrement_ref_count2(asm_fun_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_935 = come_decrement_ref_count2(fun_attribute_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_939,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_940,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_880;
    __result376__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_857 = come_decrement_ref_count2(attribute_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_858,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_859 = come_decrement_ref_count2(var_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_868 = come_decrement_ref_count2(fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_869 = come_decrement_ref_count2(base_fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_873,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_874,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj254;
struct list$1charph* __dec_obj255;
struct list$1charph* __dec_obj256;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj254=self->v1;
            come_call_finalizer3(__dec_obj254,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj255=self->v2;
            come_call_finalizer3(__dec_obj255,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj256=self->v3;
            come_call_finalizer3(__dec_obj256,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result366__;
void* __right_value915 = (void*)0;
struct sLambdaNode* result_886;
void* __right_value916 = (void*)0;
char* __dec_obj257;
struct sLambdaNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_886=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_886->sname;
        result_886->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_886->mFun=self->mFun;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
void* __result_obj__=(void*)0;
struct sGenericsFun* __result369__;
void* __right_value921 = (void*)0;
struct sGenericsFun* result_892;
void* __right_value922 = (void*)0;
struct sType* __dec_obj258;
void* __right_value923 = (void*)0;
struct list$1charph* __dec_obj259;
void* __right_value924 = (void*)0;
struct list$1charph* __dec_obj260;
void* __right_value925 = (void*)0;
char* __dec_obj261;
void* __right_value926 = (void*)0;
struct sType* __dec_obj262;
void* __right_value927 = (void*)0;
struct list$1voidph* __dec_obj263;
void* __right_value928 = (void*)0;
struct list$1charph* __dec_obj264;
void* __right_value929 = (void*)0;
struct list$1charph* __dec_obj265;
void* __right_value930 = (void*)0;
char* __dec_obj266;
void* __right_value931 = (void*)0;
char* __dec_obj267;
struct sGenericsFun* __result370__;
    if(    self==(void*)0) {
        __result369__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    result_892=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj258=result_892->mImplType;
        result_892->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj259=result_892->mGenericsTypeNames;
        result_892->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj259,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj260=result_892->mMethodGenericsTypeNames;
        result_892->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj260,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj261=result_892->mName;
        result_892->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj262=result_892->mResultType;
        result_892->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj263=result_892->mParamTypes;
        result_892->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj263,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj264=result_892->mParamNames;
        result_892->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj264,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj265=result_892->mParamDefaultParametors;
        result_892->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj265,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj266=result_892->mBlock;
        result_892->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_892->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_892->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj267=result_892->mGenericsSName;
        result_892->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->mGenericsSLine=self->mGenericsSLine;
    }
    __result370__ = gComeFunResultObject = __result_obj__ = result_892;
    come_call_finalizer3(result_892,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_891;
    result_891=0;
    result_891+=int_get_hash_key(((int)self->mImplType));
    result_891+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_891+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_891+=int_get_hash_key(((int)self->mName));
    result_891+=int_get_hash_key(((int)self->mResultType));
    result_891+=int_get_hash_key(((int)self->mParamTypes));
    result_891+=int_get_hash_key(((int)self->mParamNames));
    result_891+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_891+=int_get_hash_key(((int)self->mBlock));
    result_891+=int_get_hash_key(((int)self->mSLine));
    result_891+=int_get_hash_key(((int)self->mVarArgs));
    result_891+=int_get_hash_key(((int)self->mGenerate));
    result_891+=int_get_hash_key(((int)self->mGenericsSName));
    result_891+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_891;
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
char* __dec_obj271;
char* last_code2_943;
char* __dec_obj272;
_Bool comma_instead_of_semicolon_944;
struct sClass* current_stack_frame_struct_945;
char* real_fun_name_946;
struct sFun* finalizer_947;
void* __right_value1022 = (void*)0;
struct sType* type_before_948;
void* __right_value1023 = (void*)0;
struct sType* type2_949;
void* __right_value1024 = (void*)0;
char* fun_name2_950;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
char* none_generics_name_951;
void* __right_value1027 = (void*)0;
char* generics_fun_name_952;
void* __right_value1028 = (void*)0;
struct sGenericsFun* generics_fun_953;
void* __right_value1029 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_954=0;
_Bool err_955=0;
void* __right_value1030 = (void*)0;
char* __dec_obj273;
int i_956;
void* __right_value1031 = (void*)0;
char* new_fun_name_957;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
char* __dec_obj274;
void* __right_value1034 = (void*)0;
char* __dec_obj275;
void* __right_value1035 = (void*)0;
char* __dec_obj276;
void* __right_value1036 = (void*)0;
char* user_real_fun_name_958;
void* __right_value1037 = (void*)0;
struct sFun* user_finalizer_959;
void* __right_value1038 = (void*)0;
struct sType* type2_960;
struct sClass* klass_961;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct buffer* source_962;
void* __right_value1041 = (void*)0;
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
struct buffer* __dec_obj277;
void* __right_value1042 = (void*)0;
char* __dec_obj278;
void* __right_value1043 = (void*)0;
struct sBlock* block_975;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sType* result_type_976;
void* __right_value1046 = (void*)0;
char* name_977;
void* __right_value1047 = (void*)0;
struct sType* self_type_978;
struct sType* __list_values21___980[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1voidph* param_types_979;
void* __right_value1050 = (void*)0;
char* __list_values22___981[1];
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct list$1charph* param_names_982;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1charph* param_default_parametors_983;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct sFun* fun2_984;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
void* __right_value1060 = (void*)0;
struct sFun* fun_985;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1064 = (void*)0;
struct sNode* node_986;
_Bool Value_987;
struct buffer* __dec_obj279;
char* __dec_obj280;
char* __dec_obj281;
char* __dec_obj282;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct tuple2$2sFunpcharph* __result380__;
memset(&i_956, 0, sizeof(int));
    last_code_942=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj271=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_943=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj272=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        finalizer_947=((struct sFun*)((void*)(__right_value1025=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_950))));
        come_call_finalizer3(__right_value1025,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_947==((void*)0)) {
            none_generics_name_951=(char*)come_increment_ref_count(get_none_generics_name(type2_949->mClass->mName));
            generics_fun_name_952=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_951,fun_name));
            generics_fun_953=((struct sGenericsFun*)((void*)(__right_value1028=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_952))));
            come_call_finalizer3(__right_value1028,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_953) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1029=create_generics_fun((char*)come_increment_ref_count(fun_name2_950),generics_fun_953,type,info)));
                name_954=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_955=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1029,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_955) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_947=((struct sFun*)((void*)(__right_value1030=map$2voidphvoidphp_operator_load_element(info->funcs,name_954))));
                come_call_finalizer3(__right_value1030,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_954 = come_decrement_ref_count2(name_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_951 = come_decrement_ref_count2(none_generics_name_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_952 = come_decrement_ref_count2(generics_fun_name_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj273=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(fun_name2_950);
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_956=128-1;        i_956>=1;        i_956--        ){
            new_fun_name_957=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_950,i_956));
            finalizer_947=((struct sFun*)((void*)(__right_value1032=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_957))));
            come_call_finalizer3(__right_value1032,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_947) {
                __dec_obj274=fun_name2_950;
                fun_name2_950=(char*)come_increment_ref_count(__builtin_string(new_fun_name_957));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_957 = come_decrement_ref_count2(new_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_957 = come_decrement_ref_count2(new_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_947==((void*)0)) {
            finalizer_947=((struct sFun*)((void*)(__right_value1034=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_950))));
            come_call_finalizer3(__right_value1034,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj275=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(fun_name2_950);
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_947==((void*)0)) {
        type=type_before_948;
        __dec_obj276=real_fun_name_946;
        real_fun_name_946=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_958=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_959=((struct sFun*)((void*)(__right_value1037=map$2voidphvoidphp_operator_load_element(info->funcs,user_real_fun_name_958))));
        come_call_finalizer3(__right_value1037,(void*)0, 0, 1, 0, 0, __result_obj__);
        type2_960=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_960;
        klass_961=type->mClass;
        if(        type->mPointerNum>0&&klass_961->mStruct||type->mAllocaValue) {
            source_962=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2932, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_962,123);
            if(            user_finalizer_959) {
                char source2_963[1024];
                memset(&source2_963, 0, sizeof(char)                *(1024)                );
                snprintf(source2_963,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_958);
                buffer_append_str(source_962,source2_963);
            }
            klass_961=((struct sClass*)((void*)(__right_value1041=map$2voidphvoidphp_operator_load_element(info->classes,klass_961->mName))));
            come_call_finalizer3(__right_value1041,(void*)0, 0, 1, 0, 0, __result_obj__);
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
            __dec_obj277=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_962);
            come_call_finalizer3(__dec_obj277,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_962->buf;
            info->head=source_962->buf;
            __dec_obj278=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_946));
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_975=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_976=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2981, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
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
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2991, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values21___980)));
            param_names_982=(struct list$1charph*)come_increment_ref_count((__list_values22___981[0]=(char*)come_increment_ref_count(((char*)(__right_value1050=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2992, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values22___981)));
            __right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_983=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2993, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_983,((void*)0));
            result_type_976->mStatic=(_Bool)0;
            result_type_976->mUniq=(_Bool)0;
            result_type_976->mInline=(_Bool)0;
            result_type_976->mGenerate=(_Bool)0;
            fun2_984=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1055=__builtin_string(name_977)))));
            __right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_984==((void*)0)||fun2_984->mExternal) {
                fun_985=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3003, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_977),(struct sType*)come_increment_ref_count(result_type_976),(struct list$1voidph*)come_increment_ref_count(param_types_979),(struct list$1charph*)come_increment_ref_count(param_names_982),(struct list$1charph*)come_increment_ref_count(param_default_parametors_983),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_975),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_977)),(struct sFun*)come_increment_ref_count(fun_985));
                finalizer_947=fun_985;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3013, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1063=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3013, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_985),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_986=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1063,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_987=node_compile(node_986,info);
                if(                !Value_987) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_985,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_986) { node_986 = come_decrement_ref_count2(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_947=fun2_984;
            }
            __dec_obj279=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_974);
            come_call_finalizer3(__dec_obj279,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_970;
            info->head=head_973;
            info->sline=sline_971;
            __dec_obj280=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_972);
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            come_call_finalizer3(fun2_984,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_958 = come_decrement_ref_count2(user_real_fun_name_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_960,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_945;
    __dec_obj281=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_942);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj282=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_943);
    __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_944;
    __result380__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1068=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3038, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),finalizer_947,(char*)come_increment_ref_count(real_fun_name_946))));
    last_code_942 = come_decrement_ref_count2(last_code_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_943 = come_decrement_ref_count2(last_code2_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_946 = come_decrement_ref_count2(real_fun_name_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_948,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_949,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_950 = come_decrement_ref_count2(fun_name2_950, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1068,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj283;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj283=self->v2;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result377__;
void* __right_value1065 = (void*)0;
struct tuple2$2sFunpcharph* result_988;
void* __right_value1066 = (void*)0;
char* __dec_obj284;
struct tuple2$2sFunpcharph* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_988=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_988->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj284=result_988->v2;
        result_988->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_988;
    come_call_finalizer3(result_988,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_989;
    result_989=0;
    result_989+=int_get_hash_key(((int)self->v1));
    result_989+=int_get_hash_key(((int)self->v2));
    return result_989;
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
char* __dec_obj285;
struct tuple2$2sFunpcharph* __result379__;
    self->v1=v1;
    __dec_obj285=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result379__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj286;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj286=self->v2;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_990;
char* __dec_obj287;
char* last_code2_991;
char* __dec_obj288;
_Bool comma_instead_of_semicolon_992;
struct sClass* current_stack_frame_struct_993;
struct sFun* equaler_994;
void* __right_value1069 = (void*)0;
char* real_fun_name_995;
void* __right_value1070 = (void*)0;
struct sType* type2_996;
struct sClass* klass_997;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct buffer* source_998;
char* name_999;
void* __right_value1073 = (void*)0;
struct list$1voidph* o2_saved_1001;
struct tuple2$2charphsTypeph* it_1002;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1003=0;
struct sType* field_type_1004=0;
char* p_1006;
int sline_1007;
char* sname_1008;
char* head_1009;
struct buffer* source3_1010;
struct buffer* __dec_obj289;
void* __right_value1074 = (void*)0;
char* __dec_obj290;
void* __right_value1075 = (void*)0;
struct sBlock* block_1011;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct sType* result_type_1012;
void* __right_value1078 = (void*)0;
char* name_1013;
void* __right_value1079 = (void*)0;
struct sType* left_type_1014;
void* __right_value1080 = (void*)0;
struct sType* right_type_1015;
struct sType* __list_values23___1017[2];
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct list$1voidph* param_types_1016;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
char* __list_values24___1018[2];
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct list$1charph* param_names_1019;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1charph* param_default_parametors_1020;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct sFun* fun2_1021;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct sFun* fun_1022;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1098 = (void*)0;
struct sNode* node_1023;
_Bool Value_1024;
struct buffer* __dec_obj291;
char* __dec_obj292;
char* __dec_obj293;
char* __dec_obj294;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct tuple2$2sFunpcharph* __result381__;
    last_code_990=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj287=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_991=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj288=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_992=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_993=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_994=((void*)0);
    real_fun_name_995=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_996=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_996;
    klass_997=type->mClass;
    if(    type->mPointerNum>0&&!klass_997->mNumber) {
        source_998=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3064, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_998,123);
        if(        klass_997->mProtocol) {
            name_999="_protocol_obj";
            char source2_1000[1024];
            memset(&source2_1000, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1000,1024,"return left.%s.equals(right.%s);\n",name_999,name_999);
            buffer_append_str(source_998,source2_1000);
        }
        else {
            klass_997=((struct sClass*)((void*)(__right_value1073=map$2voidphvoidphp_operator_load_element(info->classes,klass_997->mName))));
            come_call_finalizer3(__right_value1073,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1001=(struct list$1voidph*)come_increment_ref_count((klass_997->mFields)),it_1002=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1001)));            !list$1voidphp_end((o2_saved_1001));            it_1002=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1001)))            ){
                multiple_assign_var13=it_1002;
                name_1003=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1004=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1005[1024];
                memset(&source2_1005, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1005,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1003,name_1003,name_1003);
                buffer_append_str(source_998,source2_1005);
                name_1003 = come_decrement_ref_count2(name_1003, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1004,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1001,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_998,"return true;");
        buffer_append_char(source_998,125);
        p_1006=info->p;
        sline_1007=info->sline;
        sname_1008=(char*)come_increment_ref_count(info->sname);
        head_1009=info->head;
        source3_1010=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj289=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_998);
        come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_998->buf;
        info->head=source_998->buf;
        __dec_obj290=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_995));
        __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1011=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1012=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3104, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1013=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_995));
        left_type_1014=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1014->mHeap=(_Bool)0;
        right_type_1015=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1015->mHeap=(_Bool)0;
        param_types_1016=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1017[0]=(struct sType*)come_increment_ref_count(left_type_1014),
__list_values23___1017[1]=(struct sType*)come_increment_ref_count(right_type_1015),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3110, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values23___1017)));
        param_names_1019=(struct list$1charph*)come_increment_ref_count((__list_values24___1018[0]=(char*)come_increment_ref_count(((char*)(__right_value1083=__builtin_string("left")))),
__list_values24___1018[1]=(char*)come_increment_ref_count(((char*)(__right_value1084=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3111, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values24___1018)));
        __right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1084 = come_decrement_ref_count2(__right_value1084, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1020=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3112, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1020,((void*)0));
        list$1charphp_push_back(param_default_parametors_1020,((void*)0));
        result_type_1012->mStatic=(_Bool)0;
        result_type_1012->mUniq=(_Bool)0;
        result_type_1012->mInline=(_Bool)0;
        result_type_1012->mGenerate=(_Bool)0;
        fun2_1021=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1089=__builtin_string(name_1013)))));
        __right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1021==((void*)0)||fun2_1021->mExternal) {
            fun_1022=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3123, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1013),(struct sType*)come_increment_ref_count(result_type_1012),(struct list$1voidph*)come_increment_ref_count(param_types_1016),(struct list$1charph*)come_increment_ref_count(param_names_1019),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1020),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1011),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1013)),(struct sFun*)come_increment_ref_count(fun_1022));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3131, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1097=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3131, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1022),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1023=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1097,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1024=node_compile(node_1023,info);
            if(            !Value_1024) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_994=fun_1022;
            come_call_finalizer3(fun_1022,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1023) { node_1023 = come_decrement_ref_count2(node_1023, ((struct sNode*)node_1023)->finalize, ((struct sNode*)node_1023)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_994=fun2_1021;
        }
        __dec_obj291=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1010);
        come_call_finalizer3(__dec_obj291,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1006;
        info->head=head_1009;
        info->sline=sline_1007;
        __dec_obj292=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1008);
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_998,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1008 = come_decrement_ref_count2(sname_1008, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1010,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1011,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1012,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1013 = come_decrement_ref_count2(name_1013, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1014,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1015,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1016,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1019,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1020,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1021,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_993;
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_990);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_991);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_992;
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1100=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3157, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_994,(char*)come_increment_ref_count(real_fun_name_995))));
    last_code_990 = come_decrement_ref_count2(last_code_990, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_991 = come_decrement_ref_count2(last_code2_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_995 = come_decrement_ref_count2(real_fun_name_995, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_996,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1100,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1025;
char* __dec_obj295;
char* last_code2_1026;
char* __dec_obj296;
_Bool comma_instead_of_semicolon_1027;
struct sClass* current_stack_frame_struct_1028;
struct sFun* equaler_1029;
void* __right_value1101 = (void*)0;
char* real_fun_name_1030;
void* __right_value1102 = (void*)0;
struct sType* type2_1031;
struct sClass* klass_1032;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct buffer* source_1033;
char* name_1034;
int i_1037;
void* __right_value1105 = (void*)0;
struct list$1voidph* o2_saved_1038;
struct tuple2$2charphsTypeph* it_1039;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1040=0;
struct sType* field_type_1041=0;
char* p_1045;
int sline_1046;
char* sname_1047;
char* head_1048;
struct buffer* source3_1049;
struct buffer* __dec_obj297;
void* __right_value1106 = (void*)0;
char* __dec_obj298;
void* __right_value1107 = (void*)0;
struct sBlock* block_1050;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
struct sType* result_type_1051;
void* __right_value1110 = (void*)0;
char* name_1052;
void* __right_value1111 = (void*)0;
struct sType* left_type_1053;
void* __right_value1112 = (void*)0;
struct sType* right_type_1054;
struct sType* __list_values25___1056[2];
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct list$1voidph* param_types_1055;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
char* __list_values26___1057[2];
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct list$1charph* param_names_1058;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
struct list$1charph* param_default_parametors_1059;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct sFun* fun2_1060;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
struct sFun* fun_1061;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1130 = (void*)0;
struct sNode* node_1062;
_Bool Value_1063;
struct buffer* __dec_obj299;
char* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct tuple2$2sFunpcharph* __result382__;
    last_code_1025=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj295=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1026=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj296=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1027=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1028=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1029=((void*)0);
    real_fun_name_1030=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1031=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1031;
    klass_1032=type->mClass;
    if(    type->mPointerNum>0&&!klass_1032->mNumber) {
        source_1033=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3182, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1033,123);
        if(        klass_1032->mProtocol) {
            name_1034="_protocol_obj";
            char source2_1035[1024];
            memset(&source2_1035, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1035,1024,"return left.%s !== right.%s;\n",name_1034,name_1034);
            buffer_append_str(source_1033,source2_1035);
        }
        else {
            char source2_1036[1024];
            memset(&source2_1036, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1036,1024,"return !(");
            buffer_append_str(source_1033,source2_1036);
            snprintf(source2_1036,1024,"( ");
            buffer_append_str(source_1033,source2_1036);
            i_1037=0;
            klass_1032=((struct sClass*)((void*)(__right_value1105=map$2voidphvoidphp_operator_load_element(info->classes,klass_1032->mName))));
            come_call_finalizer3(__right_value1105,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1038=(struct list$1voidph*)come_increment_ref_count((klass_1032->mFields)),it_1039=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1038)));            !list$1voidphp_end((o2_saved_1038));            it_1039=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1038)))            ){
                multiple_assign_var14=it_1039;
                name_1040=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1041=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1042[1024];
                memset(&source2_1042, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1042,1024,"(left.%s === right.%s)",name_1040,name_1040,name_1040);
                buffer_append_str(source_1033,source2_1042);
                if(                i_1037==list$1voidphp_length(klass_1032->mFields)-1) {
                    char source2_1043[1024];
                    memset(&source2_1043, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1043,1024,"));");
                    buffer_append_str(source_1033,source2_1043);
                }
                else {
                    char source2_1044[1024];
                    memset(&source2_1044, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1044,1024," && ");
                    buffer_append_str(source_1033,source2_1044);
                }
                i_1037++;
                name_1040 = come_decrement_ref_count2(name_1040, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1038,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1033,125);
        p_1045=info->p;
        sline_1046=info->sline;
        sname_1047=(char*)come_increment_ref_count(info->sname);
        head_1048=info->head;
        source3_1049=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj297=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1033);
        come_call_finalizer3(__dec_obj297,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1033->buf;
        info->head=source_1033->buf;
        __dec_obj298=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1030));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1050=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1051=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3242, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1052=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1030));
        left_type_1053=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1053->mHeap=(_Bool)0;
        right_type_1054=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1054->mHeap=(_Bool)0;
        param_types_1055=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1056[0]=(struct sType*)come_increment_ref_count(left_type_1053),
__list_values25___1056[1]=(struct sType*)come_increment_ref_count(right_type_1054),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3248, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values25___1056)));
        param_names_1058=(struct list$1charph*)come_increment_ref_count((__list_values26___1057[0]=(char*)come_increment_ref_count(((char*)(__right_value1115=__builtin_string("left")))),
__list_values26___1057[1]=(char*)come_increment_ref_count(((char*)(__right_value1116=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3249, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values26___1057)));
        __right_value1115 = come_decrement_ref_count2(__right_value1115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1116 = come_decrement_ref_count2(__right_value1116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1059=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3250, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1059,((void*)0));
        list$1charphp_push_back(param_default_parametors_1059,((void*)0));
        result_type_1051->mStatic=(_Bool)0;
        result_type_1051->mUniq=(_Bool)0;
        result_type_1051->mInline=(_Bool)0;
        result_type_1051->mGenerate=(_Bool)0;
        fun2_1060=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1121=__builtin_string(name_1052)))));
        __right_value1121 = come_decrement_ref_count2(__right_value1121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1060==((void*)0)||fun2_1060->mExternal) {
            fun_1061=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1052),(struct sType*)come_increment_ref_count(result_type_1051),(struct list$1voidph*)come_increment_ref_count(param_types_1055),(struct list$1charph*)come_increment_ref_count(param_names_1058),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1059),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1050),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1052)),(struct sFun*)come_increment_ref_count(fun_1061));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3269, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1129=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3269, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1061),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1062=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1129,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1063=node_compile(node_1062,info);
            if(            !Value_1063) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1029=fun_1061;
            come_call_finalizer3(fun_1061,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1062) { node_1062 = come_decrement_ref_count2(node_1062, ((struct sNode*)node_1062)->finalize, ((struct sNode*)node_1062)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1029=fun2_1060;
        }
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1049);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1045;
        info->head=head_1048;
        info->sline=sline_1046;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1047);
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1033,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1047 = come_decrement_ref_count2(sname_1047, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1050,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1052 = come_decrement_ref_count2(name_1052, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1053,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1054,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1055,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1058,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1059,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1060,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1028;
    __dec_obj301=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1025);
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj302=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1026);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1027;
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1132=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3295, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1029,(char*)come_increment_ref_count(real_fun_name_1030))));
    last_code_1025 = come_decrement_ref_count2(last_code_1025, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1026 = come_decrement_ref_count2(last_code2_1026, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1030 = come_decrement_ref_count2(real_fun_name_1030, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1031,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1132,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1064;
char* __dec_obj303;
char* last_code2_1065;
char* __dec_obj304;
_Bool comma_instead_of_semicolon_1066;
struct sClass* current_stack_frame_struct_1067;
struct sFun* equaler_1068;
void* __right_value1133 = (void*)0;
char* real_fun_name_1069;
void* __right_value1134 = (void*)0;
struct sType* type2_1070;
struct sClass* klass_1071;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct buffer* source_1072;
char* name_1073;
int i_1076;
void* __right_value1137 = (void*)0;
struct list$1voidph* o2_saved_1077;
struct tuple2$2charphsTypeph* it_1078;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1079=0;
struct sType* field_type_1080=0;
char* p_1084;
int sline_1085;
char* sname_1086;
char* head_1087;
struct buffer* source3_1088;
struct buffer* __dec_obj305;
void* __right_value1138 = (void*)0;
char* __dec_obj306;
void* __right_value1139 = (void*)0;
struct sBlock* block_1089;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
struct sType* result_type_1090;
void* __right_value1142 = (void*)0;
char* name_1091;
void* __right_value1143 = (void*)0;
struct sType* left_type_1092;
void* __right_value1144 = (void*)0;
struct sType* right_type_1093;
struct sType* __list_values27___1095[2];
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct list$1voidph* param_types_1094;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
char* __list_values28___1096[2];
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1charph* param_names_1097;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct list$1charph* param_default_parametors_1098;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct sFun* fun2_1099;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct sFun* fun_1100;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
void* __right_value1161 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1162 = (void*)0;
struct sNode* node_1101;
_Bool Value_1102;
struct buffer* __dec_obj307;
char* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct tuple2$2sFunpcharph* __result383__;
    last_code_1064=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1065=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1066=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1067=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1068=((void*)0);
    real_fun_name_1069=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1070=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1070;
    klass_1071=type->mClass;
    if(    type->mPointerNum>0&&!klass_1071->mNumber) {
        source_1072=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3320, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1072,123);
        if(        klass_1071->mProtocol) {
            name_1073="_protocol_obj";
            char source2_1074[1024];
            memset(&source2_1074, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1074,1024,"return !left.%s.equals(right.%s);\n",name_1073,name_1073);
            buffer_append_str(source_1072,source2_1074);
        }
        else {
            char source2_1075[1024];
            memset(&source2_1075, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1075,1024,"return !(");
            buffer_append_str(source_1072,source2_1075);
            i_1076=0;
            klass_1071=((struct sClass*)((void*)(__right_value1137=map$2voidphvoidphp_operator_load_element(info->classes,klass_1071->mName))));
            come_call_finalizer3(__right_value1137,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1077=(struct list$1voidph*)come_increment_ref_count((klass_1071->mFields)),it_1078=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1077)));            !list$1voidphp_end((o2_saved_1077));            it_1078=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1077)))            ){
                multiple_assign_var15=it_1078;
                name_1079=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1080=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1081[1024];
                memset(&source2_1081, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1081,1024,"left.%s.equals(right.%s)",name_1079,name_1079);
                buffer_append_str(source_1072,source2_1081);
                if(                i_1076==list$1voidphp_length(klass_1071->mFields)-1) {
                    char source2_1082[1024];
                    memset(&source2_1082, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1082,1024,");");
                    buffer_append_str(source_1072,source2_1082);
                }
                else {
                    char source2_1083[1024];
                    memset(&source2_1083, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1083,1024," && ");
                    buffer_append_str(source_1072,source2_1083);
                }
                i_1076++;
                name_1079 = come_decrement_ref_count2(name_1079, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1080,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1077,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1072,125);
        p_1084=info->p;
        sline_1085=info->sline;
        sname_1086=(char*)come_increment_ref_count(info->sname);
        head_1087=info->head;
        source3_1088=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj305=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1072);
        come_call_finalizer3(__dec_obj305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1072->buf;
        info->head=source_1072->buf;
        __dec_obj306=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1069));
        __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1089=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1090=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3377, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1091=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1069));
        left_type_1092=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1092->mHeap=(_Bool)0;
        right_type_1093=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1093->mHeap=(_Bool)0;
        param_types_1094=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1095[0]=(struct sType*)come_increment_ref_count(left_type_1092),
__list_values27___1095[1]=(struct sType*)come_increment_ref_count(right_type_1093),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3383, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values27___1095)));
        param_names_1097=(struct list$1charph*)come_increment_ref_count((__list_values28___1096[0]=(char*)come_increment_ref_count(((char*)(__right_value1147=__builtin_string("left")))),
__list_values28___1096[1]=(char*)come_increment_ref_count(((char*)(__right_value1148=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3384, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values28___1096)));
        __right_value1147 = come_decrement_ref_count2(__right_value1147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1148 = come_decrement_ref_count2(__right_value1148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1098=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3385, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1098,((void*)0));
        list$1charphp_push_back(param_default_parametors_1098,((void*)0));
        result_type_1090->mStatic=(_Bool)0;
        result_type_1090->mUniq=(_Bool)0;
        result_type_1090->mInline=(_Bool)0;
        result_type_1090->mGenerate=(_Bool)0;
        fun2_1099=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1153=__builtin_string(name_1091)))));
        __right_value1153 = come_decrement_ref_count2(__right_value1153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1099==((void*)0)||fun2_1099->mExternal) {
            fun_1100=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3396, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1091),(struct sType*)come_increment_ref_count(result_type_1090),(struct list$1voidph*)come_increment_ref_count(param_types_1094),(struct list$1charph*)come_increment_ref_count(param_names_1097),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1098),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1089),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1091)),(struct sFun*)come_increment_ref_count(fun_1100));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3404, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1161=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3404, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1100),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1101=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1161,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1102=node_compile(node_1101,info);
            if(            !Value_1102) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1068=fun_1100;
            come_call_finalizer3(fun_1100,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1101) { node_1101 = come_decrement_ref_count2(node_1101, ((struct sNode*)node_1101)->finalize, ((struct sNode*)node_1101)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1068=fun2_1099;
        }
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1088);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1084;
        info->head=head_1087;
        info->sline=sline_1085;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1086);
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1072,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1086 = come_decrement_ref_count2(sname_1086, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1088,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1089,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1090,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1091 = come_decrement_ref_count2(name_1091, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1093,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1094,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1097,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1098,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1099,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1067;
    __dec_obj309=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1064);
    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj310=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1065);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1066;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1164=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3430, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1068,(char*)come_increment_ref_count(real_fun_name_1069))));
    last_code_1064 = come_decrement_ref_count2(last_code_1064, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1065 = come_decrement_ref_count2(last_code2_1065, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1069 = come_decrement_ref_count2(real_fun_name_1069, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1070,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1164,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1103;
char* __dec_obj311;
char* last_code2_1104;
char* __dec_obj312;
_Bool comma_instead_of_semicolon_1105;
struct sClass* current_stack_frame_struct_1106;
struct sFun* equaler_1107;
void* __right_value1165 = (void*)0;
char* real_fun_name_1108;
void* __right_value1166 = (void*)0;
struct sType* type2_1109;
struct sClass* klass_1110;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct buffer* source_1111;
char* name_1112;
void* __right_value1169 = (void*)0;
struct list$1voidph* o2_saved_1115;
struct tuple2$2charphsTypeph* it_1116;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1117=0;
struct sType* field_type_1118=0;
char* p_1120;
int sline_1121;
char* sname_1122;
char* head_1123;
struct buffer* source3_1124;
struct buffer* __dec_obj313;
void* __right_value1170 = (void*)0;
char* __dec_obj314;
void* __right_value1171 = (void*)0;
struct sBlock* block_1125;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct sType* result_type_1126;
void* __right_value1174 = (void*)0;
char* name_1127;
void* __right_value1175 = (void*)0;
struct sType* left_type_1128;
void* __right_value1176 = (void*)0;
struct sType* right_type_1129;
struct sType* __list_values29___1131[2];
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct list$1voidph* param_types_1130;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
char* __list_values30___1132[2];
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct list$1charph* param_names_1133;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct list$1charph* param_default_parametors_1134;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct sFun* fun2_1135;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct sFun* fun_1136;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1194 = (void*)0;
struct sNode* node_1137;
_Bool Value_1138;
struct buffer* __dec_obj315;
char* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct tuple2$2sFunpcharph* __result384__;
    last_code_1103=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1104=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1105=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1106=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1107=((void*)0);
    real_fun_name_1108=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1109=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1109;
    klass_1110=type->mClass;
    if(    type->mPointerNum>0&&!klass_1110->mNumber) {
        source_1111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3455, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1111,123);
        if(        klass_1110->mProtocol) {
            name_1112="_protocol_obj";
            char source2_1113[1024];
            memset(&source2_1113, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1113,1024,"return left.%s === right.%s;\n",name_1112,name_1112);
            buffer_append_str(source_1111,source2_1113);
        }
        else {
            char source2_1114[1024];
            memset(&source2_1114, 0, sizeof(char)            *(1024)            );
            klass_1110=((struct sClass*)((void*)(__right_value1169=map$2voidphvoidphp_operator_load_element(info->classes,klass_1110->mName))));
            come_call_finalizer3(__right_value1169,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1115=(struct list$1voidph*)come_increment_ref_count((klass_1110->mFields)),it_1116=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1115)));            !list$1voidphp_end((o2_saved_1115));            it_1116=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1115)))            ){
                multiple_assign_var16=it_1116;
                name_1117=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1118=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1119[1024];
                memset(&source2_1119, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1119,1024,"if(left.%s !== right.%s) { return false; }\n",name_1117,name_1117,name_1117);
                buffer_append_str(source_1111,source2_1119);
                name_1117 = come_decrement_ref_count2(name_1117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1118,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1115,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1111,"return true;\n");
        buffer_append_char(source_1111,125);
        p_1120=info->p;
        sline_1121=info->sline;
        sname_1122=(char*)come_increment_ref_count(info->sname);
        head_1123=info->head;
        source3_1124=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj313=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1111);
        come_call_finalizer3(__dec_obj313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1111->buf;
        info->head=source_1111->buf;
        __dec_obj314=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1108));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1125=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1126=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3497, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1127=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1108));
        left_type_1128=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1128->mHeap=(_Bool)0;
        right_type_1129=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1129->mHeap=(_Bool)0;
        param_types_1130=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1131[0]=(struct sType*)come_increment_ref_count(left_type_1128),
__list_values29___1131[1]=(struct sType*)come_increment_ref_count(right_type_1129),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3503, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values29___1131)));
        param_names_1133=(struct list$1charph*)come_increment_ref_count((__list_values30___1132[0]=(char*)come_increment_ref_count(((char*)(__right_value1179=__builtin_string("left")))),
__list_values30___1132[1]=(char*)come_increment_ref_count(((char*)(__right_value1180=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3504, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values30___1132)));
        __right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1134=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3505, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1134,((void*)0));
        list$1charphp_push_back(param_default_parametors_1134,((void*)0));
        result_type_1126->mStatic=(_Bool)0;
        result_type_1126->mUniq=(_Bool)0;
        result_type_1126->mInline=(_Bool)0;
        result_type_1126->mGenerate=(_Bool)0;
        fun2_1135=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1185=__builtin_string(name_1127)))));
        __right_value1185 = come_decrement_ref_count2(__right_value1185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1135==((void*)0)||fun2_1135->mExternal) {
            fun_1136=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3516, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1127),(struct sType*)come_increment_ref_count(result_type_1126),(struct list$1voidph*)come_increment_ref_count(param_types_1130),(struct list$1charph*)come_increment_ref_count(param_names_1133),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1134),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1125),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1127)),(struct sFun*)come_increment_ref_count(fun_1136));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3524, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1193=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3524, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1136),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1137=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1193,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1138=node_compile(node_1137,info);
            if(            !Value_1138) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1107=fun_1136;
            come_call_finalizer3(fun_1136,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1137) { node_1137 = come_decrement_ref_count2(node_1137, ((struct sNode*)node_1137)->finalize, ((struct sNode*)node_1137)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1107=fun2_1135;
        }
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1124);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1120;
        info->head=head_1123;
        info->sline=sline_1121;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1122);
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1111,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1122 = come_decrement_ref_count2(sname_1122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1124,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1125,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1126,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1127 = come_decrement_ref_count2(name_1127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1128,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1129,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1130,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1133,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1134,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1135,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1106;
    __dec_obj317=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1103);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj318=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1104);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1105;
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1196=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3550, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1107,(char*)come_increment_ref_count(real_fun_name_1108))));
    last_code_1103 = come_decrement_ref_count2(last_code_1103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1104 = come_decrement_ref_count2(last_code2_1104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1108 = come_decrement_ref_count2(real_fun_name_1108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1196,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct tuple2$2sFunpcharph* __result385__;
char* last_code_1139;
char* __dec_obj319;
char* last_code2_1140;
char* __dec_obj320;
_Bool comma_instead_of_semicolon_1141;
struct sClass* current_stack_frame_struct_1142;
struct sFun* cloner_1143;
void* __right_value1199 = (void*)0;
char* real_fun_name_1144;
void* __right_value1200 = (void*)0;
struct sType* type2_1145;
struct sClass* klass_1146;
char* fun_name2_1147;
void* __right_value1201 = (void*)0;
char* none_generics_name_1148;
void* __right_value1202 = (void*)0;
struct sType* obj_type_1149;
void* __right_value1203 = (void*)0;
char* __dec_obj321;
void* __right_value1204 = (void*)0;
char* fun_name3_1150;
void* __right_value1205 = (void*)0;
struct sGenericsFun* generics_fun_1151;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1152=0;
_Bool err_1153=0;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct tuple2$2sFunpcharph* __result386__;
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
char* __dec_obj322;
void* __right_value1212 = (void*)0;
char* __dec_obj323;
int i_1154;
void* __right_value1213 = (void*)0;
char* new_fun_name_1155;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
char* __dec_obj324;
void* __right_value1216 = (void*)0;
char* __dec_obj325;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct buffer* source_1156;
void* __right_value1219 = (void*)0;
char* name_1157;
void* __right_value1220 = (void*)0;
struct list$1voidph* o2_saved_1159;
struct tuple2$2charphsTypeph* it_1160;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1161=0;
struct sType* field_type_1162=0;
void* __right_value1221 = (void*)0;
struct list$1voidph* o2_saved_1165;
struct tuple2$2charphsTypeph* it_1166;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1167=0;
struct sType* field_type_1168=0;
char* p_1172;
int sline_1173;
char* sname_1174;
struct buffer* source3_1175;
char* head_1176;
struct buffer* __dec_obj326;
void* __right_value1222 = (void*)0;
char* __dec_obj327;
void* __right_value1223 = (void*)0;
struct sBlock* block_1177;
void* __right_value1224 = (void*)0;
struct sType* result_type_1178;
void* __right_value1225 = (void*)0;
char* name_1179;
void* __right_value1226 = (void*)0;
struct sType* self_type_1180;
struct sType* __list_values31___1182[1];
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
struct list$1voidph* param_types_1181;
void* __right_value1229 = (void*)0;
char* __list_values32___1183[1];
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct list$1charph* param_names_1184;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct list$1charph* param_default_parametors_1185;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct sFun* fun2_1186;
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
void* __right_value1239 = (void*)0;
struct sFun* fun_1187;
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1243 = (void*)0;
struct sNode* node_1188;
_Bool Value_1189;
char* __dec_obj328;
struct buffer* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
struct tuple2$2sFunpcharph* __result387__;
fun_name2_1147 = (void*)0;
memset(&i_1154, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1198=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3556, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1198,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    last_code_1139=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1140=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1141=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1142=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1143=((void*)0);
    real_fun_name_1144=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1145=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1145;
    klass_1146=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1148=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1149=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj321=fun_name2_1147;
        fun_name2_1147=(char*)come_increment_ref_count(create_method_name(obj_type_1149,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1150=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1148,fun_name));
        generics_fun_1151=((struct sGenericsFun*)((void*)(__right_value1205=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_1150,((void*)0)))));
        come_call_finalizer3(__right_value1205,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1151) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1207=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1147)),generics_fun_1151,obj_type_1149,info)));
            name_1152=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1153=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1207,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1153) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result386__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1209=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3596, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1152 = come_decrement_ref_count2(name_1152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1148 = come_decrement_ref_count2(none_generics_name_1148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1150 = come_decrement_ref_count2(fun_name3_1150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1139 = come_decrement_ref_count2(last_code_1139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1140 = come_decrement_ref_count2(last_code2_1140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1144 = come_decrement_ref_count2(real_fun_name_1144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1147 = come_decrement_ref_count2(fun_name2_1147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1209,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result386__;
                }
            }
            cloner_1143=((struct sFun*)((void*)(__right_value1210=map$2voidphvoidphp_operator_load_element(info->funcs,name_1152))));
            come_call_finalizer3(__right_value1210,(void*)0, 0, 1, 0, 0, __result_obj__);
            name_1152 = come_decrement_ref_count2(name_1152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1143=((struct sFun*)((void*)(__right_value1211=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1147))));
            come_call_finalizer3(__right_value1211,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj322=real_fun_name_1144;
        real_fun_name_1144=(char*)come_increment_ref_count(fun_name2_1147);
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1148 = come_decrement_ref_count2(none_generics_name_1148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1149,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1150 = come_decrement_ref_count2(fun_name3_1150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj323=fun_name2_1147;
        fun_name2_1147=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1154=128-1;        i_1154>=1;        i_1154--        ){
            new_fun_name_1155=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1147,i_1154));
            cloner_1143=((struct sFun*)((void*)(__right_value1214=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1155))));
            come_call_finalizer3(__right_value1214,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1143) {
                __dec_obj324=fun_name2_1147;
                fun_name2_1147=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1155));
                __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1155 = come_decrement_ref_count2(new_fun_name_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1155 = come_decrement_ref_count2(new_fun_name_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1143==((void*)0)) {
            cloner_1143=((struct sFun*)((void*)(__right_value1216=map$2voidphvoidphp_operator_load_element(info->funcs,fun_name2_1147))));
            come_call_finalizer3(__right_value1216,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj325=real_fun_name_1144;
        real_fun_name_1144=(char*)come_increment_ref_count(fun_name2_1147);
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1143==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3631, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1156,"{\n");
        buffer_append_str(source_1156,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1156,"var result = new %s;\n",((char*)(__right_value1219=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1146->mProtocol) {
            name_1157="_protocol_obj";
            char source2_1158[1024];
            memset(&source2_1158, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1158,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1156,source2_1158);
            klass_1146=((struct sClass*)((void*)(__right_value1220=map$2voidphvoidphp_operator_load_element(info->classes,klass_1146->mName))));
            come_call_finalizer3(__right_value1220,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1159=(struct list$1voidph*)come_increment_ref_count((klass_1146->mFields)),it_1160=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1159)));            !list$1voidphp_end((o2_saved_1159));            it_1160=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1159)))            ){
                multiple_assign_var18=it_1160;
                name_1161=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1162=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1161,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1162->mArrayNum)>0) {
                    char source2_1163[1024];
                    memset(&source2_1163, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1163,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1161,name_1161,name_1161);
                    buffer_append_str(source_1156,source2_1163);
                }
                else {
                    char source2_1164[1024];
                    memset(&source2_1164, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1164,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1161,name_1161);
                    buffer_append_str(source_1156,source2_1164);
                }
                name_1161 = come_decrement_ref_count2(name_1161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1162,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1159,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1146=((struct sClass*)((void*)(__right_value1221=map$2voidphvoidphp_operator_load_element(info->classes,klass_1146->mName))));
            come_call_finalizer3(__right_value1221,(void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1165=(struct list$1voidph*)come_increment_ref_count((klass_1146->mFields)),it_1166=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1165)));            !list$1voidphp_end((o2_saved_1165));            it_1166=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1165)))            ){
                multiple_assign_var19=it_1166;
                name_1167=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1168=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1168->mHeap) {
                    char source2_1169[1024];
                    memset(&source2_1169, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1169,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1167,name_1167,name_1167);
                    buffer_append_str(source_1156,source2_1169);
                }
                else if(                list$1sNodephp_length(field_type_1168->mArrayNum)>0) {
                    char source2_1170[1024];
                    memset(&source2_1170, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1170,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1167,name_1167,name_1167);
                    buffer_append_str(source_1156,source2_1170);
                }
                else {
                    char source2_1171[1024];
                    memset(&source2_1171, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1171,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1167,name_1167);
                    buffer_append_str(source_1156,source2_1171);
                }
                name_1167 = come_decrement_ref_count2(name_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1168,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1165,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1156,"return result;");
        buffer_append_char(source_1156,125);
        p_1172=info->p;
        sline_1173=info->sline;
        sname_1174=(char*)come_increment_ref_count(info->sname);
        source3_1175=(struct buffer*)come_increment_ref_count(info->source);
        head_1176=info->head;
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1156);
        come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1144));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1177=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1178=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1179=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1144));
        self_type_1180=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1180->mHeap=(_Bool)0;
        param_types_1181=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1182[0]=(struct sType*)come_increment_ref_count(self_type_1180),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values31___1182)));
        param_names_1184=(struct list$1charph*)come_increment_ref_count((__list_values32___1183[0]=(char*)come_increment_ref_count(((char*)(__right_value1229=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3713, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values32___1183)));
        __right_value1229 = come_decrement_ref_count2(__right_value1229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1185=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3714, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1185,((void*)0));
        result_type_1178->mStatic=(_Bool)0;
        result_type_1178->mUniq=(_Bool)0;
        result_type_1178->mInline=(_Bool)0;
        result_type_1178->mGenerate=(_Bool)0;
        fun2_1186=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1234=__builtin_string(name_1179)))));
        __right_value1234 = come_decrement_ref_count2(__right_value1234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1186==((void*)0)||fun2_1186->mExternal) {
            fun_1187=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3725, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1179),(struct sType*)come_increment_ref_count(result_type_1178),(struct list$1voidph*)come_increment_ref_count(param_types_1181),(struct list$1charph*)come_increment_ref_count(param_names_1184),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1185),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1177),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1187->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1179)),(struct sFun*)come_increment_ref_count(fun_1187));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3735, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1242=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3735, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1187),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1188=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1242,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1189=node_compile(node_1188,info);
            if(            !Value_1189) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1143=fun_1187;
            come_call_finalizer3(fun_1187,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1188) { node_1188 = come_decrement_ref_count2(node_1188, ((struct sNode*)node_1188)->finalize, ((struct sNode*)node_1188)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1143=fun2_1186;
        }
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1174);
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1173;
        __dec_obj329=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1175);
        come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1172;
        info->head=head_1176;
        info->sline=sline_1173;
        come_call_finalizer3(source_1156,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1174 = come_decrement_ref_count2(sname_1174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1175,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1177,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1178,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1179 = come_decrement_ref_count2(name_1179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1180,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1181,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1184,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1185,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1186,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1142;
    __dec_obj330=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1139);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj331=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1140);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1141;
    __result387__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1245=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3763, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1143,(char*)come_increment_ref_count(real_fun_name_1144))));
    last_code_1139 = come_decrement_ref_count2(last_code_1139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1140 = come_decrement_ref_count2(last_code2_1140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1144 = come_decrement_ref_count2(real_fun_name_1144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1145,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1147 = come_decrement_ref_count2(fun_name2_1147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1245,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1190;
char* __dec_obj332;
char* last_code2_1191;
char* __dec_obj333;
_Bool comma_instead_of_semicolon_1192;
struct sClass* current_stack_frame_struct_1193;
struct sFun* cloner_1194;
void* __right_value1246 = (void*)0;
char* real_fun_name_1195;
void* __right_value1247 = (void*)0;
struct sType* type2_1196;
struct sClass* klass_1197;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct buffer* source_1198;
int i_1199;
void* __right_value1250 = (void*)0;
struct list$1voidph* o2_saved_1200;
struct tuple2$2charphsTypeph* it_1201;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1202=0;
struct sType* field_type_1203=0;
char* p_1206;
int sline_1207;
char* sname_1208;
struct buffer* source3_1209;
char* head_1210;
struct buffer* __dec_obj334;
void* __right_value1251 = (void*)0;
char* __dec_obj335;
void* __right_value1252 = (void*)0;
struct sBlock* block_1211;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
struct sType* result_type_1212;
void* __right_value1255 = (void*)0;
char* name_1213;
void* __right_value1256 = (void*)0;
struct sType* self_type_1214;
struct sType* __list_values33___1216[1];
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct list$1voidph* param_types_1215;
void* __right_value1259 = (void*)0;
char* __list_values34___1217[1];
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct list$1charph* param_names_1218;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
struct list$1charph* param_default_parametors_1219;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct sFun* fun2_1220;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct sFun* fun_1221;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1273 = (void*)0;
struct sNode* node_1222;
_Bool Value_1223;
char* __dec_obj336;
struct buffer* __dec_obj337;
char* __dec_obj338;
char* __dec_obj339;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct tuple2$2sFunpcharph* __result388__;
    last_code_1190=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1191=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1192=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1193=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1194=((void*)0);
    real_fun_name_1195=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1196=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1196;
    klass_1197=type->mClass;
    if(    type->mPointerNum>0&&!klass_1197->mNumber) {
        source_1198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3788, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1198,"{\n");
        buffer_append_str(source_1198,"var result = new buffer();\n");
        buffer_append_format(source_1198,"result.append_str(\"%s {\");\n",klass_1197->mName);
        i_1199=0;
        klass_1197=((struct sClass*)((void*)(__right_value1250=map$2voidphvoidphp_operator_load_element(info->classes,klass_1197->mName))));
        come_call_finalizer3(__right_value1250,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1200=(struct list$1voidph*)come_increment_ref_count((klass_1197->mFields)),it_1201=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1200)));        !list$1voidphp_end((o2_saved_1200));        it_1201=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1200)))        ){
            multiple_assign_var20=it_1201;
            name_1202=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1203=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1199==list$1voidphp_length(klass_1197->mFields)-1) {
                char source2_1204[1024];
                memset(&source2_1204, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1204,1024,"result.append_str(\"%s:\");\n",name_1202);
                buffer_append_str(source_1198,source2_1204);
                snprintf(source2_1204,1024,"result.append_str(self.%s.to_string());\n",name_1202);
                buffer_append_str(source_1198,source2_1204);
            }
            else {
                char source2_1205[1024];
                memset(&source2_1205, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1205,1024,"result.append_str(\"%s:\");\n",name_1202);
                buffer_append_str(source_1198,source2_1205);
                snprintf(source2_1205,1024,"result.append_str(self.%s.to_string());\n",name_1202);
                buffer_append_str(source_1198,source2_1205);
                snprintf(source2_1205,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1198,source2_1205);
            }
            i_1199++;
            name_1202 = come_decrement_ref_count2(name_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1203,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1200,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1198,"result.append_str(\"}\");\n");
        buffer_append_format(source_1198,"return result.to_string();\n");
        buffer_append_char(source_1198,125);
        p_1206=info->p;
        sline_1207=info->sline;
        sname_1208=(char*)come_increment_ref_count(info->sname);
        source3_1209=(struct buffer*)come_increment_ref_count(info->source);
        head_1210=info->head;
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1198);
        come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj335=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1195));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1211=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1212=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3849, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1212->mHeap=(_Bool)1;
        name_1213=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1195));
        self_type_1214=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1214->mHeap=(_Bool)0;
        param_types_1215=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1216[0]=(struct sType*)come_increment_ref_count(self_type_1214),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3854, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values33___1216)));
        param_names_1218=(struct list$1charph*)come_increment_ref_count((__list_values34___1217[0]=(char*)come_increment_ref_count(((char*)(__right_value1259=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3855, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values34___1217)));
        __right_value1259 = come_decrement_ref_count2(__right_value1259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1219=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3856, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1219,((void*)0));
        result_type_1212->mStatic=(_Bool)0;
        result_type_1212->mUniq=(_Bool)0;
        result_type_1212->mInline=(_Bool)0;
        result_type_1212->mGenerate=(_Bool)0;
        fun2_1220=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1264=__builtin_string(name_1213)))));
        __right_value1264 = come_decrement_ref_count2(__right_value1264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1220==((void*)0)||fun2_1220->mExternal) {
            fun_1221=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3866, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1213),(struct sType*)come_increment_ref_count(result_type_1212),(struct list$1voidph*)come_increment_ref_count(param_types_1215),(struct list$1charph*)come_increment_ref_count(param_names_1218),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1219),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1211),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1221->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1213)),(struct sFun*)come_increment_ref_count(fun_1221));
            cloner_1194=fun_1221;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3878, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1272=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3878, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1221),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1222=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1272,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1223=node_compile(node_1222,info);
            if(            !Value_1223) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1221,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1222) { node_1222 = come_decrement_ref_count2(node_1222, ((struct sNode*)node_1222)->finalize, ((struct sNode*)node_1222)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1194=fun2_1220;
        }
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1208);
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1207;
        __dec_obj337=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1209);
        come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1206;
        info->head=head_1210;
        info->sline=sline_1207;
        come_call_finalizer3(source_1198,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1208 = come_decrement_ref_count2(sname_1208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1209,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1211,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1213 = come_decrement_ref_count2(name_1213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1214,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1215,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1219,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1220,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1193;
    __dec_obj338=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1190);
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj339=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1191);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1192;
    __result388__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1275=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3904, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1194,(char*)come_increment_ref_count(real_fun_name_1195))));
    last_code_1190 = come_decrement_ref_count2(last_code_1190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1191 = come_decrement_ref_count2(last_code2_1191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1195 = come_decrement_ref_count2(real_fun_name_1195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1196,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1275,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1267;
char* __dec_obj350;
char* last_code2_1268;
char* __dec_obj351;
_Bool comma_instead_of_semicolon_1269;
struct sClass* current_stack_frame_struct_1270;
struct sFun* get_hash_key_fun_1271;
void* __right_value1318 = (void*)0;
char* real_fun_name_1272;
void* __right_value1319 = (void*)0;
struct sType* type2_1273;
struct sClass* klass_1274;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
char* none_generics_name_1275;
void* __right_value1322 = (void*)0;
char* generics_fun_name_1276;
void* __right_value1323 = (void*)0;
struct sGenericsFun* generics_fun_1277;
void* __right_value1324 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1278=0;
_Bool err_1279=0;
void* __right_value1325 = (void*)0;
int i_1280;
void* __right_value1326 = (void*)0;
char* new_fun_name_1281;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
char* __dec_obj352;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
struct buffer* source_1282;
int i_1283;
void* __right_value1332 = (void*)0;
struct list$1voidph* o2_saved_1284;
struct tuple2$2charphsTypeph* it_1285;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1286=0;
struct sType* field_type_1287=0;
char* p_1289;
int sline_1290;
char* sname_1291;
struct buffer* source3_1292;
char* head_1293;
struct buffer* __dec_obj353;
void* __right_value1333 = (void*)0;
char* __dec_obj354;
void* __right_value1334 = (void*)0;
struct sBlock* block_1294;
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
struct sType* result_type_1295;
void* __right_value1337 = (void*)0;
char* name_1296;
void* __right_value1338 = (void*)0;
struct sType* self_type_1297;
struct sType* __list_values37___1299[1];
void* __right_value1339 = (void*)0;
void* __right_value1340 = (void*)0;
struct list$1voidph* param_types_1298;
void* __right_value1341 = (void*)0;
char* __list_values38___1300[1];
void* __right_value1342 = (void*)0;
void* __right_value1343 = (void*)0;
struct list$1charph* param_names_1301;
void* __right_value1344 = (void*)0;
void* __right_value1345 = (void*)0;
struct list$1charph* param_default_parametors_1302;
void* __right_value1346 = (void*)0;
void* __right_value1347 = (void*)0;
struct sFun* fun2_1303;
void* __right_value1348 = (void*)0;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct sFun* fun_1304;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
void* __right_value1354 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1355 = (void*)0;
struct sNode* node_1305;
_Bool Value_1306;
char* __dec_obj355;
struct buffer* __dec_obj356;
char* __dec_obj357;
char* __dec_obj358;
void* __right_value1356 = (void*)0;
void* __right_value1357 = (void*)0;
struct tuple2$2sFunpcharph* __result390__;
memset(&i_1280, 0, sizeof(int));
    last_code_1267=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj350=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1268=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj351=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1269=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1270=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1271=((void*)0);
    real_fun_name_1272=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1273=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1273;
    klass_1274=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1271=((struct sFun*)((void*)(__right_value1320=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1272))));
        come_call_finalizer3(__right_value1320,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1271==((void*)0)) {
            none_generics_name_1275=(char*)come_increment_ref_count(get_none_generics_name(type2_1273->mClass->mName));
            generics_fun_name_1276=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1275,fun_name));
            generics_fun_1277=((struct sGenericsFun*)((void*)(__right_value1323=map$2voidphvoidphp_operator_load_element(info->generics_funcs,generics_fun_name_1276))));
            come_call_finalizer3(__right_value1323,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1277) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1324=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1272),generics_fun_1277,type,info)));
                name_1278=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1279=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1324,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1279) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1271=((struct sFun*)((void*)(__right_value1325=map$2voidphvoidphp_operator_load_element(info->funcs,name_1278))));
                come_call_finalizer3(__right_value1325,(void*)0, 0, 1, 0, 0, __result_obj__);
                name_1278 = come_decrement_ref_count2(name_1278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1275 = come_decrement_ref_count2(none_generics_name_1275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1276 = come_decrement_ref_count2(generics_fun_name_1276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1280=128-1;        i_1280>=1;        i_1280--        ){
            new_fun_name_1281=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1272,i_1280));
            get_hash_key_fun_1271=((struct sFun*)((void*)(__right_value1327=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_1281))));
            come_call_finalizer3(__right_value1327,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1271) {
                __dec_obj352=real_fun_name_1272;
                real_fun_name_1272=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1281));
                __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1281 = come_decrement_ref_count2(new_fun_name_1281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1281 = come_decrement_ref_count2(new_fun_name_1281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1271==((void*)0)) {
            get_hash_key_fun_1271=((struct sFun*)((void*)(__right_value1329=map$2voidphvoidphp_operator_load_element(info->funcs,real_fun_name_1272))));
            come_call_finalizer3(__right_value1329,(void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1271==((void*)0)&&type->mPointerNum>0&&!klass_1274->mNumber&&!klass_1274->mProtocol) {
        source_1282=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4169, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1282,"{\n");
        buffer_append_str(source_1282,"unsigned int result = 0;\n");
        i_1283=0;
        klass_1274=((struct sClass*)((void*)(__right_value1332=map$2voidphvoidphp_operator_load_element(info->classes,klass_1274->mName))));
        come_call_finalizer3(__right_value1332,(void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1284=(struct list$1voidph*)come_increment_ref_count((klass_1274->mFields)),it_1285=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1284)));        !list$1voidphp_end((o2_saved_1284));        it_1285=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1284)))        ){
            multiple_assign_var24=it_1285;
            name_1286=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1287=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1288[1024];
            memset(&source2_1288, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1288,1024,"result += ((int)self.%s).get_hash_key();\n",name_1286);
            buffer_append_str(source_1282,source2_1288);
            i_1283++;
            name_1286 = come_decrement_ref_count2(name_1286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1287,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1284,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1282,"return result;\n");
        buffer_append_char(source_1282,125);
        p_1289=info->p;
        sline_1290=info->sline;
        sname_1291=(char*)come_increment_ref_count(info->sname);
        source3_1292=(struct buffer*)come_increment_ref_count(info->source);
        head_1293=info->head;
        __dec_obj353=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1282);
        come_call_finalizer3(__dec_obj353,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj354=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1272));
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1294=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1295=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1295->mUnsigned=(_Bool)1;
        name_1296=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1272));
        self_type_1297=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1297->mHeap=(_Bool)0;
        param_types_1298=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1299[0]=(struct sType*)come_increment_ref_count(self_type_1297),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4211, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values37___1299)));
        param_names_1301=(struct list$1charph*)come_increment_ref_count((__list_values38___1300[0]=(char*)come_increment_ref_count(((char*)(__right_value1341=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4212, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values38___1300)));
        __right_value1341 = come_decrement_ref_count2(__right_value1341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1302=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4213, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1302,((void*)0));
        result_type_1295->mStatic=(_Bool)0;
        result_type_1295->mUniq=(_Bool)0;
        result_type_1295->mInline=(_Bool)0;
        result_type_1295->mGenerate=(_Bool)0;
        fun2_1303=(struct sFun*)come_increment_ref_count(map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value1346=__builtin_string(name_1296)))));
        __right_value1346 = come_decrement_ref_count2(__right_value1346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1303==((void*)0)||fun2_1303->mExternal) {
            fun_1304=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4223, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1296),(struct sType*)come_increment_ref_count(result_type_1295),(struct list$1voidph*)come_increment_ref_count(param_types_1298),(struct list$1charph*)come_increment_ref_count(param_names_1301),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1302),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1294),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1304->mCloner=(_Bool)1;
            map$2voidphvoidphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1296)),(struct sFun*)come_increment_ref_count(fun_1304));
            get_hash_key_fun_1271=fun_1304;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4235, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1354=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4235, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1304),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1305=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1354,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1306=node_compile(node_1305,info);
            if(            !Value_1306) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1304,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1305) { node_1305 = come_decrement_ref_count2(node_1305, ((struct sNode*)node_1305)->finalize, ((struct sNode*)node_1305)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1271=fun2_1303;
        }
        __dec_obj355=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1291);
        __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1290;
        __dec_obj356=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1292);
        come_call_finalizer3(__dec_obj356,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1289;
        info->head=head_1293;
        info->sline=sline_1290;
        come_call_finalizer3(source_1282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1291 = come_decrement_ref_count2(sname_1291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1294,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1295,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1296 = come_decrement_ref_count2(name_1296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1297,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1298,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1303,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1270;
    __dec_obj357=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1267);
    __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj358=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1268);
    __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1269;
    __result390__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1357=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4261, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),get_hash_key_fun_1271,(char*)come_increment_ref_count(real_fun_name_1272))));
    last_code_1267 = come_decrement_ref_count2(last_code_1267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1268 = come_decrement_ref_count2(last_code2_1268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1272 = come_decrement_ref_count2(real_fun_name_1272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1273,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1357,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

