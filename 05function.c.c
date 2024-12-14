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
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern void* gComeFunResultObject;

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
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
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
};

struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
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
struct buffer* string_to_buffer(char* self);
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
_Bool string_equals(char* self, char* right);
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
unsigned int string_get_hash_key(char* value);
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
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* charp_printable(char* str);
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
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
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
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
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
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
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
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool tuple1$1sTypeph_operator_not_equals(struct tuple1$1sTypeph* left, struct tuple1$1sTypeph* right);
static _Bool tuple1$1sTypeph_operator_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
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
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3633, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3640, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3649, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3656, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3663, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3670, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3677, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4005, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4010, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4015, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4020, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4025, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4058, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4060, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4065, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4067, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4072, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4074, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4079, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4081, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4086, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4088, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4093, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4095, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4100, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4102, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4107, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4112, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4117, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4122, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4127, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4132, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4137, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4142, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4147, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4152, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4157, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4162, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4167, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4172, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1127, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1137, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1147, "list_item$1char"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1127, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1137, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1147, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1127, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1137, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1147, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1127, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1137, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1147, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1127, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1137, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1147, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1127, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1137, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1147, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1127, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1137, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1147, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1921, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1921, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1921, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1921, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1921, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1921, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1921, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1127, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1137, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1147, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct sSemicolonNode* __result223__;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value280,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value281=__builtin_string("sSemicolonNode")));
    /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct sLambdaNode* __result225__;
    ((struct sNodeBase*)(__right_value282=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value282,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
char* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value283=__builtin_string("sLambdaNode")));
    /* U11 */__right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_271;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* result_type_272;
void* __right_value286 = (void*)0;
int block_level_273;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_274;
void* __right_value289 = (void*)0;
char* __dec_obj35;
void* __right_value326 = (void*)0;
struct sType* __dec_obj81;
_Bool __result245__;
    come_fun_271=info->come_fun;
    info->come_fun=self->mFun;
    result_type_272=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value286=make_define_var(result_type_272,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_273=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_273;
    come_value_274=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj35=come_value_274->c_value;
    come_value_274->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_274->type;
    come_value_274->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_274->var=((void*)0);
    add_come_last_code(info,"%s",come_value_274->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_274));
    info->come_fun=come_fun_271;
    __result245__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result245__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result227__;
void* __right_value290 = (void*)0;
struct sType* result_275;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value295 = (void*)0;
char* __dec_obj60;
void* __right_value302 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value311 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value318 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value319 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value320 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value321 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value323 = (void*)0;
char* __dec_obj78;
void* __right_value324 = (void*)0;
char* __dec_obj79;
void* __right_value325 = (void*)0;
char* __dec_obj80;
struct sType* __result243__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_275=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_275->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj58=result_275->mNoSolvedGenericsType;
        result_275->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_275->mOriginalLoadVarType;
        result_275->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_275->mGenericsName;
        result_275->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_275->mGenericsTypes;
        result_275->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_275->mArrayNum;
        result_275->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_275->mParamTypes;
        result_275->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_275->mParamNames;
        result_275->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_275->mResultType;
        result_275->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_275->mAlignas;
        result_275->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_275->mChannelType;
        result_275->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_275->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_275->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_275->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_275->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_275->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_275->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_275->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_275->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_275->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_275->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_275->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_275->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_275->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_275->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_275->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_275->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_275->mSizeNum;
        result_275->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_275->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_275->mOriginalTypeName;
        result_275->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_275->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_275->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_275->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_275->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_275->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_275->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_275->mAsmName;
        result_275->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_275->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_275->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_275->mTupleName;
        result_275->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_275;
    /*i*/come_call_finalizer3(result_275,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result228__;
void* __right_value291 = (void*)0;
struct tuple1$1sTypeph* result_276;
void* __right_value292 = (void*)0;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result229__;
    if(    self==(void*)0) {
        __result228__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_276=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_276->v1;
        result_276->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_276;
    /*i*/come_call_finalizer3(result_276,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*i*/come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_279;
struct list_item$1sTypeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*i*/come_call_finalizer3(prev_it_280,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*i*/come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            /* U1 */ if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_283;
struct list_item$1sNodeph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        /*i*/come_call_finalizer3(prev_it_284,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_285;
struct list_item$1charph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*i*/come_call_finalizer3(prev_it_286,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj57;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj57=self->v1;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result230__;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sTypeph* result_287;
struct list_item$1sTypeph* it_288;
void* __right_value301 = (void*)0;
struct list$1sTypeph* __result233__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_287=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1043, "list$1sTypeph"))));
    it_288=self->head;
    while(it_288!=((void*)0)) {
        list$1sTypeph_add(result_287,(struct sType*)come_increment_ref_count(sType_clone(it_288->item)));
        it_288=it_288->next;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_287;
    /*i*/come_call_finalizer3(result_287,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1sTypeph* litem_289;
struct sType* __dec_obj61;
void* __right_value299 = (void*)0;
struct list_item$1sTypeph* litem_290;
struct sType* __dec_obj62;
void* __right_value300 = (void*)0;
struct list_item$1sTypeph* litem_291;
struct sType* __dec_obj63;
struct list$1sTypeph* __result232__;
    if(    self->len==0) {
        litem_289=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value298=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1057, "list_item$1sTypeph"))));
        litem_289->prev=((void*)0);
        litem_289->next=((void*)0);
        __dec_obj61=litem_289->item;
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_289;
        self->head=litem_289;
    }
    else if(    self->len==1) {
        litem_290=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value299=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1067, "list_item$1sTypeph"))));
        litem_290->prev=self->head;
        litem_290->next=((void*)0);
        __dec_obj62=litem_290->item;
        litem_290->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_290;
        self->head->next=litem_290;
    }
    else {
        litem_291=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value300=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1077, "list_item$1sTypeph"))));
        litem_291->prev=self->tail;
        litem_291->next=((void*)0);
        __dec_obj63=litem_291->item;
        litem_291->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_291;
        self->tail=litem_291;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result234__;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sNodeph* result_292;
struct list_item$1sNodeph* it_293;
void* __right_value309 = (void*)0;
struct list$1sNodeph* __result239__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_292=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1043, "list$1sNodeph"))));
    it_293=self->head;
    while(it_293!=((void*)0)) {
        list$1sNodeph_add(result_292,(struct sNode*)come_increment_ref_count(sNode_clone(it_293->item)));
        it_293=it_293->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_292;
    /*i*/come_call_finalizer3(result_292,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj65;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_295;
struct sNode* __dec_obj66;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_296;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result236__;
    if(    self->len==0) {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value305=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1057, "list_item$1sNodeph"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj65=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1) {
        litem_295=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1067, "list_item$1sNodeph"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj66=litem_295->item;
        litem_295->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1077, "list_item$1sNodeph"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj67=litem_296->item;
        litem_296->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result237__;
void* __right_value308 = (void*)0;
struct sNode* result_297;
struct sNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_297=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_297->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_297->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_297->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_297->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_297->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_297->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_297->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_297->kind=self->kind;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_297;
    if(result_297) { result_297 = come_decrement_ref_count2(result_297, ((struct sNode*)result_297)->finalize, ((struct sNode*)result_297)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result240__;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1charph* result_298;
struct list_item$1charph* it_299;
void* __right_value317 = (void*)0;
struct list$1charph* __result242__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1043, "list$1charph"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1charph_add(result_298,(char*)come_increment_ref_count(string_clone(it_299->item)));
        it_299=it_299->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_298;
    /*i*/come_call_finalizer3(result_298,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
struct list_item$1charph* litem_300;
char* __dec_obj70;
void* __right_value315 = (void*)0;
struct list_item$1charph* litem_301;
char* __dec_obj71;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_302;
char* __dec_obj72;
struct list$1charph* __result241__;
    if(    self->len==0) {
        litem_300=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value314=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1057, "list_item$1charph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj70=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value315=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1067, "list_item$1charph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj71=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1077, "list_item$1charph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj72=litem_302->item;
        litem_302->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_303;
struct CVALUE* __dec_obj82;
void* __right_value328 = (void*)0;
struct list_item$1CVALUEph* litem_304;
struct CVALUE* __dec_obj86;
void* __right_value329 = (void*)0;
struct list_item$1CVALUEph* litem_305;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result244__;
    if(    self->len==0) {
        litem_303=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1127, "list_item$1CVALUEph"))));
        litem_303->prev=((void*)0);
        litem_303->next=((void*)0);
        __dec_obj82=litem_303->item;
        litem_303->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_303;
        self->head=litem_303;
    }
    else if(    self->len==1) {
        litem_304=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value328=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1137, "list_item$1CVALUEph"))));
        litem_304->prev=self->head;
        litem_304->next=((void*)0);
        __dec_obj86=litem_304->item;
        litem_304->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_304;
        self->head->next=litem_304;
    }
    else {
        litem_305=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value329=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1147, "list_item$1CVALUEph"))));
        litem_305->prev=self->tail;
        litem_305->next=((void*)0);
        __dec_obj87=litem_305->item;
        litem_305->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_305;
        self->tail=litem_305;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj83;
struct sType* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj83=self->c_value;
            /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj84=self->type;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result246__;
    ((struct sNodeBase*)(__right_value330=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value330,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* __result247__;
    __result247__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value331=__builtin_string("sFunNode")));
    /* U11 */__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_306;
