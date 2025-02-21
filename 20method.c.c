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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1voidph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self);
static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self);
static _Bool tuple2$2charphsGenericsFunp_equals(struct tuple2$2charphsGenericsFunp* left, struct tuple2$2charphsGenericsFunp* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1voidphp_length(struct list$1voidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1charphp_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct sCurrentNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string(self->sname)));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sCurrentNode")));
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value255 = (void*)0;
char* class_name_317;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sClass* current_stack_318;
struct sVarTable* vtable_333;
struct map$2voidphvoidph* o2_saved_334;
char* it_337;
char* key_340;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sVar* value_341;
void* __right_value300 = (void*)0;
struct sType* type2_345;
void* __right_value301 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct tuple2$2charphsTypeph* item_369;
void* __right_value307 = (void*)0;
struct sType* type3_372;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2charphsTypeph* item2_375;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct map$2voidphvoidph* o2_saved_423;
char* it_424;
char* key_425;
void* __right_value324 = (void*)0;
struct sVar* value_426;
void* __right_value325 = (void*)0;
struct sType* type2_427;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple2$2charphsTypeph* item_428;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_429;
void* __right_value330 = (void*)0;
char* __dec_obj93;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __dec_obj94;
_Bool __result282__;
    info->current_stack_num++;
    class_name_317=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_318=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 435, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_317,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_333=info->lv_table;
    while(vtable_333) {
        for(        o2_saved_334=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_333->mVars)),it_337=((char*)map$2voidphvoidphp_begin((o2_saved_334)));        !map$2voidphvoidphp_end((o2_saved_334));        it_337=((char*)map$2voidphvoidphp_next((o2_saved_334)))        ){
            key_340=it_337;
            value_341=((struct sVar*)((void*)(__right_value270=map$2voidphvoidphp_operator_load_element(vtable_333->mVars,((char*)(__right_value269=__builtin_string(key_340)))))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value270,(void*)0, 0, 1, 0, 0, (void*)0);
            type2_345=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_341->mType));
            type2_345->mPointerNum++;
            item_369=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 448, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_341->mCValueName)),(struct sType*)come_increment_ref_count(type2_345)));
            if(            value_341->mCValueName!=((void*)0)) {
                if(                strcmp(value_341->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_341->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_341->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_341->mType->mClass->mName,"va_list")||string_operator_equals(value_341->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_345->mArrayNum)==1) {
                    type3_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_345));
                    list$1sNodephp_reset(type3_372->mArrayNum);
                    type3_372->mPointerNum=1;
                    type3_372->mOriginIsArray=(_Bool)1;
                    item2_375=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 468, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_341->mCValueName)),(struct sType*)come_increment_ref_count(type3_372)));
                    list$1voidphp_push_back(current_stack_318->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_375)));
                    value_341->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_375,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_318->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_369)));
                }
            }
            come_call_finalizer3(type2_345,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_369,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_334,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_333=vtable_333->mParent;
    }
    output_struct(current_stack_318,info);
    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(class_name_317),(struct sClass*)come_increment_ref_count(current_stack_318));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_317,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_317);
    vtable_333=info->lv_table;
    while(vtable_333) {
        for(        o2_saved_423=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_333->mVars)),it_424=((char*)map$2voidphvoidphp_begin((o2_saved_423)));        !map$2voidphvoidphp_end((o2_saved_423));        it_424=((char*)map$2voidphvoidphp_next((o2_saved_423)))        ){
            key_425=it_424;
            value_426=((struct sVar*)((void*)(__right_value324=map$2voidphvoidphp_operator_load_element(vtable_333->mVars,key_425))));
            come_call_finalizer3(__right_value324,(void*)0, 0, 1, 0, 0, (void*)0);
            type2_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_426->mType));
            item_428=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 497, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(value_426->mCValueName),(struct sType*)come_increment_ref_count(type2_427)));
            if(            value_426->mCValueName!=((void*)0)) {
                if(                strcmp(value_426->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_426->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_426->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_426->mType->mClass->mName,"va_list")||string_operator_equals(value_426->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_427->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_426->mCValueName,value_426->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_426->mCValueName,value_426->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_428,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_423,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_333=vtable_333->mParent;
    }
    come_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 526, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj93=come_value_429->c_value;
    come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj94=come_value_429->type;
    come_value_429->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 529, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_317,(_Bool)0,info));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_429->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_429->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_429));
    __result282__ = (_Bool)1;
    class_name_317 = come_decrement_ref_count2(class_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_318,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result282__;
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

static void sCurrentNode_finalize(struct sCurrentNode* self){
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

static void sClass_finalize(struct sClass* self){
char* __dec_obj33;
struct list$1voidph* __dec_obj34;
char* __dec_obj36;
char* __dec_obj37;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj33=self->mName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj34=self->mFields;
            come_call_finalizer3(__dec_obj34,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj36=self->mParentClassName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj37=self->mAttribute;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __dec_obj35;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            come_call_finalizer3(__dec_obj35,(void*)0, 0, 0, 1, 0, (void*)0);
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

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result233__;
void* __right_value256 = (void*)0;
struct sClass* result_326;
void* __right_value257 = (void*)0;
char* __dec_obj38;
void* __right_value264 = (void*)0;
struct list$1voidph* __dec_obj42;
void* __right_value265 = (void*)0;
char* __dec_obj43;
void* __right_value266 = (void*)0;
char* __dec_obj44;
struct sClass* __result238__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_326=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_326->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_326->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_326->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_326->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_326->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_326->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_326->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_326->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj38=result_326->mName;
        result_326->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_326->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj42=result_326->mFields;
        result_326->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj43=result_326->mParentClassName;
        result_326->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj44=result_326->mAttribute;
        result_326->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_326->mDynamic=self->mDynamic;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer3(result_326,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_323;
    result_323=0;
    result_323+=int_get_hash_key(((int)self->mStruct));
    result_323+=int_get_hash_key(((int)self->mFloat));
    result_323+=int_get_hash_key(((int)self->mUnion));
    result_323+=int_get_hash_key(((int)self->mGenerics));
    result_323+=int_get_hash_key(((int)self->mMethodGenerics));
    result_323+=int_get_hash_key(((int)self->mEnum));
    result_323+=int_get_hash_key(((int)self->mProtocol));
    result_323+=int_get_hash_key(((int)self->mNumber));
    result_323+=int_get_hash_key(((int)self->mName));
    result_323+=int_get_hash_key(((int)self->mGenericsNum));
    result_323+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_323+=int_get_hash_key(((int)self->mFields));
    result_323+=int_get_hash_key(((int)self->mParentClassName));
    result_323+=int_get_hash_key(((int)self->mAttribute));
    result_323+=int_get_hash_key(((int)self->mDynamic));
    return result_323;
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
struct list_item$1voidph* it_324;
struct list_item$1voidph* it2_325;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_324=left->head;
    it2_325=right->head;
    while(it_324!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_324->item, it2_325->item)) {
            return (_Bool)0;
        }
        it_324=it_324->next;
        it2_325=it2_325->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1voidph* result_328;
struct list_item$1voidph* it_329;
void* __right_value263 = (void*)0;
struct list$1voidph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_328=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_329=self->head;
    while(it_329!=((void*)0)) {
        list$1voidphp_add(result_328,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_329->item)));
        it_329=it_329->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_327;
    result_327=0;
    result_327+=int_get_hash_key(((int)self->head));
    result_327+=int_get_hash_key(((int)self->tail));
    result_327+=int_get_hash_key(((int)self->len));
    result_327+=int_get_hash_key(((int)self->it));
    return result_327;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_330;
void* __dec_obj39;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj40;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj41;
struct list$1voidph* __result236__;
    if(    self->len==0) {
        litem_330=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_330->prev=((void*)0);
        litem_330->next=((void*)0);
        __dec_obj39=litem_330->item;
        litem_330->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj39,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_330;
        self->head=litem_330;
    }
    else if(    self->len==1) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=self->head;
        litem_331->next=((void*)0);
        __dec_obj40=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj40,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head->next=litem_331;
    }
    else {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->tail;
        litem_332->next=((void*)0);
        __dec_obj41=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_332;
        self->tail=litem_332;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_335;
void* __result239__;
void* __result240__;
void* result_336;
void* __result241__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_335,0,sizeof(void*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_336,0,sizeof(void*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_338;
void* __result242__;
void* __result243__;
void* result_339;
void* __result244__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_338,0,sizeof(void*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_339,0,sizeof(void*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_342;
unsigned int hash_343;
unsigned int it_344;
void* __result245__;
void* __result246__;
void* __result247__;
void* __result248__;
default_value_342 = (void*)0;
    memset(&default_value_342,0,sizeof(void*));
    hash_343=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_344=hash_343;
    while((_Bool)1) {
        if(        self->item_existance[it_344]) {
            if(            come_call_equals((void*)0, self->keys[it_344], ((char*)key))) {
                __result245__ = gComeFunResultObject = __result_obj__ = self->items[it_344];
                come_call_finalizer3(default_value_342, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
            it_344++;
            if(            it_344>=self->size) {
                it_344=0;
            }
            else if(            it_344==hash_343) {
                __result246__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
                come_call_finalizer3(default_value_342, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
        }
        else {
            __result247__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
            come_call_finalizer3(default_value_342, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_342);
    come_call_finalizer3(default_value_342, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result249__;
void* __right_value271 = (void*)0;
struct sType* result_357;
void* __right_value272 = (void*)0;
struct sType* __dec_obj61;
void* __right_value273 = (void*)0;
struct sType* __dec_obj62;
void* __right_value274 = (void*)0;
struct sType* __dec_obj63;
void* __right_value275 = (void*)0;
struct sType* __dec_obj64;
void* __right_value276 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value284 = (void*)0;
struct list$1sNodeph* __dec_obj69;
void* __right_value285 = (void*)0;
struct list$1voidph* __dec_obj70;
void* __right_value292 = (void*)0;
struct list$1charph* __dec_obj74;
void* __right_value293 = (void*)0;
struct sType* __dec_obj75;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value296 = (void*)0;
char* __dec_obj78;
void* __right_value297 = (void*)0;
char* __dec_obj79;
void* __right_value298 = (void*)0;
char* __dec_obj80;
void* __right_value299 = (void*)0;
char* __dec_obj81;
struct sType* __result259__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_357=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_357->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_357->mNoSolvedGenericsType;
        result_357->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj62=result_357->mOriginalLoadVarType;
        result_357->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_357->mAnyOriginalType;
        result_357->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj64=result_357->mChannelType;
        result_357->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_357->mGenericsTypes;
        result_357->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj69=result_357->mArrayNum;
        result_357->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj70=result_357->mParamTypes;
        result_357->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj70,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj74=result_357->mParamNames;
        result_357->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj75=result_357->mResultType;
        result_357->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_357->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_357->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_357->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_357->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_357->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_357->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_357->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_357->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_357->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_357->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_357->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_357->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_357->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_357->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_357->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_357->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_357->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_357->mSizeNum;
        result_357->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_357->mAlignas;
        result_357->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_357->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_357->mOriginalTypeName;
        result_357->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_357->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_357->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_357->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_357->mAsmName;
        result_357->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_357->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_357->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_357->mTupleName;
        result_357->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj81=result_357->mAttribute;
        result_357->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_357->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_357->mDynamic=self->mDynamic;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj45;
struct sType* __dec_obj46;
struct sType* __dec_obj47;
struct sType* __dec_obj48;
struct list$1voidph* __dec_obj49;
struct list$1sNodeph* __dec_obj50;
struct list$1voidph* __dec_obj52;
struct list$1charph* __dec_obj53;
struct sType* __dec_obj54;
struct sNode* __dec_obj55;
struct sNode* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj45=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj46=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj47=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj48=self->mChannelType;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj49=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj49,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj50=self->mArrayNum;
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj52=self->mParamTypes;
            come_call_finalizer3(__dec_obj52,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj53=self->mParamNames;
            come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj54=self->mResultType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj56=self->mAlignas;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj57=self->mOriginalTypeName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj58=self->mAsmName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj59=self->mTupleName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj60=self->mAttribute;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_346;
struct list_item$1sNodeph* prev_it_347;
    it_346=self->head;
    while(it_346!=((void*)0)) {
        prev_it_347=it_346;
        it_346=it_346->next;
        come_call_finalizer3(prev_it_347,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_348;
struct list_item$1sNodeph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_350;
struct list_item$1charph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_352;
    result_352=0;
    result_352+=int_get_hash_key(((int)self->mClass));
    result_352+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_352+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_352+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_352+=int_get_hash_key(((int)self->mChannelType));
    result_352+=int_get_hash_key(((int)self->mAnyClass));
    result_352+=int_get_hash_key(((int)self->mGenericsTypes));
    result_352+=int_get_hash_key(((int)self->mArrayNum));
    result_352+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_352+=int_get_hash_key(((int)self->mParamTypes));
    result_352+=int_get_hash_key(((int)self->mParamNames));
    result_352+=int_get_hash_key(((int)self->mResultType));
    result_352+=int_get_hash_key(((int)self->mVarArgs));
    result_352+=int_get_hash_key(((int)self->mUnsigned));
    result_352+=int_get_hash_key(((int)self->mShort));
    result_352+=int_get_hash_key(((int)self->mLong));
    result_352+=int_get_hash_key(((int)self->mLongLong));
    result_352+=int_get_hash_key(((int)self->mConstant));
    result_352+=int_get_hash_key(((int)self->mAtomic));
    result_352+=int_get_hash_key(((int)self->mRegister));
    result_352+=int_get_hash_key(((int)self->mVolatile));
    result_352+=int_get_hash_key(((int)self->mStatic));
    result_352+=int_get_hash_key(((int)self->mUniq));
    result_352+=int_get_hash_key(((int)self->mRecord));
    result_352+=int_get_hash_key(((int)self->mExtern));
    result_352+=int_get_hash_key(((int)self->mRestrict));
    result_352+=int_get_hash_key(((int)self->mImmutable));
    result_352+=int_get_hash_key(((int)self->mHeap));
    result_352+=int_get_hash_key(((int)self->mChannel));
    result_352+=int_get_hash_key(((int)self->mNoHeap));
    result_352+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_352+=int_get_hash_key(((int)self->mException));
    result_352+=int_get_hash_key(((int)self->mSizeNum));
    result_352+=int_get_hash_key(((int)self->mAlignas));
    result_352+=int_get_hash_key(((int)self->mPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_352+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_352+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_352+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_352+=int_get_hash_key(((int)self->mAllocaValue));
    result_352+=int_get_hash_key(((int)self->mInline));
    result_352+=int_get_hash_key(((int)self->mNullValue));
    result_352+=int_get_hash_key(((int)self->mGuardValue));
    result_352+=int_get_hash_key(((int)self->mAsmName));
    result_352+=int_get_hash_key(((int)self->mArrayPointerType));
    result_352+=int_get_hash_key(((int)self->mLambdaArray));
    result_352+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_352+=int_get_hash_key(((int)self->mTypedef));
    result_352+=int_get_hash_key(((int)self->mMultipleTypes));
    result_352+=int_get_hash_key(((int)self->mOriginIsArray));
    result_352+=int_get_hash_key(((int)self->mTupleName));
    result_352+=int_get_hash_key(((int)self->mAttribute));
    result_352+=int_get_hash_key(((int)self->mGenerate));
    result_352+=int_get_hash_key(((int)self->mCreateVTable));
    result_352+=int_get_hash_key(((int)self->mDynamic));
    return result_352;
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_353;
struct list_item$1sNodeph* it2_354;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_353=left->head;
    it2_354=right->head;
    while(it_353!=((void*)0)) {
        if(        !sNode_equals(it_353->item,it2_354->item)) {
            return (_Bool)0;
        }
        it_353=it_353->next;
        it2_354=it2_354->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_355;
struct list_item$1charph* it2_356;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_355=left->head;
    it2_356=right->head;
    while(it_355!=((void*)0)) {
        if(        !string_equals(it_355->item,it2_356->item)) {
            return (_Bool)0;
        }
        it_355=it_355->next;
        it2_356=it2_356->next;
    }
    return (_Bool)1;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result250__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1sNodeph* result_358;
struct list_item$1sNodeph* it_359;
void* __right_value283 = (void*)0;
struct list$1sNodeph* __result255__;
    if(    self==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_358=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_359=self->head;
    while(it_359!=((void*)0)) {
        list$1sNodephp_add(result_358,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_359->item)));
        it_359=it_359->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_358;
    come_call_finalizer3(result_358,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1sNodeph* litem_360;
struct sNode* __dec_obj66;
void* __right_value280 = (void*)0;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj67;
void* __right_value281 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj68;
struct list$1sNodeph* __result252__;
    if(    self->len==0) {
        litem_360=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value279=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj66=litem_360->item;
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value280=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj67=litem_361->item;
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value281=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj68=litem_362->item;
        litem_362->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result253__;
void* __right_value282 = (void*)0;
struct sNode* result_363;
struct sNode* __result254__;
    if(    self==(void*)0) {
        __result253__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_363=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_363->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_363->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_363->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_363->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_363->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_363->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_363->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_363->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_363->kind=self->kind;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = result_363;
    if(result_363) { result_363 = come_decrement_ref_count2(result_363, ((struct sNode*)result_363)->finalize, ((struct sNode*)result_363)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result256__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1charph* result_364;
struct list_item$1charph* it_365;
void* __right_value291 = (void*)0;
struct list$1charph* __result258__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_365=self->head;
    while(it_365!=((void*)0)) {
        list$1charphp_add(result_364,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_365->item)));
        it_365=it_365->next;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_364;
    come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1charph* litem_366;
char* __dec_obj71;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_367;
char* __dec_obj72;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_368;
char* __dec_obj73;
struct list$1charph* __result257__;
    if(    self->len==0) {
        litem_366=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value288=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        __dec_obj71=litem_366->item;
        litem_366->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1) {
        litem_367=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        __dec_obj72=litem_367->item;
        litem_367->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        __dec_obj73=litem_368->item;
        litem_368->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj82;
struct sType* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result260__;
void* __right_value302 = (void*)0;
struct tuple2$2charphsTypeph* result_370;
void* __right_value303 = (void*)0;
char* __dec_obj84;
void* __right_value304 = (void*)0;
struct sType* __dec_obj85;
struct tuple2$2charphsTypeph* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_370=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_370->v1;
        result_370->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_370->v2;
        result_370->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_370;
    come_call_finalizer3(result_370,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_371;
    result_371=0;
    result_371+=int_get_hash_key(((int)self->v1));
    result_371+=int_get_hash_key(((int)self->v2));
    return result_371;
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
char* __dec_obj86;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result262__;
    __dec_obj86=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj88;
struct sType* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_373;
struct list_item$1sNodeph* prev_it_374;
struct list$1sNodeph* __result263__;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        come_call_finalizer3(prev_it_374,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct list_item$1voidph* litem_376;
void* __dec_obj90;
void* __right_value312 = (void*)0;
struct list_item$1voidph* litem_377;
void* __dec_obj91;
void* __right_value313 = (void*)0;
struct list_item$1voidph* litem_378;
void* __dec_obj92;
struct list$1voidph* __result264__;
    if(    self->len==0) {
        litem_376=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value311=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj90=litem_376->item;
        litem_376->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value312=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj91=litem_377->item;
        litem_377->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value313=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj92=litem_378->item;
        litem_378->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_379;
int i_380;
    for(    i_379=0;    i_379<self->size;    i_379++    ){
        if(        self->item_existance[i_379]) {
            if(            1) {
                come_call_finalizer3(self->items[i_379], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_380=0;    i_380<self->size;    i_380++    ){
        if(        self->item_existance[i_380]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_380], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_381;
struct list_item$1voidp* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        come_call_finalizer3(prev_it_382,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_396;
unsigned int it_397;
_Bool same_key_exist_414;
char* it2_417;
struct map$2voidphvoidph* __result280__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_396=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            come_call_equals((void*)0, self->keys[it_397], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_397]);
                    come_call_finalizer3(self->keys[it_397], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_397]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_397]);
                    self->keys[it_397]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_397], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_397]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_397]=item;
                }
                break;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_397]=(_Bool)1;
            if(            1) {
                self->keys[it_397]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_397]=key;
            }
            if(            1) {
                self->items[it_397]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_397]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_414=(_Bool)0;
    for(    it2_417=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_417=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_417, key)) {
            same_key_exist_414=(_Bool)1;
        }
    }
    if(    !same_key_exist_414) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_383;
void* __right_value316 = (void*)0;
void** keys_384;
void* __right_value317 = (void*)0;
void** items_385;
void* __right_value318 = (void*)0;
_Bool* item_existance_386;
int len_387;
void* it_388;
void* default_value_389;
void* __right_value319 = (void*)0;
void* it2_390;
unsigned int hash_393;
int n_394;
void* default_value_395;
void* __right_value320 = (void*)0;
default_value_389 = (void*)0;
default_value_395 = (void*)0;
    size_383=self->size*10;
    keys_384=(void**)come_increment_ref_count(((void**)(__right_value316=(void**)come_calloc(1, sizeof(void*)*(1*(size_383)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_385=(void**)come_increment_ref_count(((void**)(__right_value317=(void**)come_calloc(1, sizeof(void*)*(1*(size_383)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_386=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value318=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_383)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_387=0;
    for(    it_388=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_388=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_389,0,sizeof(void*));
        it2_390=((void*)(__right_value319=map$2voidphvoidphp_at(self,it_388,default_value_389)));
        come_call_finalizer3(__right_value319,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_393=come_call_get_hash_key((void*)0, ((void*)it_388))%size_383;
        n_394=hash_393;
        while((_Bool)1) {
            if(            item_existance_386[n_394]) {
                n_394++;
                if(                n_394>=size_383) {
                    n_394=0;
                }
                else if(                n_394==hash_393) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_386[n_394]=(_Bool)1;
                keys_384[n_394]=it_388;
                items_385[n_394]=((void*)(__right_value320=map$2voidphvoidphp_at(self,it_388,default_value_395)));
                come_call_finalizer3(__right_value320,(void*)0, 0, 1, 0, 0, (void*)0);
                len_387++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_384;
    self->items=items_385;
    self->item_existance=item_existance_386;
    self->size=size_383;
    self->len=len_387;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_391;
unsigned int it_392;
void* __result265__;
void* __result266__;
void* __result267__;
void* __result268__;
    hash_391=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_392=hash_391;
    while((_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            come_call_equals((void*)0, self->keys[it_392], key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_392];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_398;
struct list_item$1voidp* it_399;
struct list$1voidp* __result272__;
    it2_398=0;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        if(        come_call_equals((void*)0, it_399->item, item)) {
            list$1voidpp_delete(self,it2_398,it2_398+1);
            break;
        }
        it2_398++;
        it_399=it_399->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_400;
struct list$1voidp* __result269__;
struct list_item$1voidp* it_403;
int i_404;
struct list_item$1voidp* prev_it_405;
struct list_item$1voidp* it_406;
int i_407;
struct list_item$1voidp* prev_it_408;
struct list_item$1voidp* it_409;
struct list_item$1voidp* head_prev_it_410;
struct list_item$1voidp* tail_it_411;
int i_412;
struct list_item$1voidp* prev_it_413;
struct list$1voidp* __result271__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_400=tail;
        tail=head;
        head=tmp_400;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result269__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_403=self->head;
        i_404=0;
        while(it_403!=((void*)0)) {
            if(            i_404<tail) {
                prev_it_405=it_403;
                it_403=it_403->next;
                i_404++;
                come_call_finalizer3(prev_it_405,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_404==tail) {
                self->head=it_403;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_403=it_403->next;
                i_404++;
            }
        }
    }
    else if(    tail==self->len) {
        it_406=self->head;
        i_407=0;
        while(it_406!=((void*)0)) {
            if(            i_407==head) {
                self->tail=it_406->prev;
                self->tail->next=((void*)0);
            }
            if(            i_407>=head) {
                prev_it_408=it_406;
                it_406=it_406->next;
                i_407++;
                come_call_finalizer3(prev_it_408,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_406=it_406->next;
                i_407++;
            }
        }
    }
    else {
        it_409=self->head;
        head_prev_it_410=((void*)0);
        tail_it_411=((void*)0);
        i_412=0;
        while(it_409!=((void*)0)) {
            if(            i_412==head) {
                head_prev_it_410=it_409->prev;
            }
            if(            i_412==tail) {
                tail_it_411=it_409;
            }
            if(            i_412>=head&&i_412<tail) {
                prev_it_413=it_409;
                it_409=it_409->next;
                i_412++;
                come_call_finalizer3(prev_it_413,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_409=it_409->next;
                i_412++;
            }
        }
        if(        head_prev_it_410!=((void*)0)) {
            head_prev_it_410->next=tail_it_411;
        }
        if(        tail_it_411!=((void*)0)) {
            tail_it_411->prev=head_prev_it_410;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_401;
struct list_item$1voidp* prev_it_402;
struct list$1voidp* __result270__;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_415;
void* __result273__;
void* __result274__;
void* result_416;
void* __result275__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_415,0,sizeof(void*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_416,0,sizeof(void*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_418;
void* __result276__;
void* __result277__;
void* result_419;
void* __result278__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_418,0,sizeof(void*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_419,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
struct list_item$1voidp* litem_420;
void* __right_value322 = (void*)0;
struct list_item$1voidp* litem_421;
void* __right_value323 = (void*)0;
struct list_item$1voidp* litem_422;
struct list$1voidp* __result279__;
    if(    self->len==0) {
        litem_420=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value321=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        litem_420->item=item;
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value322=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        litem_421->item=item;
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value323=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        litem_422->item=item;
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
struct list_item$1CVALUEph* litem_430;
struct CVALUE* __dec_obj95;
void* __right_value334 = (void*)0;
struct list_item$1CVALUEph* litem_431;
struct CVALUE* __dec_obj100;
void* __right_value335 = (void*)0;
struct list_item$1CVALUEph* litem_432;
struct CVALUE* __dec_obj101;
struct list$1CVALUEph* __result281__;
    if(    self->len==0) {
        litem_430=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value333=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj95=litem_430->item;
        litem_430->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value334=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj100=litem_431->item;
        litem_431->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value335=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj101=litem_432->item;
        litem_432->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj96;
struct sType* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj96=self->c_value;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj97=self->type;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj98=self->c_value_without_right_value_objects;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj99=self->c_value_without_cast_object_value;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* use_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj102;
int i_433;
struct list$1voidph* o2_saved_434;
struct sType* it_437;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct sType* __result291__;
    if(    type->mAnyOriginalType) {
        __dec_obj102=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_433=0;
    for(    o2_saved_434=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_437=((struct sType*)list$1voidphp_begin((o2_saved_434)));    !list$1voidphp_end((o2_saved_434));    it_437=((struct sType*)list$1voidphp_next((o2_saved_434)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_433,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_437)))));
        i_433++;
    }
    come_call_finalizer3(o2_saved_434,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_435;
void* __result283__;
void* __result284__;
void* result_436;
void* __result285__;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_435,0,sizeof(void*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_435;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->it=self->head;
    if(    self->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_436,0,sizeof(void*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_436;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_438;
void* __result286__;
void* __result287__;
void* result_439;
void* __result288__;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_438,0,sizeof(void*));
        __result286__ = gComeFunResultObject = __result_obj__ = result_438;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result287__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    memset(&result_439,0,sizeof(void*));
    __result288__ = gComeFunResultObject = __result_obj__ = result_439;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_440;
int i_441;
void* default_value_442;
struct list$1voidph* __result289__;
struct list_item$1voidph* it_443;
int i_444;
void* __dec_obj103;
struct list$1voidph* __result290__;
default_value_442 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_440=self->len;
        for(        i_441=0;        i_441<position-len_440;        i_441++        ){
            memset(&default_value_442,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_442));
            come_call_finalizer3(default_value_442, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result289__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    it_443=self->head;
    i_444=0;
    while(it_443!=((void*)0)) {
        if(        position==i_444) {
            __dec_obj103=it_443->item;
            it_443->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj103,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_443=it_443->next;
        i_444++;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sType* remove_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj104;
struct sType* __dec_obj105;
int i_445;
struct list$1voidph* o2_saved_446;
struct sType* it_447;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __result292__;
    if(    type->mAnyOriginalType) {
        __dec_obj104=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj105=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_445=0;
    for(    o2_saved_446=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_447=((struct sType*)list$1voidphp_begin((o2_saved_446)));    !list$1voidphp_end((o2_saved_446));    it_447=((struct sType*)list$1voidphp_next((o2_saved_446)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_445,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_447)))));
        i_445++;
    }
    come_call_finalizer3(o2_saved_446,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
char* none_generics_name_448;
void* __right_value341 = (void*)0;
char* fun_name2_449;
void* __right_value342 = (void*)0;
char* fun_name3_450;
void* __right_value343 = (void*)0;
struct sGenericsFun* generics_fun_451;
_Bool generics_any_child_452;
void* __right_value344 = (void*)0;
struct sType* no_solved_type_453;
struct sType* __dec_obj106;
struct list$1voidph* o2_saved_454;
struct sType* it_455;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* type2_456;
void* __right_value347 = (void*)0;
struct sType* type_before_457;
void* __right_value348 = (void*)0;
char* __dec_obj107;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_458=0;
_Bool err_459=0;
void* __right_value351 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result296__;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* type2_462;
void* __right_value358 = (void*)0;
struct sType* type_before_463;
void* __right_value359 = (void*)0;
char* __dec_obj113;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_464=0;
_Bool err_465=0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result297__;
void* __right_value365 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result301__;
    none_generics_name_448=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_449=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_450=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_448,fun_name));
    generics_fun_451=((struct sGenericsFun*)((void*)(__right_value343=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_450,((void*)0)))));
    come_call_finalizer3(__right_value343,(void*)0, 0, 1, 0, 0, __result_obj__);
    generics_any_child_452=(_Bool)0;
    no_solved_type_453=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj106=no_solved_type_453;
        no_solved_type_453=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
        for(        o2_saved_454=(struct list$1voidph*)come_increment_ref_count((no_solved_type_453->mGenericsTypes)),it_455=((struct sType*)list$1voidphp_begin((o2_saved_454)));        !list$1voidphp_end((o2_saved_454));        it_455=((struct sType*)list$1voidphp_next((o2_saved_454)))        ){
            if(            it_455->mAnyOriginalType) {
                generics_any_child_452=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_454,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_451) {
        if(        generics_fun_451->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_452)) {
            type2_456=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_453))));
            type_before_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj107=fun_name2_449;
            fun_name2_449=(char*)come_increment_ref_count(create_method_name(type2_456,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value350=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_449)),generics_fun_451,type2_456,info)));
            name_458=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_459=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value350,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_459) {
                err_msg(info,"%s not found",fun_name3_450);
                __result296__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value355=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 74, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_456,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value355,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result296__;
            }
            type=type_before_457;
            come_call_finalizer3(type2_456,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_457,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            type2_462=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_453))));
            type_before_463=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj113=fun_name2_449;
            fun_name2_449=(char*)come_increment_ref_count(create_method_name(type2_462,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value361=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_449)),generics_fun_451,type2_462,info)));
            name_464=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            err_465=multiple_assign_var2->v2;
            come_call_finalizer3(__right_value361,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_465) {
                err_msg(info,"%s not found",fun_name3_450);
                __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value364=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 90, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_462,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_463,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value364,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            type=type_before_463;
            come_call_finalizer3(type2_462,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_463,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value369=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 97, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key, tuple2$2charphsGenericsFunp_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_449)),generics_fun_451)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_449 = come_decrement_ref_count2(fun_name2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_450 = come_decrement_ref_count2(fun_name3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value369,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj108;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj108=self->v1;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj109;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj109=self->v1;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result293__;
void* __right_value352 = (void*)0;
struct tuple2$2charphvoidp* result_460;
void* __right_value353 = (void*)0;
char* __dec_obj110;
struct tuple2$2charphvoidp* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_460=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj110=result_460->v1;
        result_460->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_460->v2=self->v2;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_460;
    come_call_finalizer3(result_460,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_461;
    result_461=0;
    result_461+=int_get_hash_key(((int)self->v1));
    result_461+=int_get_hash_key(((int)self->v2));
    return result_461;
}

static _Bool tuple2$2charphvoidp_equals(struct tuple2$2charphvoidp* left, struct tuple2$2charphvoidp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj111;
struct tuple2$2charphvoidp* __result295__;
    __dec_obj111=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj112;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj112=self->v1;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj114;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj114=self->v1;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsGenericsFunp* __result298__;
void* __right_value366 = (void*)0;
struct tuple2$2charphsGenericsFunp* result_466;
void* __right_value367 = (void*)0;
char* __dec_obj115;
struct tuple2$2charphsGenericsFunp* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_466=(struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "tuple2$2charphsGenericsFunp_clone", 3, "struct tuple2$2charphsGenericsFunp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj115=result_466->v1;
        result_466->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_466->v2=self->v2;
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_466;
    come_call_finalizer3(result_466,tuple2$2charphsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self){
unsigned int result_467;
    result_467=0;
    result_467+=int_get_hash_key(((int)self->v1));
    result_467+=int_get_hash_key(((int)self->v2));
    return result_467;
}

static _Bool tuple2$2charphsGenericsFunp_equals(struct tuple2$2charphsGenericsFunp* left, struct tuple2$2charphsGenericsFunp* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj116;
struct tuple2$2charphsGenericsFunp* __result300__;
    __dec_obj116=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj117=self->v1;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* fun_name3_469;
struct list$1voidph* method_generics_types_before_470;
struct list$1voidph* __dec_obj118;
void* __right_value371 = (void*)0;
struct sGenericsFun* generics_fun_471;
void* __right_value372 = (void*)0;
_Bool _if_conditional1;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result302__;
struct list$1voidph* __dec_obj119;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result303__;
    static int num_method_generics_468=0;
    fun_name3_469=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_468++));
    method_generics_types_before_470=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj118=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj118,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_471=((struct sGenericsFun*)((void*)(__right_value371=map$2voidphvoidphp_at(info->generics_funcs,fun_name,((void*)0)))));
    come_call_finalizer3(__right_value371,(void*)0, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_471) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_469)),generics_fun_471,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_469);
            __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value375=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 113, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_469 = come_decrement_ref_count2(fun_name3_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value375,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
    }
    __dec_obj119=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_470);
    come_call_finalizer3(__dec_obj119,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value378=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 119, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key, tuple2$2charphsGenericsFunp_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_469)),generics_fun_471)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_469 = come_decrement_ref_count2(fun_name3_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value378,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value383 = (void*)0;
struct sNode* current_stack_frame_node_472;
_Bool Value_474;
_Bool __result306__;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* method_block2_478;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* method_block_type_479;
void* __right_value389 = (void*)0;
char* class_name_483;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sClass* current_stack_frame_struct_484;
void* __right_value392 = (void*)0;
_Bool __result309__;
void* __right_value393 = (void*)0;
struct sType* result_type_485;
struct list$1voidph* param_types_486;
struct list$1charph* param_names_487;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct buffer* all_alhabet_sname_488;
char* p_489;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
int i_490;
struct list$1voidph* o2_saved_491;
struct sType* it_492;
struct sType* param_type_493;
void* __right_value398 = (void*)0;
char* param_name_494;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
char* param_name_495;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* param_name_496;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct buffer* source3_497;
char* p_498;
char* head_499;
int sline_500;
struct buffer* __dec_obj122;
void* __right_value405 = (void*)0;
struct sNode* node_501;
_Bool Value_502;
_Bool __result310__;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* method_block_name_503;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct CVALUE* come_value2_504;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sFun* fun2_505;
_Bool __result311__;
struct sType* method_block_type2_506;
void* __right_value412 = (void*)0;
char* __dec_obj123;
void* __right_value413 = (void*)0;
struct sType* __dec_obj124;
struct buffer* __dec_obj125;
void* __right_value414 = (void*)0;
struct sType* __dec_obj126;
_Bool contained_method_generics_method_block_507;
struct list$1voidph* o2_saved_508;
struct sType* it_509;
void* __right_value415 = (void*)0;
_Bool __result313__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value380=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_472=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value380,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_474=node_compile(current_stack_frame_node_472,info);
    if(    !Value_474) {
        __result306__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_472) { current_stack_frame_node_472 = come_decrement_ref_count2(current_stack_frame_node_472, ((struct sNode*)current_stack_frame_node_472)->finalize, ((struct sNode*)current_stack_frame_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result306__;
    }
    else {
    }
    come_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_477));
    dec_stack_ptr(1,info);
    method_block2_478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    method_block_type_479=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value387=list$1voidphp_operator_load_element(fun->mParamTypes,-1))))));
    come_call_finalizer3(__right_value387,(void*)0, 0, 1, 0, 0, (void*)0);
    class_name_483=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)((void*)(__right_value390=list$1voidphp_operator_load_element(method_block_type_479->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value391=map$2voidphvoidphp_operator_load_element(info->classes,class_name_483))));
    come_call_finalizer3(__right_value390,(void*)0, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value391,(void*)0, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_484=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value392=map$2voidphvoidphp_operator_load_element(info->classes,class_name_483))));
    come_call_finalizer3(__right_value392,(void*)0, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_479->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result309__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_472) { current_stack_frame_node_472 = come_decrement_ref_count2(current_stack_frame_node_472, ((struct sNode*)current_stack_frame_node_472)->finalize, ((struct sNode*)current_stack_frame_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_483 = come_decrement_ref_count2(class_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result309__;
    }
    result_type_485=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_479->mResultType));
    result_type_485->mStatic=(_Bool)0;
    param_types_486=method_block_type_479->mParamTypes;
    param_names_487=method_block_type_479->mParamNames;
    all_alhabet_sname_488=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    {
        p_489=info->sname;
        while(*p_489) {
            if(            xisalnum(*p_489)) {
                buffer_append_char(all_alhabet_sname_488,*p_489++);
            }
            else {
                p_489++;
            }
        }
    }
    buffer_append_format(method_block2_478,"%s method_block%d_%s(",((char*)(__right_value396=make_type_name_string(result_type_485,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value397=buffer_to_string(all_alhabet_sname_488))));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_490=0;
    for(    o2_saved_491=(param_types_486),it_492=((struct sType*)list$1voidphp_begin((o2_saved_491)));    !list$1voidphp_end((o2_saved_491));    it_492=((struct sType*)list$1voidphp_next((o2_saved_491)))    ){
        param_type_493=it_492;
        if(        i_490==0) {
            param_name_494=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_478,"%s",((char*)(__right_value399=make_define_var(param_type_493,param_name_494,(_Bool)0,info))));
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_494 = come_decrement_ref_count2(param_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_490==1) {
            param_name_495=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_478,"%s",((char*)(__right_value401=make_define_var_no_solved(param_type_493,param_name_495,(_Bool)0,(_Bool)0,info))));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_495 = come_decrement_ref_count2(param_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_496=(char*)come_increment_ref_count(xsprintf("it%d",i_490));
            buffer_append_format(method_block2_478,"%s",((char*)(__right_value403=make_define_var_no_solved(param_type_493,param_name_496,(_Bool)0,(_Bool)0,info))));
            __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_496 = come_decrement_ref_count2(param_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_490!=list$1voidphp_length(param_types_486)-1) {
            buffer_append_str(method_block2_478,",");
        }
        i_490++;
    }
    buffer_append_str(method_block2_478,")\n");
    buffer_append_str(method_block2_478,((char*)(__right_value404=buffer_to_string(method_block))));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_497=(struct buffer*)come_increment_ref_count(info->source);
    p_498=info->p;
    head_499=info->head;
    sline_500=info->sline;
    __dec_obj122=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_478);
    come_call_finalizer3(__dec_obj122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_501=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_502=node_compile(node_501,info);
    if(    !Value_502) {
        __result310__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_472) { current_stack_frame_node_472 = come_decrement_ref_count2(current_stack_frame_node_472, ((struct sNode*)current_stack_frame_node_472)->finalize, ((struct sNode*)current_stack_frame_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_483 = come_decrement_ref_count2(class_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_488,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_501) { node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result310__;
    }
    else {
    }
    method_block_name_503=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value406=buffer_to_string(all_alhabet_sname_488)))));
    __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_504=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_505=((struct sFun*)((void*)(__right_value411=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value410=__builtin_string(method_block_name_503))),((void*)0)))));
    __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value411,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    fun2_505==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_503);
        __result311__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_472) { current_stack_frame_node_472 = come_decrement_ref_count2(current_stack_frame_node_472, ((struct sNode*)current_stack_frame_node_472)->finalize, ((struct sNode*)current_stack_frame_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_483 = come_decrement_ref_count2(class_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_488,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_501) { node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_503 = come_decrement_ref_count2(method_block_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result311__;
    }
    method_block_type2_506=fun2_505->mLambdaType;
    __dec_obj123=come_value2_504->c_value;
    come_value2_504->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_503));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value2_504->type;
    come_value2_504->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_506));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_504->var=((void*)0);
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_504));
    __dec_obj125=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_497);
    come_call_finalizer3(__dec_obj125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_498;
    info->head=head_499;
    info->sline=sline_500;
    info->current_stack_frame_struct=current_stack_frame_struct_484;
    __dec_obj126=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_507=(_Bool)0;
    for(    o2_saved_508=(param_types_486),it_509=((struct sType*)list$1voidphp_begin((o2_saved_508)));    !list$1voidphp_end((o2_saved_508));    it_509=((struct sType*)list$1voidphp_next((o2_saved_508)))    ){
        if(        is_contained_method_generics_types(it_509,info)) {
            contained_method_generics_method_block_507=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_485,info)) {
        contained_method_generics_method_block_507=(_Bool)1;
    }
    if(    contained_method_generics_method_block_507) {
        map$2voidphvoidphp_remove(info->funcs,((char*)(__right_value415=__builtin_string(method_block_name_503))));
        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __result313__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_472) { current_stack_frame_node_472 = come_decrement_ref_count2(current_stack_frame_node_472, ((struct sNode*)current_stack_frame_node_472)->finalize, ((struct sNode*)current_stack_frame_node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_479,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_483 = come_decrement_ref_count2(class_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_488,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_497,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_501) { node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_503 = come_decrement_ref_count2(method_block_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result304__;
void* __right_value381 = (void*)0;
struct sCurrentNode* result_473;
void* __right_value382 = (void*)0;
char* __dec_obj120;
struct sCurrentNode* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_473=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_473->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj120=result_473->sname;
        result_473->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_473->sline_real=self->sline_real;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_473;
    come_call_finalizer3(result_473,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_475;
struct list_item$1CVALUEph* prev_it_476;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj121;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj121=self->item;
            come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_480;
int i_481;
void* __result307__;
void* default_value_482;
void* __result308__;
default_value_482 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_480=self->head;
    i_481=0;
    while(it_480!=((void*)0)) {
        if(        position==i_481) {
            __result307__ = gComeFunResultObject = __result_obj__ = it_480->item;
            gComeFunResultObject = (void*)0;
            return __result307__;
        }
        it_480=it_480->next;
        i_481++;
    }
    memset(&default_value_482,0,sizeof(void*));
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_482);
    come_call_finalizer3(default_value_482, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_510;
unsigned int it_511;
struct map$2voidphvoidph* __result312__;
    hash_510=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_511=hash_510;
    while((_Bool)1) {
        if(        self->item_existance[it_511]) {
            if(            come_call_equals((void*)0, self->keys[it_511], key)) {
                list$1voidpp_remove(self->key_list,self->keys[it_511]);
                self->item_existance[it_511]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_511], (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->keys[it_511]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_511], (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_511]=((void*)0);
                self->len--;
                break;
            }
            it_511++;
            if(            it_511>=self->size) {
                it_511=0;
            }
            else if(            it_511==hash_510) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj127;
void* __right_value418 = (void*)0;
char* __dec_obj128;
void* __right_value428 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj139;
void* __right_value429 = (void*)0;
struct buffer* __dec_obj140;
void* __right_value430 = (void*)0;
struct list$1voidph* __dec_obj141;
struct sMethodCallNode* __result320__;
    ((struct sNodeBase*)(__right_value416=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value416,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj127=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj128=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj139=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj139,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj140=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj141=self->method_generics_types;
    self->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj141,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value431=__builtin_string("sMethodCallNode")));
    __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_522;
struct list$1tuple2$2charphsNodephph* params_523;
struct sNode* obj_524;
struct buffer* method_block_525;
int method_block_sline_526;
_Bool no_infference_method_generics_527;
struct list$1voidph* method_generics_types_528;
_Bool recursive_529;
struct list$1voidph* method_generics_types_before_530;
struct list$1voidph* __dec_obj148;
void* __right_value432 = (void*)0;
struct list$1voidph* __dec_obj149;
_Bool Value_531;
_Bool __result322__;
void* __right_value433 = (void*)0;
struct CVALUE* obj_value_532;
void* __right_value434 = (void*)0;
struct sType* obj_type_533;
_Bool no_output_come_code_534;
struct sType* type_535;
void* __right_value435 = (void*)0;
char* none_generics_name_536;
void* __right_value436 = (void*)0;
char* fun_name2_537;
void* __right_value437 = (void*)0;
char* fun_name3_538;
void* __right_value438 = (void*)0;
struct sGenericsFun* generics_fun_539;
_Bool method_generics_540;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var3 = (void*)0;
char* name_541=0;
struct sGenericsFun* gfun_542=0;
char* generics_fun_name_543;
void* __right_value441 = (void*)0;
struct sFun* fun_544;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1CVALUEph* come_params_545;
_Bool no_output_come_code_546;
_Bool __result324__;
void* __right_value444 = (void*)0;
struct CVALUE* method_block_node_547;
void* __right_value445 = (void*)0;
struct sType* method_block_lambda_type_551;
void* __right_value446 = (void*)0;
struct sType* method_block_result_type_552;
void* __right_value447 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_553;
struct sType* generics_fun_method_block_result_type_554;
int method_generics_num_555;
void* __right_value448 = (void*)0;
int n_556;
struct list$1voidph* o2_saved_557;
struct sType* it_558;
int method_generics_num_559;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1CVALUEph* come_params_560;
int i_561;
struct list$1tuple2$2charphsNodephph* o2_saved_562;
struct tuple2$2charphsNodeph* it_565;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_568=0;
struct sNode* node_569=0;
_Bool Value_570;
_Bool __result333__;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_571;
int method_generics_num_572;
_Bool generics_any_child_573;
struct sType* obj_type2_574;
struct sType* __dec_obj150;
struct list$1voidph* o2_saved_575;
struct sType* it_576;
void* __right_value454 = (void*)0;
struct list$1voidph* o2_saved_577;
struct sType* it_578;
int method_generics_num_579;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1CVALUEph* come_params_580;
int i_581;
struct list$1tuple2$2charphsNodephph* o2_saved_582;
struct tuple2$2charphsNodeph* it_583;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_584=0;
struct sNode* node_585=0;
_Bool Value_586;
_Bool __result334__;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_587;
int method_generics_num_588;
void* __right_value460 = (void*)0;
int n_589;
struct list$1voidph* o2_saved_590;
struct sType* it_591;
int method_generics_num_592;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sClass* klass_593;
_Bool calling_dynamic_method_594;
struct sType* lambda_type_595;
struct list$1voidph* o2_saved_596;
struct tuple2$2charphsTypeph* it_597;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_598=0;
struct sType* field_type_599=0;
void* __right_value463 = (void*)0;
struct sType* result_type_600;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1CVALUEph* come_params_601;
int i_602;
struct list$1tuple2$2charphsNodephph* o2_saved_603;
struct tuple2$2charphsNodeph* it_604;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_605=0;
struct sNode* node_606=0;
_Bool Value_607;
_Bool __result335__;
void* __right_value466 = (void*)0;
struct CVALUE* come_value_608;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
_Bool _if_conditional2;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct buffer* buf_609;
int j_610;
struct list$1CVALUEph* o2_saved_611;
struct CVALUE* it_614;
void* __right_value475 = (void*)0;
char* __dec_obj151;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value2_617;
void* __right_value478 = (void*)0;
char* __dec_obj152;
void* __right_value479 = (void*)0;
struct sType* result_type2_618;
void* __right_value480 = (void*)0;
struct sType* __dec_obj153;
struct list$1voidph* __dec_obj154;
struct sGenericsFun* generics_fun_619;
char* generics_fun_name_620;
struct sFun* fun_621;
void* __right_value481 = (void*)0;
char* __dec_obj155;
struct sClass* klass_622;
void* __right_value482 = (void*)0;
_Bool _while_condtional1;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
char* __dec_obj156;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_623=0;
struct sGenericsFun* gfun_624=0;
char* __dec_obj157;
void* __right_value489 = (void*)0;
char* none_generics_name_625;
void* __right_value490 = (void*)0;
char* fun_name3_626;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var9 = (void*)0;
char* name_627=0;
struct sGenericsFun* gfun_628=0;
char* __dec_obj158;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_629=0;
struct sGenericsFun* gfun_630=0;
char* __dec_obj159;
int i_631;
void* __right_value495 = (void*)0;
char* new_fun_name_632;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __dec_obj160;
struct sType* obj_array_type_633;
void* __right_value499 = (void*)0;
char* array_method_name_634;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* __dec_obj161;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __dec_obj162;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
_Bool __result342__;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj163;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sClass* klass_635;
void* __right_value515 = (void*)0;
_Bool _while_condtional2;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj164;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun2_636=0;
char* real_fun_name_637=0;
char* __dec_obj166;
void* __right_value521 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var12 = (void*)0;
struct sFun* fun2_638=0;
char* real_fun_name_639=0;
char* __dec_obj167;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* original_obj_type_fun_name_640;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
char* __dec_obj168;
_Bool __result343__;
_Bool __result344__;
_Bool __result345__;
void* __right_value526 = (void*)0;
struct sType* result_type_641;
void* __right_value527 = (void*)0;
struct sType* result_type2_642;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1voidph* param_types_643;
struct list$1voidph* o2_saved_644;
struct sType* it_645;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* it2_646;
struct sType* no_solved_obj_type_647;
void* __right_value532 = (void*)0;
struct sType* it3_648;
void* __right_value533 = (void*)0;
struct sType* any_type_649;
void* __right_value534 = (void*)0;
struct list$1voidph* type_checking_param_types_650;
int n_651;
struct list$1voidph* o2_saved_652;
struct sType* it_653;
struct sType* no_solved_obj_type_654;
void* __right_value535 = (void*)0;
struct sType* it3_655;
void* __right_value536 = (void*)0;
struct sType* any_type_656;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
_Bool _if_conditional3;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1CVALUEph* come_params_657;
int i_658;
_Bool first_param_662;
struct list$1tuple2$2charphsNodephph* o2_saved_663;
struct tuple2$2charphsNodeph* it_664;
struct tuple2$2charphsNodeph* multiple_assign_var13 = (void*)0;
char* label_665=0;
struct sNode* node_666=0;
int n_667;
struct list$1charph* o2_saved_668;
char* it_671;
_Bool Value_674;
_Bool __result353__;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_675;
void* __right_value545 = (void*)0;
_Bool _if_conditional4;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
_Bool _if_conditional5;
void* __right_value552 = (void*)0;
int i_681;
struct list$1tuple2$2charphsNodephph* o2_saved_682;
struct tuple2$2charphsNodeph* it_683;
struct tuple2$2charphsNodeph* multiple_assign_var14 = (void*)0;
char* label_684=0;
struct sNode* node_685=0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
_Bool _if_conditional6;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
_Bool _elif_conditional1;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
_Bool _if_conditional7;
_Bool Value_689;
_Bool __result358__;
void* __right_value562 = (void*)0;
struct CVALUE* come_value_690;
void* __right_value563 = (void*)0;
_Bool _if_conditional8;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
_Bool _if_conditional9;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
_Bool _if_conditional10;
struct sType* obj_array_type_691;
void* __right_value572 = (void*)0;
char* array_method_name_692;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* buf_693;
int i_694;
struct list$1sNodeph* o2_saved_695;
struct sNode* it_698;
_Bool Value_701;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_702;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_703;
void* __right_value578 = (void*)0;
char* __dec_obj173;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj174;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct buffer* buf_707;
int i_708;
struct list$1sNodeph* o2_saved_709;
struct sNode* it_710;
_Bool Value_711;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_712;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_713;
void* __right_value592 = (void*)0;
char* __dec_obj178;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __dec_obj179;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct buffer* buf_714;
int i_715;
struct list$1sNodeph* o2_saved_716;
struct sNode* it_717;
_Bool Value_718;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_719;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_720;
void* __right_value603 = (void*)0;
char* __dec_obj180;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sType* __dec_obj181;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct buffer* buf_721;
int i_722;
struct list$1sNodeph* o2_saved_723;
struct sNode* it_724;
_Bool Value_725;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_726;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct CVALUE* come_value_727;
void* __right_value614 = (void*)0;
char* __dec_obj182;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* __dec_obj183;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct buffer* buf_728;
int i_729;
struct list$1sNodeph* o2_saved_730;
struct sNode* it_731;
_Bool Value_732;
void* __right_value622 = (void*)0;
struct CVALUE* come_value_733;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct CVALUE* come_value_734;
void* __right_value625 = (void*)0;
char* __dec_obj184;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj185;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* default_param_735;
void* __right_value633 = (void*)0;
char* param_name_736;
void* __right_value634 = (void*)0;
_Bool _if_conditional11;
struct buffer* source_737;
char* p_738;
char* head_739;
int sline_740;
void* __right_value635 = (void*)0;
struct buffer* __dec_obj186;
void* __right_value636 = (void*)0;
struct sNode* node_741;
_Bool Value_742;
_Bool __result366__;
struct buffer* __dec_obj187;
void* __right_value637 = (void*)0;
struct CVALUE* come_value_743;
void* __right_value638 = (void*)0;
_Bool _if_conditional12;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
_Bool _if_conditional13;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
_Bool _if_conditional14;
_Bool __result367__;
_Bool __result368__;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct buffer* buf_744;
int j_745;
struct list$1CVALUEph* o2_saved_746;
struct CVALUE* it_747;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct CVALUE* come_value2_748;
void* __right_value651 = (void*)0;
char* __dec_obj188;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sType* __dec_obj189;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* __dec_obj190;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* __dec_obj191;
void* __right_value658 = (void*)0;
char* __dec_obj192;
_Bool generics_any_child_749;
struct sType* obj_type2_750;
struct sType* __dec_obj193;
struct list$1voidph* o2_saved_751;
struct sType* it_752;
struct sType* obj_type2_753;
void* __right_value659 = (void*)0;
struct sType* __dec_obj194;
void* __right_value660 = (void*)0;
struct sType* __dec_obj195;
void* __right_value661 = (void*)0;
struct sType* __dec_obj196;
void* __right_value662 = (void*)0;
struct sType* __dec_obj197;
void* __right_value663 = (void*)0;
struct sType* __dec_obj198;
void* __right_value664 = (void*)0;
char* __dec_obj199;
void* __right_value665 = (void*)0;
struct CVALUE* __dec_obj200;
void* __right_value666 = (void*)0;
struct list$1voidph* __dec_obj201;
_Bool __result369__;
    fun_name_522=(char*)come_increment_ref_count(self->fun_name);
    params_523=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_524=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_525=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_526=self->method_block_sline;
    no_infference_method_generics_527=self->no_infference_method_generics;
    method_generics_types_528=(struct list$1voidph*)come_increment_ref_count(self->method_generics_types);
    recursive_529=self->recursive;
    method_generics_types_before_530=((void*)0);
    __dec_obj148=method_generics_types_before_530;
    method_generics_types_before_530=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj149=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj149,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    Value_531=node_compile(obj_524,info);
    if(    !Value_531) {
        __result322__ = (_Bool)0;
        fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result322__;
    }
    else {
    }
    obj_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_532->type));
    if(    !no_infference_method_generics_527) {
        no_output_come_code_534=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_535=(struct sType*)come_increment_ref_count(obj_type_533);
        none_generics_name_536=(char*)come_increment_ref_count(get_none_generics_name(type_535->mClass->mName));
        fun_name2_537=(char*)come_increment_ref_count(create_method_name(type_535,(_Bool)0,fun_name_522,info,(_Bool)1));
        fun_name3_538=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_536,fun_name_522));
        generics_fun_539=((struct sGenericsFun*)((void*)(__right_value438=map$2voidphvoidphp_at(info->generics_funcs,fun_name3_538,((void*)0)))));
        come_call_finalizer3(__right_value438,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_539) {
            method_generics_540=list$1charphp_length(generics_fun_539->mMethodGenericsTypeNames)>0;
            if(            method_generics_540&&list$1voidphp_length(info->method_generics_types)==0) {
                multiple_assign_var3=((struct tuple2$2charphsGenericsFunp*)(__right_value440=make_generics_function(obj_type_533,(char*)come_increment_ref_count(__builtin_string(fun_name_522)),info,(_Bool)1)));
                name_541=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                gfun_542=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value440,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_543=(char*)come_increment_ref_count(name_541);
                fun_544=((struct sFun*)((void*)(__right_value441=map$2voidphvoidphp_at(info->funcs,generics_fun_name_543,((void*)0)))));
                come_call_finalizer3(__right_value441,(void*)0, 0, 1, 0, 0, (void*)0);
                come_params_545=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 354, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_525) {
                    no_output_come_code_546=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_525,(struct list$1CVALUEph*)come_increment_ref_count(come_params_545),fun_544,fun_name3_538,method_block_sline_526,info,(_Bool)1)) {
                        __result324__ = (_Bool)0;
                        name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_537 = come_decrement_ref_count2(fun_name2_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result324__;
                    }
                    info->no_output_come_code=no_output_come_code_546;
                    method_block_node_547=((struct CVALUE*)(__right_value444=list$1CVALUEphp_operator_load_element(come_params_545,-1)));
                    come_call_finalizer3(__right_value444,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_551=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_547->type));
                    method_block_result_type_552=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_553=((struct sType*)((void*)(__right_value447=list$1voidphp_operator_load_element(generics_fun_539->mParamTypes,-1))));
                    come_call_finalizer3(__right_value447,(void*)0, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_554=generics_fun_method_block_lambda_type_553->mResultType;
                    if(                    generics_fun_method_block_result_type_554->mClass->mMethodGenerics) {
                        method_generics_num_555=generics_fun_method_block_result_type_554->mClass->mMethodGenericsNum;
                        list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_555,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_552)));
                    }
                    n_556=0;
                    for(                    o2_saved_557=(struct list$1voidph*)come_increment_ref_count((generics_fun_method_block_lambda_type_553->mParamTypes)),it_558=((struct sType*)list$1voidphp_begin((o2_saved_557)));                    !list$1voidphp_end((o2_saved_557));                    it_558=((struct sType*)list$1voidphp_next((o2_saved_557)))                    ){
                        if(                        it_558->mClass->mMethodGenerics) {
                            method_generics_num_559=it_558->mClass->mMethodGenericsNum;
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_559,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value449=list$1voidphp_operator_load_element(method_block_lambda_type_551->mParamTypes,n_556)))))));
                            come_call_finalizer3(__right_value449,(void*)0, 0, 1, 0, 0, (void*)0);
                        }
                        n_556++;
                    }
                    come_call_finalizer3(o2_saved_557,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_560=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 383, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_561=0;
                    for(                    o2_saved_562=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_523)),it_565=list$1tuple2$2charphsNodephphp_begin((o2_saved_562));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_562));                    it_565=list$1tuple2$2charphsNodephphp_next((o2_saved_562))                    ){
                        multiple_assign_var4=it_565;
                        label_568=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                        node_569=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                        if(                        i_561==0) {
                            list$1CVALUEphp_push_back(come_params_560,(struct CVALUE*)come_increment_ref_count(obj_value_532));
                            i_561++;
                        }
                        else {
                            Value_570=node_compile(node_569,info);
                            if(                            !Value_570) {
                                __result333__ = (_Bool)0;
                                label_568 = come_decrement_ref_count2(label_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_562,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_560,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_537 = come_decrement_ref_count2(fun_name2_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result333__;
                            }
                            else {
                            }
                            come_value_571=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_560,(struct CVALUE*)come_increment_ref_count(come_value_571));
                            come_call_finalizer3(come_value_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_568 = come_decrement_ref_count2(label_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_562,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_539->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_572=generics_fun_539->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_573=(_Bool)0;
                            obj_type2_574=(struct sType*)come_increment_ref_count(obj_type_533);
                            if(                            obj_type2_574->mNoSolvedGenericsType) {
                                __dec_obj150=obj_type2_574;
                                obj_type2_574=(struct sType*)come_increment_ref_count(obj_type2_574->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
                                for(                                o2_saved_575=(struct list$1voidph*)come_increment_ref_count((obj_type2_574->mGenericsTypes)),it_576=((struct sType*)list$1voidphp_begin((o2_saved_575)));                                !list$1voidphp_end((o2_saved_575));                                it_576=((struct sType*)list$1voidphp_next((o2_saved_575)))                                ){
                                    if(                                    it_576->mAnyOriginalType) {
                                        generics_any_child_573=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_575,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_572,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_574,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_556=0;
                    for(                    o2_saved_577=(struct list$1voidph*)come_increment_ref_count((generics_fun_539->mParamTypes)),it_578=((struct sType*)list$1voidphp_begin((o2_saved_577)));                    !list$1voidphp_end((o2_saved_577));                    it_578=((struct sType*)list$1voidphp_next((o2_saved_577)))                    ){
                        if(                        it_578->mClass->mMethodGenerics) {
                            method_generics_num_579=it_578->mClass->mMethodGenericsNum;
                            if(                            n_556<list$1CVALUEphp_length(come_params_560)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_579,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value455=list$1CVALUEphp_operator_load_element(come_params_560,n_556)))->type)));
                                come_call_finalizer3(__right_value455,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_556++;
                    }
                    come_call_finalizer3(o2_saved_577,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_560,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_580=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 433, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_581=0;
                    for(                    o2_saved_582=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_523)),it_583=list$1tuple2$2charphsNodephphp_begin((o2_saved_582));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_582));                    it_583=list$1tuple2$2charphsNodephphp_next((o2_saved_582))                    ){
                        multiple_assign_var5=it_583;
                        label_584=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                        node_585=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                        if(                        i_581==0) {
                            list$1CVALUEphp_push_back(come_params_580,(struct CVALUE*)come_increment_ref_count(obj_value_532));
                            i_581++;
                        }
                        else {
                            Value_586=node_compile(node_585,info);
                            if(                            !Value_586) {
                                __result334__ = (_Bool)0;
                                label_584 = come_decrement_ref_count2(label_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_582,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_580,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_537 = come_decrement_ref_count2(fun_name2_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result334__;
                            }
                            else {
                            }
                            come_value_587=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_580,(struct CVALUE*)come_increment_ref_count(come_value_587));
                            come_call_finalizer3(come_value_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_584 = come_decrement_ref_count2(label_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_585) { node_585 = come_decrement_ref_count2(node_585, ((struct sNode*)node_585)->finalize, ((struct sNode*)node_585)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_582,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_539->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_588=generics_fun_539->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_588,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_589=0;
                    for(                    o2_saved_590=(struct list$1voidph*)come_increment_ref_count((generics_fun_539->mParamTypes)),it_591=((struct sType*)list$1voidphp_begin((o2_saved_590)));                    !list$1voidphp_end((o2_saved_590));                    it_591=((struct sType*)list$1voidphp_next((o2_saved_590)))                    ){
                        if(                        it_591->mClass->mMethodGenerics) {
                            method_generics_num_592=it_591->mClass->mMethodGenericsNum;
                            if(                            n_589<list$1CVALUEphp_length(come_params_580)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_592,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value461=list$1CVALUEphp_operator_load_element(come_params_580,n_589)))->type)));
                                come_call_finalizer3(__right_value461,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_589++;
                    }
                    come_call_finalizer3(o2_saved_590,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_580,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2voidphvoidphp_remove(info->funcs,generics_fun_name_543);
                name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_534;
        come_call_finalizer3(type_535,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_537 = come_decrement_ref_count2(fun_name2_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_593=obj_type_533->mClass;
    calling_dynamic_method_594=(_Bool)0;
    lambda_type_595=((void*)0);
    for(    o2_saved_596=(struct list$1voidph*)come_increment_ref_count((klass_593->mFields)),it_597=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_596)));    !list$1voidphp_end((o2_saved_596));    it_597=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_596)))    ){
        multiple_assign_var6=it_597;
        field_name_598=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type_599=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        string_operator_equals(field_name_598,fun_name_522)&&string_operator_equals(field_type_599->mClass->mName,"lambda")) {
            calling_dynamic_method_594=(_Bool)1;
            lambda_type_595=field_type_599;
            field_name_598 = come_decrement_ref_count2(field_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_598 = come_decrement_ref_count2(field_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_596,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_594) {
        result_type_600=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_595->mResultType));
        result_type_600->mStatic=(_Bool)0;
        come_params_601=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 496, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_602=0;
        for(        o2_saved_603=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_523)),it_604=list$1tuple2$2charphsNodephphp_begin((o2_saved_603));        !list$1tuple2$2charphsNodephphp_end((o2_saved_603));        it_604=list$1tuple2$2charphsNodephphp_next((o2_saved_603))        ){
            multiple_assign_var7=it_604;
            label_605=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_606=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            i_602==0) {
                list$1CVALUEphp_push_back(come_params_601,(struct CVALUE*)come_increment_ref_count(obj_value_532));
                i_602++;
            }
            else {
                Value_607=node_compile(node_606,info);
                if(                !Value_607) {
                    __result335__ = (_Bool)0;
                    label_605 = come_decrement_ref_count2(label_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_606) { node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_603,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result335__;
                }
                else {
                }
                come_value_608=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value469=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value467=string_to_string(fun_name_522))),((char*)(__right_value468=int_to_string(i_602)))))),((struct sType*)((void*)(__right_value470=list$1voidphp_operator_load_element(lambda_type_595->mParamTypes,i_602-1)))),come_value_608->type,come_value_608,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value470,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)((void*)(__right_value471=list$1voidphp_operator_load_element(lambda_type_595->mParamTypes,i_602-1))))->mHeap&&come_value_608->type->mHeap)),                come_call_finalizer3(__right_value471,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)((void*)(__right_value472=list$1voidphp_operator_load_element(lambda_type_595->mParamTypes,i_602-1)))),come_value_608->type,come_value_608,info,(_Bool)1);
                    come_call_finalizer3(__right_value472,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_push_back(come_params_601,(struct CVALUE*)come_increment_ref_count(come_value_608));
                i_602++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_608,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_605 = come_decrement_ref_count2(label_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_606) { node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_603,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 526, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_format(buf_609,"%s->%s",obj_value_532->c_value,fun_name_522);
        buffer_append_str(buf_609,"(");
        j_610=0;
        for(        o2_saved_611=(struct list$1CVALUEph*)come_increment_ref_count((come_params_601)),it_614=list$1CVALUEphp_begin((o2_saved_611));        !list$1CVALUEphp_end((o2_saved_611));        it_614=list$1CVALUEphp_next((o2_saved_611))        ){
            if(            j_610==0) {
                __dec_obj151=it_614->c_value;
                it_614->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_614->c_value));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_609,it_614->c_value);
            if(            j_610!=list$1CVALUEphp_length(come_params_601)-1) {
                buffer_append_str(buf_609,",");
            }
            j_610++;
        }
        come_call_finalizer3(o2_saved_611,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_609,")");
        come_value2_617=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 546, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj152=come_value2_617->c_value;
        come_value2_617->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_609));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_618=(struct sType*)come_increment_ref_count(solve_generics(result_type_600,info->generics_type,info));
        __dec_obj153=come_value2_617->type;
        come_value2_617->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_618));
        come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_617->type->mStatic=(_Bool)0;
        come_value2_617->var=((void*)0);
        if(        result_type2_618->mHeap) {
            append_object_to_right_values2(come_value2_617,(struct sType*)come_increment_ref_count(result_type2_618),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_617->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_617));
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj154=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_530);
        come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_619=((void*)0);
        generics_fun_name_620=((void*)0);
        fun_621=((void*)0);
        if(        string_operator_equals(fun_name_522,"super")) {
            __dec_obj155=fun_name_522;
            fun_name_522=(char*)come_increment_ref_count(create_non_method_name(obj_type_533,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_622=obj_type_533->mClass;
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value482=map$2voidphvoidphp_operator_load_element(info->classes,klass_622->mParentClassName)))))),            come_call_finalizer3(__right_value482,(void*)0, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_622=((struct sClass*)((void*)(__right_value483=map$2voidphvoidphp_operator_load_element(info->classes,klass_622->mParentClassName))));
                come_call_finalizer3(__right_value483,(void*)0, 0, 1, 0, 0, (void*)0);
                __dec_obj156=generics_fun_name_620;
                generics_fun_name_620=(char*)come_increment_ref_count(create_method_name_using_class(klass_622,(_Bool)0,fun_name_522,info,(_Bool)1));
                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_621=((struct sFun*)((void*)(__right_value486=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value485=__builtin_string(generics_fun_name_620))),((void*)0)))));
                __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value486,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                fun_621) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_533&&obj_type_533->mNoSolvedGenericsType&&list$1voidphp_length(obj_type_533->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value488=make_generics_function(obj_type_533,(char*)come_increment_ref_count(__builtin_string(fun_name_522)),info,(_Bool)1)));
                name_623=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_624=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value488,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj157=generics_fun_name_620;
                generics_fun_name_620=(char*)come_increment_ref_count(name_623);
                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_619=gfun_624;
                name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            list$1voidphp_length(info->method_generics_types)>0) {
                none_generics_name_625=(char*)come_increment_ref_count(get_none_generics_name(obj_type_533->mClass->mName));
                fun_name3_626=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_625,fun_name_522));
                multiple_assign_var9=((struct tuple2$2charphsGenericsFunp*)(__right_value492=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_626)),(struct list$1voidph*)come_increment_ref_count(info->method_generics_types),info)));
                name_627=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                gfun_628=multiple_assign_var9->v2;
                come_call_finalizer3(__right_value492,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj158=generics_fun_name_620;
                generics_fun_name_620=(char*)come_increment_ref_count(name_627);
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_619=gfun_628;
                none_generics_name_625 = come_decrement_ref_count2(none_generics_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_626 = come_decrement_ref_count2(fun_name3_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                name_627 = come_decrement_ref_count2(name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value494=make_generics_function(obj_type_533,(char*)come_increment_ref_count(__builtin_string(fun_name_522)),info,(_Bool)1)));
                name_629=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                gfun_630=multiple_assign_var10->v2;
                come_call_finalizer3(__right_value494,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj159=generics_fun_name_620;
                generics_fun_name_620=(char*)come_increment_ref_count(name_629);
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_619=gfun_630;
                name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            for(            i_631=128;            i_631>=1;            i_631--            ){
                new_fun_name_632=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_620,i_631));
                fun_621=((struct sFun*)((void*)(__right_value497=map$2voidphvoidphp_operator_load_element(info->funcs,((char*)(__right_value496=__builtin_string(new_fun_name_632)))))));
                __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value497,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                fun_621!=((void*)0)) {
                    __dec_obj160=generics_fun_name_620;
                    generics_fun_name_620=(char*)come_increment_ref_count(__builtin_string(new_fun_name_632));
                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_632 = come_decrement_ref_count2(new_fun_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_632 = come_decrement_ref_count2(new_fun_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_621==((void*)0)) {
                obj_array_type_633=obj_type_533->mOriginalLoadVarType;
                if(                obj_array_type_633&&list$1sNodephp_length(obj_array_type_633->mArrayNum)>0) {
                    array_method_name_634=(char*)come_increment_ref_count(create_method_name(obj_array_type_633,(_Bool)0,fun_name_522,info,(_Bool)0));
                    fun_621=((struct sFun*)((void*)(__right_value501=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value500=__builtin_string(array_method_name_634))),((void*)0)))));
                    __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value501,(void*)0, 0, 1, 0, 0, (void*)0);
                    if(                    fun_621) {
                        __dec_obj161=generics_fun_name_620;
                        generics_fun_name_620=(char*)come_increment_ref_count(__builtin_string(array_method_name_634));
                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_621=((struct sFun*)((void*)(__right_value504=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value503=__builtin_string(generics_fun_name_620))),((void*)0)))));
                        __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value504,(void*)0, 0, 1, 0, 0, (void*)0);
                        if(                        fun_621==((void*)0)) {
                            __dec_obj162=generics_fun_name_620;
                            generics_fun_name_620=(char*)come_increment_ref_count(create_method_name(obj_type_533,(_Bool)0,((char*)(__right_value505=__builtin_string(fun_name_522))),info,(_Bool)1));
                            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_621=((struct sFun*)((void*)(__right_value508=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value507=__builtin_string(generics_fun_name_620))),((void*)0)))));
                            __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value508,(void*)0, 0, 1, 0, 0, (void*)0);
                            if(                            fun_621==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_620,info->come_fun->mName);
                                __result342__ = (_Bool)1;
                                array_method_name_634 = come_decrement_ref_count2(array_method_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result342__;
                            }
                        }
                    }
                    array_method_name_634 = come_decrement_ref_count2(array_method_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_621=((struct sFun*)((void*)(__right_value510=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value509=__builtin_string(generics_fun_name_620))),((void*)0)))));
                    __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value510,(void*)0, 0, 1, 0, 0, (void*)0);
                    if(                    fun_621==((void*)0)) {
                        __dec_obj163=generics_fun_name_620;
                        generics_fun_name_620=(char*)come_increment_ref_count(create_method_name(obj_type_533,(_Bool)0,((char*)(__right_value511=__builtin_string(fun_name_522))),info,(_Bool)1));
                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_621=((struct sFun*)((void*)(__right_value514=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value513=__builtin_string(generics_fun_name_620))),((void*)0)))));
                        __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value514,(void*)0, 0, 1, 0, 0, (void*)0);
                        if(                        fun_621==((void*)0)) {
                            klass_635=obj_type_533->mClass;
                            while((_while_condtional2=(((struct sClass*)((void*)(__right_value515=map$2voidphvoidphp_operator_load_element(info->classes,klass_635->mParentClassName)))))),                            come_call_finalizer3(__right_value515,(void*)0, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_635=((struct sClass*)((void*)(__right_value516=map$2voidphvoidphp_operator_load_element(info->classes,klass_635->mParentClassName))));
                                come_call_finalizer3(__right_value516,(void*)0, 0, 1, 0, 0, (void*)0);
                                __dec_obj164=generics_fun_name_620;
                                generics_fun_name_620=(char*)come_increment_ref_count(create_method_name_using_class(klass_635,(_Bool)0,fun_name_522,info,(_Bool)1));
                                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_621=((struct sFun*)((void*)(__right_value519=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value518=__builtin_string(generics_fun_name_620))),((void*)0)))));
                                __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value519,(void*)0, 0, 1, 0, 0, (void*)0);
                                if(                                fun_621) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_621==((void*)0)&&string_operator_equals(fun_name_522,"to_string")) {
                            multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value520=create_to_string_automatically(obj_type_533,fun_name_522,info)));
                            fun2_636=multiple_assign_var11->v1;
                            real_fun_name_637=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                            come_call_finalizer3(__right_value520,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_621=fun2_636;
                            __dec_obj166=generics_fun_name_620;
                            generics_fun_name_620=(char*)come_increment_ref_count(real_fun_name_637);
                            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_637 = come_decrement_ref_count2(real_fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_621==((void*)0)&&string_operator_equals(fun_name_522,"equals")) {
                            multiple_assign_var12=((struct tuple2$2sFunpcharph*)(__right_value521=create_equals_automatically(obj_type_533,fun_name_522,info)));
                            fun2_638=multiple_assign_var12->v1;
                            real_fun_name_639=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                            come_call_finalizer3(__right_value521,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_621=fun2_638;
                            __dec_obj167=generics_fun_name_620;
                            generics_fun_name_620=(char*)come_increment_ref_count(real_fun_name_639);
                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_639 = come_decrement_ref_count2(real_fun_name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_621==((void*)0)) {
                            original_obj_type_fun_name_640=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_533,(_Bool)0,((char*)(__right_value522=__builtin_string(fun_name_522))),info,(_Bool)1));
                            __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_621=((struct sFun*)((void*)(__right_value525=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value524=__builtin_string(original_obj_type_fun_name_640))),((void*)0)))));
                            __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value525,(void*)0, 0, 1, 0, 0, (void*)0);
                            if(                            fun_621) {
                                __dec_obj168=generics_fun_name_620;
                                generics_fun_name_620=(char*)come_increment_ref_count(original_obj_type_fun_name_640);
                                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_640 = come_decrement_ref_count2(original_obj_type_fun_name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_621==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_620,info->come_fun->mName);
                            __result343__ = (_Bool)1;
                            generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result343__;
                        }
                    }
                }
            }
        }
        if(        fun_621==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_620,info->come_fun->mName);
            __result344__ = (_Bool)1;
            generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result344__;
        }
        if(        list$1voidphp_length(fun_621->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result345__ = (_Bool)1;
            generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result345__;
        }
        result_type_641=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_621->mResultType));
        result_type_641->mStatic=(_Bool)0;
        result_type2_642=(struct sType*)come_increment_ref_count(solve_generics(result_type_641,info->generics_type,info));
        param_types_643=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 711, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        for(        o2_saved_644=(struct list$1voidph*)come_increment_ref_count((fun_621->mParamTypes)),it_645=((struct sType*)list$1voidphp_begin((o2_saved_644)));        !list$1voidphp_end((o2_saved_644));        it_645=((struct sType*)list$1voidphp_next((o2_saved_644)))        ){
            if(            it_645==((void*)0)) {
                list$1voidphp_push_back(param_types_643,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_645)));
            }
            else {
                it2_646=(struct sType*)come_increment_ref_count(solve_generics(it_645,info->generics_type,info));
                no_solved_obj_type_647=(struct sType*)come_increment_ref_count(obj_type_533->mNoSolvedGenericsType);
                it3_648=(struct sType*)come_increment_ref_count(solve_generics(it_645,no_solved_obj_type_647,info));
                any_type_649=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_648)));
                list$1voidphp_push_back(param_types_643,(struct sType*)come_increment_ref_count(it2_646));
                come_call_finalizer3(it2_646,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_648,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_649,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_644,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_650=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_643));
        if(        generics_fun_619) {
            n_651=0;
            for(            o2_saved_652=(struct list$1voidph*)come_increment_ref_count((generics_fun_619->mParamTypes)),it_653=((struct sType*)list$1voidphp_begin((o2_saved_652)));            !list$1voidphp_end((o2_saved_652));            it_653=((struct sType*)list$1voidphp_next((o2_saved_652)))            ){
                if(                it_653==((void*)0)) {
                }
                else {
                    no_solved_obj_type_654=(struct sType*)come_increment_ref_count(obj_type_533->mNoSolvedGenericsType);
                    it3_655=(struct sType*)come_increment_ref_count(solve_generics(it_653,no_solved_obj_type_654,info));
                    any_type_656=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_655)));
                    if(                    (_if_conditional3=(string_operator_equals(((struct sType*)((void*)(__right_value537=list$1voidphp_operator_load_element(param_types_643,n_651))))->mClass->mName,"void")&&((struct sType*)((void*)(__right_value538=list$1voidphp_operator_load_element(param_types_643,n_651))))->mPointerNum==1)),                    come_call_finalizer3(__right_value537,(void*)0, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value538,(void*)0, 0, 1, 0, 0, (void*)0),
                    _if_conditional3) {
                        list$1voidphp_replace(type_checking_param_types_650,n_651,(struct sType*)come_increment_ref_count(any_type_656));
                    }
                    come_call_finalizer3(no_solved_obj_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_655,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_651++;
            }
            come_call_finalizer3(o2_saved_652,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_657=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 750, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_658=0;        i_658<list$1voidphp_length(fun_621->mParamTypes)-(((method_block_525)?(2):(0)));        i_658++        ){
            list$1CVALUEphp_add(come_params_657,((void*)0));
        }
        first_param_662=(_Bool)1;
        for(        o2_saved_663=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_523)),it_664=list$1tuple2$2charphsNodephphp_begin((o2_saved_663));        !list$1tuple2$2charphsNodephphp_end((o2_saved_663));        it_664=list$1tuple2$2charphsNodephphp_next((o2_saved_663))        ){
            multiple_assign_var13=it_664;
            label_665=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_666=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_662) {
                first_param_662=(_Bool)0;
            }
            else if(            label_665) {
                n_667=0;
                for(                o2_saved_668=(struct list$1charph*)come_increment_ref_count((fun_621->mParamNames)),it_671=list$1charphp_begin((o2_saved_668));                !list$1charphp_end((o2_saved_668));                it_671=list$1charphp_next((o2_saved_668))                ){
                    if(                    string_operator_equals(label_665,it_671)) {
                        break;
                    }
                    n_667++;
                }
                come_call_finalizer3(o2_saved_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                Value_674=node_compile(node_666,info);
                if(                !Value_674) {
                    __result353__ = (_Bool)0;
                    label_665 = come_decrement_ref_count2(label_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_663,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result353__;
                }
                else {
                }
                come_value_675=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional4=(((struct sType*)((void*)(__right_value545=list$1voidphp_operator_load_element(param_types_643,n_667)))))),                come_call_finalizer3(__right_value545,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    check_assign_type(((char*)(__right_value548=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value546=string_to_string(fun_name_522))),((char*)(__right_value547=int_to_string(n_667)))))),((struct sType*)((void*)(__right_value549=list$1voidphp_operator_load_element(type_checking_param_types_650,n_667)))),come_value_675->type,come_value_675,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value549,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional5=(((struct sType*)((void*)(__right_value550=list$1voidphp_operator_load_element(param_types_643,n_667))))&&((struct sType*)((void*)(__right_value551=list$1voidphp_operator_load_element(param_types_643,n_667))))->mHeap&&come_value_675->type->mHeap)),                come_call_finalizer3(__right_value550,(void*)0, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value551,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)((void*)(__right_value552=list$1voidphp_operator_load_element(param_types_643,n_667)))),come_value_675->type,come_value_675,info,(_Bool)1);
                    come_call_finalizer3(__right_value552,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_657,n_667,(struct CVALUE*)come_increment_ref_count(come_value_675));
                come_call_finalizer3(come_value_675,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_665 = come_decrement_ref_count2(label_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_666) { node_666 = come_decrement_ref_count2(node_666, ((struct sNode*)node_666)->finalize, ((struct sNode*)node_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_663,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_681=0;
        for(        o2_saved_682=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_523)),it_683=list$1tuple2$2charphsNodephphp_begin((o2_saved_682));        !list$1tuple2$2charphsNodephphp_end((o2_saved_682));        it_683=list$1tuple2$2charphsNodephphp_next((o2_saved_682))        ){
            multiple_assign_var14=it_683;
            label_684=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_685=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_681==0) {
                check_assign_type(((char*)(__right_value555=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value553=string_to_string(fun_name_522))),((char*)(__right_value554=int_to_string(i_681)))))),((struct sType*)((void*)(__right_value556=list$1voidphp_operator_load_element(type_checking_param_types_650,i_681)))),obj_value_532->type,obj_value_532,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value556,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional6=(((struct sType*)((void*)(__right_value557=list$1voidphp_operator_load_element(param_types_643,i_681))))->mHeap&&obj_value_532->type->mHeap)),                come_call_finalizer3(__right_value557,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    std_move(((struct sType*)((void*)(__right_value558=list$1voidphp_operator_load_element(param_types_643,i_681)))),obj_value_532->type,obj_value_532,info,(_Bool)1);
                    come_call_finalizer3(__right_value558,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)((void*)(__right_value559=list$1voidphp_operator_load_element(param_types_643,i_681))))->mHeap&&!obj_value_532->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value559,(void*)0, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value560=list$1charphp_operator_load_element(fun_621->mParamNames,i_681))));
                    __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEphp_replace(come_params_657,i_681,(struct CVALUE*)come_increment_ref_count(obj_value_532));
                i_681++;
            }
            else if(            label_684) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional7=(((struct CVALUE*)(__right_value561=list$1CVALUEphp_operator_load_element(come_params_657,i_681)))==((void*)0))),                    come_call_finalizer3(__right_value561,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional7) {
                        break;
                    }
                    else {
                        i_681++;
                    }
                }
                Value_689=node_compile(node_685,info);
                if(                !Value_689) {
                    __result358__ = (_Bool)0;
                    label_684 = come_decrement_ref_count2(label_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_682,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result358__;
                }
                else {
                }
                come_value_690=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional8=(((struct sType*)((void*)(__right_value563=list$1voidphp_operator_load_element(param_types_643,i_681)))))),                come_call_finalizer3(__right_value563,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    check_assign_type(((char*)(__right_value566=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value564=string_to_string(fun_name_522))),((char*)(__right_value565=int_to_string(i_681)))))),((struct sType*)((void*)(__right_value567=list$1voidphp_operator_load_element(type_checking_param_types_650,i_681)))),come_value_690->type,come_value_690,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value567,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional9=(((struct sType*)((void*)(__right_value568=list$1voidphp_operator_load_element(param_types_643,i_681))))&&((struct sType*)((void*)(__right_value569=list$1voidphp_operator_load_element(param_types_643,i_681))))->mHeap&&come_value_690->type->mHeap)),                come_call_finalizer3(__right_value568,(void*)0, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value569,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    std_move(((struct sType*)((void*)(__right_value570=list$1voidphp_operator_load_element(param_types_643,i_681)))),come_value_690->type,come_value_690,info,(_Bool)1);
                    come_call_finalizer3(__right_value570,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_657,i_681,(struct CVALUE*)come_increment_ref_count(come_value_690));
                i_681++;
                come_call_finalizer3(come_value_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_684 = come_decrement_ref_count2(label_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_682,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional10=(((struct CVALUE*)(__right_value571=list$1CVALUEphp_operator_load_element(come_params_657,i_681)))==((void*)0))),            come_call_finalizer3(__right_value571,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional10) {
                break;
            }
            else {
                i_681++;
            }
        }
        obj_array_type_691=obj_type_533->mOriginalLoadVarType;
        if(        obj_array_type_691&&list$1sNodephp_length(obj_array_type_691->mArrayNum)>0) {
            array_method_name_692=(char*)come_increment_ref_count(create_method_name(obj_array_type_691,(_Bool)0,fun_name_522,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_620,array_method_name_692)) {
                if(                string_operator_equals(fun_name_522,"to_pointer")) {
                    buf_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 853, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_694=0;
                    for(                    o2_saved_695=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_691->mArrayNum)),it_698=list$1sNodephp_begin((o2_saved_695));                    !list$1sNodephp_end((o2_saved_695));                    it_698=list$1sNodephp_next((o2_saved_695))                    ){
                        Value_701=node_compile(it_698,info);
                        if(                        !Value_701) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_702=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_693,"%s",come_value_702->c_value);
                        if(                        i_694!=list$1sNodephp_length(obj_array_type_691->mArrayNum)-1) {
                            buffer_append_str(buf_693,"*");
                        }
                        i_694++;
                        come_call_finalizer3(come_value_702,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_695,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_703=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 873, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj173=come_value_703->c_value;
                    come_value_703->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_693));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_703->var=((void*)0);
                    __dec_obj174=come_value_703->type;
                    come_value_703->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 877, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_657,1,(struct CVALUE*)come_increment_ref_count(come_value_703));
                    list$1tuple2$2charphsNodephphp_push_back(params_523,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 880, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_703,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_522,"length")) {
                    buf_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 883, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_708=0;
                    for(                    o2_saved_709=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_691->mArrayNum)),it_710=list$1sNodephp_begin((o2_saved_709));                    !list$1sNodephp_end((o2_saved_709));                    it_710=list$1sNodephp_next((o2_saved_709))                    ){
                        Value_711=node_compile(it_710,info);
                        if(                        !Value_711) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_712=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_707,"%s",come_value_712->c_value);
                        if(                        i_708!=list$1sNodephp_length(obj_array_type_691->mArrayNum)-1) {
                            buffer_append_str(buf_707,"*");
                        }
                        i_708++;
                        come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_713=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 902, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj178=come_value_713->c_value;
                    come_value_713->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_707));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_713->var=((void*)0);
                    __dec_obj179=come_value_713->type;
                    come_value_713->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 906, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_657,1,(struct CVALUE*)come_increment_ref_count(come_value_713));
                    list$1tuple2$2charphsNodephphp_push_back(params_523,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 909, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_713,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_522,"to_buffer")) {
                    buf_714=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 912, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_715=0;
                    for(                    o2_saved_716=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_691->mArrayNum)),it_717=list$1sNodephp_begin((o2_saved_716));                    !list$1sNodephp_end((o2_saved_716));                    it_717=list$1sNodephp_next((o2_saved_716))                    ){
                        Value_718=node_compile(it_717,info);
                        if(                        !Value_718) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_719=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_714,"%s",come_value_719->c_value);
                        if(                        i_715!=list$1sNodephp_length(obj_array_type_691->mArrayNum)-1) {
                            buffer_append_str(buf_714,"*");
                        }
                        i_715++;
                        come_call_finalizer3(come_value_719,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_716,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_720=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 931, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj180=come_value_720->c_value;
                    come_value_720->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_714));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_720->var=((void*)0);
                    __dec_obj181=come_value_720->type;
                    come_value_720->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 935, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_657,1,(struct CVALUE*)come_increment_ref_count(come_value_720));
                    list$1tuple2$2charphsNodephphp_push_back(params_523,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 938, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_720,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_522,"to_list")) {
                    buf_721=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 941, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_722=0;
                    for(                    o2_saved_723=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_691->mArrayNum)),it_724=list$1sNodephp_begin((o2_saved_723));                    !list$1sNodephp_end((o2_saved_723));                    it_724=list$1sNodephp_next((o2_saved_723))                    ){
                        Value_725=node_compile(it_724,info);
                        if(                        !Value_725) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_726=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_721,"%s",come_value_726->c_value);
                        if(                        i_722!=list$1sNodephp_length(obj_array_type_691->mArrayNum)-1) {
                            buffer_append_str(buf_721,"*");
                        }
                        i_722++;
                        come_call_finalizer3(come_value_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_723,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_727=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 960, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj182=come_value_727->c_value;
                    come_value_727->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_721));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_727->var=((void*)0);
                    __dec_obj183=come_value_727->type;
                    come_value_727->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 964, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_657,1,(struct CVALUE*)come_increment_ref_count(come_value_727));
                    list$1tuple2$2charphsNodephphp_push_back(params_523,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 967, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_727,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_522,"to_vector")) {
                    buf_728=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 970, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_729=0;
                    for(                    o2_saved_730=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_691->mArrayNum)),it_731=list$1sNodephp_begin((o2_saved_730));                    !list$1sNodephp_end((o2_saved_730));                    it_731=list$1sNodephp_next((o2_saved_730))                    ){
                        Value_732=node_compile(it_731,info);
                        if(                        !Value_732) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_733=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_728,"%s",come_value_733->c_value);
                        if(                        i_729!=list$1sNodephp_length(obj_array_type_691->mArrayNum)-1) {
                            buffer_append_str(buf_728,"*");
                        }
                        i_729++;
                        come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_730,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_734=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 989, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj184=come_value_734->c_value;
                    come_value_734->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_728));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_734->var=((void*)0);
                    __dec_obj185=come_value_734->type;
                    come_value_734->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 993, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_657,1,(struct CVALUE*)come_increment_ref_count(come_value_734));
                    list$1tuple2$2charphsNodephphp_push_back(params_523,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 996, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key, tuple2$2charphvoidp_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_728,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_734,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_692 = come_decrement_ref_count2(array_method_name_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephphp_length(params_523)<list$1voidphp_length(fun_621->mParamTypes)+(((method_block_525)?(-2):(0)))) {
            for(            ;            i_681<list$1voidphp_length(fun_621->mParamTypes)+(((method_block_525)?(-2):(0)));            i_681++            ){
                default_param_735=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value631=list$1charphp_operator_load_element(fun_621->mParamDefaultParametors,i_681)))));
                __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_736=((char*)(__right_value633=list$1charphp_operator_load_element(fun_621->mParamNames,i_681)));
                __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional11=(default_param_735&&string_operator_not_equals(default_param_735,"")&&((struct CVALUE*)(__right_value634=list$1CVALUEphp_operator_load_element(come_params_657,i_681)))==((void*)0))),                come_call_finalizer3(__right_value634,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    source_737=(struct buffer*)come_increment_ref_count(info->source);
                    p_738=info->p;
                    head_739=info->head;
                    sline_740=info->sline;
                    __dec_obj186=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_735));
                    come_call_finalizer3(__dec_obj186,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_741=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_742=node_compile(node_741,info);
                    if(                    !Value_742) {
                        __result366__ = (_Bool)0;
                        come_call_finalizer3(source_737,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_735 = come_decrement_ref_count2(default_param_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result366__;
                    }
                    else {
                    }
                    __dec_obj187=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_737);
                    come_call_finalizer3(__dec_obj187,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_738;
                    info->head=head_739;
                    info->sline=sline_740;
                    come_value_743=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional12=(((struct sType*)((void*)(__right_value638=list$1voidphp_operator_load_element(param_types_643,i_681)))))),                    come_call_finalizer3(__right_value638,(void*)0, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        check_assign_type(((char*)(__right_value641=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value639=string_to_string(fun_name_522))),((char*)(__right_value640=int_to_string(i_681)))))),((struct sType*)((void*)(__right_value642=list$1voidphp_operator_load_element(type_checking_param_types_650,i_681)))),come_value_743->type,come_value_743,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value642,(void*)0, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional13=(((struct sType*)((void*)(__right_value643=list$1voidphp_operator_load_element(param_types_643,i_681))))&&((struct sType*)((void*)(__right_value644=list$1voidphp_operator_load_element(param_types_643,i_681))))->mHeap&&come_value_743->type->mHeap)),                    come_call_finalizer3(__right_value643,(void*)0, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value644,(void*)0, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        std_move(((struct sType*)((void*)(__right_value645=list$1voidphp_operator_load_element(param_types_643,i_681)))),come_value_743->type,come_value_743,info,(_Bool)1);
                        come_call_finalizer3(__right_value645,(void*)0, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEphp_replace(come_params_657,i_681,(struct CVALUE*)come_increment_ref_count(come_value_743));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_737,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_741) { node_741 = come_decrement_ref_count2(node_741, ((struct sNode*)node_741)->finalize, ((struct sNode*)node_741)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_743,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional14=(((struct CVALUE*)(__right_value646=list$1CVALUEphp_operator_load_element(come_params_657,i_681)))==((void*)0))),                    come_call_finalizer3(__right_value646,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        err_msg(info,"require parametor(%s) %d",fun_621->mName,i_681);
                        __result367__ = (_Bool)0;
                        default_param_735 = come_decrement_ref_count2(default_param_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result367__;
                    }
                }
                default_param_735 = come_decrement_ref_count2(default_param_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_525) {
            if(            !compile_method_block(method_block_525,(struct list$1CVALUEph*)come_increment_ref_count(come_params_657),fun_621,fun_name_522,method_block_sline_526,info,(_Bool)0)) {
                __result368__ = (_Bool)0;
                generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result368__;
            }
        }
        buf_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1053, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_744,generics_fun_name_620);
        buffer_append_str(buf_744,"(");
        j_745=0;
        for(        o2_saved_746=(struct list$1CVALUEph*)come_increment_ref_count((come_params_657)),it_747=list$1CVALUEphp_begin((o2_saved_746));        !list$1CVALUEphp_end((o2_saved_746));        it_747=list$1CVALUEphp_next((o2_saved_746))        ){
            buffer_append_str(buf_744,it_747->c_value);
            if(            j_745!=list$1CVALUEphp_length(come_params_657)-1) {
                buffer_append_str(buf_744,",");
            }
            j_745++;
        }
        come_call_finalizer3(o2_saved_746,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_744,")");
        come_value2_748=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1072, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_748->var=((void*)0);
        if(        obj_type_533->mAnyClass&&string_operator_equals(fun_name_522,"get_hash_key")) {
            __dec_obj188=come_value2_748->c_value;
            come_value2_748->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_532->c_value));
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj189=come_value2_748->type;
            come_value2_748->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1077, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_748->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_533->mAnyClass&&string_operator_equals(fun_name_522,"equals")) {
            __dec_obj190=come_value2_748->c_value;
            come_value2_748->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_532->c_value,((struct CVALUE*)(__right_value654=list$1CVALUEphp_operator_load_element(come_params_657,1)))->c_value));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value654,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj191=come_value2_748->type;
            come_value2_748->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1082, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_748->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj192=come_value2_748->c_value;
            come_value2_748->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_744));
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_749=(_Bool)0;
            obj_type2_750=(struct sType*)come_increment_ref_count(obj_type_533);
            if(            obj_type2_750->mNoSolvedGenericsType) {
                __dec_obj193=obj_type2_750;
                obj_type2_750=(struct sType*)come_increment_ref_count(obj_type2_750->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
                for(                o2_saved_751=(struct list$1voidph*)come_increment_ref_count((obj_type2_750->mGenericsTypes)),it_752=((struct sType*)list$1voidphp_begin((o2_saved_751)));                !list$1voidphp_end((o2_saved_751));                it_752=((struct sType*)list$1voidphp_next((o2_saved_751)))                ){
                    if(                    it_752->mAnyOriginalType) {
                        generics_any_child_749=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_751,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_642->mAnyOriginalType&&generics_fun_619&&obj_type_533->mNoSolvedGenericsType) {
                obj_type2_753=(struct sType*)come_increment_ref_count(obj_type_533->mNoSolvedGenericsType);
                __dec_obj194=result_type2_642;
                result_type2_642=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_619->mResultType,obj_type2_753,info));
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj195=come_value2_748->type;
                come_value2_748->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_642));
                come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_748->type->mStatic=(_Bool)0;
                if(                result_type2_642->mHeap) {
                    append_object_to_right_values2(come_value2_748,(struct sType*)come_increment_ref_count(result_type2_642),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_753,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_619&&generics_any_child_749) {
                __dec_obj196=result_type2_642;
                result_type2_642=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_619->mResultType,obj_type2_750,info));
                come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj197=come_value2_748->type;
                come_value2_748->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_642));
                come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_748->type->mStatic=(_Bool)0;
                if(                result_type2_642->mHeap) {
                    append_object_to_right_values2(come_value2_748,(struct sType*)come_increment_ref_count(result_type2_642),info,(_Bool)0);
                }
            }
            else {
                __dec_obj198=come_value2_748->type;
                come_value2_748->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_642));
                come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_748->type->mStatic=(_Bool)0;
                if(                result_type2_642->mHeap) {
                    append_object_to_right_values2(come_value2_748,(struct sType*)come_increment_ref_count(result_type2_642),info,(_Bool)0);
                }
            }
            __dec_obj199=come_value2_748->c_value;
            come_value2_748->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_748->c_value,come_value2_748->type,info));
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj200=come_value2_748;
            come_value2_748=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_748),info));
            come_call_finalizer3(__dec_obj200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type2_750,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_748->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_748));
        if(        is_contained_method_generics_types(obj_type_533,info)&&generics_fun_name_620) {
            map$2voidphvoidphp_remove(info->funcs,((char*)(__right_value666=__builtin_string(generics_fun_name_620))));
            __right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj201=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_530);
        come_call_finalizer3(__dec_obj201,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_621;
        generics_fun_name_620 = come_decrement_ref_count2(generics_fun_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_643,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_650,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_657,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_748,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result369__ = (_Bool)1;
    fun_name_522 = come_decrement_ref_count2(fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_523,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_524) { obj_524 = come_decrement_ref_count2(obj_524, ((struct sNode*)obj_524)->finalize, ((struct sNode*)obj_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_528,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_530,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result369__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result314__;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_514;
struct list_item$1tuple2$2charphsNodephph* it_515;
void* __right_value427 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result319__;
    if(    self==((void*)0)) {
        __result314__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_514=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_515=self->head;
    while(it_515!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_514,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_515->item)));
        it_515=it_515->next;
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_514;
    come_call_finalizer3(result_514,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result315__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_512;
struct list_item$1tuple2$2charphsNodephph* prev_it_513;
    it_512=self->head;
    while(it_512!=((void*)0)) {
        prev_it_513=it_512;
        it_512=it_512->next;
        come_call_finalizer3(prev_it_513,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj129;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj129=self->item;
            come_call_finalizer3(__dec_obj129,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj130;
struct sNode* __dec_obj131;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj130=self->v1;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj131=self->v2;
            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_516;
struct tuple2$2charphsNodeph* __dec_obj132;
void* __right_value422 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_517;
struct tuple2$2charphsNodeph* __dec_obj133;
void* __right_value423 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_518;
struct tuple2$2charphsNodeph* __dec_obj134;
struct list$1tuple2$2charphsNodephph* __result316__;
    if(    self->len==0) {
        litem_516=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value421=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_516->prev=((void*)0);
        litem_516->next=((void*)0);
        __dec_obj132=litem_516->item;
        litem_516->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj132,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_516;
        self->head=litem_516;
    }
    else if(    self->len==1) {
        litem_517=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value422=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_517->prev=self->head;
        litem_517->next=((void*)0);
        __dec_obj133=litem_517->item;
        litem_517->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj133,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_517;
        self->head->next=litem_517;
    }
    else {
        litem_518=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value423=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_518->prev=self->tail;
        litem_518->next=((void*)0);
        __dec_obj134=litem_518->item;
        litem_518->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj134,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_518;
        self->tail=litem_518;
    }
    self->len++;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result317__;
void* __right_value424 = (void*)0;
struct tuple2$2charphsNodeph* result_519;
void* __right_value425 = (void*)0;
char* __dec_obj135;
void* __right_value426 = (void*)0;
struct sNode* __dec_obj136;
struct tuple2$2charphsNodeph* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_519=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj135=result_519->v1;
        result_519->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj136=result_519->v2;
        result_519->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_519;
    come_call_finalizer3(result_519,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj137;
struct sNode* __dec_obj138;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj137=self->v1;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj138=self->v2;
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_520;
struct list_item$1tuple2$2charphsNodephph* prev_it_521;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj142;
struct sNode* __dec_obj143;
char* __dec_obj144;
struct list$1tuple2$2charphsNodephph* __dec_obj145;
struct buffer* __dec_obj146;
struct list$1voidph* __dec_obj147;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj143=self->obj;
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj144=self->fun_name;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj145=self->params;
            come_call_finalizer3(__dec_obj145,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj146=self->method_block;
            come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj147=self->method_generics_types;
            come_call_finalizer3(__dec_obj147,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result323__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_548;
int i_549;
struct CVALUE* __result325__;
struct CVALUE* default_value_550;
struct CVALUE* __result326__;
default_value_550 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_548=self->head;
    i_549=0;
    while(it_548!=((void*)0)) {
        if(        position==i_549) {
            __result325__ = gComeFunResultObject = __result_obj__ = it_548->item;
            gComeFunResultObject = (void*)0;
            return __result325__;
        }
        it_548=it_548->next;
        i_549++;
    }
    memset(&default_value_550,0,sizeof(struct CVALUE*));
    __result326__ = gComeFunResultObject = __result_obj__ = default_value_550;
    come_call_finalizer3(default_value_550,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_563;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* result_564;
struct tuple2$2charphsNodeph* __result329__;
result_563 = (void*)0;
result_564 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_563,0,sizeof(struct tuple2$2charphsNodeph*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_563;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->head;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_564,0,sizeof(struct tuple2$2charphsNodeph*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_564;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_566;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* result_567;
struct tuple2$2charphsNodeph* __result332__;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_566,0,sizeof(struct tuple2$2charphsNodeph*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_566;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_567,0,sizeof(struct tuple2$2charphsNodeph*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_567;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_612;
struct CVALUE* __result336__;
struct CVALUE* __result337__;
struct CVALUE* result_613;
struct CVALUE* __result338__;
result_612 = (void*)0;
result_613 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_612,0,sizeof(struct CVALUE*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_612;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->head;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_613,0,sizeof(struct CVALUE*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_613;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_615;
struct CVALUE* __result339__;
struct CVALUE* __result340__;
struct CVALUE* result_616;
struct CVALUE* __result341__;
result_615 = (void*)0;
result_616 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_615,0,sizeof(struct CVALUE*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_615;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_616,0,sizeof(struct CVALUE*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_616;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj165;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj165=self->v2;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value541 = (void*)0;
struct list_item$1CVALUEph* litem_659;
struct CVALUE* __dec_obj169;
void* __right_value542 = (void*)0;
struct list_item$1CVALUEph* litem_660;
struct CVALUE* __dec_obj170;
void* __right_value543 = (void*)0;
struct list_item$1CVALUEph* litem_661;
struct CVALUE* __dec_obj171;
struct list$1CVALUEph* __result346__;
    if(    self->len==0) {
        litem_659=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value541=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1382, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_659->prev=((void*)0);
        litem_659->next=((void*)0);
        __dec_obj169=litem_659->item;
        litem_659->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_659;
        self->head=litem_659;
    }
    else if(    self->len==1) {
        litem_660=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value542=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1392, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_660->prev=self->head;
        litem_660->next=((void*)0);
        __dec_obj170=litem_660->item;
        litem_660->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_660;
        self->head->next=litem_660;
    }
    else {
        litem_661=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value543=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1402, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_661->prev=self->tail;
        litem_661->next=((void*)0);
        __dec_obj171=litem_661->item;
        litem_661->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_661;
        self->tail=litem_661;
    }
    self->len++;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_669;
char* __result347__;
char* __result348__;
char* result_670;
char* __result349__;
result_669 = (void*)0;
result_670 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_669,0,sizeof(char*));
        __result347__ = gComeFunResultObject = __result_obj__ = result_669;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    self->it=self->head;
    if(    self->it) {
        __result348__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    memset(&result_670,0,sizeof(char*));
    __result349__ = gComeFunResultObject = __result_obj__ = result_670;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_672;
char* __result350__;
char* __result351__;
char* result_673;
char* __result352__;
result_672 = (void*)0;
result_673 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_672,0,sizeof(char*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_672;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_673,0,sizeof(char*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_673;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_676;
int i_677;
struct CVALUE* default_value_678;
struct list$1CVALUEph* __result354__;
struct list_item$1CVALUEph* it_679;
int i_680;
struct CVALUE* __dec_obj172;
struct list$1CVALUEph* __result355__;
default_value_678 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_676=self->len;
        for(        i_677=0;        i_677<position-len_676;        i_677++        ){
            memset(&default_value_678,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_678));
            come_call_finalizer3(default_value_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result354__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    it_679=self->head;
    i_680=0;
    while(it_679!=((void*)0)) {
        if(        position==i_680) {
            __dec_obj172=it_679->item;
            it_679->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_679=it_679->next;
        i_680++;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_686;
int i_687;
char* __result356__;
char* default_value_688;
char* __result357__;
default_value_688 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_686=self->head;
    i_687=0;
    while(it_686!=((void*)0)) {
        if(        position==i_687) {
            __result356__ = gComeFunResultObject = __result_obj__ = it_686->item;
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
        it_686=it_686->next;
        i_687++;
    }
    memset(&default_value_688,0,sizeof(char*));
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_688;
    default_value_688 = come_decrement_ref_count2(default_value_688, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_696;
struct sNode* __result359__;
struct sNode* __result360__;
struct sNode* result_697;
struct sNode* __result361__;
result_696 = (void*)0;
result_697 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_696,0,sizeof(struct sNode*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_696;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->head;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_697,0,sizeof(struct sNode*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_697;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_699;
struct sNode* __result362__;
struct sNode* __result363__;
struct sNode* result_700;
struct sNode* __result364__;
result_699 = (void*)0;
result_700 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_699,0,sizeof(struct sNode*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_699;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_700,0,sizeof(struct sNode*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_700;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_704;
struct tuple2$2charphsNodeph* __dec_obj175;
void* __right_value582 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_705;
struct tuple2$2charphsNodeph* __dec_obj176;
void* __right_value583 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_706;
struct tuple2$2charphsNodeph* __dec_obj177;
struct list$1tuple2$2charphsNodephph* __result365__;
    if(    self->len==0) {
        litem_704=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value581=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1452, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_704->prev=((void*)0);
        litem_704->next=((void*)0);
        __dec_obj175=litem_704->item;
        litem_704->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj175,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_704;
        self->head=litem_704;
    }
    else if(    self->len==1) {
        litem_705=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value582=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1462, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_705->prev=self->head;
        litem_705->next=((void*)0);
        __dec_obj176=litem_705->item;
        litem_705->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj176,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_705;
        self->head->next=litem_705;
    }
    else {
        litem_706=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value583=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1472, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_706->prev=self->tail;
        litem_706->next=((void*)0);
        __dec_obj177=litem_706->item;
        litem_706->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_706;
        self->tail=litem_706;
    }
    self->len++;
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value676 = (void*)0;
struct sNode* node_754;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj208;
struct sNode* __result372__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1154, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value668=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1154, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_754=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value668,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=node_754;
    node_754=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_754),info));
    if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    __result372__ = gComeFunResultObject = __result_obj__ = node_754;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result370__;
void* __right_value669 = (void*)0;
struct sMethodCallNode* result_755;
void* __right_value670 = (void*)0;
char* __dec_obj202;
void* __right_value671 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value672 = (void*)0;
char* __dec_obj204;
void* __right_value673 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj205;
void* __right_value674 = (void*)0;
struct buffer* __dec_obj206;
void* __right_value675 = (void*)0;
struct list$1voidph* __dec_obj207;
struct sMethodCallNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_755=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj203=result_755->obj;
        result_755->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj204=result_755->fun_name;
        result_755->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj205=result_755->params;
        result_755->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj205,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj206=result_755->method_block;
        result_755->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj206,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj207=result_755->method_generics_types;
        result_755->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj207,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_755->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_755->fun=self->fun;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_756;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
_Bool parse_method_generics_type_758;
char* p_759;
int sline_760;
void* __right_value683 = (void*)0;
char* word_761;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1voidph* method_generics_types_762;
void* __right_value686 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_763=0;
char* name_764=0;
_Bool err_765=0;
void* __right_value687 = (void*)0;
char* p_766;
int sline_767;
_Bool err_flag_768;
void* __right_value688 = (void*)0;
char* label_769;
void* __right_value689 = (void*)0;
char* __dec_obj213;
char* __dec_obj214;
_Bool no_comma_770;
_Bool in_fun_param_771;
void* __right_value690 = (void*)0;
struct sNode* node_772;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* method_block_773;
int method_block_sline_774;
char* head_775;
void* __right_value694 = (void*)0;
char* tail_776;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct buffer* __dec_obj216;
int len_777;
void* __right_value697 = (void*)0;
char* mem_778;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value701 = (void*)0;
struct sNode* node_779;
void* __right_value702 = (void*)0;
struct sNode* __dec_obj217;
struct sNode* __result374__;
    params_756=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1163, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_push_back(params_756,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1164, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_758=(_Bool)0;
    {
        p_759=info->p;
        sline_760=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_761=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_761,info)) {
                    parse_method_generics_type_758=(_Bool)1;
                }
                word_761 = come_decrement_ref_count2(word_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_759;
        info->sline=sline_760;
    }
    method_generics_types_762=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 1194, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    if(    parse_method_generics_type_758&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value686=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_763=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_764=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_765=multiple_assign_var15->v3;
                come_call_finalizer3(__right_value686,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_765) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1voidphp_push_back(method_generics_types_762,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_763)));
                come_call_finalizer3(type_763,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_764 = come_decrement_ref_count2(name_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_766=info->p;
            sline_767=info->sline;
            err_flag_768=(_Bool)0;
            label_769=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj213=label_769;
                label_769=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_768=(_Bool)1;
            }
            if(            err_flag_768==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj214=label_769;
                label_769=((void*)0);
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_766;
                info->sline=sline_767;
            }
            no_comma_770=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_771=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_772=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj215=node_772;
            node_772=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_772),info));
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_771;
            info->no_comma=no_comma_770;
            list$1tuple2$2charphsNodephphp_push_back(params_756,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1270, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(label_769),(struct sNode*)come_increment_ref_count(node_772))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_769 = come_decrement_ref_count2(label_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_769 = come_decrement_ref_count2(label_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_773=((void*)0);
    method_block_sline_774=0;
    if(    *info->p==123) {
        head_775=info->p;
        method_block_sline_774=info->sline;
        ((char*)(__right_value694=skip_block(info)));
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_776=info->p;
        __dec_obj216=method_block_773;
        method_block_773=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1294, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_777=tail_776-head_775;
        mem_778=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_777+1)), "20method.c", 1297, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_778,head_775,len_777);
        mem_778[len_777]=0;
        buffer_append_str(method_block_773,mem_778);
        buffer_append_str(method_block_773,"\n");
        mem_778 = come_decrement_ref_count2(mem_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1309, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value700=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1309, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_756),method_block_773,method_block_sline_774,method_generics_types_762,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_779=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value700,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj217=node_779;
    node_779=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_779),info));
    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
    __result374__ = gComeFunResultObject = __result_obj__ = node_779;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_756,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_762,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_757;
    result_757=0;
    result_757+=int_get_hash_key(((int)self->v1));
    result_757+=int_get_hash_key(((int)self->v2));
    return result_757;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj209;
struct sNode* __dec_obj210;
struct tuple2$2charphsNodeph* __result373__;
    __dec_obj209=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj210=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
    __result373__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj211;
char* __dec_obj212;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj211=self->v1;
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj212=self->v2;
            __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value705 = (void*)0;
struct sNode* __result375__;
void* __right_value706 = (void*)0;
struct sNode* __result376__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1319, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value704=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1319, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value705=_inf_value4));
        come_call_finalizer3(__right_value704,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value705) { __right_value705 = come_decrement_ref_count2(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value706=string_node_v17(buf,head,head_sline,info)));
    if(__right_value706) { __right_value706 = come_decrement_ref_count2(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result376__;
}