char* come_fun_name_307;
void* __right_value332 = (void*)0;
char* __dec_obj106;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* result_type_308;
void* __right_value335 = (void*)0;
int block_level_309;
void* __right_value336 = (void*)0;
char* __dec_obj107;
_Bool __result248__;
    come_fun_306=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_307=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj106=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_308=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value335=make_define_var(result_type_308,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_309=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_309;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value336=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_308,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_306;
    __dec_obj107=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_307);
    /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result248__ = (_Bool)1;
    /* U13 */come_fun_name_307 = come_decrement_ref_count2(come_fun_name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result248__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
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
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            /*G*/ __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1sNodeph* __dec_obj108;
struct sBlock* __result249__;
    __dec_obj108=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj109;
void* __right_value340 = (void*)0;
struct list$1charph* __dec_obj110;
void* __right_value341 = (void*)0;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
struct sType* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
char* __dec_obj117;
void* __right_value342 = (void*)0;
char* __dec_obj118;
struct sGenericsFun* __result250__;
    __dec_obj109=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj110=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj111=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj114,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj115=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj117=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj118=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
char* __dec_obj122;
struct sType* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
struct list$1charph* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj119=self->mImplType;
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj120=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj121=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj122=self->mName;
            /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj123=self->mResultType;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj124=self->mParamTypes;
            come_call_finalizer3(__dec_obj124,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj125=self->mParamNames;
            come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj126=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj127=self->mBlock;
            /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj128=self->mGenericsSName;
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sBlock* result_310;
int sline_top_311;
int block_level_312;
char* p_saved_313;
int sline_saved_314;
char* sname_saved_315;
void* __right_value345 = (void*)0;
char* __dec_obj129;
char* __dec_obj130;
struct map$2charphcharph* __dec_obj131;
char* p_318;
int sline_319;
char* sname_320;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* module_name_321;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* params_322;
void* __right_value350 = (void*)0;
char* word_323;
void* __right_value351 = (void*)0;
char* __dec_obj132;
void* __right_value352 = (void*)0;
char* __dec_obj133;
struct sBlock* __result255__;
struct sClassModule* module_327;
void* __right_value353 = (void*)0;
void* __right_value359 = (void*)0;
struct map$2charphcharph* __dec_obj139;
int i_331;
struct list$1charph* o2_saved_332;
char* it_335;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* __dec_obj140;
void* __right_value367 = (void*)0;
struct sNode* node_382;
void* __right_value368 = (void*)0;
char* __dec_obj141;
_Bool omit_semicolon_386;
void* __right_value372 = (void*)0;
char* __dec_obj145;
char* head_401;
void* __right_value373 = (void*)0;
struct sNode* value_402;
char* tail_403;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* node_405;
void* __right_value377 = (void*)0;
char* __dec_obj147;
struct sNode* node_406;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value382 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj151;
_Bool omit_semicolon_408;
char* p_409;
char* head_410;
void* __right_value384 = (void*)0;
char* source_411;
void* __right_value385 = (void*)0;
struct sNode* node_412;
struct sBlock* __result294__;
node_406 = (void*)0;
    result_310=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_311=info->sline_top;
    info->sline_top=info->sline;
    block_level_312=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_313=((void*)0);
        sline_saved_314=0;
        sname_saved_315=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_313) {
                if(                *info->p==0) {
                    info->p=p_saved_313;
                    info->sline=sline_saved_314;
                    __dec_obj129=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_315));
                    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_313=((void*)0);
                    sline_saved_314=0;
                    __dec_obj130=sname_saved_315;
                    sname_saved_315=((void*)0);
                    /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj131=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj131,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_318=info->p;
            sline_319=info->sline;
            sname_320=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_319;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value346=parse_word(info)));
                /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_321=(char*)come_increment_ref_count(parse_word(info));
                params_322=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 211, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_323=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_322,(char*)come_increment_ref_count(word_323));
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
                            /* U13 */word_323 = come_decrement_ref_count2(word_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        /* U13 */word_323 = come_decrement_ref_count2(word_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_313=info->p;
                sline_saved_314=info->sline;
                __dec_obj132=sname_saved_315;
                sname_saved_315=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj133=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_321));
                /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                map$2charphsClassModulephp_operator_load_element(info->modules,module_name_321)==((void*)0)) {
                    err_msg(info,"module not found");
                    __result255__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */module_name_321 = come_decrement_ref_count2(module_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_322,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */sname_saved_315 = come_decrement_ref_count2(sname_saved_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_310,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result255__;
                }
                module_327=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_321), "05function.c", 258, 0));
                if(                list$1charph_length(module_327->mParams)!=list$1charph_length(params_322)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj139=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 265, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj139,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_331=0;
                for(                o2_saved_332=(struct list$1charph*)come_increment_ref_count((module_327->mParams)),it_335=list$1charph_begin((o2_saved_332));                !list$1charph_end((o2_saved_332));                it_335=list$1charph_next((o2_saved_332))                ){
                    ((char*)(__right_value365=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_335)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_322,i_331), "05function.c", 269, 1)))))));
                    /* U11 */__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_331++;
                }
                /*i*/come_call_finalizer3(o2_saved_332,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_327->mText;
                info->sline=module_327->mSLine;
                __dec_obj140=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_327->mSName));
                /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */module_name_321 = come_decrement_ref_count2(module_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_322,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_382=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj141=info->sname;
            info->sname=(char*)come_increment_ref_count(node_382->sname(node_382->_protocol_obj));
            /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_382->sline(node_382->_protocol_obj);
            if(            node_382==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_310->mNodes,(struct sNode*)come_increment_ref_count(node_382));
            parse_sharp_v5(info);
            if(            node_382->terminated(node_382->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_386=(_Bool)1;
            if(            node_382->terminated(node_382->_protocol_obj)) {
                omit_semicolon_386=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_386=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_310->mOmitSemicolon=omit_semicolon_386;
                if(                omit_semicolon_386&&in_function) {
                    list$1sNodeph_delete(result_310->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_318;
                    info->sline=sline_319;
                    __dec_obj145=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_320));
                    /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_401=info->p;
                    value_402=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_403=info->p;
                    __dec_obj146=value_402;
                    value_402=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_402),info));
                    /* U1 */ if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_404[tail_403-head_401+1];
                    memset(&buf_404, 0, sizeof(char)                    *(tail_403-head_401+1)                    );
                    memcpy(buf_404,head_401,tail_403-head_401);
                    buf_404[tail_403-head_401]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_405=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_402),(char*)come_increment_ref_count(__builtin_string(buf_404)),info));
                    list$1sNodeph_push_back(result_310->mNodes,(struct sNode*)come_increment_ref_count(node_405));
                    if(value_402) { value_402 = come_decrement_ref_count2(value_402, ((struct sNode*)value_402)->finalize, ((struct sNode*)value_402)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_405) { node_405 = come_decrement_ref_count2(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_382) { node_382 = come_decrement_ref_count2(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_402) { value_402 = come_decrement_ref_count2(value_402, ((struct sNode*)value_402)->finalize, ((struct sNode*)value_402)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_405) { node_405 = come_decrement_ref_count2(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_382) { node_382 = come_decrement_ref_count2(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_382) { node_382 = come_decrement_ref_count2(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_313) {
            if(            info->p==0) {
                info->p=p_saved_313;
                info->sline=sline_saved_314;
                __dec_obj147=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_315));
                /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_313=((void*)0);
                sline_saved_314=0;
            }
        }
        /* U13 */sname_saved_315 = come_decrement_ref_count2(sname_saved_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 366, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value379=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 366, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj150=node_406;
            node_406=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value379,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_310->mNodes,(struct sNode*)come_increment_ref_count(node_406));
        }
        else {
            __dec_obj151=node_406;
            node_406=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_406==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_406->terminated(node_406->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_408=(_Bool)1;
            if(            node_406->terminated(node_406->_protocol_obj)) {
                omit_semicolon_408=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_408=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_310->mOmitSemicolon=omit_semicolon_408;
            list$1sNodeph_push_back(result_310->mNodes,(struct sNode*)come_increment_ref_count(node_406));
        }
        if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_409=info->p;
        head_410=info->head;
        source_411=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_411;
        info->head=source_411;
        node_412=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_412==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_310->mNodes,(struct sNode*)come_increment_ref_count(node_412));
        info->p=p_409;
        info->head=head_410;
        /* U13 */source_411 = come_decrement_ref_count2(source_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_412) { node_412 = come_decrement_ref_count2(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_312;
    __result294__ = gComeFunResultObject = __result_obj__ = result_310;
    /*i*/come_call_finalizer3(result_310,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_316;
int i_317;
    for(    i_316=0;    i_316<self->size;    i_316++    ){
        if(        self->item_existance[i_316]) {
            if(            1) {
                /* U13 */self->items[i_316] = come_decrement_ref_count2(self->items[i_316], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_317=0;    i_317<self->size;    i_317++    ){
        if(        self->item_existance[i_317]) {
            if(            1) {
                /* U13 */self->keys[i_317] = come_decrement_ref_count2(self->keys[i_317], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_324;
unsigned int hash_325;
unsigned int it_326;
struct sClassModule* __result251__;
struct sClassModule* __result252__;
struct sClassModule* __result253__;
struct sClassModule* __result254__;
default_value_324 = (void*)0;
    memset(&default_value_324,0,sizeof(struct sClassModule*));
    hash_325=string_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            string_equals(self->keys[it_326],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_326];
                /*i*/come_call_finalizer3(default_value_324,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value_324;
                /*i*/come_call_finalizer3(default_value_324,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value_324;
            /*i*/come_call_finalizer3(default_value_324,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value_324;
    /*i*/come_call_finalizer3(default_value_324,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj134;
char* __dec_obj135;
struct list$1charph* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj134=self->mName;
            /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj135=self->mText;
            /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj136=self->mParams;
            come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj137=self->mSName;
            /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
int i_328;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charp* __dec_obj138;
struct map$2charphcharph* __result257__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value354=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2304, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value355=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2305, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value356=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2306, "bool"))));
    for(    i_328=0;    i_328<128;    i_328++    ){
        self->item_existance[i_328]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj138=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2316, "list$1charp"))));
    come_call_finalizer3(__dec_obj138,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result256__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_329;
int i_330;
    for(    i_329=0;    i_329<self->size;    i_329++    ){
        if(        self->item_existance[i_329]) {
            if(            1) {
                /* U13 */self->items[i_329] = come_decrement_ref_count2(self->items[i_329], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_330=0;    i_330<self->size;    i_330++    ){
        if(        self->item_existance[i_330]) {
            if(            1) {
                /* U13 */self->keys[i_330] = come_decrement_ref_count2(self->keys[i_330], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_333;
char* __result258__;
char* __result259__;
char* result_334;
char* __result260__;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_333;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->head;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_334,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_334;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_336;
char* __result261__;
char* __result262__;
char* result_337;
char* __result263__;
result_336 = (void*)0;
result_337 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_336,0,sizeof(char*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_336;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_337,0,sizeof(char*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_337;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_338;
int i_339;
char* __result264__;
char* default_value_340;
char* __result265__;
default_value_340 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_338=self->head;
    i_339=0;
    while(it_338!=((void*)0)) {
        if(        position==i_339) {
            __result264__ = gComeFunResultObject = __result_obj__ = it_338->item;
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
        it_338=it_338->next;
        i_339++;
    }
    memset(&default_value_340,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = default_value_340;
    /* U13 */default_value_340 = come_decrement_ref_count2(default_value_340, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result287__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result287__ = gComeFunResultObject = __result_obj__ = item;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_358;
unsigned int it_359;
_Bool same_key_exist_376;
char* it2_379;
struct map$2charphcharph* __result286__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_358=string_get_hash_key(key)%self->size;
    it_359=hash_358;
    while((_Bool)1) {
        if(        self->item_existance[it_359]) {
            if(            string_equals(self->keys[it_359],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_359]);
                    /* U13 */self->keys[it_359] = come_decrement_ref_count2(self->keys[it_359], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_359]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_359]);
                    self->keys[it_359]=key;
                }
                if(                1) {
                    /* U13 */self->items[it_359] = come_decrement_ref_count2(self->items[it_359], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_359]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_359]=item;
                }
                break;
            }
            it_359++;
            if(            it_359>=self->size) {
                it_359=0;
            }
            else if(            it_359==hash_358) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_359]=(_Bool)1;
            if(            1) {
                self->keys[it_359]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_359]=key;
            }
            if(            1) {
                self->items[it_359]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_359]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_376=(_Bool)0;
    for(    it2_379=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_379=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_379,key)) {
            same_key_exist_376=(_Bool)1;
        }
    }
    if(    !same_key_exist_376) {
        list$1charp_push_back(self->key_list,key);
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_341;
void* __right_value362 = (void*)0;
char** keys_342;
void* __right_value363 = (void*)0;
char** items_343;
void* __right_value364 = (void*)0;
_Bool* item_existance_344;
int len_345;
char* it_348;
char* default_value_351;
char* it2_352;
unsigned int hash_355;
int n_356;
char* default_value_357;
default_value_351 = (void*)0;
default_value_357 = (void*)0;
    size_341=self->size*10;
    keys_342=(char**)come_increment_ref_count(((char**)(__right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(size_341)), "./comelang.h", 2532, "char*%"))));
    items_343=(char**)come_increment_ref_count(((char**)(__right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(size_341)), "./comelang.h", 2533, "char*%"))));
    item_existance_344=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_341)), "./comelang.h", 2534, "bool"))));
    len_345=0;
    for(    it_348=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_348=map$2charphcharph_next(self)    ){
        memset(&default_value_351,0,sizeof(char*));
        it2_352=map$2charphcharph_at(self,it_348,default_value_351);
        hash_355=string_get_hash_key(it_348)%size_341;
        n_356=hash_355;
        while((_Bool)1) {
            if(            item_existance_344[n_356]) {
                n_356++;
                if(                n_356>=size_341) {
                    n_356=0;
                }
                else if(                n_356==hash_355) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_344[n_356]=(_Bool)1;
                keys_342[n_356]=it_348;
                items_343[n_356]=map$2charphcharph_at(self,it_348,default_value_357);
                len_345++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_342;
    self->items=items_343;
    self->item_existance=item_existance_344;
    self->size=size_341;
    self->len=len_345;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_346;
char* __result266__;
char* __result267__;
char* result_347;
char* __result268__;
result_346 = (void*)0;
result_347 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_346,0,sizeof(char*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_346;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_347,0,sizeof(char*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_347;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_349;
char* __result269__;
char* __result270__;
char* result_350;
char* __result271__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_350,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_353;
unsigned int it_354;
char* __result272__;
char* __result273__;
char* __result274__;
char* __result275__;
    hash_353=string_get_hash_key(((char*)key))%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(        self->item_existance[it_354]) {
            if(            string_equals(self->keys[it_354],key)) {
                __result272__ = gComeFunResultObject = __result_obj__ = self->items[it_354];
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
            it_354++;
            if(            it_354>=self->size) {
                it_354=0;
            }
            else if(            it_354==hash_353) {
                __result273__ = gComeFunResultObject = __result_obj__ = default_value;
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
        }
        else {
            __result274__ = gComeFunResultObject = __result_obj__ = default_value;
            /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
    }
    __result275__ = gComeFunResultObject = __result_obj__ = default_value;
    /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_360;
struct list_item$1charp* it_361;
struct list$1charp* __result279__;
    it2_360=0;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        if(        charp_equals(it_361->item,item)) {
            list$1charp_delete(self,it2_360,it2_360+1);
            break;
        }
        it2_360++;
        it_361=it_361->next;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_362;
struct list$1charp* __result276__;
struct list_item$1charp* it_365;
int i_366;
struct list_item$1charp* prev_it_367;
struct list_item$1charp* it_368;
int i_369;
struct list_item$1charp* prev_it_370;
struct list_item$1charp* it_371;
struct list_item$1charp* head_prev_it_372;
struct list_item$1charp* tail_it_373;
int i_374;
struct list_item$1charp* prev_it_375;
struct list$1charp* __result278__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_362=tail;
        tail=head;
        head=tmp_362;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result276__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_365=self->head;
        i_366=0;
        while(it_365!=((void*)0)) {
            if(            i_366<tail) {
                prev_it_367=it_365;
                it_365=it_365->next;
                i_366++;
                /*i*/come_call_finalizer3(prev_it_367,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_366==tail) {
                self->head=it_365;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_365=it_365->next;
                i_366++;
            }
        }
    }
    else if(    tail==self->len) {
        it_368=self->head;
        i_369=0;
        while(it_368!=((void*)0)) {
            if(            i_369==head) {
                self->tail=it_368->prev;
                self->tail->next=((void*)0);
            }
            if(            i_369>=head) {
                prev_it_370=it_368;
                it_368=it_368->next;
                i_369++;
                /*i*/come_call_finalizer3(prev_it_370,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_368=it_368->next;
                i_369++;
            }
        }
    }
    else {
        it_371=self->head;
        head_prev_it_372=((void*)0);
        tail_it_373=((void*)0);
        i_374=0;
        while(it_371!=((void*)0)) {
            if(            i_374==head) {
                head_prev_it_372=it_371->prev;
            }
            if(            i_374==tail) {
                tail_it_373=it_371;
            }
            if(            i_374>=head&&i_374<tail) {
                prev_it_375=it_371;
                it_371=it_371->next;
                i_374++;
                /*i*/come_call_finalizer3(prev_it_375,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_371=it_371->next;
                i_374++;
            }
        }
        if(        head_prev_it_372!=((void*)0)) {
            head_prev_it_372->next=tail_it_373;
        }
        if(        tail_it_373!=((void*)0)) {
            tail_it_373->prev=head_prev_it_372;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_363;
struct list_item$1charp* prev_it_364;
struct list$1charp* __result277__;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        /*i*/come_call_finalizer3(prev_it_364,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_377;
char* __result280__;
char* __result281__;
char* result_378;
char* __result282__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result280__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    self->it=self->head;
    if(    self->it) {
        __result281__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    memset(&result_378,0,sizeof(char*));
    __result282__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_380;
char* __result283__;
char* __result284__;
char* result_381;
char* __result285__;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_380,0,sizeof(char*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_380;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_381,0,sizeof(char*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_381;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct list_item$1sNodeph* litem_383;
struct sNode* __dec_obj142;
void* __right_value370 = (void*)0;
struct list_item$1sNodeph* litem_384;
struct sNode* __dec_obj143;
void* __right_value371 = (void*)0;
struct list_item$1sNodeph* litem_385;
struct sNode* __dec_obj144;
struct list$1sNodeph* __result288__;
    if(    self->len==0) {
        litem_383=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value369=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1127, "list_item$1sNodeph"))));
        litem_383->prev=((void*)0);
        litem_383->next=((void*)0);
        __dec_obj142=litem_383->item;
        litem_383->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_383;
        self->head=litem_383;
    }
    else if(    self->len==1) {
        litem_384=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value370=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1137, "list_item$1sNodeph"))));
        litem_384->prev=self->head;
        litem_384->next=((void*)0);
        __dec_obj143=litem_384->item;
        litem_384->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_384;
        self->head->next=litem_384;
    }
    else {
        litem_385=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value371=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1147, "list_item$1sNodeph"))));
        litem_385->prev=self->tail;
        litem_385->next=((void*)0);
        __dec_obj144=litem_385->item;
        litem_385->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_385;
        self->tail=litem_385;
    }
    self->len++;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_387;
struct list$1sNodeph* __result289__;
struct list_item$1sNodeph* it_390;
int i_391;
struct list_item$1sNodeph* prev_it_392;
struct list_item$1sNodeph* it_393;
int i_394;
struct list_item$1sNodeph* prev_it_395;
struct list_item$1sNodeph* it_396;
struct list_item$1sNodeph* head_prev_it_397;
struct list_item$1sNodeph* tail_it_398;
int i_399;
struct list_item$1sNodeph* prev_it_400;
struct list$1sNodeph* __result291__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_387=tail;
        tail=head;
        head=tmp_387;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result289__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_390=self->head;
        i_391=0;
        while(it_390!=((void*)0)) {
            if(            i_391<tail) {
                prev_it_392=it_390;
                it_390=it_390->next;
                i_391++;
                /*i*/come_call_finalizer3(prev_it_392,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_391==tail) {
                self->head=it_390;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_390=it_390->next;
                i_391++;
            }
        }
    }
    else if(    tail==self->len) {
        it_393=self->head;
        i_394=0;
        while(it_393!=((void*)0)) {
            if(            i_394==head) {
                self->tail=it_393->prev;
                self->tail->next=((void*)0);
            }
            if(            i_394>=head) {
                prev_it_395=it_393;
                it_393=it_393->next;
                i_394++;
                /*i*/come_call_finalizer3(prev_it_395,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_393=it_393->next;
                i_394++;
            }
        }
    }
    else {
        it_396=self->head;
        head_prev_it_397=((void*)0);
        tail_it_398=((void*)0);
        i_399=0;
        while(it_396!=((void*)0)) {
            if(            i_399==head) {
                head_prev_it_397=it_396->prev;
            }
            if(            i_399==tail) {
                tail_it_398=it_396;
            }
            if(            i_399>=head&&i_399<tail) {
                prev_it_400=it_396;
                it_396=it_396->next;
                i_399++;
                /*i*/come_call_finalizer3(prev_it_400,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_396=it_396->next;
                i_399++;
            }
        }
        if(        head_prev_it_397!=((void*)0)) {
            head_prev_it_397->next=tail_it_398;
        }
        if(        tail_it_398!=((void*)0)) {
            tail_it_398->prev=head_prev_it_397;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_388;
struct list_item$1sNodeph* prev_it_389;
struct list$1sNodeph* __result290__;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        /*i*/come_call_finalizer3(prev_it_389,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj148;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result292__;
void* __right_value380 = (void*)0;
struct sSemicolonNode* result_407;
void* __right_value381 = (void*)0;
char* __dec_obj149;
struct sSemicolonNode* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_407=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_407->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_407->sname;
        result_407->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_407;
    /*i*/come_call_finalizer3(result_407,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_413;
struct sVarTable* old_table_414;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sVarTable* __dec_obj152;
struct sVarTable* current_loop_vtable_415;
struct list$1sTypeph* param_types__416;
struct list$1charph* param_names__417;
int i_418;
struct list$1charph* o2_saved_419;
char* name_420;
void* __right_value388 = (void*)0;
struct sType* type_421;
void* __right_value389 = (void*)0;
int block_level_425;
int i_426;
struct list$1sNodeph* o2_saved_427;
struct sNode* node_430;
struct list$1sRightValueObjectph* right_value_objects_433;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
int stack_num_before_438;
int sline_439;
void* __right_value392 = (void*)0;
char* sname_440;
void* __right_value393 = (void*)0;
char* __dec_obj160;
_Bool Value_441;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value399 = (void*)0;
struct CVALUE* come_value2_443;
void* __right_value400 = (void*)0;
char* __dec_obj164;
void* __right_value401 = (void*)0;
struct CVALUE* come_value2_445;
struct sVar* var__446;
void* __right_value402 = (void*)0;
struct CVALUE* come_value3_447;
void* __right_value403 = (void*)0;
_Bool _if_conditional1;
void* __right_value404 = (void*)0;
struct sType* __dec_obj165;
void* __right_value405 = (void*)0;
char* c_value_464;
void* __right_value406 = (void*)0;
char* __dec_obj166;
void* __right_value407 = (void*)0;
char* __dec_obj167;
void* __right_value408 = (void*)0;
char* __dec_obj168;
_Bool Value_465;
void* __right_value409 = (void*)0;
char* __dec_obj169;
struct list$1sRightValueObjectph* __dec_obj170;
void* __if_result__0_468 = (void*)0;
struct list$1sVarph* o2_saved_469;
struct sVar* it_472;
struct list$1sVarph* __dec_obj176;
memset(&i_418, 0, sizeof(int));
memset(&i_426, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_413=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_414=info->lv_table;
    if(    !no_var_table) {
        __dec_obj152=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 440, "sVarTable")),(_Bool)0,old_table_414));
        come_call_finalizer3(__dec_obj152,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_415=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__416=info->param_types;
    param_names__417=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_419=(param_names),name_420=list$1charph_begin((o2_saved_419));        !list$1charph_end((o2_saved_419));        name_420=list$1charph_next((o2_saved_419))        ){
            type_421=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_418), "05function.c", 458, 2))));
            type_421->mFunctionParam=(_Bool)1;
            type_421->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_420,(struct sType*)come_increment_ref_count(sType_clone(type_421)),info);
            i_418++;
            /*i*/come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_425=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_427=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_430=list$1sNodeph_begin((o2_saved_427));        !list$1sNodeph_end((o2_saved_427));        node_430=list$1sNodeph_next((o2_saved_427))        ){
            right_value_objects_433=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj157=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 477, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj158=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj159=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_438=list$1CVALUEph_length(info->stack);
            sline_439=info->sline;
            sname_440=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_430->sline(node_430->_protocol_obj);
            __dec_obj160=info->sname;
            info->sname=(char*)come_increment_ref_count(node_430->sname(node_430->_protocol_obj));
            /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_426==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_441=node_compile(node_430,info);
                if(                !Value_441) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_438+1) {
                    come_value_442=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_442->type->mClass->mName,"void")&&come_value_442->type->mPointerNum==0) {
                        come_value2_443=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_442));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_443));
                        __dec_obj164=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_443->c_value));
                        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_445=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_442));
                        var__446=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__446) {
                            come_value3_447=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 513, "CVALUE"));
                            if(                            var__446->mType->mClass=="void"&&var__446->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__446->mType,((struct sType*)(__right_value403=sType_clone(come_value_442->type))),come_value3_447,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj165=var__446->mType;
                            var__446->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_442->type));
                            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_442->type->mHeap) {
                                c_value_464=(char*)come_increment_ref_count(increment_ref_count_object(come_value_442->type,come_value_442->c_value,info));
                                __dec_obj166=come_value2_445->c_value;
                                come_value2_445->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__446->mCValueName,c_value_464));
                                /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                /* U13 */c_value_464 = come_decrement_ref_count2(c_value_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj167=come_value2_445->c_value;
                                come_value2_445->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__446->mCValueName,come_value_442->c_value));
                                /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_445));
                        __dec_obj168=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_445->c_value));
                        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_465=node_compile(node_430,info);
                if(                !Value_465) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_439;
            __dec_obj169=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_440));
            /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_438);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj170=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_433);
            come_call_finalizer3(__dec_obj170,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_426++;
            /*i*/come_call_finalizer3(right_value_objects_433,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_440 = come_decrement_ref_count2(sname_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_427,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_425==0) {
            for(            o2_saved_469=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_472=list$1sVarph_begin((o2_saved_469));            !list$1sVarph_end((o2_saved_469));            it_472=list$1sVarph_next((o2_saved_469))            ){
                free_object(it_472->mType,it_472->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_469,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj176=info->match_it_var;
            __if_result__0_468=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj176,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_468,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_414;
    info->block_level=block_level_425;
    info->param_types=param_types__416;
    info->param_names=param_names__417;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_415;
    info->inhibits_output_code=inhibits_output_code_413;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_422;
int i_423;
struct sType* __result295__;
struct sType* default_value_424;
struct sType* __result296__;
default_value_424 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_422=self->head;
    i_423=0;
    while(it_422!=((void*)0)) {
        if(        position==i_423) {
            __result295__ = gComeFunResultObject = __result_obj__ = it_422->item;
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        it_422=it_422->next;
        i_423++;
    }
    memset(&default_value_424,0,sizeof(struct sType*));
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_424;
    /*i*/come_call_finalizer3(default_value_424,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_428;
struct sNode* __result297__;
struct sNode* __result298__;
struct sNode* result_429;
struct sNode* __result299__;
result_428 = (void*)0;
result_429 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_428,0,sizeof(struct sNode*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_428;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->it=self->head;
    if(    self->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_429,0,sizeof(struct sNode*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_429;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_431;
struct sNode* __result300__;
struct sNode* __result301__;
struct sNode* result_432;
struct sNode* __result302__;
result_431 = (void*)0;
result_432 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_431,0,sizeof(struct sNode*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_431;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_432,0,sizeof(struct sNode*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_432;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_434;
struct list_item$1sRightValueObjectph* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        /*i*/come_call_finalizer3(prev_it_435,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj153;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj153=self->item;
            come_call_finalizer3(__dec_obj153,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj154=self->mType;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj155=self->mVarName;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj156=self->mFunName;
            /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_436;
struct list_item$1sRightValueObjectph* prev_it_437;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        /*i*/come_call_finalizer3(prev_it_437,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result304__;
void* __right_value395 = (void*)0;
struct CVALUE* result_444;
void* __right_value396 = (void*)0;
char* __dec_obj161;
void* __right_value397 = (void*)0;
struct sType* __dec_obj162;
void* __right_value398 = (void*)0;
char* __dec_obj163;
struct CVALUE* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_444=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj161=result_444->c_value;
        result_444->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj162=result_444->type;
        result_444->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_444->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_444->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj163=result_444->c_value_without_right_value_objects;
        result_444->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_444;
    /*i*/come_call_finalizer3(result_444,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
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
    if(    !list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
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
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_448;
struct list_item$1tuple2$2charphsTypephph* it2_449;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_448=left->head;
    it2_449=right->head;
    while(it_448!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_448->item,it2_449->item)) {
            return (_Bool)0;
        }
        it_448=it_448->next;
        it2_449=it2_449->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
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
struct list_item$1sTypeph* it_450;
struct list_item$1sTypeph* it2_451;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_450=left->head;
    it2_451=right->head;
    while(it_450!=((void*)0)) {
        if(        !sType_equals(it_450->item,it2_451->item)) {
            return (_Bool)0;
        }
        it_450=it_450->next;
        it2_451=it2_451->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_452;
struct list_item$1sNodeph* it2_453;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_452=left->head;
    it2_453=right->head;
    while(it_452!=((void*)0)) {
        if(        !sNode_equals(it_452->item,it2_453->item)) {
            return (_Bool)0;
        }
        it_452=it_452->next;
        it2_453=it2_453->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_454;
struct list_item$1charph* it2_455;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_454=left->head;
    it2_455=right->head;
    while(it_454!=((void*)0)) {
        if(        !string_equals(it_454->item,it2_455->item)) {
            return (_Bool)0;
        }
        it_454=it_454->next;
        it2_455=it2_455->next;
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
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephph_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_456;
struct list_item$1tuple2$2charphsTypephph* it2_457;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_456=left->head;
    it2_457=right->head;
    while(it_456!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_456->item,it2_457->item))) {
            return (_Bool)0;
        }
        it_456=it_456->next;
        it2_457=it2_457->next;
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
    if(    !string_equals(left->mGenericsName,right->mGenericsName)) {
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
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&string_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&string_equals(left->mParentClassName,right->mParentClassName));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))));
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
struct list_item$1sTypeph* it_458;
struct list_item$1sTypeph* it2_459;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_458=left->head;
    it2_459=right->head;
    while(it_458!=((void*)0)) {
        if(        !(sType_operator_equals(it_458->item,it2_459->item))) {
            return (_Bool)0;
        }
        it_458=it_458->next;
        it2_459=it2_459->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_460;
struct list_item$1sNodeph* it2_461;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_460=left->head;
    it2_461=right->head;
    while(it_460!=((void*)0)) {
        if(        !(sNode_operator_equals(it_460->item,it2_461->item))) {
            return (_Bool)0;
        }
        it_460=it_460->next;
        it2_461=it2_461->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
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
struct list_item$1charph* it_462;
struct list_item$1charph* it2_463;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_462=left->head;
    it2_463=right->head;
    while(it_462!=((void*)0)) {
        if(        !(string_operator_equals(it_462->item,it2_463->item))) {
            return (_Bool)0;
        }
        it_462=it_462->next;
        it2_463=it2_463->next;
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
struct list_item$1sRightValueObjectph* it_466;
struct list_item$1sRightValueObjectph* prev_it_467;
struct list$1sRightValueObjectph* __result306__;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        /*i*/come_call_finalizer3(prev_it_467,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_470;
struct sVar* __result307__;
struct sVar* __result308__;
struct sVar* result_471;
struct sVar* __result309__;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_470,0,sizeof(struct sVar*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_470;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->it=self->head;
    if(    self->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_471,0,sizeof(struct sVar*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_471;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_473;
struct sVar* __result310__;
struct sVar* __result311__;
struct sVar* result_474;
struct sVar* __result312__;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_473,0,sizeof(struct sVar*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_473;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_474,0,sizeof(struct sVar*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_474;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_475;
struct list_item$1sVarph* prev_it_476;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        /*i*/come_call_finalizer3(prev_it_476,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj171;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj171=self->item;
            come_call_finalizer3(__dec_obj171,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj172;
char* __dec_obj173;
struct sType* __dec_obj174;
char* __dec_obj175;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj172=self->mName;
            /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj173=self->mCValueName;
            /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj174=self->mType;
            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj175=self->mFunName;
            /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_477;
struct list_item$1sVarph* prev_it_478;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
        /*i*/come_call_finalizer3(prev_it_478,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_479;
_Bool dquort_480;
_Bool squort_481;
int sline_482;
int nest_483;
char* tail_484;
void* __right_value410 = (void*)0;
char* buf_485;
void* __right_value411 = (void*)0;
char* __result313__;
    head_479=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_480=(_Bool)0;
        squort_481=(_Bool)0;
        sline_482=0;
        nest_483=0;
        while(1) {
            if(            dquort_480) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_480=!dquort_480;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                }
            }
            else if(            squort_481) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_481=!squort_481;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_482);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_482=info->sline;
                info->p++;
                squort_481=!squort_481;
            }
            else if(            *info->p==34) {
                sline_482=info->sline;
                info->p++;
                dquort_480=!dquort_480;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_483++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_483==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_483--;
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
    tail_484=info->p;
    buf_485=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_484-head_479+1)), "05function.c", 745, "char"));
    memcpy(buf_485,head_479,tail_484-head_479);
    buf_485[tail_484-head_479]=0;
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string(buf_485)));
    /* U13 */buf_485 = come_decrement_ref_count2(buf_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_486;
char* p3_487;
int i_488;
    terminated_486=(_Bool)0;
    p3_487=p;
    for(    i_488=0;    i_488<strlen(p2);    i_488++    ){
        if(        *p3_487==0) {
            terminated_486=(_Bool)1;
            break;
        }
        p3_487++;
    }
    return !terminated_486&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* asm_fun_name_489;
int nest_490;
int nest_491;
int nest_492;
int nest_493;
int nest_494;
int brace_num_495;
int len_496;
_Bool in_dquort_497;
int brace_num_498;
int brace_num_499;
void* __right_value414 = (void*)0;
char* word_500;
int brace_num_501;
void* __right_value415 = (void*)0;
char* __result314__;
    asm_fun_name_489=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 768, "buffer"))));
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
                nest_490=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_490++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_490--;
                        if(                        nest_490==0) {
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
                nest_491=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_491++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_491--;
                        if(                        nest_491==0) {
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
                nest_492=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_492++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_492--;
                        if(                        nest_492==0) {
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
                nest_493=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_493++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_493--;
                        if(                        nest_493==0) {
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
                nest_494=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_494++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_494--;
                        if(                        nest_494==0) {
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
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_495=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_495++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_495--;
                        if(                        brace_num_495==0) {
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
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_496=0;
            if(            *info->p==40) {
                in_dquort_497=(_Bool)0;
                brace_num_498=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_497=!in_dquort_497;
                    }
                    else if(                    in_dquort_497) {
                        buffer_append_char(asm_fun_name_489,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_498++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_498--;
                        if(                        brace_num_498==0) {
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
                brace_num_499=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_499++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_499--;
                        if(                        brace_num_499==0) {
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
        else if(        parse_function_attribute&&*info->p==95) {
            word_500=(char*)come_increment_ref_count(parse_word(info));
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
            /* U13 */word_500 = come_decrement_ref_count2(word_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value415=buffer_to_string(asm_fun_name_489)));
    /*i*/come_call_finalizer3(asm_fun_name_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_502;
int head_sline_503;
void* __right_value416 = (void*)0;
char* buf_504;
void* __right_value417 = (void*)0;
struct sNode* node_505;
_Bool Value_506;
    while(*info->p) {
        parse_sharp_v5(info);
        head_502=info->p;
        head_sline_503=info->sline;
        buf_504=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_504 = come_decrement_ref_count2(buf_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_505=(struct sNode*)come_increment_ref_count(top_level_v99(buf_504,head_502,head_sline_503,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_505!=((void*)0)) {
            Value_506=node_compile(node_505,info);
            if(            !Value_506) {
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
            /* U13 */buf_504 = come_decrement_ref_count2(buf_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_504 = come_decrement_ref_count2(buf_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value418 = (void*)0;
char* name_507;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sType* result_type_508;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* __list_values1___509[5];
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1sTypeph* param_types_514;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
char* __list_values2___515[5];
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1charph* param_names_517;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1charph* param_default_parametors_518;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sFun* main_fun_519;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* name_541;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_542;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __list_values3___543[1];
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1sTypeph* param_types_544;
void* __right_value463 = (void*)0;
char* __list_values4___545[1];
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* param_names_546;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_default_parametors_547;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sFun* main_fun_548;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* name_549;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sType* result_type_550;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
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
struct sType* __list_values5___551[7];
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1sTypeph* param_types_552;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __list_values6___553[7];
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1charph* param_names_554;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_default_parametors_555;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sFun* main_fun_556;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* name_557;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* result_type_558;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __list_values7___559[5];
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1sTypeph* param_types_560;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* __list_values8___561[5];
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1charph* param_names_562;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct list$1charph* param_default_parametors_563;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* main_fun_564;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* name_565;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* result_type_566;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __list_values9___567[1];
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1sTypeph* param_types_568;
void* __right_value544 = (void*)0;
char* __list_values10___569[1];
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_names_570;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1charph* param_default_parametors_571;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sFun* main_fun_572;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* name_573;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* result_type_574;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __list_values11___575[4];
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct list$1sTypeph* param_types_576;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __list_values12___577[4];
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1charph* param_names_578;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_default_parametors_579;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sFun* main_fun_580;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* name_581;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* result_type_582;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __list_values13___583[3];
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sTypeph* param_types_584;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
char* __list_values14___585[3];
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1charph* param_names_586;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1charph* param_default_parametors_587;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sFun* main_fun_588;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* name_589;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* result_type_590;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __list_values15___591[1];
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1sTypeph* param_types_592;
void* __right_value613 = (void*)0;
char* __list_values16___593[1];
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct list$1charph* param_names_594;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1charph* param_default_parametors_595;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sFun* main_fun_596;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
char* name_597;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* result_type_598;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sType* __list_values17___599[3];
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* __list_values18___601[3];
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sFun* main_fun_604;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* name_605;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sType* result_type_606;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sTypeph* param_types_607;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1charph* param_names_608;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_default_parametors_609;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sFun* main_fun_610;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
char* name_611;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* result_type_612;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* __list_values19___613[4];
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1sTypeph* param_types_614;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
char* __list_values20___615[4];
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1charph* param_names_616;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1charph* param_default_parametors_617;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sFun* main_fun_618;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
char* name_619;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* result_type_620;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1sTypeph* param_types_621;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1charph* param_names_622;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1charph* param_default_parametors_623;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sFun* fun_624;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
char* name_625;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* result_type_626;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1sTypeph* param_types_627;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1charph* param_names_628;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1charph* param_default_parametors_629;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sFun* fun_630;
void* __right_value713 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_507=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1141, "sType")),"void*",(_Bool)0,info));
        param_types_514=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___509[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___509[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___509[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"char*",(_Bool)0,info)))),
__list_values1___509[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___509[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value430=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1142, "struct list$1sTypeph")),5,__list_values1___509)));
        /*g*/come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_517=(struct list$1charph*)come_increment_ref_count((__list_values2___515[0]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("count")))),
__list_values2___515[1]=(char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("size")))),
__list_values2___515[2]=(char*)come_increment_ref_count(((char*)(__right_value438=__builtin_string("sname")))),
__list_values2___515[3]=(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("sline")))),
__list_values2___515[4]=(char*)come_increment_ref_count(((char*)(__right_value440=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1143, "struct list$1charph")),5,__list_values2___515)));
        /* U11 */__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_518=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1144, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_518,((void*)0));
        list$1charph_push_back(param_default_parametors_518,((void*)0));
        list$1charph_push_back(param_default_parametors_518,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_518,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_518,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_519=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1150, "sFun")),(char*)come_increment_ref_count(name_507),(struct sType*)come_increment_ref_count(result_type_508),(struct list$1sTypeph*)come_increment_ref_count(param_types_514),(struct list$1charph*)come_increment_ref_count(param_names_517),(struct list$1charph*)come_increment_ref_count(param_default_parametors_518),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_507)),(struct sFun*)come_increment_ref_count(main_fun_519));
        /* U13 */name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_514,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_519,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_541=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_542=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1161, "sType")),"void*",(_Bool)0,info));
        param_types_544=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___543[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value460=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1162, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1162, "struct list$1sTypeph")),1,__list_values3___543)));
        /*g*/come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_546=(struct list$1charph*)come_increment_ref_count((__list_values4___545[0]=(char*)come_increment_ref_count(((char*)(__right_value463=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1163, "struct list$1charph")),1,__list_values4___545)));
        /* U11 */__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_547=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1164, "list$1charph"))));
        main_fun_548=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1165, "sFun")),(char*)come_increment_ref_count(name_541),(struct sType*)come_increment_ref_count(result_type_542),(struct list$1sTypeph*)come_increment_ref_count(param_types_544),(struct list$1charph*)come_increment_ref_count(param_names_546),(struct list$1charph*)come_increment_ref_count(param_default_parametors_547),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_541)),(struct sFun*)come_increment_ref_count(main_fun_548));
        /* U13 */name_541 = come_decrement_ref_count2(name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_546,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_547,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_548,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_549=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_550=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1176, "sType")),"void",(_Bool)0,info));
        param_types_552=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___551[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___551[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___551[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___551[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___551[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
__list_values5___551[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
__list_values5___551[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1177, "struct list$1sTypeph")),7,__list_values5___551)));
        /*g*/come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_554=(struct list$1charph*)come_increment_ref_count((__list_values6___553[0]=(char*)come_increment_ref_count(((char*)(__right_value492=__builtin_string("fun")))),
__list_values6___553[1]=(char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("mem")))),
__list_values6___553[2]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("protocol_fun")))),
__list_values6___553[3]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("protocol_obj")))),
__list_values6___553[4]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("call_finalizer_only")))),
__list_values6___553[5]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("no_decrement")))),
__list_values6___553[6]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1178, "struct list$1charph")),7,__list_values6___553)));
        /* U11 */__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_555=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1179, "list$1charph"))));
        main_fun_556=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1180, "sFun")),(char*)come_increment_ref_count(name_549),(struct sType*)come_increment_ref_count(result_type_550),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_554),(struct list$1charph*)come_increment_ref_count(param_default_parametors_555),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_549)),(struct sFun*)come_increment_ref_count(main_fun_556));
        /* U13 */name_549 = come_decrement_ref_count2(name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_555,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_557=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_558=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1191, "sType")),"void*",(_Bool)0,info));
        param_types_560=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___559[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value512=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___559[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value514=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___559[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value516=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___559[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"bool",(_Bool)0,info)))),
__list_values7___559[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1192, "struct list$1sTypeph")),5,__list_values7___559)));
        /*g*/come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_562=(struct list$1charph*)come_increment_ref_count((__list_values8___561[0]=(char*)come_increment_ref_count(((char*)(__right_value523=__builtin_string("mem")))),
__list_values8___561[1]=(char*)come_increment_ref_count(((char*)(__right_value524=__builtin_string("protocol_fun")))),
__list_values8___561[2]=(char*)come_increment_ref_count(((char*)(__right_value525=__builtin_string("protocol_obj")))),
__list_values8___561[3]=(char*)come_increment_ref_count(((char*)(__right_value526=__builtin_string("no_decrement")))),
__list_values8___561[4]=(char*)come_increment_ref_count(((char*)(__right_value527=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1193, "struct list$1charph")),5,__list_values8___561)));
        /* U11 */__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_563=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1194, "list$1charph"))));
        main_fun_564=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1195, "sFun")),(char*)come_increment_ref_count(name_557),(struct sType*)come_increment_ref_count(result_type_558),(struct list$1sTypeph*)come_increment_ref_count(param_types_560),(struct list$1charph*)come_increment_ref_count(param_names_562),(struct list$1charph*)come_increment_ref_count(param_default_parametors_563),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_557)),(struct sFun*)come_increment_ref_count(main_fun_564));
        /* U13 */name_557 = come_decrement_ref_count2(name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_560,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_562,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_564,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_565=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1206, "sType")),"void",(_Bool)0,info));
        param_types_568=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___567[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value541=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1207, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1207, "struct list$1sTypeph")),1,__list_values9___567)));
        /*g*/come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_570=(struct list$1charph*)come_increment_ref_count((__list_values10___569[0]=(char*)come_increment_ref_count(((char*)(__right_value544=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1208, "struct list$1charph")),1,__list_values10___569)));
        /* U11 */__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_571=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1209, "list$1charph"))));
        main_fun_572=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1210, "sFun")),(char*)come_increment_ref_count(name_565),(struct sType*)come_increment_ref_count(result_type_566),(struct list$1sTypeph*)come_increment_ref_count(param_types_568),(struct list$1charph*)come_increment_ref_count(param_names_570),(struct list$1charph*)come_increment_ref_count(param_default_parametors_571),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_565)),(struct sFun*)come_increment_ref_count(main_fun_572));
        /* U13 */name_565 = come_decrement_ref_count2(name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_568,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_570,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_571,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_572,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_573=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_574=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1221, "sType")),"void*",(_Bool)0,info));
        param_types_576=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___575[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value558=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"void*",(_Bool)0,info)))),
__list_values11___575[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value560=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"char*",(_Bool)0,info)))),
__list_values11___575[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value562=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"int",(_Bool)0,info)))),
__list_values11___575[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value564=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1222, "struct list$1sTypeph")),4,__list_values11___575)));
        /*g*/come_call_finalizer3(__right_value558,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value560,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value562,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_578=(struct list$1charph*)come_increment_ref_count((__list_values12___577[0]=(char*)come_increment_ref_count(((char*)(__right_value567=__builtin_string("block")))),
__list_values12___577[1]=(char*)come_increment_ref_count(((char*)(__right_value568=__builtin_string("sname")))),
__list_values12___577[2]=(char*)come_increment_ref_count(((char*)(__right_value569=__builtin_string("sline")))),
__list_values12___577[3]=(char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1223, "struct list$1charph")),4,__list_values12___577)));
        /* U11 */__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_579=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1224, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_579,((void*)0));
        list$1charph_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_580=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1229, "sFun")),(char*)come_increment_ref_count(name_573),(struct sType*)come_increment_ref_count(result_type_574),(struct list$1sTypeph*)come_increment_ref_count(param_types_576),(struct list$1charph*)come_increment_ref_count(param_names_578),(struct list$1charph*)come_increment_ref_count(param_default_parametors_579),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_573)),(struct sFun*)come_increment_ref_count(main_fun_580));
        /* U13 */name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_576,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_578,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_579,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_580,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_581=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_582=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1240, "sType")),"void*",(_Bool)0,info));
        param_types_584=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___583[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value587=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"void*",(_Bool)0,info)))),
__list_values13___583[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value589=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"int",(_Bool)0,info)))),
__list_values13___583[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value591=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1241, "struct list$1sTypeph")),3,__list_values13___583)));
        /*g*/come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_586=(struct list$1charph*)come_increment_ref_count((__list_values14___585[0]=(char*)come_increment_ref_count(((char*)(__right_value594=__builtin_string("b")))),
__list_values14___585[1]=(char*)come_increment_ref_count(((char*)(__right_value595=__builtin_string("c")))),
__list_values14___585[2]=(char*)come_increment_ref_count(((char*)(__right_value596=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1242, "struct list$1charph")),3,__list_values14___585)));
        /* U11 */__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_587=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1243, "list$1charph"))));
        main_fun_588=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1244, "sFun")),(char*)come_increment_ref_count(name_581),(struct sType*)come_increment_ref_count(result_type_582),(struct list$1sTypeph*)come_increment_ref_count(param_types_584),(struct list$1charph*)come_increment_ref_count(param_names_586),(struct list$1charph*)come_increment_ref_count(param_default_parametors_587),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_581)),(struct sFun*)come_increment_ref_count(main_fun_588));
        /* U13 */name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_584,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_586,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_587,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_588,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_589=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_590=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1255, "sType")),"char*",(_Bool)0,info));
        param_types_592=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___591[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value610=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1256, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1256, "struct list$1sTypeph")),1,__list_values15___591)));
        /*g*/come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_594=(struct list$1charph*)come_increment_ref_count((__list_values16___593[0]=(char*)come_increment_ref_count(((char*)(__right_value613=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1257, "struct list$1charph")),1,__list_values16___593)));
        /* U11 */__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_595=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1258, "list$1charph"))));
        main_fun_596=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1259, "sFun")),(char*)come_increment_ref_count(name_589),(struct sType*)come_increment_ref_count(result_type_590),(struct list$1sTypeph*)come_increment_ref_count(param_types_592),(struct list$1charph*)come_increment_ref_count(param_names_594),(struct list$1charph*)come_increment_ref_count(param_default_parametors_595),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_589)),(struct sFun*)come_increment_ref_count(main_fun_596));
        /* U13 */name_589 = come_decrement_ref_count2(name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_594,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_595,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1270, "sType")),"void",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value627=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
__list_values17___599[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value629=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
__list_values17___599[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value631=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1271, "struct list$1sTypeph")),3,__list_values17___599)));
        /*g*/come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value631,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values18___601[0]=(char*)come_increment_ref_count(((char*)(__right_value634=xsprintf("come_malloc")))),
__list_values18___601[1]=(char*)come_increment_ref_count(((char*)(__right_value635=xsprintf("come_debug")))),
__list_values18___601[2]=(char*)come_increment_ref_count(((char*)(__right_value636=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1272, "struct list$1charph")),3,__list_values18___601)));
        /* U11 */__right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1273, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_603,((void*)0));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1275, "sFun")),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        /* U13 */name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1286, "sType")),"void",(_Bool)0,info));
        param_types_607=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1287, "list$1sTypeph"))));
        param_names_608=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1288, "list$1charph"))));
        param_default_parametors_609=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1289, "list$1charph"))));
        main_fun_610=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1290, "sFun")),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_607),(struct list$1charph*)come_increment_ref_count(param_names_608),(struct list$1charph*)come_increment_ref_count(param_default_parametors_609),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(main_fun_610));
        /* U13 */name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_607,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_608,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_610,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_611=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_612=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1301, "sType")),"void*",(_Bool)0,info));
        param_types_614=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___613[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value664=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"void*",(_Bool)0,info)))),
__list_values19___613[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value666=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"char*",(_Bool)0,info)))),
__list_values19___613[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value668=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"int",(_Bool)0,info)))),
__list_values19___613[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value670=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1302, "struct list$1sTypeph")),4,__list_values19___613)));
        /*g*/come_call_finalizer3(__right_value664,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value668,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value670,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_616=(struct list$1charph*)come_increment_ref_count((__list_values20___615[0]=(char*)come_increment_ref_count(((char*)(__right_value673=__builtin_string("mem")))),
__list_values20___615[1]=(char*)come_increment_ref_count(((char*)(__right_value674=__builtin_string("sname")))),
__list_values20___615[2]=(char*)come_increment_ref_count(((char*)(__right_value675=__builtin_string("sline")))),
__list_values20___615[3]=(char*)come_increment_ref_count(((char*)(__right_value676=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1303, "struct list$1charph")),4,__list_values20___615)));
        /* U11 */__right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value675 = come_decrement_ref_count2(__right_value675, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_617=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1304, "list$1charph"))));
        main_fun_618=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1305, "sFun")),(char*)come_increment_ref_count(name_611),(struct sType*)come_increment_ref_count(result_type_612),(struct list$1sTypeph*)come_increment_ref_count(param_types_614),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_611)),(struct sFun*)come_increment_ref_count(main_fun_618));
        /* U13 */name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_614,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_618,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_619=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_620=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1316, "sType")),"void",(_Bool)0,info));
        param_types_621=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1317, "list$1sTypeph"))));
        param_names_622=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1318, "list$1charph"))));
        param_default_parametors_623=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1319, "list$1charph"))));
        fun_624=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1320, "sFun")),(char*)come_increment_ref_count(name_619),(struct sType*)come_increment_ref_count(result_type_620),(struct list$1sTypeph*)come_increment_ref_count(param_types_621),(struct list$1charph*)come_increment_ref_count(param_names_622),(struct list$1charph*)come_increment_ref_count(param_default_parametors_623),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_619)),(struct sFun*)come_increment_ref_count(fun_624));
        /* U13 */name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_621,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_622,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_623,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_624,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_625=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_626=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1331, "sType")),"void",(_Bool)0,info));
        param_types_627=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1332, "list$1sTypeph"))));
        param_names_628=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1333, "list$1charph"))));
        param_default_parametors_629=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1334, "list$1charph"))));
        fun_630=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1335, "sFun")),(char*)come_increment_ref_count(name_625),(struct sType*)come_increment_ref_count(result_type_626),(struct list$1sTypeph*)come_increment_ref_count(param_types_627),(struct list$1charph*)come_increment_ref_count(param_names_628),(struct list$1charph*)come_increment_ref_count(param_default_parametors_629),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_625)),(struct sFun*)come_increment_ref_count(fun_630));
        /* U13 */name_625 = come_decrement_ref_count2(name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_626,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_627,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_629,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_510;
struct list$1sTypeph* __result316__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_510=0;    i_510<num_value;    i_510++    ){
        list$1sTypeph_push_back(self,values[i_510]);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
struct list_item$1sTypeph* litem_511;
struct sType* __dec_obj177;
void* __right_value432 = (void*)0;
struct list_item$1sTypeph* litem_512;
struct sType* __dec_obj178;
void* __right_value433 = (void*)0;
struct list_item$1sTypeph* litem_513;
struct sType* __dec_obj179;
struct list$1sTypeph* __result315__;
    if(    self->len==0) {
        litem_511=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value431=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1127, "list_item$1sTypeph"))));
        litem_511->prev=((void*)0);
        litem_511->next=((void*)0);
        __dec_obj177=litem_511->item;
        litem_511->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_511;
        self->head=litem_511;
    }
    else if(    self->len==1) {
        litem_512=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value432=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1137, "list_item$1sTypeph"))));
        litem_512->prev=self->head;
        litem_512->next=((void*)0);
        __dec_obj178=litem_512->item;
        litem_512->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_512;
        self->head->next=litem_512;
    }
    else {
        litem_513=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value433=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1147, "list_item$1sTypeph"))));
        litem_513->prev=self->tail;
        litem_513->next=((void*)0);
        __dec_obj179=litem_513->item;
        litem_513->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_513;
        self->tail=litem_513;
    }
    self->len++;
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_516;
struct list$1charph* __result317__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_516=0;    i_516<num_value;    i_516++    ){
        list$1charph_push_back(self,values[i_516]);
    }
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_537;
unsigned int it_538;
_Bool same_key_exist_539;
char* it2_540;
struct map$2charphsFunph* __result328__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_537=string_get_hash_key(key)%self->size;
    it_538=hash_537;
    while((_Bool)1) {
        if(        self->item_existance[it_538]) {
            if(            string_equals(self->keys[it_538],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_538]);
                    /* U13 */self->keys[it_538] = come_decrement_ref_count2(self->keys[it_538], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_538]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_538]);
                    self->keys[it_538]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_538],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_538]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_538]=item;
                }
                break;
            }
            it_538++;
            if(            it_538>=self->size) {
                it_538=0;
            }
            else if(            it_538==hash_537) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_538]=(_Bool)1;
            if(            1) {
                self->keys[it_538]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_538]=key;
            }
            if(            1) {
                self->items[it_538]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_538]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_539=(_Bool)0;
    for(    it2_540=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_540=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_540,key)) {
            same_key_exist_539=(_Bool)1;
        }
    }
    if(    !same_key_exist_539) {
        list$1charp_push_back(self->key_list,key);
    }
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_520;
void* __right_value452 = (void*)0;
char** keys_521;
void* __right_value453 = (void*)0;
struct sFun** items_522;
void* __right_value454 = (void*)0;
_Bool* item_existance_523;
int len_524;
char* it_527;
struct sFun* default_value_530;
struct sFun* it2_531;
unsigned int hash_534;
int n_535;
struct sFun* default_value_536;
default_value_530 = (void*)0;
default_value_536 = (void*)0;
    size_520=self->size*10;
    keys_521=(char**)come_increment_ref_count(((char**)(__right_value452=(char**)come_calloc(1, sizeof(char*)*(1*(size_520)), "./comelang.h", 2532, "char*%"))));
    items_522=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value453=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_520)), "./comelang.h", 2533, "sFun*%"))));
    item_existance_523=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value454=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_520)), "./comelang.h", 2534, "bool"))));
    len_524=0;
    for(    it_527=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_527=map$2charphsFunph_next(self)    ){
        memset(&default_value_530,0,sizeof(struct sFun*));
        it2_531=map$2charphsFunph_at(self,it_527,default_value_530);
        hash_534=string_get_hash_key(it_527)%size_520;
        n_535=hash_534;
        while((_Bool)1) {
            if(            item_existance_523[n_535]) {
                n_535++;
                if(                n_535>=size_520) {
                    n_535=0;
                }
                else if(                n_535==hash_534) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_523[n_535]=(_Bool)1;
                keys_521[n_535]=it_527;
                items_522[n_535]=map$2charphsFunph_at(self,it_527,default_value_536);
                len_524++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_521;
    self->items=items_522;
    self->item_existance=item_existance_523;
    self->size=size_520;
    self->len=len_524;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_525;
char* __result318__;
char* __result319__;
char* result_526;
char* __result320__;
result_525 = (void*)0;
result_526 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_525,0,sizeof(char*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_525;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_526,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_526;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_528;
char* __result321__;
char* __result322__;
char* result_529;
char* __result323__;
result_528 = (void*)0;
result_529 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_528,0,sizeof(char*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_528;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_529,0,sizeof(char*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_529;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_532;
unsigned int it_533;
struct sFun* __result324__;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
    hash_532=string_get_hash_key(((char*)key))%self->size;
    it_533=hash_532;
    while((_Bool)1) {
        if(        self->item_existance[it_533]) {
            if(            string_equals(self->keys[it_533],key)) {
                __result324__ = gComeFunResultObject = __result_obj__ = self->items[it_533];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result324__;
            }
            it_533++;
            if(            it_533>=self->size) {
                it_533=0;
            }
            else if(            it_533==hash_532) {
                __result325__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
        }
        else {
            __result326__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result326__;
        }
    }
    __result327__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_631;
_Bool is_type_name_flag_632;
int sline_633;
_Bool define_struct_nobody_634;
char* p_635;
int sline_636;
void* __right_value714 = (void*)0;
char* word_637;
_Bool define_function_pointer_result_function_638;
_Bool define_variable_between_brace_639;
char* p_640;
void* __right_value715 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_641=0;
char* fun_name_642=0;
_Bool err_643=0;
void* __right_value716 = (void*)0;
char* word_644;
_Bool define_function_flag_645;
char* p_646;
void* __right_value717 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_647=0;
char* fun_name_648=0;
_Bool err_649=0;
char* word_650;
void* __right_value718 = (void*)0;
char* __dec_obj182;
void* __right_value719 = (void*)0;
char* __dec_obj183;
char* __dec_obj184;
void* __right_value720 = (void*)0;
char* __dec_obj185;
_Bool define_variable_651;
char* p_652;
void* __right_value721 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_653=0;
char* fun_name_654=0;
_Bool err_655=0;
void* __right_value722 = (void*)0;
char* word_656;
void* __right_value723 = (void*)0;
char* word_657;
char* p_658;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
char* word_659;
void* __right_value726 = (void*)0;
char* __dec_obj186;
void* __right_value727 = (void*)0;
char* word_660;
void* __right_value728 = (void*)0;
char* word_663;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* node_664;
struct sNode* __result330__;
void* __right_value731 = (void*)0;
struct sNode* __result331__;
char* header_head_665;
void* __right_value732 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_666=0;
char* fun_name_667=0;
_Bool err_668=0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1sTypeph* param_types_669;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct list$1charph* param_names_670;
void* __right_value737 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_671=0;
char* param_name_672=0;
_Bool err_673=0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1sTypeph* param_types2_675;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1charph* param_names2_676;
void* __right_value744 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_677=0;
char* param_name_678=0;
_Bool err_679=0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* header_tail_681;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sType* result_type2_682;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct tuple1$1sTypeph* __dec_obj188;
void* __right_value751 = (void*)0;
struct list$1sTypeph* __dec_obj189;
void* __right_value752 = (void*)0;
struct list$1charph* __dec_obj190;
_Bool var_args_683;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct buffer* header_buf_684;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1charph* param_default_parametors_685;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sFun* fun_686;
void* __right_value762 = (void*)0;
struct sFun* fun2_690;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value800 = (void*)0;
struct sNode* __result359__;
void* __right_value801 = (void*)0;
struct sNode* node_725;
struct sNode* __result360__;
void* __right_value802 = (void*)0;
struct sNode* node_726;
char* source_tail_727;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct buffer* header_728;
struct sNode* __result361__;
void* __right_value805 = (void*)0;
char* buf2_729;
void* __right_value806 = (void*)0;
struct sNode* __result362__;
    info->in_top_level=(_Bool)1;
    source_head_631=info->p;
    is_type_name_flag_632=is_type_name(buf,info);
    sline_633=info->sline;
    define_struct_nobody_634=(_Bool)0;
    {
        p_635=info->p;
        sline_636=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_637=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_634=(_Bool)1;
                }
                /* U13 */word_637 = come_decrement_ref_count2(word_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_636;
    }
    define_function_pointer_result_function_638=(_Bool)0;
    define_variable_between_brace_639=(_Bool)0;
    if(    is_type_name_flag_632) {
        p_640=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value715=backtrace_parse_type((_Bool)0,info)));
            result_type_641=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_642=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_643=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value715,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_638=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_644=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_644,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_639=(_Bool)1;
                            }
                        }
                        /* U13 */word_644 = come_decrement_ref_count2(word_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_641,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_642 = come_decrement_ref_count2(fun_name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_633;
    }
    define_function_flag_645=(_Bool)0;
    if(    is_type_name_flag_632&&!define_function_pointer_result_function_638&&charp_operator_not_equals(buf,"__typeof__")) {
        p_646=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value717=backtrace_parse_type((_Bool)0,info)));
            result_type_647=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_648=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_649=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value717,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_648 = come_decrement_ref_count2(fun_name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_650=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj182=word_650;
                word_650=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_650,"extern")) {
                    __dec_obj183=word_650;
                    word_650=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj184=word_650;
                word_650=((void*)0);
                /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_650) {
                if(                is_type_name(word_650,info)) {
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
                        __dec_obj185=word_650;
                        word_650=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_650)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_632) {
                        define_function_flag_645=(_Bool)1;
                    }
                }
            }
            /* U13 */word_650 = come_decrement_ref_count2(word_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_646;
        info->sline=sline_633;
    }
    define_variable_651=(_Bool)1;
    if(    is_type_name_flag_632&&!define_function_pointer_result_function_638) {
        p_652=info->p;
        info->p=head;
        if(        !is_type_name_flag_632) {
            define_variable_651=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value721=backtrace_parse_type((_Bool)0,info)));
            result_type_653=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_654=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_655=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value721,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_656=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_651=(_Bool)1;
                            }
                        }
                        /* U13 */word_656 = come_decrement_ref_count2(word_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_657=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_657,info)&&*info->p!=40) {
                            define_variable_651=(_Bool)1;
                        }
                    }
                    /* U13 */word_657 = come_decrement_ref_count2(word_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_653,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_654 = come_decrement_ref_count2(fun_name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_651=(_Bool)0;
        }
        else if(        define_variable_651) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_651=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_651=(_Bool)0;
            }
        }
        info->p=p_652;
        info->sline=sline_633;
    }
    else {
        define_variable_651=(_Bool)0;
    }
    {
        p_658=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value724=parse_word(info)));
                /* U11 */__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_659=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj186=word_659;
                        word_659=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_659,"extends")) {
                            define_variable_651=(_Bool)0;
                        }
                    }
                    /* U13 */word_659 = come_decrement_ref_count2(word_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_651=(_Bool)0;
        }
        else if(        define_variable_651) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_651=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_651=(_Bool)0;
            }
        }
        info->p=p_658;
        info->sline=sline_633;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_660=(char*)come_increment_ref_count(parse_word(info));
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
                    word_663=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_663)));
                    /* U13 */word_663 = come_decrement_ref_count2(word_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_664=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result330__ = gComeFunResultObject = __result_obj__ = node_664;
            if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_660 = come_decrement_ref_count2(word_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result330__;
            if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_660 = come_decrement_ref_count2(word_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_634) {
    }
    else if(    define_variable_between_brace_639) {
        info->p=head;
        info->sline=sline_633;
        __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=parse_global_variable(info)));
        if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    else if(    define_function_pointer_result_function_638) {
        header_head_665=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value732=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_666=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_667=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_668=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value732,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_669=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1662, "list$1sTypeph"))));
            param_names_670=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1663, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value737=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_671=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_672=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_673=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value737,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_673) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_669,(struct sType*)come_increment_ref_count(param_type_671));
                    static int num_function_pointer_result_var_name_a_674=0;
                    list$1charph_push_back(param_names_670,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_674)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value739=parse_word(info)));
                        /* U11 */__right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_672 = come_decrement_ref_count2(param_name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_672 = come_decrement_ref_count2(param_name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_675=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1709, "list$1sTypeph"))));
                param_names2_676=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1710, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value744=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_677=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_678=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_679=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value744,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_679) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_675,(struct sType*)come_increment_ref_count(param_type_677));
                        static int num_function_pointer_result_var_name_b_680=0;
                        list$1charph_push_back(param_names2_676,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_680)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value746=parse_word(info)));
                            /* U11 */__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_678 = come_decrement_ref_count2(param_name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_678 = come_decrement_ref_count2(param_name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_681=info->p;
                result_type2_682=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1752, "sType")),"lambda",(_Bool)0,info));
                __dec_obj188=result_type2_682->mResultType;
                result_type2_682->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1754, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_666)));
                come_call_finalizer3(__dec_obj188,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj189=result_type2_682->mParamTypes;
                result_type2_682->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_675));
                come_call_finalizer3(__dec_obj189,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj190=result_type2_682->mParamNames;
                result_type2_682->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_676));
                come_call_finalizer3(__dec_obj190,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_682->mVarArgs=(_Bool)0;
                result_type2_682->mStatic=(_Bool)0;
                var_args_683=(_Bool)0;
                header_buf_684=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1762, "buffer"))));
                buffer_append(header_buf_684,header_head_665,header_tail_681-header_head_665);
                buffer_append_char(header_buf_684,0);
                param_default_parametors_685=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1766, "list$1charph"))));
                fun_686=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1768, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_667)),(struct sType*)come_increment_ref_count(result_type2_682),(struct list$1sTypeph*)come_increment_ref_count(param_types_669),(struct list$1charph*)come_increment_ref_count(param_names_670),(struct list$1charph*)come_increment_ref_count(param_default_parametors_685),(_Bool)1,var_args_683,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_684)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
                fun2_690=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value762=__builtin_string(fun_name_667))));
                /* U11 */__right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_690==((void*)0)||fun2_690->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_667)),(struct sFun*)come_increment_ref_count(fun_686));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1780, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value765=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1780, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_686),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value800=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_675,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_682,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_685,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_686,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_669,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_667 = come_decrement_ref_count2(fun_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value765,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value800) { __right_value800 = come_decrement_ref_count2(__right_value800, ((struct sNode*)__right_value800)->finalize, ((struct sNode*)__right_value800)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result359__;
                /*i*/come_call_finalizer3(param_types2_675,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_682,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_685,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_686,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_669,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_667 = come_decrement_ref_count2(fun_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_645) {
        info->p=head;
        info->sline=sline_633;
        node_725=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result360__ = gComeFunResultObject = __result_obj__ = node_725;
        if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result360__;
        if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_651) {
        info->p=head;
        info->sline=sline_633;
        node_726=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_727=info->p;
        header_728=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1804, "buffer"))));
        buffer_append(header_728,source_head_631,source_tail_727-source_head_631);
        __result361__ = gComeFunResultObject = __result_obj__ = node_726;
        if(node_726) { node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_728,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result361__;
        if(node_726) { node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_728,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_633;
    buf2_729=(char*)come_increment_ref_count(parse_word(info));
    __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value806=top_level_v98(buf2_729,head,head_sline,info)));
    /* U13 */buf2_729 = come_decrement_ref_count2(buf2_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj180;
char* __dec_obj181;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj180=self->v1;
            come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj181=self->v2;
            /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_661;
struct list_item$1charph* prev_it_662;
struct list$1charph* __result329__;
    it_661=self->head;
    while(it_661!=((void*)0)) {
        prev_it_662=it_661;
        it_661=it_661->next;
        /*i*/come_call_finalizer3(prev_it_662,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj187;
struct tuple1$1sTypeph* __result332__;
    __dec_obj187=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_687;
unsigned int hash_688;
unsigned int it_689;
struct sFun* __result333__;
struct sFun* __result334__;
struct sFun* __result335__;
struct sFun* __result336__;
default_value_687 = (void*)0;
    memset(&default_value_687,0,sizeof(struct sFun*));
    hash_688=string_get_hash_key(((char*)key))%self->size;
    it_689=hash_688;
    while((_Bool)1) {
        if(        self->item_existance[it_689]) {
            if(            string_equals(self->keys[it_689],key)) {
                __result333__ = gComeFunResultObject = __result_obj__ = self->items[it_689];
                /*i*/come_call_finalizer3(default_value_687,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result333__;
            }
            it_689++;
            if(            it_689>=self->size) {
                it_689=0;
            }
            else if(            it_689==hash_688) {
                __result334__ = gComeFunResultObject = __result_obj__ = default_value_687;
                /*i*/come_call_finalizer3(default_value_687,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
        }
        else {
            __result335__ = gComeFunResultObject = __result_obj__ = default_value_687;
            /*i*/come_call_finalizer3(default_value_687,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result335__;
        }
    }
    __result336__ = gComeFunResultObject = __result_obj__ = default_value_687;
    /*i*/come_call_finalizer3(default_value_687,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result338__;
void* __right_value768 = (void*)0;
struct sFun* result_692;
void* __right_value769 = (void*)0;
char* __dec_obj194;
void* __right_value770 = (void*)0;
struct sType* __dec_obj195;
void* __right_value771 = (void*)0;
struct list$1sTypeph* __dec_obj196;
void* __right_value772 = (void*)0;
struct list$1charph* __dec_obj197;
void* __right_value773 = (void*)0;
struct list$1charph* __dec_obj198;
void* __right_value774 = (void*)0;
struct sType* __dec_obj199;
void* __right_value792 = (void*)0;
struct sBlock* __dec_obj205;
void* __right_value793 = (void*)0;
struct buffer* __dec_obj206;
void* __right_value794 = (void*)0;
struct buffer* __dec_obj207;
void* __right_value795 = (void*)0;
struct buffer* __dec_obj208;
void* __right_value796 = (void*)0;
struct buffer* __dec_obj209;
void* __right_value797 = (void*)0;
char* __dec_obj210;
void* __right_value798 = (void*)0;
char* __dec_obj211;
struct sFun* __result357__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_692=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj194=result_692->mName;
        result_692->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj195=result_692->mResultType;
        result_692->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj196=result_692->mParamTypes;
        result_692->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj196,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj197=result_692->mParamNames;
        result_692->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj197,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj198=result_692->mParamDefaultParametors;
        result_692->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj199=result_692->mLambdaType;
        result_692->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj205=result_692->mBlock;
        result_692->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj205,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_692->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj206=result_692->mSource;
        result_692->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj206,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj207=result_692->mSourceHead;
        result_692->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj208=result_692->mSourceHead2;
        result_692->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj209=result_692->mSourceDefer;
        result_692->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_692->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_692->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj210=result_692->mComeHeader;
        result_692->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj211=result_692->mDeclareSName;
        result_692->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_692->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_692->no_output_come_code2=self->no_output_come_code2;
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_692;
    /*i*/come_call_finalizer3(result_692,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result339__;
void* __right_value775 = (void*)0;
struct sBlock* result_693;
void* __right_value776 = (void*)0;
struct list$1sNodeph* __dec_obj200;
void* __right_value791 = (void*)0;
struct sVarTable* __dec_obj204;
struct sBlock* __result356__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_693=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj200=result_693->mNodes;
        result_693->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj200,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj204=result_693->mVarTable;
        result_693->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj204,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_693->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_693;
    /*i*/come_call_finalizer3(result_693,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result340__;
void* __right_value777 = (void*)0;
struct sVarTable* result_694;
void* __right_value790 = (void*)0;
struct map$2charphsVarph* __dec_obj203;
struct sVarTable* __result355__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_694=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj203=result_694->mVars;
        result_694->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj203,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_694->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_694->mID=self->mID;
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_694;
    /*i*/come_call_finalizer3(result_694,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result341__;
void* __right_value778 = (void*)0;
void* __right_value784 = (void*)0;
struct map$2charphsVarph* result_698;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1charp* __dec_obj202;
char* it_701;
struct sVar* default_value_704;
struct sVar* it2_707;
struct map$2charphsVarph* __result354__;
default_value_704 = (void*)0;
    if(    self==((void*)0)) {
        __result341__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_698=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2375, "map$2charphsVarph"))));
    __dec_obj202=result_698->key_list;
    result_698->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2377, "list$1charp"))));
    come_call_finalizer3(__dec_obj202,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_701=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_701=map$2charphsVarph_next(self)    ){
        memset(&default_value_704,0,sizeof(struct sVar*));
        it2_707=map$2charphsVarph_at(self,it_701,default_value_704);
        map$2charphsVarph_put(result_698,it_701,it2_707);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = result_698;
    /*i*/come_call_finalizer3(result_698,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
int i_695;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1charp* __dec_obj201;
struct map$2charphsVarph* __result342__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value779=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2304, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value780=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2305, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value781=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2306, "bool"))));
    for(    i_695=0;    i_695<128;    i_695++    ){
        self->item_existance[i_695]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj201=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2316, "list$1charp"))));
    come_call_finalizer3(__dec_obj201,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_696;
int i_697;
    for(    i_696=0;    i_696<self->size;    i_696++    ){
        if(        self->item_existance[i_696]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_696],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_697=0;    i_697<self->size;    i_697++    ){
        if(        self->item_existance[i_697]) {
            if(            1) {
                /* U13 */self->keys[i_697] = come_decrement_ref_count2(self->keys[i_697], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_699;
char* __result343__;
char* __result344__;
char* result_700;
char* __result345__;
result_699 = (void*)0;
result_700 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_699,0,sizeof(char*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_699;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_700,0,sizeof(char*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_700;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_702;
char* __result346__;
char* __result347__;
char* result_703;
char* __result348__;
result_702 = (void*)0;
result_703 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_702,0,sizeof(char*));
        __result346__ = gComeFunResultObject = __result_obj__ = result_702;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result347__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    memset(&result_703,0,sizeof(char*));
    __result348__ = gComeFunResultObject = __result_obj__ = result_703;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_705;
unsigned int it_706;
struct sVar* __result349__;
struct sVar* __result350__;
struct sVar* __result351__;
struct sVar* __result352__;
    hash_705=string_get_hash_key(((char*)key))%self->size;
    it_706=hash_705;
    while((_Bool)1) {
        if(        self->item_existance[it_706]) {
            if(            string_equals(self->keys[it_706],key)) {
                __result349__ = gComeFunResultObject = __result_obj__ = self->items[it_706];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result349__;
            }
            it_706++;
            if(            it_706>=self->size) {
                it_706=0;
            }
            else if(            it_706==hash_705) {
                __result350__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result350__;
            }
        }
        else {
            __result351__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result351__;
        }
    }
    __result352__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_719;
int it_720;
_Bool same_key_exist_721;
char* it2_722;
struct map$2charphsVarph* __result353__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_719=string_get_hash_key(key)%self->size;
    it_720=hash_719;
    while((_Bool)1) {
        if(        self->item_existance[it_720]) {
            if(            string_equals(self->keys[it_720],key)) {
                if(                1) {
                    /* U13 */self->keys[it_720] = come_decrement_ref_count2(self->keys[it_720], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_720]);
                    self->keys[it_720]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_720]);
                    self->keys[it_720]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_720],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_720]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_720]=item;
                }
                break;
            }
            it_720++;
            if(            it_720>=self->size) {
                it_720=0;
            }
            else if(            it_720==hash_719) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_720]=(_Bool)1;
            if(            1) {
                self->keys[it_720]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_720]=key;
            }
            if(            1) {
                self->items[it_720]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_720]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_721=(_Bool)0;
    for(    it2_722=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_722=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_722,key)) {
            same_key_exist_721=(_Bool)1;
        }
    }
    if(    !same_key_exist_721) {
        list$1charp_push_back(self->key_list,key);
    }
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_708;
void* __right_value787 = (void*)0;
char** keys_709;
void* __right_value788 = (void*)0;
struct sVar** items_710;
void* __right_value789 = (void*)0;
_Bool* item_existance_711;
int len_712;
char* it_713;
struct sVar* default_value_714;
struct sVar* it2_715;
unsigned int hash_716;
int n_717;
struct sVar* default_value_718;
default_value_714 = (void*)0;
default_value_718 = (void*)0;
    size_708=self->size*10;
    keys_709=(char**)come_increment_ref_count(((char**)(__right_value787=(char**)come_calloc(1, sizeof(char*)*(1*(size_708)), "./comelang.h", 2532, "char*%"))));
    items_710=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value788=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_708)), "./comelang.h", 2533, "sVar*%"))));
    item_existance_711=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value789=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_708)), "./comelang.h", 2534, "bool"))));
    len_712=0;
    for(    it_713=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_713=map$2charphsVarph_next(self)    ){
        memset(&default_value_714,0,sizeof(struct sVar*));
        it2_715=map$2charphsVarph_at(self,it_713,default_value_714);
        hash_716=string_get_hash_key(it_713)%size_708;
        n_717=hash_716;
        while((_Bool)1) {
            if(            item_existance_711[n_717]) {
                n_717++;
                if(                n_717>=size_708) {
                    n_717=0;
                }
                else if(                n_717==hash_716) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_711[n_717]=(_Bool)1;
                keys_709[n_717]=it_713;
                items_710[n_717]=map$2charphsVarph_at(self,it_713,default_value_718);
                len_712++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_709;
    self->items=items_710;
    self->item_existance=item_existance_711;
    self->size=size_708;
    self->len=len_712;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_723;
int i_724;
    for(    i_723=0;    i_723<self->size;    i_723++    ){
        if(        self->item_existance[i_723]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_723],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_724=0;    i_724<self->size;    i_724++    ){
        if(        self->item_existance[i_724]) {
            if(            1) {
                /* U13 */self->keys[i_724] = come_decrement_ref_count2(self->keys[i_724], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_730;
int caller_line_731;
char* caller_sname_732;
_Bool comma_instead_of_semicolon_733;
char* last_code_734;
char* __dec_obj213;
char* last_code2_735;
char* __dec_obj214;
void* __right_value807 = (void*)0;
char* sname_top_736;
int sline_top_737;
struct sFun* funX_738;
_Bool __result363__;
void* __right_value808 = (void*)0;
struct sType* result_type_739;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct list$1sTypeph* param_types_740;
struct list$1sTypeph* o2_saved_741;
struct sType* it_744;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sType* param_type_747;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1charph* param_names_748;
void* __right_value815 = (void*)0;
struct list$1charph* param_default_parametors_749;
char* p_750;
int sline_751;
char* sname_752;
char* head_753;
struct buffer* source_754;
void* __right_value816 = (void*)0;
struct buffer* __dec_obj215;
struct sType* generics_type_saved_755;
void* __right_value817 = (void*)0;
struct sType* __dec_obj216;
struct list$1charph* method_generics_type_names_756;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1charph* __dec_obj217;
struct list$1charph* o2_saved_757;
char* it_758;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1charph* __dec_obj218;
char* __dec_obj219;
void* __right_value822 = (void*)0;
struct sBlock* block_759;
struct buffer* __dec_obj220;
char* __dec_obj221;
_Bool var_args_760;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sFun* fun_761;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value834 = (void*)0;
struct sNode* node_762;
_Bool in_generics_fun_764;
_Bool Value_765;
void* __if_result__1_766 = (void*)0;
_Bool __result372__;
struct sType* __dec_obj226;
struct list$1charph* __dec_obj227;
void* __right_value835 = (void*)0;
char* __dec_obj228;
char* __dec_obj229;
char* __dec_obj230;
_Bool __result373__;
    caller_fun_730=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_731=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_732=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_733=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_734=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj213=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_735=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj214=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_736=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_737=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_738=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_738) {
        __result363__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_734 = come_decrement_ref_count2(last_code_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_735 = come_decrement_ref_count2(last_code2_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_736 = come_decrement_ref_count2(sname_top_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result363__;
    }
    result_type_739=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_740=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1850, "list$1sTypeph"))));
    for(    o2_saved_741=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_744=list$1sTypeph_begin((o2_saved_741));    !list$1sTypeph_end((o2_saved_741));    it_744=list$1sTypeph_next((o2_saved_741))    ){
        param_type_747=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value811=sType_clone(it_744))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value811,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_747->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_740,(struct sType*)come_increment_ref_count(sType_clone(param_type_747)));
        /*i*/come_call_finalizer3(param_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_741,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_748=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_749=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_750=info->p;
    sline_751=info->sline;
    sname_752=(char*)come_increment_ref_count(info->sname);
    head_753=info->head;
    source_754=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj215=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_755=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj216=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_756=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj217=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1877, "list$1charph"))));
    come_call_finalizer3(__dec_obj217,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_757=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_758=list$1charph_begin((o2_saved_757));    !list$1charph_end((o2_saved_757));    it_758=list$1charph_next((o2_saved_757))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_758)));
    }
    /*i*/come_call_finalizer3(o2_saved_757,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj218=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj218,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj219=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_759=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_753;
    __dec_obj220=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_754);
    come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_750;
    info->sline=sline_751;
    __dec_obj221=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_752);
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_739->mInline=(_Bool)0;
    result_type_739->mStatic=(_Bool)0;
    result_type_739->mUniq=(_Bool)0;
    var_args_760=generics_fun->mVarArgs;
    fun_761=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1901, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_739),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_740)),(struct list$1charph*)come_increment_ref_count(param_names_748),(struct list$1charph*)come_increment_ref_count(param_default_parametors_749),(_Bool)0,var_args_760,(struct sBlock*)come_increment_ref_count(block_759),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_761));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1908, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value830=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1908, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_761),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_762=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value830,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_764=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_765=node_compile(node_762,info);
    if(    !Value_765) {
        __result372__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_734 = come_decrement_ref_count2(last_code_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_735 = come_decrement_ref_count2(last_code2_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_736 = come_decrement_ref_count2(sname_top_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_740,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_748,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_752 = come_decrement_ref_count2(sname_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_754,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_755,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_756,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_759,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_761,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_762) { node_762 = come_decrement_ref_count2(node_762, ((struct sNode*)node_762)->finalize, ((struct sNode*)node_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result372__;
    }
    else {
        __if_result__1_766=(void*)(Value_765);
;
    }
    info->in_generics_fun=in_generics_fun_764;
    __dec_obj226=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_755);
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj227=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_756);
    come_call_finalizer3(__dec_obj227,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj228=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_736));
    /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_737;
    __dec_obj229=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_734);
    /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj230=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_735);
    /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_730;
    info->caller_line=caller_line_731;
    info->caller_sname=caller_sname_732;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_733;
    __result373__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_734 = come_decrement_ref_count2(last_code_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_735 = come_decrement_ref_count2(last_code2_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_736 = come_decrement_ref_count2(sname_top_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_740,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_748,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_752 = come_decrement_ref_count2(sname_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_754,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_755,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_756,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_759,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_761,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_762) { node_762 = come_decrement_ref_count2(node_762, ((struct sNode*)node_762)->finalize, ((struct sNode*)node_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result373__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_742;
struct sType* __result364__;
struct sType* __result365__;
struct sType* result_743;
struct sType* __result366__;
result_742 = (void*)0;
result_743 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_742,0,sizeof(struct sType*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_742;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->it=self->head;
    if(    self->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_743,0,sizeof(struct sType*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_743;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_745;
struct sType* __result367__;
struct sType* __result368__;
struct sType* result_746;
struct sType* __result369__;
result_745 = (void*)0;
result_746 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_745,0,sizeof(struct sType*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_745;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_746,0,sizeof(struct sType*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_746;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_767;
int caller_line_768;
char* caller_sname_769;
_Bool comma_instead_of_semicolon_770;
char* last_code_771;
char* __dec_obj231;
char* last_code2_772;
char* __dec_obj232;
void* __right_value836 = (void*)0;
char* sname_top_773;
int sline_top_774;
struct sFun* funX_775;
_Bool __result374__;
void* __right_value837 = (void*)0;
struct sType* result_type_776;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct list$1sTypeph* param_types_777;
struct list$1sTypeph* o2_saved_778;
struct sType* it_779;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sType* param_type_780;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1charph* param_names_781;
void* __right_value844 = (void*)0;
struct list$1charph* param_default_parametors_782;
char* p_783;
int sline_784;
char* sname_785;
char* head_786;
struct buffer* source_787;
void* __right_value845 = (void*)0;
struct buffer* __dec_obj233;
struct list$1charph* method_generics_type_names_788;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1charph* __dec_obj234;
struct list$1charph* o2_saved_789;
char* it_790;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1charph* __dec_obj235;
char* __dec_obj236;
void* __right_value850 = (void*)0;
struct sBlock* block_791;
struct buffer* __dec_obj237;
char* __dec_obj238;
_Bool var_args_792;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sFun* fun_793;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value862 = (void*)0;
struct sNode* node_794;
_Bool Value_796;
void* __if_result__2_797 = (void*)0;
_Bool __result377__;
struct list$1charph* __dec_obj243;
void* __right_value863 = (void*)0;
char* __dec_obj244;
char* __dec_obj245;
char* __dec_obj246;
_Bool __result378__;
    caller_fun_767=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_768=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_769=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_770=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_771=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj231=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_772=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj232=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_773=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_774=info->sline;
    funX_775=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_775) {
        __result374__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_771 = come_decrement_ref_count2(last_code_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_772 = come_decrement_ref_count2(last_code2_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_773 = come_decrement_ref_count2(sname_top_773, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result374__;
    }
    result_type_776=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_777=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1962, "list$1sTypeph"))));
    for(    o2_saved_778=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_779=list$1sTypeph_begin((o2_saved_778));    !list$1sTypeph_end((o2_saved_778));    it_779=list$1sTypeph_next((o2_saved_778))    ){
        param_type_780=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value840=sType_clone(it_779))),info));
        /*g*/come_call_finalizer3(__right_value840,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_780->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_777,(struct sType*)come_increment_ref_count(sType_clone(param_type_780)));
        /*i*/come_call_finalizer3(param_type_780,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_778,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_781=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_782=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_783=info->p;
    sline_784=info->sline;
    sname_785=(char*)come_increment_ref_count(info->sname);
    head_786=info->head;
    source_787=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_788=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj234=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1986, "list$1charph"))));
    come_call_finalizer3(__dec_obj234,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_789=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_790=list$1charph_begin((o2_saved_789));    !list$1charph_end((o2_saved_789));    it_790=list$1charph_next((o2_saved_789))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_790)));
    }
    /*i*/come_call_finalizer3(o2_saved_789,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj235=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj236=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_791=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_786;
    __dec_obj237=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_787);
    come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_783;
    info->sline=sline_784;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_785);
    /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_776->mInline=(_Bool)0;
    result_type_776->mStatic=(_Bool)0;
    result_type_776->mUniq=(_Bool)0;
    var_args_792=generics_fun->mVarArgs;
    fun_793=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2010, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_776),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_777)),(struct list$1charph*)come_increment_ref_count(param_names_781),(struct list$1charph*)come_increment_ref_count(param_default_parametors_782),(_Bool)0,var_args_792,(struct sBlock*)come_increment_ref_count(block_791),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_793));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2017, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value858=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2017, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_793),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_794=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value858,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_796=node_compile(node_794,info);
    if(    !Value_796) {
        __result377__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_771 = come_decrement_ref_count2(last_code_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_772 = come_decrement_ref_count2(last_code2_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_773 = come_decrement_ref_count2(sname_top_773, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_777,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_782,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_785 = come_decrement_ref_count2(sname_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_788,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_791,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result377__;
    }
    else {
        __if_result__2_797=(void*)(Value_796);
;
    }
    __dec_obj243=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_788);
    come_call_finalizer3(__dec_obj243,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj244=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_773));
    /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_774;
    __dec_obj245=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_771);
    /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj246=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_772);
    /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_767;
    info->caller_line=caller_line_768;
    info->caller_sname=caller_sname_769;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_770;
    __result378__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_771 = come_decrement_ref_count2(last_code_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_772 = come_decrement_ref_count2(last_code2_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_773 = come_decrement_ref_count2(sname_top_773, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_777,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_782,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_785 = come_decrement_ref_count2(sname_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_788,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_791,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result378__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_798;
char* source_head_799;
struct sType* result_type_800;
char* var_name_801;
_Bool constructor__802;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sType* __dec_obj247;
void* __right_value866 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_803=0;
char* var_name2_804=0;
_Bool err_805=0;
struct sType* __dec_obj248;
char* __dec_obj249;
_Bool method_definition_806;
char* p_807;
int sline_808;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct buffer* buf2_809;
char* fun_name_810;
char* base_fun_name_811;
void* __right_value869 = (void*)0;
char* __dec_obj250;
void* __right_value870 = (void*)0;
char* __dec_obj251;
void* __right_value871 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_812=0;
char* name_813=0;
_Bool err_814=0;
void* __right_value872 = (void*)0;
char* __dec_obj252;
void* __right_value873 = (void*)0;
char* __dec_obj253;
void* __right_value874 = (void*)0;
char* __dec_obj254;
void* __right_value875 = (void*)0;
char* __dec_obj255;
void* __right_value876 = (void*)0;
char* __dec_obj256;
void* __right_value877 = (void*)0;
char* __dec_obj257;
void* __right_value878 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_815=0;
struct list$1charph* param_names_816=0;
struct list$1charph* param_default_parametors_817=0;
_Bool var_args_818=0;
char* header_tail_819;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct buffer* header_buf_820;
int version_821;
int n_822;
_Bool in_top_level_823;
void* __right_value881 = (void*)0;
struct sBlock* block_824;
void* __right_value882 = (void*)0;
char* fun_name_826;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sFun* fun_827;
void* __right_value888 = (void*)0;
struct sFun* fun2_828;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value894 = (void*)0;
struct sNode* __result381__;
void* __right_value895 = (void*)0;
char* none_generics_name_830;
void* __right_value896 = (void*)0;
char* generics_sname_831;
int generics_sline_832;
void* __right_value897 = (void*)0;
char* block_833;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sGenericsFun* fun_834;
void* __right_value904 = (void*)0;
char* fun_name3_835;
void* __right_value908 = (void*)0;
struct sNode* __result393__;
void* __right_value909 = (void*)0;
char* generics_sname_857;
int generics_sline_858;
void* __right_value910 = (void*)0;
char* block_859;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sGenericsFun* fun_860;
void* __right_value917 = (void*)0;
char* fun_name3_861;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* __result394__;
char* source_tail_862;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct buffer* header_863;
void* __right_value922 = (void*)0;
char* name_864;
void* __right_value923 = (void*)0;
char* name_865;
int i_866;
struct sType* param_type_867;
char* param_name_868;
char* default_parametor_869;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
char* impl_name_870;
void* __right_value927 = (void*)0;
char* result_type_name_871;
void* __right_value928 = (void*)0;
char* impl_name_872;
void* __right_value929 = (void*)0;
char* result_type_name_873;
int i_874;
struct sType* param_type_875;
char* param_name_876;
char* default_parametor_877;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sBlock* block_878;
_Bool static_fun_879;
_Bool inline_fun_880;
_Bool uniq_fun_881;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
char* new_fun_name_882;
void* __right_value936 = (void*)0;
char* __dec_obj263;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct sFun* fun_883;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sFun* fun2_884;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value951 = (void*)0;
struct sNode* __result397__;
void* __right_value952 = (void*)0;
char* new_fun_name_886;
void* __right_value953 = (void*)0;
char* __dec_obj268;
_Bool result_type_static_887;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sFun* fun_888;
void* __right_value959 = (void*)0;
struct sFun* fun2_889;
void* __right_value960 = (void*)0;
char* source_tail_890;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* header_891;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value969 = (void*)0;
struct sNode* __result400__;
void* __right_value970 = (void*)0;
char* asm_fun_893;
void* __right_value971 = (void*)0;
char* __dec_obj273;
_Bool result_type_static_894;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sFun* fun_895;
void* __right_value977 = (void*)0;
struct sFun* fun2_896;
void* __right_value978 = (void*)0;
char* source_tail_897;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct buffer* header_898;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value987 = (void*)0;
struct sNode* __result403__;
struct sNode* __result404__;
fun_name_810 = (void*)0;
    header_head_798=info->p;
    source_head_799=info->p;
    result_type_800=((void*)0);
    var_name_801=((void*)0);
    constructor__802=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value864=parse_word(info)));
        /* U11 */__right_value864 = come_decrement_ref_count2(__right_value864, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj247=result_type_800;
        result_type_800=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_800->mHeap=(_Bool)1;
        constructor__802=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value866=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_803=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_804=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_805=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value866,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj248=result_type_800;
        result_type_800=(struct sType*)come_increment_ref_count(result_type2_803);
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj249=var_name_801;
        var_name_801=(char*)come_increment_ref_count(var_name2_804);
        /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_805) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_803,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_804 = come_decrement_ref_count2(var_name2_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_806=(_Bool)0;
    {
        p_807=info->p;
        sline_808=info->sline;
        buf2_809=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2081, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_809,*info->p);
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
        if(        buffer_length(buf2_809)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_806=(_Bool)1;
        }
        info->p=p_807;
        info->sline=sline_808;
        /*i*/come_call_finalizer3(buf2_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_811=((void*)0);
    if(    constructor__802) {
        __dec_obj250=base_fun_name_811;
        base_fun_name_811=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj251=fun_name_810;
        fun_name_810=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_811,info,(_Bool)1));
        /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_806) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value871=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_812=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_813=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_814=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value871,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_814) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj252=base_fun_name_811;
        base_fun_name_811=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=fun_name_810;
        fun_name_810=(char*)come_increment_ref_count(create_method_name(obj_type_812,(_Bool)0,base_fun_name_811,info,(_Bool)1));
        /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_813 = come_decrement_ref_count2(name_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj254=base_fun_name_811;
        base_fun_name_811=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj255=fun_name_810;
        fun_name_810=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_811,info,(_Bool)1));
        /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj256=fun_name_810;
        fun_name_810=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj257=base_fun_name_811;
        base_fun_name_811=(char*)come_increment_ref_count(__builtin_string(fun_name_810));
        /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_811,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value878=parse_params(info,constructor__802)));
    param_types_815=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_816=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_817=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_818=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value878,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_819=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_811,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_820=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2148, "buffer"))));
    buffer_append(header_buf_820,header_head_798,header_tail_819-header_head_798);
    buffer_append_char(header_buf_820,0);
    version_821=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_822=0;
        while(xisdigit(*info->p)) {
            n_822=n_822*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_821=n_822;
    }
    in_top_level_823=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_811,"lambda")) {
        block_824=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_825=0;
        lambda_num_825++;
        fun_name_826=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_825));
        result_type_800->mInline=(_Bool)0;
        result_type_800->mStatic=(_Bool)0;
        result_type_800->mUniq=(_Bool)0;
        fun_827=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2183, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_826)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)0,var_args_818,(struct sBlock*)come_increment_ref_count(block_824),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_820)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_828=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value888=__builtin_string(fun_name_826))));
        /* U11 */__right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_828==((void*)0)||fun2_828->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_826)),(struct sFun*)come_increment_ref_count(fun_827));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2193, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value891=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2193, "sLambdaNode")),fun_827,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value894=_inf_value5));
        /*i*/come_call_finalizer3(block_824,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_826 = come_decrement_ref_count2(fun_name_826, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_827,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value891,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value894) { __right_value894 = come_decrement_ref_count2(__right_value894, ((struct sNode*)__right_value894)->finalize, ((struct sNode*)__right_value894)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result381__;
        /*i*/come_call_finalizer3(block_824,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_826 = come_decrement_ref_count2(fun_name_826, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_827,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_830=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_831=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_832=info->sline;
        block_833=(char*)come_increment_ref_count(skip_block(info));
        fun_834=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2203, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value899=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value900=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),var_args_818,(char*)come_increment_ref_count(block_833),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_831)),generics_sline_832));
        /*g*/come_call_finalizer3(__right_value899,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value900,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_835=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_830,base_fun_name_811));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_835)),(struct sGenericsFun*)come_increment_ref_count(fun_834));
        __result393__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_830 = come_decrement_ref_count2(none_generics_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_831 = come_decrement_ref_count2(generics_sname_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_833 = come_decrement_ref_count2(block_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_834,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_835 = come_decrement_ref_count2(fun_name3_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result393__;
        /* U13 */none_generics_name_830 = come_decrement_ref_count2(none_generics_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_831 = come_decrement_ref_count2(generics_sname_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_833 = come_decrement_ref_count2(block_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_834,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_835 = come_decrement_ref_count2(fun_name3_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_857=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_858=info->sline;
        block_859=(char*)come_increment_ref_count(skip_block(info));
        fun_860=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2217, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value912=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value913=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),var_args_818,(char*)come_increment_ref_count(block_859),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_857)),generics_sline_858));
        /*g*/come_call_finalizer3(__right_value912,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value913,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_861=(char*)come_increment_ref_count(charp_clone(base_fun_name_811));
        if(        method_definition_806) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sGenericsFun*)come_increment_ref_count(fun_860));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_861)),(struct sGenericsFun*)come_increment_ref_count(fun_860));
        }
        __result394__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_857 = come_decrement_ref_count2(generics_sname_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_859 = come_decrement_ref_count2(block_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_860,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_861 = come_decrement_ref_count2(fun_name3_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result394__;
        /* U13 */generics_sname_857 = come_decrement_ref_count2(generics_sname_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_859 = come_decrement_ref_count2(block_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_860,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_861 = come_decrement_ref_count2(fun_name3_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_862=info->p-1;
        header_863=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2233, "buffer"))));
        if(        constructor__802) {
            if(            list$1sTypeph_length(param_types_815)==1) {
                name_864=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_863,"extern %s*%% %s*::initialize(%s*%% self);\n",name_864,name_864,name_864);
                /* U13 */name_864 = come_decrement_ref_count2(name_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_865=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_863,"extern %s*%% %s*::initialize(%s*%% self, ",name_865,name_865,name_865);
                for(                i_866=1;                i_866<list$1sTypeph_length(param_types_815);                i_866++                ){
                    param_type_867=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_815,i_866), "05function.c", 2245, 3));
                    param_name_868=((char*)come_null_check(list$1charphp_operator_load_element(param_names_816,i_866), "05function.c", 2246, 4));
                    default_parametor_869=list$1charphp_operator_load_element(param_default_parametors_817,i_866);
                    if(                    default_parametor_869) {
                        buffer_append_format(header_863,"extern %s %s=%s",((char*)(__right_value924=make_come_type_name_string_no_solved(param_type_867,(_Bool)0,info))),param_name_868,default_parametor_869);
                        /* U11 */__right_value924 = come_decrement_ref_count2(__right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_863,"extern %s %s",((char*)(__right_value925=make_come_type_name_string_no_solved(param_type_867,(_Bool)0,info))),param_name_868);
                        /* U11 */__right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_866!=list$1sTypeph_length(param_types_815)-1) {
                        buffer_append_str(header_863,",");
                    }
                }
                buffer_append_str(header_863,");\n");
                /* U13 */name_865 = come_decrement_ref_count2(name_865, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_815)==1) {
                impl_name_870=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_871=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_800,(_Bool)0,info));
                buffer_append_format(header_863,"extern %s %s*::%s(%s* self);\n",result_type_name_871,impl_name_870,base_fun_name_811,impl_name_870);
                /* U13 */impl_name_870 = come_decrement_ref_count2(impl_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_871 = come_decrement_ref_count2(result_type_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_872=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_873=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_800,(_Bool)0,info));
                buffer_append_format(header_863,"extern %s %s*::%s(%s* self, ",result_type_name_873,impl_name_872,base_fun_name_811,impl_name_872);
                for(                i_874=1;                i_874<list$1sTypeph_length(param_types_815);                i_874++                ){
                    param_type_875=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_815,i_874), "05function.c", 2276, 5));
                    param_name_876=((char*)come_null_check(list$1charphp_operator_load_element(param_names_816,i_874), "05function.c", 2277, 6));
                    default_parametor_877=list$1charphp_operator_load_element(param_default_parametors_817,i_874);
                    if(                    default_parametor_877) {
                        buffer_append_format(header_863,"extern %s %s=%s",((char*)(__right_value930=make_come_type_name_string_no_solved(param_type_875,(_Bool)0,info))),param_name_876,default_parametor_877);
                        /* U11 */__right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_863,"extern %s %s",((char*)(__right_value931=make_come_type_name_string_no_solved(param_type_875,(_Bool)0,info))),param_name_876);
                        /* U11 */__right_value931 = come_decrement_ref_count2(__right_value931, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_874!=list$1sTypeph_length(param_types_815)-1) {
                        buffer_append_str(header_863,",");
                    }
                }
                buffer_append_str(header_863,");\n");
                /* U13 */impl_name_872 = come_decrement_ref_count2(impl_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_873 = come_decrement_ref_count2(result_type_name_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_863,source_head_799,source_tail_862-source_head_799);
            buffer_append_str(header_863,";\n");
        }
        if(        !result_type_800->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value932=buffer_to_string(header_863))));
                /* U11 */__right_value932 = come_decrement_ref_count2(__right_value932, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_878=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__802,(_Bool)1));
        static_fun_879=(_Bool)0;
        if(        result_type_800->mStatic) {
            result_type_800->mStatic=(_Bool)0;
            result_type_800->mUniq=(_Bool)0;
            static_fun_879=(_Bool)1;
        }
        inline_fun_880=(_Bool)0;
        if(        result_type_800->mInline) {
            result_type_800->mInline=(_Bool)0;
            result_type_800->mUniq=(_Bool)0;
            inline_fun_880=(_Bool)1;
        }
        uniq_fun_881=(_Bool)0;
        if(        result_type_800->mUniq) {
            result_type_800->mUniq=(_Bool)0;
            result_type_800->mInline=(_Bool)0;
            result_type_800->mStatic=(_Bool)0;
            uniq_fun_881=(_Bool)1;
        }
        if(        version_821>0) {
            new_fun_name_882=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value934=__builtin_string(fun_name_810))),version_821));
            /* U11 */__right_value934 = come_decrement_ref_count2(__right_value934, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj263=fun_name_810;
            fun_name_810=(char*)come_increment_ref_count(__builtin_string(new_fun_name_882));
            /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_882 = come_decrement_ref_count2(new_fun_name_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_883=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2335, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)0,var_args_818,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_878)),static_fun_879,(char*)come_increment_ref_count(buffer_to_string(header_buf_820)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_880,uniq_fun_881));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_810)),(struct sFun*)come_increment_ref_count(fun_883));
        }
        else {
            fun2_884=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value944=__builtin_string(fun_name_810))));
            /* U11 */__right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_884==((void*)0)||fun2_884->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_810)),(struct sFun*)come_increment_ref_count(fun_883));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2355, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value947=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2355, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_883),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value951=_inf_value6));
        /*i*/come_call_finalizer3(header_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_878,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_883,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value947,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value951) { __right_value951 = come_decrement_ref_count2(__right_value951, ((struct sNode*)__right_value951)->finalize, ((struct sNode*)__right_value951)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result397__;
        /*i*/come_call_finalizer3(header_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_878,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_883,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_821>0) {
            new_fun_name_886=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_810,version_821));
            __dec_obj268=fun_name_810;
            fun_name_810=(char*)come_increment_ref_count(__builtin_string(new_fun_name_886));
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_886 = come_decrement_ref_count2(new_fun_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_887=result_type_800->mStatic;
            result_type_800->mStatic=(_Bool)0;
            result_type_800->mUniq=(_Bool)0;
            result_type_800->mInline=(_Bool)0;
            fun_888=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2372, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)1,var_args_818,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_820)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_889=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value959=__builtin_string(fun_name_810))));
            /* U11 */__right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_889==((void*)0)||fun2_889->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_810)),(struct sFun*)come_increment_ref_count(fun_888));
            }
            source_tail_890=info->p;
            header_891=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2386, "buffer"))));
            buffer_append(header_891,source_head_799,source_tail_890-source_head_799);
            if(            !result_type_static_887) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value963=buffer_to_string(header_891))));
                    /* U11 */__right_value963 = come_decrement_ref_count2(__right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2395, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value965=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2395, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_888),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value969=_inf_value7));
            /*i*/come_call_finalizer3(fun_888,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_891,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value965,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value969) { __right_value969 = come_decrement_ref_count2(__right_value969, ((struct sNode*)__right_value969)->finalize, ((struct sNode*)__right_value969)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result400__;
            /*i*/come_call_finalizer3(fun_888,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_891,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_893=(char*)come_increment_ref_count(parse_attribute(info,(_Bool)1));
            if(            string_operator_not_equals(asm_fun_893,"")) {
                __dec_obj273=fun_name_810;
                fun_name_810=(char*)come_increment_ref_count(__builtin_string(asm_fun_893));
                /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_894=result_type_800->mStatic;
            result_type_800->mStatic=(_Bool)0;
            result_type_800->mUniq=(_Bool)0;
            result_type_800->mInline=(_Bool)0;
            fun_895=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2411, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_810)),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_816),(struct list$1charph*)come_increment_ref_count(param_default_parametors_817),(_Bool)1,var_args_818,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_820)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_896=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value977=__builtin_string(fun_name_810))));
            /* U11 */__right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_896==((void*)0)||fun2_896->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_810)),(struct sFun*)come_increment_ref_count(fun_895));
            }
            source_tail_897=info->p;
            header_898=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2425, "buffer"))));
            buffer_append(header_898,source_head_799,source_tail_897-source_head_799);
            if(            !result_type_static_894) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value981=buffer_to_string(header_898))));
                    /* U11 */__right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2434, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value983=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2434, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_895),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value987=_inf_value8));
            /* U13 */asm_fun_893 = come_decrement_ref_count2(asm_fun_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_898,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value983,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value987) { __right_value987 = come_decrement_ref_count2(__right_value987, ((struct sNode*)__right_value987)->finalize, ((struct sNode*)__right_value987)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result403__;
            /* U13 */asm_fun_893 = come_decrement_ref_count2(asm_fun_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_898,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_823;
    __result404__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_801 = come_decrement_ref_count2(var_name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_810 = come_decrement_ref_count2(fun_name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_811 = come_decrement_ref_count2(base_fun_name_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_820,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj258;
struct list$1charph* __dec_obj259;
struct list$1charph* __dec_obj260;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj258=self->v1;
            come_call_finalizer3(__dec_obj258,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            come_call_finalizer3(__dec_obj259,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj260=self->v3;
            come_call_finalizer3(__dec_obj260,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj261;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj261=self->sname;
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result379__;
void* __right_value892 = (void*)0;
struct sLambdaNode* result_829;
void* __right_value893 = (void*)0;
char* __dec_obj262;
struct sLambdaNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_829=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_829->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_829->sname;
        result_829->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_829->mFun=self->mFun;
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_829;
    /*i*/come_call_finalizer3(result_829,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_853;
unsigned int it_854;
_Bool same_key_exist_855;
char* it2_856;
struct map$2charphsGenericsFunph* __result392__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_853=string_get_hash_key(key)%self->size;
    it_854=hash_853;
    while((_Bool)1) {
        if(        self->item_existance[it_854]) {
            if(            string_equals(self->keys[it_854],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_854]);
                    /* U13 */self->keys[it_854] = come_decrement_ref_count2(self->keys[it_854], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_854]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_854]);
                    self->keys[it_854]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_854],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_854]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_854]=item;
                }
                break;
            }
            it_854++;
            if(            it_854>=self->size) {
                it_854=0;
            }
            else if(            it_854==hash_853) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_854]=(_Bool)1;
            if(            1) {
                self->keys[it_854]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_854]=key;
            }
            if(            1) {
                self->items[it_854]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_854]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_855=(_Bool)0;
    for(    it2_856=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_856=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_856,key)) {
            same_key_exist_855=(_Bool)1;
        }
    }
    if(    !same_key_exist_855) {
        list$1charp_push_back(self->key_list,key);
    }
    __result392__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_836;
void* __right_value905 = (void*)0;
char** keys_837;
void* __right_value906 = (void*)0;
struct sGenericsFun** items_838;
void* __right_value907 = (void*)0;
_Bool* item_existance_839;
int len_840;
char* it_843;
struct sGenericsFun* default_value_846;
struct sGenericsFun* it2_847;
unsigned int hash_850;
int n_851;
struct sGenericsFun* default_value_852;
default_value_846 = (void*)0;
default_value_852 = (void*)0;
    size_836=self->size*10;
    keys_837=(char**)come_increment_ref_count(((char**)(__right_value905=(char**)come_calloc(1, sizeof(char*)*(1*(size_836)), "./comelang.h", 2532, "char*%"))));
    items_838=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value906=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_836)), "./comelang.h", 2533, "sGenericsFun*%"))));
    item_existance_839=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value907=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_836)), "./comelang.h", 2534, "bool"))));
    len_840=0;
    for(    it_843=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_843=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_846,0,sizeof(struct sGenericsFun*));
        it2_847=map$2charphsGenericsFunph_at(self,it_843,default_value_846);
        hash_850=string_get_hash_key(it_843)%size_836;
        n_851=hash_850;
        while((_Bool)1) {
            if(            item_existance_839[n_851]) {
                n_851++;
                if(                n_851>=size_836) {
                    n_851=0;
                }
                else if(                n_851==hash_850) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_839[n_851]=(_Bool)1;
                keys_837[n_851]=it_843;
                items_838[n_851]=map$2charphsGenericsFunph_at(self,it_843,default_value_852);
                len_840++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_837;
    self->items=items_838;
    self->item_existance=item_existance_839;
    self->size=size_836;
    self->len=len_840;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_841;
char* __result382__;
char* __result383__;
char* result_842;
char* __result384__;
result_841 = (void*)0;
result_842 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_841,0,sizeof(char*));
        __result382__ = gComeFunResultObject = __result_obj__ = result_841;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result383__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    memset(&result_842,0,sizeof(char*));
    __result384__ = gComeFunResultObject = __result_obj__ = result_842;
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_844;
char* __result385__;
char* __result386__;
char* result_845;
char* __result387__;
result_844 = (void*)0;
result_845 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_844,0,sizeof(char*));
        __result385__ = gComeFunResultObject = __result_obj__ = result_844;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result386__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    memset(&result_845,0,sizeof(char*));
    __result387__ = gComeFunResultObject = __result_obj__ = result_845;
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_848;
unsigned int it_849;
struct sGenericsFun* __result388__;
struct sGenericsFun* __result389__;
struct sGenericsFun* __result390__;
struct sGenericsFun* __result391__;
    hash_848=string_get_hash_key(((char*)key))%self->size;
    it_849=hash_848;
    while((_Bool)1) {
        if(        self->item_existance[it_849]) {
            if(            string_equals(self->keys[it_849],key)) {
                __result388__ = gComeFunResultObject = __result_obj__ = self->items[it_849];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result388__;
            }
            it_849++;
            if(            it_849>=self->size) {
                it_849=0;
            }
            else if(            it_849==hash_848) {
                __result389__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result389__;
            }
        }
        else {
            __result390__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result390__;
        }
    }
    __result391__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_900;
char* __dec_obj278;
char* last_code2_901;
char* __dec_obj279;
_Bool comma_instead_of_semicolon_902;
struct sClass* current_stack_frame_struct_903;
struct sFun* finalizer_904;
void* __right_value988 = (void*)0;
char* real_fun_name_905;
void* __right_value989 = (void*)0;
char* user_real_fun_name_906;
struct sFun* user_finalizer_907;
void* __right_value990 = (void*)0;
struct sType* type2_908;
struct sClass* klass_909;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct buffer* source_910;
struct list$1tuple2$2charphsTypephph* o2_saved_919;
struct tuple2$2charphsTypeph* it_922;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_925=0;
struct sType* field_type_926=0;
char* p_929;
int sline_930;
char* sname_931;
char* head_932;
struct buffer* source3_933;
struct buffer* __dec_obj287;
void* __right_value993 = (void*)0;
char* __dec_obj288;
void* __right_value994 = (void*)0;
struct sBlock* block_934;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sType* result_type_935;
void* __right_value997 = (void*)0;
char* name_936;
void* __right_value998 = (void*)0;
struct sType* self_type_937;
struct sType* __list_values21___938[1];
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct list$1sTypeph* param_types_939;
void* __right_value1001 = (void*)0;
char* __list_values22___940[1];
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct list$1charph* param_names_941;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct list$1charph* param_default_parametors_942;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct buffer* header_buf_943;
void* __right_value1008 = (void*)0;
int i_944;
struct sType* param_type_945;
char* param_name_946;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sFun* fun_947;
void* __right_value1014 = (void*)0;
struct sFun* fun2_948;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1021 = (void*)0;
struct sNode* node_949;
_Bool Value_951;
struct buffer* __dec_obj293;
char* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
    last_code_900=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj278=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_901=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj279=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_902=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_903=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_904=((void*)0);
    real_fun_name_905=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_906=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_907=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_906);
    type2_908=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_908;
    klass_909=type->mClass;
    if(    type->mPointerNum>0&&klass_909->mStruct||type->mAllocaValue) {
        source_910=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2475, "buffer"))));
        buffer_append_char(source_910,123);
        if(        user_finalizer_907) {
            char source2_911[1024];
            memset(&source2_911, 0, sizeof(char)            *(1024)            );
            snprintf(source2_911,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_906);
            buffer_append_str(source_910,source2_911);
        }
        klass_909=map$2charphsClassphp_operator_load_element(info->classes,klass_909->mName);
        for(        o2_saved_919=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_909->mFields)),it_922=list$1tuple2$2charphsTypephph_begin((o2_saved_919));        !list$1tuple2$2charphsTypephph_end((o2_saved_919));        it_922=list$1tuple2$2charphsTypephph_next((o2_saved_919))        ){
            multiple_assign_var10=it_922;
            name_925=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_926=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_926->mClass->mName)&&type->mPointerNum==field_type_926->mPointerNum&&field_type_926->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_926->mHeap) {
                char source2_927[1024];
                memset(&source2_927, 0, sizeof(char)                *(1024)                );
                snprintf(source2_927,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_925,name_925,name_925,name_925);
                buffer_append_str(source_910,source2_927);
            }
            else if(            field_type_926->mChannel) {
                char source2_928[1024];
                memset(&source2_928, 0, sizeof(char)                *(1024)                );
                snprintf(source2_928,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_925,name_925);
                buffer_append_str(source_910,source2_928);
                snprintf(source2_928,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_925,name_925);
                buffer_append_str(source_910,source2_928);
            }
            /* U13 */name_925 = come_decrement_ref_count2(name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_926,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_919,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_910,125);
        p_929=info->p;
        sline_930=info->sline;
        sname_931=(char*)come_increment_ref_count(info->sname);
        head_932=info->head;
        source3_933=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj287=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_910);
        come_call_finalizer3(__dec_obj287,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_910->buf;
        info->head=source_910->buf;
        __dec_obj288=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_905));
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_934=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_935=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2530, "sType")),"void",(_Bool)0,info));
        name_936=(char*)come_increment_ref_count(string_clone(real_fun_name_905));
        self_type_937=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_937->mHeap=(_Bool)0;
        if(        self_type_937->mPointerNum==0) {
            self_type_937->mPointerNum=1;
        }
        if(        self_type_937->mPointerNum>1) {
            self_type_937->mPointerNum=1;
        }
        param_types_939=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___938[0]=(struct sType*)come_increment_ref_count(self_type_937),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2540, "struct list$1sTypeph")),1,__list_values21___938)));
        param_names_941=(struct list$1charph*)come_increment_ref_count((__list_values22___940[0]=(char*)come_increment_ref_count(((char*)(__right_value1001=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2541, "struct list$1charph")),1,__list_values22___940)));
        /* U11 */__right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_942=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2542, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_942,((void*)0));
        header_buf_943=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2545, "buffer"))));
        buffer_append_str(header_buf_943,((char*)(__right_value1008=make_come_type_name_string(result_type_935,info))));
        /* U11 */__right_value1008 = come_decrement_ref_count2(__right_value1008, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_943," ");
        buffer_append_str(header_buf_943,real_fun_name_905);
        buffer_append_str(header_buf_943,"(");
        for(        i_944=0;        i_944<list$1sTypeph_length(param_types_939);        i_944++        ){
            param_type_945=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_939,i_944), "05function.c", 2553, 7));
            param_name_946=((char*)come_null_check(list$1charphp_operator_load_element(param_names_941,i_944), "05function.c", 2554, 8));
            buffer_append_str(header_buf_943,((char*)(__right_value1009=make_come_type_name_string(param_type_945,info))));
            /* U11 */__right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_943," ");
            buffer_append_str(header_buf_943,param_name_946);
            if(            i_944!=list$1sTypeph_length(param_types_939)-1) {
                buffer_append_str(header_buf_943,",");
            }
        }
        buffer_append_str(header_buf_943,")");
        result_type_935->mStatic=(_Bool)0;
        result_type_935->mUniq=(_Bool)0;
        result_type_935->mInline=(_Bool)0;
        fun_947=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2570, "sFun")),(char*)come_increment_ref_count(name_936),(struct sType*)come_increment_ref_count(result_type_935),(struct list$1sTypeph*)come_increment_ref_count(param_types_939),(struct list$1charph*)come_increment_ref_count(param_names_941),(struct list$1charph*)come_increment_ref_count(param_default_parametors_942),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_934),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_943)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_948=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1014=__builtin_string(fun_name))));
        /* U11 */__right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_948==((void*)0)||fun2_948->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_936)),(struct sFun*)come_increment_ref_count(fun_947));
        }
        finalizer_904=fun_947;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2586, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1017=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2586, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_947),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_949=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value1017,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_951=node_compile(node_949,info);
        if(        !Value_951) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj293=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_933);
        come_call_finalizer3(__dec_obj293,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_929;
        info->head=head_932;
        info->sline=sline_930;
        __dec_obj294=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_931);
        /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_910,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_931 = come_decrement_ref_count2(sname_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_933,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_934,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_935,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_936 = come_decrement_ref_count2(name_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_937,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_939,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_941,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_942,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_943,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_947,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_949) { node_949 = come_decrement_ref_count2(node_949, ((struct sNode*)node_949)->finalize, ((struct sNode*)node_949)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_903;
    __dec_obj295=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_900);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj296=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_901);
    /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_902;
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1023=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2606, "struct tuple2$2sFunpcharph")),finalizer_904,(char*)come_increment_ref_count(real_fun_name_905))));
    /* U13 */last_code_900 = come_decrement_ref_count2(last_code_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_901 = come_decrement_ref_count2(last_code2_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_905 = come_decrement_ref_count2(real_fun_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_906 = come_decrement_ref_count2(user_real_fun_name_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_908,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1023,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_912;
unsigned int hash_913;
unsigned int it_914;
struct sClass* __result405__;
struct sClass* __result406__;
struct sClass* __result407__;
struct sClass* __result408__;
default_value_912 = (void*)0;
    memset(&default_value_912,0,sizeof(struct sClass*));
    hash_913=string_get_hash_key(((char*)key))%self->size;
    it_914=hash_913;
    while((_Bool)1) {
        if(        self->item_existance[it_914]) {
            if(            string_equals(self->keys[it_914],key)) {
                __result405__ = gComeFunResultObject = __result_obj__ = self->items[it_914];
                /*i*/come_call_finalizer3(default_value_912,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result405__;
            }
            it_914++;
            if(            it_914>=self->size) {
                it_914=0;
            }
            else if(            it_914==hash_913) {
                __result406__ = gComeFunResultObject = __result_obj__ = default_value_912;
                /*i*/come_call_finalizer3(default_value_912,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result406__;
            }
        }
        else {
            __result407__ = gComeFunResultObject = __result_obj__ = default_value_912;
            /*i*/come_call_finalizer3(default_value_912,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result407__;
        }
    }
    __result408__ = gComeFunResultObject = __result_obj__ = default_value_912;
    /*i*/come_call_finalizer3(default_value_912,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj280;
struct list$1tuple2$2charphsTypephph* __dec_obj281;
char* __dec_obj285;
char* __dec_obj286;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj280=self->mName;
            /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj281=self->mFields;
            come_call_finalizer3(__dec_obj281,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj285=self->mDeclareSName;
            /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj286=self->mParentClassName;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_915;
struct list_item$1tuple2$2charphsTypephph* prev_it_916;
    it_915=self->head;
    while(it_915!=((void*)0)) {
        prev_it_916=it_915;
        it_915=it_915->next;
        /*i*/come_call_finalizer3(prev_it_916,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj282;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj282=self->item;
            come_call_finalizer3(__dec_obj282,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj283;
struct sType* __dec_obj284;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj283=self->v1;
            /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj284=self->v2;
            come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_917;
struct list_item$1tuple2$2charphsTypephph* prev_it_918;
    it_917=self->head;
    while(it_917!=((void*)0)) {
        prev_it_918=it_917;
        it_917=it_917->next;
        /*i*/come_call_finalizer3(prev_it_918,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_920;
struct tuple2$2charphsTypeph* __result409__;
struct tuple2$2charphsTypeph* __result410__;
struct tuple2$2charphsTypeph* result_921;
struct tuple2$2charphsTypeph* __result411__;
result_920 = (void*)0;
result_921 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_920,0,sizeof(struct tuple2$2charphsTypeph*));
        __result409__ = gComeFunResultObject = __result_obj__ = result_920;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    self->it=self->head;
    if(    self->it) {
        __result410__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    memset(&result_921,0,sizeof(struct tuple2$2charphsTypeph*));
    __result411__ = gComeFunResultObject = __result_obj__ = result_921;
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_923;
struct tuple2$2charphsTypeph* __result412__;
struct tuple2$2charphsTypeph* __result413__;
struct tuple2$2charphsTypeph* result_924;
struct tuple2$2charphsTypeph* __result414__;
result_923 = (void*)0;
result_924 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_923,0,sizeof(struct tuple2$2charphsTypeph*));
        __result412__ = gComeFunResultObject = __result_obj__ = result_923;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result413__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result413__;
    }
    memset(&result_924,0,sizeof(struct tuple2$2charphsTypeph*));
    __result414__ = gComeFunResultObject = __result_obj__ = result_924;
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj297;
struct tuple2$2sFunpcharph* __result417__;
    self->v1=v1;
    __dec_obj297=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result417__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj298;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj298=self->v2;
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_952;
char* __dec_obj299;
char* last_code2_953;
char* __dec_obj300;
_Bool comma_instead_of_semicolon_954;
struct sClass* current_stack_frame_struct_955;
struct sFun* finalizer_956;
void* __right_value1024 = (void*)0;
char* real_fun_name_957;
void* __right_value1025 = (void*)0;
struct sType* type2_958;
struct sClass* klass_959;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct buffer* source_960;
struct list$1tuple2$2charphsTypephph* o2_saved_961;
struct tuple2$2charphsTypeph* it_962;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_963=0;
struct sType* field_type_964=0;
char* p_966;
int sline_967;
char* sname_968;
char* head_969;
struct buffer* source3_970;
struct buffer* __dec_obj301;
void* __right_value1028 = (void*)0;
char* __dec_obj302;
void* __right_value1029 = (void*)0;
struct sBlock* block_971;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sType* result_type_972;
void* __right_value1032 = (void*)0;
char* name_973;
void* __right_value1033 = (void*)0;
struct sType* self_type_974;
struct sType* __list_values23___975[1];
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct list$1sTypeph* param_types_976;
void* __right_value1036 = (void*)0;
char* __list_values24___977[1];
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct list$1charph* param_names_978;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct list$1charph* param_default_parametors_979;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct buffer* header_buf_980;
void* __right_value1043 = (void*)0;
int i_981;
struct sType* param_type_982;
char* param_name_983;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct sFun* fun_984;
void* __right_value1049 = (void*)0;
struct sFun* fun2_985;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1056 = (void*)0;
struct sNode* node_986;
_Bool Value_988;
struct buffer* __dec_obj307;
char* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct tuple2$2sFunpcharph* __result421__;
    last_code_952=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj299=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_953=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj300=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_954=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_955=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_956=((void*)0);
    real_fun_name_957=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_958=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_958;
    klass_959=type->mClass;
    if(    type->mPointerNum>0&&klass_959->mStruct) {
        source_960=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2632, "buffer"))));
        buffer_append_char(source_960,123);
        klass_959=map$2charphsClassphp_operator_load_element(info->classes,klass_959->mName);
        for(        o2_saved_961=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_959->mFields)),it_962=list$1tuple2$2charphsTypephph_begin((o2_saved_961));        !list$1tuple2$2charphsTypephph_end((o2_saved_961));        it_962=list$1tuple2$2charphsTypephph_next((o2_saved_961))        ){
            multiple_assign_var11=it_962;
            name_963=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_964=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_964->mClass->mName)&&type->mPointerNum==field_type_964->mPointerNum&&field_type_964->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_964->mHeap) {
                char source2_965[1024];
                memset(&source2_965, 0, sizeof(char)                *(1024)                );
                snprintf(source2_965,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_963,name_963,name_963,name_963);
                buffer_append_str(source_960,source2_965);
            }
            /* U13 */name_963 = come_decrement_ref_count2(name_963, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_964,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_961,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_960,125);
        p_966=info->p;
        sline_967=info->sline;
        sname_968=(char*)come_increment_ref_count(info->sname);
        head_969=info->head;
        source3_970=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_960);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_960->buf;
        info->head=source_960->buf;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_957));
        /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_971=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_972=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2671, "sType")),"void",(_Bool)0,info));
        name_973=(char*)come_increment_ref_count(string_clone(real_fun_name_957));
        self_type_974=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_974->mHeap=(_Bool)0;
        if(        self_type_974->mPointerNum>1) {
            self_type_974->mPointerNum=1;
        }
        param_types_976=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___975[0]=(struct sType*)come_increment_ref_count(self_type_974),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2678, "struct list$1sTypeph")),1,__list_values23___975)));
        param_names_978=(struct list$1charph*)come_increment_ref_count((__list_values24___977[0]=(char*)come_increment_ref_count(((char*)(__right_value1036=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2679, "struct list$1charph")),1,__list_values24___977)));
        /* U11 */__right_value1036 = come_decrement_ref_count2(__right_value1036, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_979=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2680, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_979,((void*)0));
        header_buf_980=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2683, "buffer"))));
        buffer_append_str(header_buf_980,((char*)(__right_value1043=make_come_type_name_string(result_type_972,info))));
        /* U11 */__right_value1043 = come_decrement_ref_count2(__right_value1043, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_980," ");
        buffer_append_str(header_buf_980,real_fun_name_957);
        buffer_append_str(header_buf_980,"(");
        for(        i_981=0;        i_981<list$1sTypeph_length(param_types_976);        i_981++        ){
            param_type_982=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_976,i_981), "05function.c", 2691, 9));
            param_name_983=((char*)come_null_check(list$1charphp_operator_load_element(param_names_978,i_981), "05function.c", 2692, 10));
            buffer_append_str(header_buf_980,((char*)(__right_value1044=make_come_type_name_string(param_type_982,info))));
            /* U11 */__right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_980," ");
            buffer_append_str(header_buf_980,param_name_983);
            if(            i_981!=list$1sTypeph_length(param_types_976)-1) {
                buffer_append_str(header_buf_980,",");
            }
        }
        buffer_append_str(header_buf_980,")");
        result_type_972->mStatic=(_Bool)0;
        result_type_972->mUniq=(_Bool)0;
        result_type_972->mInline=(_Bool)0;
        fun_984=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2708, "sFun")),(char*)come_increment_ref_count(name_973),(struct sType*)come_increment_ref_count(result_type_972),(struct list$1sTypeph*)come_increment_ref_count(param_types_976),(struct list$1charph*)come_increment_ref_count(param_names_978),(struct list$1charph*)come_increment_ref_count(param_default_parametors_979),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_971),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_980)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_985=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1049=__builtin_string(fun_name))));
        /* U11 */__right_value1049 = come_decrement_ref_count2(__right_value1049, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_985==((void*)0)||fun2_985->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_973)),(struct sFun*)come_increment_ref_count(fun_984));
        }
        finalizer_956=fun_984;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2724, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1052=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2724, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_984),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_986=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value1052,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_988=node_compile(node_986,info);
        if(        !Value_988) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_970);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_966;
        info->head=head_969;
        info->sline=sline_967;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_968);
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_960,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_968 = come_decrement_ref_count2(sname_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_970,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_971,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_972,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_973 = come_decrement_ref_count2(name_973, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_974,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_976,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_978,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_979,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_980,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_984,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_986) { node_986 = come_decrement_ref_count2(node_986, ((struct sNode*)node_986)->finalize, ((struct sNode*)node_986)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_955;
    __dec_obj309=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_952);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj310=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_953);
    /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_954;
    __result421__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1058=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2744, "struct tuple2$2sFunpcharph")),finalizer_956,(char*)come_increment_ref_count(real_fun_name_957))));
    /* U13 */last_code_952 = come_decrement_ref_count2(last_code_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_953 = come_decrement_ref_count2(last_code2_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_957 = come_decrement_ref_count2(real_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_958,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1058,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_989;
char* __dec_obj311;
char* last_code2_990;
char* __dec_obj312;
_Bool comma_instead_of_semicolon_991;
struct sClass* current_stack_frame_struct_992;
struct sFun* equaler_993;
void* __right_value1059 = (void*)0;
char* real_fun_name_994;
void* __right_value1060 = (void*)0;
struct sType* type2_995;
struct sClass* klass_996;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct buffer* source_997;
char* name_998;
struct list$1tuple2$2charphsTypephph* o2_saved_1000;
struct tuple2$2charphsTypeph* it_1001;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1002=0;
struct sType* field_type_1003=0;
char* p_1005;
int sline_1006;
char* sname_1007;
char* head_1008;
struct buffer* source3_1009;
struct buffer* __dec_obj313;
void* __right_value1063 = (void*)0;
char* __dec_obj314;
void* __right_value1064 = (void*)0;
struct sBlock* block_1010;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct sType* result_type_1011;
void* __right_value1067 = (void*)0;
char* name_1012;
void* __right_value1068 = (void*)0;
struct sType* left_type_1013;
void* __right_value1069 = (void*)0;
struct sType* right_type_1014;
struct sType* __list_values25___1015[2];
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct list$1sTypeph* param_types_1016;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
char* __list_values26___1017[2];
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
struct list$1charph* param_names_1018;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct list$1charph* param_default_parametors_1019;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct buffer* header_buf_1020;
void* __right_value1080 = (void*)0;
int i_1021;
struct sType* param_type_1022;
char* param_name_1023;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct sFun* fun_1024;
void* __right_value1086 = (void*)0;
struct sFun* fun2_1025;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1093 = (void*)0;
struct sNode* node_1026;
_Bool Value_1028;
struct buffer* __dec_obj319;
char* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct tuple2$2sFunpcharph* __result424__;
    last_code_989=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_990=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_991=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_992=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_993=((void*)0);
    real_fun_name_994=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_995=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_995;
    klass_996=type->mClass;
    if(    type->mPointerNum>0&&!klass_996->mNumber) {
        source_997=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2769, "buffer"))));
        buffer_append_char(source_997,123);
        if(        klass_996->mProtocol) {
            name_998="_protocol_obj";
            char source2_999[1024];
            memset(&source2_999, 0, sizeof(char)            *(1024)            );
            snprintf(source2_999,1024,"return left.%s.equals(right.%s);\n",name_998,name_998);
            buffer_append_str(source_997,source2_999);
        }
        else {
            klass_996=map$2charphsClassphp_operator_load_element(info->classes,klass_996->mName);
            for(            o2_saved_1000=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_996->mFields)),it_1001=list$1tuple2$2charphsTypephph_begin((o2_saved_1000));            !list$1tuple2$2charphsTypephph_end((o2_saved_1000));            it_1001=list$1tuple2$2charphsTypephph_next((o2_saved_1000))            ){
                multiple_assign_var12=it_1001;
                name_1002=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1003=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1003->mClass->mName)&&type->mPointerNum==field_type_1003->mPointerNum&&field_type_1003->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1004[1024];
                memset(&source2_1004, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1004,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1002,name_1002,name_1002);
                buffer_append_str(source_997,source2_1004);
                /* U13 */name_1002 = come_decrement_ref_count2(name_1002, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1003,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1000,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_997,"return true;");
        buffer_append_char(source_997,125);
        p_1005=info->p;
        sline_1006=info->sline;
        sname_1007=(char*)come_increment_ref_count(info->sname);
        head_1008=info->head;
        source3_1009=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj313=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_997);
        come_call_finalizer3(__dec_obj313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_997->buf;
        info->head=source_997->buf;
        __dec_obj314=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_994));
        /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1010=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1011=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2815, "sType")),"bool",(_Bool)0,info));
        name_1012=(char*)come_increment_ref_count(string_clone(real_fun_name_994));
        left_type_1013=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1013->mHeap=(_Bool)0;
        right_type_1014=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1014->mHeap=(_Bool)0;
        param_types_1016=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1015[0]=(struct sType*)come_increment_ref_count(left_type_1013),
__list_values25___1015[1]=(struct sType*)come_increment_ref_count(right_type_1014),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2821, "struct list$1sTypeph")),2,__list_values25___1015)));
        param_names_1018=(struct list$1charph*)come_increment_ref_count((__list_values26___1017[0]=(char*)come_increment_ref_count(((char*)(__right_value1072=__builtin_string("left")))),
__list_values26___1017[1]=(char*)come_increment_ref_count(((char*)(__right_value1073=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2822, "struct list$1charph")),2,__list_values26___1017)));
        /* U11 */__right_value1072 = come_decrement_ref_count2(__right_value1072, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1073 = come_decrement_ref_count2(__right_value1073, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1019=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2823, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1019,((void*)0));
        list$1charph_push_back(param_default_parametors_1019,((void*)0));
        header_buf_1020=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2827, "buffer"))));
        buffer_append_str(header_buf_1020,((char*)(__right_value1080=make_come_type_name_string(result_type_1011,info))));
        /* U11 */__right_value1080 = come_decrement_ref_count2(__right_value1080, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1020," ");
        buffer_append_str(header_buf_1020,real_fun_name_994);
        buffer_append_str(header_buf_1020,"(");
        for(        i_1021=0;        i_1021<list$1sTypeph_length(param_types_1016);        i_1021++        ){
            param_type_1022=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1016,i_1021), "05function.c", 2835, 11));
            param_name_1023=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1018,i_1021), "05function.c", 2836, 12));
            buffer_append_str(header_buf_1020,((char*)(__right_value1081=make_come_type_name_string(param_type_1022,info))));
            /* U11 */__right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1020," ");
            buffer_append_str(header_buf_1020,param_name_1023);
            if(            i_1021!=list$1sTypeph_length(param_types_1016)-1) {
                buffer_append_str(header_buf_1020,",");
            }
        }
        buffer_append_str(header_buf_1020,")");
        result_type_1011->mStatic=(_Bool)0;
        result_type_1011->mUniq=(_Bool)0;
        result_type_1011->mInline=(_Bool)0;
        fun_1024=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2852, "sFun")),(char*)come_increment_ref_count(name_1012),(struct sType*)come_increment_ref_count(result_type_1011),(struct list$1sTypeph*)come_increment_ref_count(param_types_1016),(struct list$1charph*)come_increment_ref_count(param_names_1018),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1019),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1010),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1020)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1025=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1086=__builtin_string(fun_name))));
        /* U11 */__right_value1086 = come_decrement_ref_count2(__right_value1086, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1025==((void*)0)||fun2_1025->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1012)),(struct sFun*)come_increment_ref_count(fun_1024));
        }
        equaler_993=fun_1024;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2868, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1089=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2868, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1024),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_1026=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value1089,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1028=node_compile(node_1026,info);
        if(        !Value_1028) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj319=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1009);
        come_call_finalizer3(__dec_obj319,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1005;
        info->head=head_1008;
        info->sline=sline_1006;
        __dec_obj320=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1007);
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_997,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1007 = come_decrement_ref_count2(sname_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1009,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1010,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1011,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1012 = come_decrement_ref_count2(name_1012, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1013,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1014,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1016,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1018,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1019,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1024,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1026) { node_1026 = come_decrement_ref_count2(node_1026, ((struct sNode*)node_1026)->finalize, ((struct sNode*)node_1026)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_992;
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_989);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_990);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_991;
    __result424__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1095=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2888, "struct tuple2$2sFunpcharph")),equaler_993,(char*)come_increment_ref_count(real_fun_name_994))));
    /* U13 */last_code_989 = come_decrement_ref_count2(last_code_989, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_990 = come_decrement_ref_count2(last_code2_990, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_994 = come_decrement_ref_count2(real_fun_name_994, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_995,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1095,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1029;
char* __dec_obj323;
char* last_code2_1030;
char* __dec_obj324;
_Bool comma_instead_of_semicolon_1031;
struct sClass* current_stack_frame_struct_1032;
struct sFun* equaler_1033;
void* __right_value1096 = (void*)0;
char* real_fun_name_1034;
void* __right_value1097 = (void*)0;
struct sType* type2_1035;
struct sClass* klass_1036;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct buffer* source_1037;
char* name_1038;
int i_1041;
struct list$1tuple2$2charphsTypephph* o2_saved_1042;
struct tuple2$2charphsTypeph* it_1043;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1044=0;
struct sType* field_type_1045=0;
char* p_1049;
int sline_1050;
char* sname_1051;
char* head_1052;
struct buffer* source3_1053;
struct buffer* __dec_obj325;
void* __right_value1100 = (void*)0;
char* __dec_obj326;
void* __right_value1101 = (void*)0;
struct sBlock* block_1054;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct sType* result_type_1055;
void* __right_value1104 = (void*)0;
char* name_1056;
void* __right_value1105 = (void*)0;
struct sType* left_type_1057;
void* __right_value1106 = (void*)0;
struct sType* right_type_1058;
struct sType* __list_values27___1059[2];
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct list$1sTypeph* param_types_1060;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
char* __list_values28___1061[2];
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
struct list$1charph* param_names_1062;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct list$1charph* param_default_parametors_1063;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct buffer* header_buf_1064;
void* __right_value1117 = (void*)0;
int i_1065;
struct sType* param_type_1066;
char* param_name_1067;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct sFun* fun_1068;
void* __right_value1123 = (void*)0;
struct sFun* fun2_1069;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1130 = (void*)0;
struct sNode* node_1070;
_Bool Value_1072;
struct buffer* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct tuple2$2sFunpcharph* __result427__;
    last_code_1029=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj323=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1030=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj324=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1031=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1032=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1033=((void*)0);
    real_fun_name_1034=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1035=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1035;
    klass_1036=type->mClass;
    if(    type->mPointerNum>0&&!klass_1036->mNumber) {
        source_1037=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2913, "buffer"))));
        buffer_append_char(source_1037,123);
        if(        klass_1036->mProtocol) {
            name_1038="_protocol_obj";
            char source2_1039[1024];
            memset(&source2_1039, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1039,1024,"return left.%s !== right.%s;\n",name_1038,name_1038);
            buffer_append_str(source_1037,source2_1039);
        }
        else {
            char source2_1040[1024];
            memset(&source2_1040, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1040,1024,"return !(");
            buffer_append_str(source_1037,source2_1040);
            snprintf(source2_1040,1024,"( ");
            buffer_append_str(source_1037,source2_1040);
            i_1041=0;
            klass_1036=map$2charphsClassphp_operator_load_element(info->classes,klass_1036->mName);
            for(            o2_saved_1042=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1036->mFields)),it_1043=list$1tuple2$2charphsTypephph_begin((o2_saved_1042));            !list$1tuple2$2charphsTypephph_end((o2_saved_1042));            it_1043=list$1tuple2$2charphsTypephph_next((o2_saved_1042))            ){
                multiple_assign_var13=it_1043;
                name_1044=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1045=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1045->mClass->mName)&&type->mPointerNum==field_type_1045->mPointerNum&&field_type_1045->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1046[1024];
                memset(&source2_1046, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1046,1024,"(left.%s === right.%s)",name_1044,name_1044,name_1044);
                buffer_append_str(source_1037,source2_1046);
                if(                i_1041==list$1tuple2$2charphsTypephph_length(klass_1036->mFields)-1) {
                    char source2_1047[1024];
                    memset(&source2_1047, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1047,1024,"));");
                    buffer_append_str(source_1037,source2_1047);
                }
                else {
                    char source2_1048[1024];
                    memset(&source2_1048, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1048,1024," && ");
                    buffer_append_str(source_1037,source2_1048);
                }
                i_1041++;
                /* U13 */name_1044 = come_decrement_ref_count2(name_1044, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1045,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1042,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1037,125);
        p_1049=info->p;
        sline_1050=info->sline;
        sname_1051=(char*)come_increment_ref_count(info->sname);
        head_1052=info->head;
        source3_1053=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1037);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1037->buf;
        info->head=source_1037->buf;
        __dec_obj326=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1034));
        /*G*/ __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1054=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1055=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2979, "sType")),"bool",(_Bool)0,info));
        name_1056=(char*)come_increment_ref_count(string_clone(real_fun_name_1034));
        left_type_1057=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1057->mHeap=(_Bool)0;
        right_type_1058=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1058->mHeap=(_Bool)0;
        param_types_1060=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1059[0]=(struct sType*)come_increment_ref_count(left_type_1057),
__list_values27___1059[1]=(struct sType*)come_increment_ref_count(right_type_1058),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2985, "struct list$1sTypeph")),2,__list_values27___1059)));
        param_names_1062=(struct list$1charph*)come_increment_ref_count((__list_values28___1061[0]=(char*)come_increment_ref_count(((char*)(__right_value1109=__builtin_string("left")))),
__list_values28___1061[1]=(char*)come_increment_ref_count(((char*)(__right_value1110=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2986, "struct list$1charph")),2,__list_values28___1061)));
        /* U11 */__right_value1109 = come_decrement_ref_count2(__right_value1109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1110 = come_decrement_ref_count2(__right_value1110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1063=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2987, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1063,((void*)0));
        list$1charph_push_back(param_default_parametors_1063,((void*)0));
        header_buf_1064=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2991, "buffer"))));
        buffer_append_str(header_buf_1064,((char*)(__right_value1117=make_come_type_name_string(result_type_1055,info))));
        /* U11 */__right_value1117 = come_decrement_ref_count2(__right_value1117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1064," ");
        buffer_append_str(header_buf_1064,real_fun_name_1034);
        buffer_append_str(header_buf_1064,"(");
        for(        i_1065=0;        i_1065<list$1sTypeph_length(param_types_1060);        i_1065++        ){
            param_type_1066=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1060,i_1065), "05function.c", 2999, 13));
            param_name_1067=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1062,i_1065), "05function.c", 3000, 14));
            buffer_append_str(header_buf_1064,((char*)(__right_value1118=make_come_type_name_string(param_type_1066,info))));
            /* U11 */__right_value1118 = come_decrement_ref_count2(__right_value1118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1064," ");
            buffer_append_str(header_buf_1064,param_name_1067);
            if(            i_1065!=list$1sTypeph_length(param_types_1060)-1) {
                buffer_append_str(header_buf_1064,",");
            }
        }
        buffer_append_str(header_buf_1064,")");
        result_type_1055->mStatic=(_Bool)0;
        result_type_1055->mUniq=(_Bool)0;
        result_type_1055->mInline=(_Bool)0;
        fun_1068=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3016, "sFun")),(char*)come_increment_ref_count(name_1056),(struct sType*)come_increment_ref_count(result_type_1055),(struct list$1sTypeph*)come_increment_ref_count(param_types_1060),(struct list$1charph*)come_increment_ref_count(param_names_1062),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1063),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1054),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1064)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1069=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1123=__builtin_string(fun_name))));
        /* U11 */__right_value1123 = come_decrement_ref_count2(__right_value1123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1069==((void*)0)||fun2_1069->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1056)),(struct sFun*)come_increment_ref_count(fun_1068));
        }
        equaler_1033=fun_1068;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3032, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1126=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3032, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1068),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_1070=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value1126,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1072=node_compile(node_1070,info);
        if(        !Value_1072) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj331=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1053);
        come_call_finalizer3(__dec_obj331,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1049;
        info->head=head_1052;
        info->sline=sline_1050;
        __dec_obj332=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1051);
        /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_1037,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1051 = come_decrement_ref_count2(sname_1051, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1053,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1054,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1055,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1056 = come_decrement_ref_count2(name_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1057,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1058,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1060,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1062,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1063,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1064,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1068,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1070) { node_1070 = come_decrement_ref_count2(node_1070, ((struct sNode*)node_1070)->finalize, ((struct sNode*)node_1070)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1032;
    __dec_obj333=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1029);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1030);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1031;
    __result427__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1132=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3052, "struct tuple2$2sFunpcharph")),equaler_1033,(char*)come_increment_ref_count(real_fun_name_1034))));
    /* U13 */last_code_1029 = come_decrement_ref_count2(last_code_1029, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1030 = come_decrement_ref_count2(last_code2_1030, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1034 = come_decrement_ref_count2(real_fun_name_1034, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1035,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1132,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1073;
char* __dec_obj335;
char* last_code2_1074;
char* __dec_obj336;
_Bool comma_instead_of_semicolon_1075;
struct sClass* current_stack_frame_struct_1076;
struct sFun* equaler_1077;
void* __right_value1133 = (void*)0;
char* real_fun_name_1078;
void* __right_value1134 = (void*)0;
struct sType* type2_1079;
struct sClass* klass_1080;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct buffer* source_1081;
char* name_1082;
int i_1085;
struct list$1tuple2$2charphsTypephph* o2_saved_1086;
struct tuple2$2charphsTypeph* it_1087;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1088=0;
struct sType* field_type_1089=0;
char* p_1093;
int sline_1094;
char* sname_1095;
char* head_1096;
struct buffer* source3_1097;
struct buffer* __dec_obj337;
void* __right_value1137 = (void*)0;
char* __dec_obj338;
void* __right_value1138 = (void*)0;
struct sBlock* block_1098;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct sType* result_type_1099;
void* __right_value1141 = (void*)0;
char* name_1100;
void* __right_value1142 = (void*)0;
struct sType* left_type_1101;
void* __right_value1143 = (void*)0;
struct sType* right_type_1102;
struct sType* __list_values29___1103[2];
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
struct list$1sTypeph* param_types_1104;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
char* __list_values30___1105[2];
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct list$1charph* param_names_1106;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct list$1charph* param_default_parametors_1107;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
struct buffer* header_buf_1108;
void* __right_value1154 = (void*)0;
int i_1109;
struct sType* param_type_1110;
char* param_name_1111;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
struct sFun* fun_1112;
void* __right_value1160 = (void*)0;
struct sFun* fun2_1113;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1167 = (void*)0;
struct sNode* node_1114;
_Bool Value_1116;
struct buffer* __dec_obj343;
char* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct tuple2$2sFunpcharph* __result430__;
    last_code_1073=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1074=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1075=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1076=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1077=((void*)0);
    real_fun_name_1078=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1079=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1079;
    klass_1080=type->mClass;
    if(    type->mPointerNum>0&&!klass_1080->mNumber) {
        source_1081=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3077, "buffer"))));
        buffer_append_char(source_1081,123);
        if(        klass_1080->mProtocol) {
            name_1082="_protocol_obj";
            char source2_1083[1024];
            memset(&source2_1083, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1083,1024,"return !left.%s.equals(right.%s);\n",name_1082,name_1082);
            buffer_append_str(source_1081,source2_1083);
        }
        else {
            char source2_1084[1024];
            memset(&source2_1084, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1084,1024,"return !(");
            buffer_append_str(source_1081,source2_1084);
            i_1085=0;
            klass_1080=map$2charphsClassphp_operator_load_element(info->classes,klass_1080->mName);
            for(            o2_saved_1086=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1080->mFields)),it_1087=list$1tuple2$2charphsTypephph_begin((o2_saved_1086));            !list$1tuple2$2charphsTypephph_end((o2_saved_1086));            it_1087=list$1tuple2$2charphsTypephph_next((o2_saved_1086))            ){
                multiple_assign_var14=it_1087;
                name_1088=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1089=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1089->mClass->mName)&&type->mPointerNum==field_type_1089->mPointerNum&&field_type_1089->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1090[1024];
                memset(&source2_1090, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1090,1024,"left.%s.equals(right.%s)",name_1088,name_1088);
                buffer_append_str(source_1081,source2_1090);
                if(                i_1085==list$1tuple2$2charphsTypephph_length(klass_1080->mFields)-1) {
                    char source2_1091[1024];
                    memset(&source2_1091, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1091,1024,");");
                    buffer_append_str(source_1081,source2_1091);
                }
                else {
                    char source2_1092[1024];
                    memset(&source2_1092, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1092,1024," && ");
                    buffer_append_str(source_1081,source2_1092);
                }
                i_1085++;
                /* U13 */name_1088 = come_decrement_ref_count2(name_1088, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1089,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1086,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1081,125);
        p_1093=info->p;
        sline_1094=info->sline;
        sname_1095=(char*)come_increment_ref_count(info->sname);
        head_1096=info->head;
        source3_1097=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj337=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1081);
        come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1081->buf;
        info->head=source_1081->buf;
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1078));
        /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1098=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1099=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3140, "sType")),"bool",(_Bool)0,info));
        name_1100=(char*)come_increment_ref_count(string_clone(real_fun_name_1078));
        left_type_1101=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1101->mHeap=(_Bool)0;
        right_type_1102=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1102->mHeap=(_Bool)0;
        param_types_1104=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1103[0]=(struct sType*)come_increment_ref_count(left_type_1101),
__list_values29___1103[1]=(struct sType*)come_increment_ref_count(right_type_1102),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3146, "struct list$1sTypeph")),2,__list_values29___1103)));
        param_names_1106=(struct list$1charph*)come_increment_ref_count((__list_values30___1105[0]=(char*)come_increment_ref_count(((char*)(__right_value1146=__builtin_string("left")))),
__list_values30___1105[1]=(char*)come_increment_ref_count(((char*)(__right_value1147=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3147, "struct list$1charph")),2,__list_values30___1105)));
        /* U11 */__right_value1146 = come_decrement_ref_count2(__right_value1146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1147 = come_decrement_ref_count2(__right_value1147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1107=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3148, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1107,((void*)0));
        list$1charph_push_back(param_default_parametors_1107,((void*)0));
        header_buf_1108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3152, "buffer"))));
        buffer_append_str(header_buf_1108,((char*)(__right_value1154=make_come_type_name_string(result_type_1099,info))));
        /* U11 */__right_value1154 = come_decrement_ref_count2(__right_value1154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1108," ");
        buffer_append_str(header_buf_1108,real_fun_name_1078);
        buffer_append_str(header_buf_1108,"(");
        for(        i_1109=0;        i_1109<list$1sTypeph_length(param_types_1104);        i_1109++        ){
            param_type_1110=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1104,i_1109), "05function.c", 3160, 15));
            param_name_1111=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1106,i_1109), "05function.c", 3161, 16));
            buffer_append_str(header_buf_1108,((char*)(__right_value1155=make_come_type_name_string(param_type_1110,info))));
            /* U11 */__right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1108," ");
            buffer_append_str(header_buf_1108,param_name_1111);
            if(            i_1109!=list$1sTypeph_length(param_types_1104)-1) {
                buffer_append_str(header_buf_1108,",");
            }
        }
        buffer_append_str(header_buf_1108,")");
        result_type_1099->mStatic=(_Bool)0;
        result_type_1099->mUniq=(_Bool)0;
        result_type_1099->mInline=(_Bool)0;
        fun_1112=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3177, "sFun")),(char*)come_increment_ref_count(name_1100),(struct sType*)come_increment_ref_count(result_type_1099),(struct list$1sTypeph*)come_increment_ref_count(param_types_1104),(struct list$1charph*)come_increment_ref_count(param_names_1106),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1107),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1098),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1108)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1113=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1160=__builtin_string(fun_name))));
        /* U11 */__right_value1160 = come_decrement_ref_count2(__right_value1160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1113==((void*)0)||fun2_1113->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1100)),(struct sFun*)come_increment_ref_count(fun_1112));
        }
        equaler_1077=fun_1112;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3193, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1163=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3193, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1112),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_1114=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value1163,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1116=node_compile(node_1114,info);
        if(        !Value_1116) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj343=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1097);
        come_call_finalizer3(__dec_obj343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1093;
        info->head=head_1096;
        info->sline=sline_1094;
        __dec_obj344=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1095);
        /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_1081,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1095 = come_decrement_ref_count2(sname_1095, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1097,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1098,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1099,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1100 = come_decrement_ref_count2(name_1100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1101,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1104,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1106,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1107,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1108,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1112,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1114) { node_1114 = come_decrement_ref_count2(node_1114, ((struct sNode*)node_1114)->finalize, ((struct sNode*)node_1114)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1076;
    __dec_obj345=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1073);
    /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj346=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1074);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1075;
    __result430__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1169=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3213, "struct tuple2$2sFunpcharph")),equaler_1077,(char*)come_increment_ref_count(real_fun_name_1078))));
    /* U13 */last_code_1073 = come_decrement_ref_count2(last_code_1073, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1074 = come_decrement_ref_count2(last_code2_1074, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1078 = come_decrement_ref_count2(real_fun_name_1078, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1079,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1169,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1117;
char* __dec_obj347;
char* last_code2_1118;
char* __dec_obj348;
_Bool comma_instead_of_semicolon_1119;
struct sClass* current_stack_frame_struct_1120;
struct sFun* equaler_1121;
void* __right_value1170 = (void*)0;
char* real_fun_name_1122;
void* __right_value1171 = (void*)0;
struct sType* type2_1123;
struct sClass* klass_1124;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct buffer* source_1125;
char* name_1126;
struct list$1tuple2$2charphsTypephph* o2_saved_1129;
struct tuple2$2charphsTypeph* it_1130;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1131=0;
struct sType* field_type_1132=0;
char* p_1134;
int sline_1135;
char* sname_1136;
char* head_1137;
struct buffer* source3_1138;
struct buffer* __dec_obj349;
void* __right_value1174 = (void*)0;
char* __dec_obj350;
void* __right_value1175 = (void*)0;
struct sBlock* block_1139;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct sType* result_type_1140;
void* __right_value1178 = (void*)0;
char* name_1141;
void* __right_value1179 = (void*)0;
struct sType* left_type_1142;
void* __right_value1180 = (void*)0;
struct sType* right_type_1143;
struct sType* __list_values31___1144[2];
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct list$1sTypeph* param_types_1145;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
char* __list_values32___1146[2];
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct list$1charph* param_names_1147;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct list$1charph* param_default_parametors_1148;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct buffer* header_buf_1149;
void* __right_value1191 = (void*)0;
int i_1150;
struct sType* param_type_1151;
char* param_name_1152;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct sFun* fun_1153;
void* __right_value1197 = (void*)0;
struct sFun* fun2_1154;
void* __right_value1198 = (void*)0;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1204 = (void*)0;
struct sNode* node_1155;
_Bool Value_1157;
struct buffer* __dec_obj355;
char* __dec_obj356;
char* __dec_obj357;
char* __dec_obj358;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct tuple2$2sFunpcharph* __result433__;
    last_code_1117=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj347=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1118=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj348=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1119=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1120=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1121=((void*)0);
    real_fun_name_1122=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1123=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1123;
    klass_1124=type->mClass;
    if(    type->mPointerNum>0&&!klass_1124->mNumber) {
        source_1125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3238, "buffer"))));
        buffer_append_char(source_1125,123);
        if(        klass_1124->mProtocol) {
            name_1126="_protocol_obj";
            char source2_1127[1024];
            memset(&source2_1127, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1127,1024,"return left.%s === right.%s;\n",name_1126,name_1126);
            buffer_append_str(source_1125,source2_1127);
        }
        else {
            char source2_1128[1024];
            memset(&source2_1128, 0, sizeof(char)            *(1024)            );
            klass_1124=map$2charphsClassphp_operator_load_element(info->classes,klass_1124->mName);
            for(            o2_saved_1129=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1124->mFields)),it_1130=list$1tuple2$2charphsTypephph_begin((o2_saved_1129));            !list$1tuple2$2charphsTypephph_end((o2_saved_1129));            it_1130=list$1tuple2$2charphsTypephph_next((o2_saved_1129))            ){
                multiple_assign_var15=it_1130;
                name_1131=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1132=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1132->mClass->mName)&&type->mPointerNum==field_type_1132->mPointerNum&&field_type_1132->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1133[1024];
                memset(&source2_1133, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1133,1024,"if(left.%s !== right.%s) { return false; }\n",name_1131,name_1131,name_1131);
                buffer_append_str(source_1125,source2_1133);
                /* U13 */name_1131 = come_decrement_ref_count2(name_1131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1132,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1129,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1125,"return true;\n");
        buffer_append_char(source_1125,125);
        p_1134=info->p;
        sline_1135=info->sline;
        sname_1136=(char*)come_increment_ref_count(info->sname);
        head_1137=info->head;
        source3_1138=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj349=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1125);
        come_call_finalizer3(__dec_obj349,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1125->buf;
        info->head=source_1125->buf;
        __dec_obj350=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1122));
        /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1139=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1140=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3286, "sType")),"bool",(_Bool)0,info));
        name_1141=(char*)come_increment_ref_count(string_clone(real_fun_name_1122));
        left_type_1142=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1142->mHeap=(_Bool)0;
        right_type_1143=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1143->mHeap=(_Bool)0;
        param_types_1145=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1144[0]=(struct sType*)come_increment_ref_count(left_type_1142),
__list_values31___1144[1]=(struct sType*)come_increment_ref_count(right_type_1143),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3292, "struct list$1sTypeph")),2,__list_values31___1144)));
        param_names_1147=(struct list$1charph*)come_increment_ref_count((__list_values32___1146[0]=(char*)come_increment_ref_count(((char*)(__right_value1183=__builtin_string("left")))),
__list_values32___1146[1]=(char*)come_increment_ref_count(((char*)(__right_value1184=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3293, "struct list$1charph")),2,__list_values32___1146)));
        /* U11 */__right_value1183 = come_decrement_ref_count2(__right_value1183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1184 = come_decrement_ref_count2(__right_value1184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1148=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3294, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1148,((void*)0));
        list$1charph_push_back(param_default_parametors_1148,((void*)0));
        header_buf_1149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3298, "buffer"))));
        buffer_append_str(header_buf_1149,((char*)(__right_value1191=make_come_type_name_string(result_type_1140,info))));
        /* U11 */__right_value1191 = come_decrement_ref_count2(__right_value1191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1149," ");
        buffer_append_str(header_buf_1149,real_fun_name_1122);
        buffer_append_str(header_buf_1149,"(");
        for(        i_1150=0;        i_1150<list$1sTypeph_length(param_types_1145);        i_1150++        ){
            param_type_1151=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1145,i_1150), "05function.c", 3306, 17));
            param_name_1152=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1147,i_1150), "05function.c", 3307, 18));
            buffer_append_str(header_buf_1149,((char*)(__right_value1192=make_come_type_name_string(param_type_1151,info))));
            /* U11 */__right_value1192 = come_decrement_ref_count2(__right_value1192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1149," ");
            buffer_append_str(header_buf_1149,param_name_1152);
            if(            i_1150!=list$1sTypeph_length(param_types_1145)-1) {
                buffer_append_str(header_buf_1149,",");
            }
        }
        buffer_append_str(header_buf_1149,")");
        result_type_1140->mStatic=(_Bool)0;
        result_type_1140->mUniq=(_Bool)0;
        result_type_1140->mInline=(_Bool)0;
        fun_1153=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3323, "sFun")),(char*)come_increment_ref_count(name_1141),(struct sType*)come_increment_ref_count(result_type_1140),(struct list$1sTypeph*)come_increment_ref_count(param_types_1145),(struct list$1charph*)come_increment_ref_count(param_names_1147),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1148),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1139),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1149)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1154=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1197=__builtin_string(fun_name))));
        /* U11 */__right_value1197 = come_decrement_ref_count2(__right_value1197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1154==((void*)0)||fun2_1154->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1141)),(struct sFun*)come_increment_ref_count(fun_1153));
        }
        equaler_1121=fun_1153;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3339, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1200=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3339, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1153),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_1155=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1200,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1157=node_compile(node_1155,info);
        if(        !Value_1157) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj355=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1138);
        come_call_finalizer3(__dec_obj355,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1134;
        info->head=head_1137;
        info->sline=sline_1135;
        __dec_obj356=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1136);
        /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_1125,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1136 = come_decrement_ref_count2(sname_1136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1138,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1139,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1140,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1141 = come_decrement_ref_count2(name_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1143,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1145,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1147,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1148,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1149,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1153,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1155) { node_1155 = come_decrement_ref_count2(node_1155, ((struct sNode*)node_1155)->finalize, ((struct sNode*)node_1155)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1120;
    __dec_obj357=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1117);
    /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj358=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1118);
    /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1119;
    __result433__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1206=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3359, "struct tuple2$2sFunpcharph")),equaler_1121,(char*)come_increment_ref_count(real_fun_name_1122))));
    /* U13 */last_code_1117 = come_decrement_ref_count2(last_code_1117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1118 = come_decrement_ref_count2(last_code2_1118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1122 = come_decrement_ref_count2(real_fun_name_1122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1123,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1206,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1158;
char* __dec_obj359;
char* last_code2_1159;
char* __dec_obj360;
_Bool comma_instead_of_semicolon_1160;
struct sClass* current_stack_frame_struct_1161;
struct sFun* cloner_1162;
void* __right_value1207 = (void*)0;
char* real_fun_name_1163;
void* __right_value1208 = (void*)0;
struct sType* type2_1164;
struct sClass* klass_1165;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct buffer* source_1166;
void* __right_value1211 = (void*)0;
char* name_1167;
struct list$1tuple2$2charphsTypephph* o2_saved_1169;
struct tuple2$2charphsTypeph* it_1170;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1171=0;
struct sType* field_type_1172=0;
struct list$1tuple2$2charphsTypephph* o2_saved_1175;
struct tuple2$2charphsTypeph* it_1176;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1177=0;
struct sType* field_type_1178=0;
char* p_1182;
int sline_1183;
char* sname_1184;
struct buffer* source3_1185;
char* head_1186;
struct buffer* __dec_obj361;
void* __right_value1212 = (void*)0;
char* __dec_obj362;
void* __right_value1213 = (void*)0;
struct sBlock* block_1187;
void* __right_value1214 = (void*)0;
struct sType* result_type_1188;
void* __right_value1215 = (void*)0;
char* name_1189;
void* __right_value1216 = (void*)0;
struct sType* self_type_1190;
struct sType* __list_values33___1191[1];
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1sTypeph* param_types_1192;
void* __right_value1219 = (void*)0;
char* __list_values34___1193[1];
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct list$1charph* param_names_1194;
void* __right_value1222 = (void*)0;
void* __right_value1223 = (void*)0;
struct list$1charph* param_default_parametors_1195;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct buffer* header_buf_1196;
void* __right_value1226 = (void*)0;
int i_1197;
struct sType* param_type_1198;
char* param_name_1199;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct sFun* fun_1200;
void* __right_value1232 = (void*)0;
struct sFun* fun2_1201;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1239 = (void*)0;
struct sNode* node_1202;
_Bool Value_1204;
char* __dec_obj367;
struct buffer* __dec_obj368;
char* __dec_obj369;
char* __dec_obj370;
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct tuple2$2sFunpcharph* __result436__;
    last_code_1158=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1159=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1160=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1161=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1162=((void*)0);
    real_fun_name_1163=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1164=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1164;
    klass_1165=type->mClass;
    if(    type->mPointerNum>0&&!klass_1165->mNumber) {
        source_1166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3384, "buffer"))));
        buffer_append_str(source_1166,"{\n");
        buffer_append_str(source_1166,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1166,"var result = new %s;\n",((char*)(__right_value1211=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        /* U11 */__right_value1211 = come_decrement_ref_count2(__right_value1211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1165->mProtocol) {
            name_1167="_protocol_obj";
            char source2_1168[1024];
            memset(&source2_1168, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1168,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1166,source2_1168);
            klass_1165=map$2charphsClassphp_operator_load_element(info->classes,klass_1165->mName);
            for(            o2_saved_1169=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1165->mFields)),it_1170=list$1tuple2$2charphsTypephph_begin((o2_saved_1169));            !list$1tuple2$2charphsTypephph_end((o2_saved_1169));            it_1170=list$1tuple2$2charphsTypephph_next((o2_saved_1169))            ){
                multiple_assign_var16=it_1170;
                name_1171=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1172=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1172->mClass->mName)&&type->mPointerNum==field_type_1172->mPointerNum&&field_type_1172->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_1171,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1172->mArrayNum)>0) {
                    char source2_1173[1024];
                    memset(&source2_1173, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1173,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1171,name_1171,name_1171);
                    buffer_append_str(source_1166,source2_1173);
                }
                else {
                    char source2_1174[1024];
                    memset(&source2_1174, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1174,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1171,name_1171);
                    buffer_append_str(source_1166,source2_1174);
                }
                /* U13 */name_1171 = come_decrement_ref_count2(name_1171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1172,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1169,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1165=map$2charphsClassphp_operator_load_element(info->classes,klass_1165->mName);
            for(            o2_saved_1175=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1165->mFields)),it_1176=list$1tuple2$2charphsTypephph_begin((o2_saved_1175));            !list$1tuple2$2charphsTypephph_end((o2_saved_1175));            it_1176=list$1tuple2$2charphsTypephph_next((o2_saved_1175))            ){
                multiple_assign_var17=it_1176;
                name_1177=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1178=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1178->mClass->mName)&&type->mPointerNum==field_type_1178->mPointerNum&&field_type_1178->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_1178->mHeap) {
                    char source2_1179[1024];
                    memset(&source2_1179, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1179,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1177,name_1177,name_1177);
                    buffer_append_str(source_1166,source2_1179);
                }
                else if(                list$1sNodeph_length(field_type_1178->mArrayNum)>0) {
                    char source2_1180[1024];
                    memset(&source2_1180, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1180,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1177,name_1177,name_1177);
                    buffer_append_str(source_1166,source2_1180);
                }
                else {
                    char source2_1181[1024];
                    memset(&source2_1181, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1181,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1177,name_1177);
                    buffer_append_str(source_1166,source2_1181);
                }
                /* U13 */name_1177 = come_decrement_ref_count2(name_1177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1178,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1175,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1166,"return result;");
        buffer_append_char(source_1166,125);
        p_1182=info->p;
        sline_1183=info->sline;
        sname_1184=(char*)come_increment_ref_count(info->sname);
        source3_1185=(struct buffer*)come_increment_ref_count(info->source);
        head_1186=info->head;
        __dec_obj361=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1166);
        come_call_finalizer3(__dec_obj361,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj362=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1163));
        /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1187=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1188=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1189=(char*)come_increment_ref_count(string_clone(real_fun_name_1163));
        self_type_1190=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1190->mHeap=(_Bool)0;
        param_types_1192=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1191[0]=(struct sType*)come_increment_ref_count(self_type_1190),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3478, "struct list$1sTypeph")),1,__list_values33___1191)));
        param_names_1194=(struct list$1charph*)come_increment_ref_count((__list_values34___1193[0]=(char*)come_increment_ref_count(((char*)(__right_value1219=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3479, "struct list$1charph")),1,__list_values34___1193)));
        /* U11 */__right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1195=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3480, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1195,((void*)0));
        header_buf_1196=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "buffer"))));
        buffer_append_str(header_buf_1196,((char*)(__right_value1226=make_come_type_name_string(result_type_1188,info))));
        /* U11 */__right_value1226 = come_decrement_ref_count2(__right_value1226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1196," ");
        buffer_append_str(header_buf_1196,real_fun_name_1163);
        buffer_append_str(header_buf_1196,"(");
        for(        i_1197=0;        i_1197<list$1sTypeph_length(param_types_1192);        i_1197++        ){
            param_type_1198=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1192,i_1197), "05function.c", 3491, 19));
            param_name_1199=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1194,i_1197), "05function.c", 3492, 20));
            buffer_append_str(header_buf_1196,((char*)(__right_value1227=make_come_type_name_string(param_type_1198,info))));
            /* U11 */__right_value1227 = come_decrement_ref_count2(__right_value1227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1196," ");
            buffer_append_str(header_buf_1196,param_name_1199);
            if(            i_1197!=list$1sTypeph_length(param_types_1192)-1) {
                buffer_append_str(header_buf_1196,",");
            }
        }
        buffer_append_str(header_buf_1196,")");
        result_type_1188->mStatic=(_Bool)0;
        result_type_1188->mUniq=(_Bool)0;
        result_type_1188->mInline=(_Bool)0;
        fun_1200=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3508, "sFun")),(char*)come_increment_ref_count(name_1189),(struct sType*)come_increment_ref_count(result_type_1188),(struct list$1sTypeph*)come_increment_ref_count(param_types_1192),(struct list$1charph*)come_increment_ref_count(param_names_1194),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1195),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1187),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1196)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1200->mCloner=(_Bool)1;
        fun2_1201=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1232=__builtin_string(fun_name))));
        /* U11 */__right_value1232 = come_decrement_ref_count2(__right_value1232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1201==((void*)0)||fun2_1201->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1189)),(struct sFun*)come_increment_ref_count(fun_1200));
        }
        cloner_1162=fun_1200;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3525, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1235=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3525, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1200),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_1202=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1235,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1204=node_compile(node_1202,info);
        if(        !Value_1204) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj367=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1184);
        /*G*/ __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1183;
        __dec_obj368=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1185);
        come_call_finalizer3(__dec_obj368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1182;
        info->head=head_1186;
        info->sline=sline_1183;
        /*i*/come_call_finalizer3(source_1166,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1184 = come_decrement_ref_count2(sname_1184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1185,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1187,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1189 = come_decrement_ref_count2(name_1189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1190,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1192,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1194,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1195,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1200,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1202) { node_1202 = come_decrement_ref_count2(node_1202, ((struct sNode*)node_1202)->finalize, ((struct sNode*)node_1202)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1161;
    __dec_obj369=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1158);
    /*G*/ __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj370=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1159);
    /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1160;
    __result436__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1241=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3547, "struct tuple2$2sFunpcharph")),cloner_1162,(char*)come_increment_ref_count(real_fun_name_1163))));
    /* U13 */last_code_1158 = come_decrement_ref_count2(last_code_1158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1159 = come_decrement_ref_count2(last_code2_1159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1163 = come_decrement_ref_count2(real_fun_name_1163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1164,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1241,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result436__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1205;
char* __dec_obj371;
char* last_code2_1206;
char* __dec_obj372;
_Bool comma_instead_of_semicolon_1207;
struct sClass* current_stack_frame_struct_1208;
struct sFun* cloner_1209;
void* __right_value1242 = (void*)0;
char* real_fun_name_1210;
void* __right_value1243 = (void*)0;
struct sType* type2_1211;
struct sClass* klass_1212;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
struct buffer* source_1213;
int i_1214;
struct list$1tuple2$2charphsTypephph* o2_saved_1215;
struct tuple2$2charphsTypeph* it_1216;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1217=0;
struct sType* field_type_1218=0;
char* p_1221;
int sline_1222;
char* sname_1223;
struct buffer* source3_1224;
char* head_1225;
struct buffer* __dec_obj373;
void* __right_value1246 = (void*)0;
char* __dec_obj374;
void* __right_value1247 = (void*)0;
struct sBlock* block_1226;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct sType* result_type_1227;
void* __right_value1250 = (void*)0;
char* name_1228;
void* __right_value1251 = (void*)0;
struct sType* self_type_1229;
struct sType* __list_values35___1230[1];
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct list$1sTypeph* param_types_1231;
void* __right_value1254 = (void*)0;
char* __list_values36___1232[1];
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct list$1charph* param_names_1233;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct list$1charph* param_default_parametors_1234;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct buffer* header_buf_1235;
void* __right_value1261 = (void*)0;
int i_1236;
struct sType* param_type_1237;
char* param_name_1238;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
struct sFun* fun_1239;
void* __right_value1267 = (void*)0;
struct sFun* fun2_1240;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1274 = (void*)0;
struct sNode* node_1241;
_Bool Value_1243;
char* __dec_obj379;
struct buffer* __dec_obj380;
char* __dec_obj381;
char* __dec_obj382;
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct tuple2$2sFunpcharph* __result439__;
    last_code_1205=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj371=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1206=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj372=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1207=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1208=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1209=((void*)0);
    real_fun_name_1210=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1211=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1211;
    klass_1212=type->mClass;
    if(    type->mPointerNum>0&&!klass_1212->mNumber) {
        source_1213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3572, "buffer"))));
        buffer_append_str(source_1213,"{\n");
        buffer_append_str(source_1213,"var result = new buffer();\n");
        buffer_append_format(source_1213,"result.append_str(\"%s {\");\n",klass_1212->mName);
        i_1214=0;
        klass_1212=map$2charphsClassphp_operator_load_element(info->classes,klass_1212->mName);
        for(        o2_saved_1215=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1212->mFields)),it_1216=list$1tuple2$2charphsTypephph_begin((o2_saved_1215));        !list$1tuple2$2charphsTypephph_end((o2_saved_1215));        it_1216=list$1tuple2$2charphsTypephph_next((o2_saved_1215))        ){
            multiple_assign_var18=it_1216;
            name_1217=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1218=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1218->mClass->mName)&&type->mPointerNum==field_type_1218->mPointerNum&&field_type_1218->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1214==list$1tuple2$2charphsTypephph_length(klass_1212->mFields)-1) {
                char source2_1219[1024];
                memset(&source2_1219, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1219,1024,"result.append_str(\"%s:\");\n",name_1217);
                buffer_append_str(source_1213,source2_1219);
                snprintf(source2_1219,1024,"result.append_str(self.%s.to_string());\n",name_1217);
                buffer_append_str(source_1213,source2_1219);
            }
            else {
                char source2_1220[1024];
                memset(&source2_1220, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1220,1024,"result.append_str(\"%s:\");\n",name_1217);
                buffer_append_str(source_1213,source2_1220);
                snprintf(source2_1220,1024,"result.append_str(self.%s.to_string());\n",name_1217);
                buffer_append_str(source_1213,source2_1220);
                snprintf(source2_1220,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1213,source2_1220);
            }
            i_1214++;
            /* U13 */name_1217 = come_decrement_ref_count2(name_1217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_1218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_1215,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1213,"result.append_str(\"}\");\n");
        buffer_append_format(source_1213,"return result.to_string();\n");
        buffer_append_char(source_1213,125);
        p_1221=info->p;
        sline_1222=info->sline;
        sname_1223=(char*)come_increment_ref_count(info->sname);
        source3_1224=(struct buffer*)come_increment_ref_count(info->source);
        head_1225=info->head;
        __dec_obj373=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1213);
        come_call_finalizer3(__dec_obj373,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj374=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1210));
        /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1226=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1227=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3639, "sType")),"char*",(_Bool)0,info));
        result_type_1227->mHeap=(_Bool)1;
        name_1228=(char*)come_increment_ref_count(string_clone(real_fun_name_1210));
        self_type_1229=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1229->mHeap=(_Bool)0;
        param_types_1231=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___1230[0]=(struct sType*)come_increment_ref_count(self_type_1229),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3644, "struct list$1sTypeph")),1,__list_values35___1230)));
        param_names_1233=(struct list$1charph*)come_increment_ref_count((__list_values36___1232[0]=(char*)come_increment_ref_count(((char*)(__right_value1254=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3645, "struct list$1charph")),1,__list_values36___1232)));
        /* U11 */__right_value1254 = come_decrement_ref_count2(__right_value1254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1234=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3646, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1234,((void*)0));
        header_buf_1235=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3649, "buffer"))));
        buffer_append_str(header_buf_1235,((char*)(__right_value1261=make_come_type_name_string(result_type_1227,info))));
        /* U11 */__right_value1261 = come_decrement_ref_count2(__right_value1261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1235," ");
        buffer_append_str(header_buf_1235,real_fun_name_1210);
        buffer_append_str(header_buf_1235,"(");
        for(        i_1236=0;        i_1236<list$1sTypeph_length(param_types_1231);        i_1236++        ){
            param_type_1237=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1231,i_1236), "05function.c", 3657, 21));
            param_name_1238=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1233,i_1236), "05function.c", 3658, 22));
            buffer_append_str(header_buf_1235,((char*)(__right_value1262=make_come_type_name_string(param_type_1237,info))));
            /* U11 */__right_value1262 = come_decrement_ref_count2(__right_value1262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1235," ");
            buffer_append_str(header_buf_1235,param_name_1238);
            if(            i_1236!=list$1sTypeph_length(param_types_1231)-1) {
                buffer_append_str(header_buf_1235,",");
            }
        }
        buffer_append_str(header_buf_1235,")");
        result_type_1227->mStatic=(_Bool)0;
        result_type_1227->mUniq=(_Bool)0;
        result_type_1227->mInline=(_Bool)0;
        fun_1239=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3674, "sFun")),(char*)come_increment_ref_count(name_1228),(struct sType*)come_increment_ref_count(result_type_1227),(struct list$1sTypeph*)come_increment_ref_count(param_types_1231),(struct list$1charph*)come_increment_ref_count(param_names_1233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1234),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1226),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1235)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1239->mCloner=(_Bool)1;
        fun2_1240=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1267=__builtin_string(fun_name))));
        /* U11 */__right_value1267 = come_decrement_ref_count2(__right_value1267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1240==((void*)0)||fun2_1240->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1228)),(struct sFun*)come_increment_ref_count(fun_1239));
        }
        cloner_1209=fun_1239;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3691, "struct sNode");
        _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1270=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3691, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1239),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_1241=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1270,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1243=node_compile(node_1241,info);
        if(        !Value_1243) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj379=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1223);
        /*G*/ __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1222;
        __dec_obj380=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1224);
        come_call_finalizer3(__dec_obj380,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1221;
        info->head=head_1225;
        info->sline=sline_1222;
        /*i*/come_call_finalizer3(source_1213,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1223 = come_decrement_ref_count2(sname_1223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1226,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1228 = come_decrement_ref_count2(name_1228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1229,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1231,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1235,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1239,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1241) { node_1241 = come_decrement_ref_count2(node_1241, ((struct sNode*)node_1241)->finalize, ((struct sNode*)node_1241)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1208;
    __dec_obj381=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1205);
    /*G*/ __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj382=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1206);
    /*G*/ __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1207;
    __result439__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1276=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3713, "struct tuple2$2sFunpcharph")),cloner_1209,(char*)come_increment_ref_count(real_fun_name_1210))));
    /* U13 */last_code_1205 = come_decrement_ref_count2(last_code_1205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1206 = come_decrement_ref_count2(last_code2_1206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1210 = come_decrement_ref_count2(real_fun_name_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1276,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj375;
struct sFun* __dec_obj376;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj375=self->sname;
            /*G*/ __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj376=self->mFun;
            come_call_finalizer3(__dec_obj376,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result437__;
void* __right_value1271 = (void*)0;
struct sFunNode* result_1242;
void* __right_value1272 = (void*)0;
char* __dec_obj377;
void* __right_value1273 = (void*)0;
struct sFun* __dec_obj378;
struct sFunNode* __result438__;
    if(    self==(void*)0) {
        __result437__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result437__;
    }
    result_1242=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1242->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj377=result_1242->sname;
        result_1242->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj378=result_1242->mFun;
        result_1242->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj378,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result438__ = gComeFunResultObject = __result_obj__ = result_1242;
    /*i*/come_call_finalizer3(result_1242,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result438__;
}

