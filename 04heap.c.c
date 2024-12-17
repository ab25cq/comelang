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
int gRightValueNum=0;
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
void free_objects_of_match_lv_tables(struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3641, "buffer"))));
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
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3648, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3657, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3664, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3671, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3678, "buffer"))));
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
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3685, "buffer"))));
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
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4013, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4018, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4023, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4028, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4033, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4068, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4073, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4075, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4080, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4082, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4087, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4089, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4094, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4096, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4101, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4103, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4108, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4110, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
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
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4115, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4120, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4125, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4130, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4135, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4140, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4145, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4150, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4155, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4160, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4165, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4170, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4175, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4180, "vector$1double")),len,self)));
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
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1135, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1145, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1155, "list_item$1char"))));
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
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1135, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1145, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1155, "list_item$1charp"))));
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
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1135, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1145, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1155, "list_item$1short"))));
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
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1135, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1145, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1155, "list_item$1int"))));
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
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1135, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1145, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1155, "list_item$1long"))));
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
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1135, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1145, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1155, "list_item$1float"))));
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
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1135, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1145, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1155, "list_item$1double"))));
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
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1929, "char")));
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
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1929, "char*")));
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
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1929, "short")));
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
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1929, "int")));
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
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1929, "long")));
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
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1929, "float")));
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
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1929, "double")));
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
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1135, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1145, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1155, "list_item$1charph"))));
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_271;
struct list$1sRightValueObjectph* o2_saved_272;
struct sRightValueObject* it2_275;
char* __dec_obj56;
void* __right_value280 = (void*)0;
char* __dec_obj57;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_271=right_value->right_value_objects;
        for(        o2_saved_272=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_275=list$1sRightValueObjectph_begin((o2_saved_272));        !list$1sRightValueObjectph_end((o2_saved_272));        it2_275=list$1sRightValueObjectph_next((o2_saved_272))        ){
            if(            it_271->mID==it2_275->mID) {
                it2_275->mStored=(_Bool)1;
                break;
            }
        }
        /*i*/come_call_finalizer3(o2_saved_272,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj56=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj57=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_273;
struct sRightValueObject* __result223__;
struct sRightValueObject* __result224__;
struct sRightValueObject* result_274;
struct sRightValueObject* __result225__;
result_273 = (void*)0;
result_274 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_273,0,sizeof(struct sRightValueObject*));
        __result223__ = gComeFunResultObject = __result_obj__ = result_273;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    self->it=self->head;
    if(    self->it) {
        __result224__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    memset(&result_274,0,sizeof(struct sRightValueObject*));
    __result225__ = gComeFunResultObject = __result_obj__ = result_274;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_276;
struct sRightValueObject* __result226__;
struct sRightValueObject* __result227__;
struct sRightValueObject* result_277;
struct sRightValueObject* __result228__;
result_276 = (void*)0;
result_277 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_276,0,sizeof(struct sRightValueObject*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_276;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_277,0,sizeof(struct sRightValueObject*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_277;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_278;
struct list_item$1sRightValueObjectph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*i*/come_call_finalizer3(prev_it_279,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            come_call_finalizer3(__dec_obj32,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj33;
char* __dec_obj54;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj33=self->mType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj54=self->mVarName;
            /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj55=self->mFunName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
char* __dec_obj38;
struct list$1sTypeph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj36=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj47=self->mAlignas;
            /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj48=self->mChannelType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            /*G*/ __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj52=self->mAsmName;
            /*G*/ __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj53=self->mTupleName;
            /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        /*i*/come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_282;
struct list_item$1sTypeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*i*/come_call_finalizer3(prev_it_283,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_284;
struct list_item$1sNodeph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*i*/come_call_finalizer3(prev_it_285,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            /* U1 */ if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_286;
struct list_item$1sNodeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        /*i*/come_call_finalizer3(prev_it_287,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_288;
struct list_item$1charph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        /*i*/come_call_finalizer3(prev_it_289,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj49;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj49=self->v1;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct sType* result_290;
struct sType* __result246__;
struct sType* __result247__;
struct sClass* klass_309;
void* __right_value318 = (void*)0;
struct sType* result_type_310;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
struct list$1sTypeph* o2_saved_313;
struct sType* it_316;
void* __right_value321 = (void*)0;
struct sType* new_param_type_319;
int generics_number_323;
struct list$1sNodeph* array_num_324;
_Bool immutable__325;
int pointer_num_326;
_Bool heap_327;
_Bool exception__328;
_Bool guard__329;
_Bool no_heap_330;
_Bool no_calling_destructor_331;
_Bool null_value_332;
void* __right_value325 = (void*)0;
struct sType* __dec_obj88;
struct list$1sNodeph* __dec_obj89;
int generics_number_336;
struct sClass* klass2_337;
int generics_number2_338;
struct list$1sNodeph* array_num_339;
_Bool immutable__340;
int pointer_num_341;
_Bool heap_342;
_Bool guard__343;
_Bool no_heap_344;
_Bool no_calling_destructor_345;
_Bool null_value_346;
_Bool record__347;
_Bool multiple_types_348;
_Bool exception__349;
void* __right_value326 = (void*)0;
struct sType* __dec_obj90;
struct list$1sNodeph* __dec_obj91;
struct list$1sTypeph* o2_saved_350;
struct sType* it_351;
void* __right_value327 = (void*)0;
struct sType* type_352;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* new_name_353;
struct sType* __result259__;
    result_290=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)) {
        __result246__ = gComeFunResultObject = __result_obj__ = result_290;
        /*i*/come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result247__ = gComeFunResultObject = __result_obj__ = result_290;
        /*i*/come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    klass_309=type->mClass;
    if(    string_operator_equals(klass_309->mName,"lambda")) {
        result_type_310=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj84=result_290->mResultType;
        result_290->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 38, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_310)));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(result_290->mParamTypes);
        for(        o2_saved_313=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_316=list$1sTypeph_begin((o2_saved_313));        !list$1sTypeph_end((o2_saved_313));        it_316=list$1sTypeph_next((o2_saved_313))        ){
            new_param_type_319=(struct sType*)come_increment_ref_count(solve_generics(it_316,generics_type,info));
            list$1sTypeph_push_back(result_290->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_319));
            /*i*/come_call_finalizer3(new_param_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_313,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_309->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_323=klass_309->mMethodGenericsNum;
        if(        generics_number_323>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_323,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_324=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__325=type->mImmutable;
        pointer_num_326=type->mPointerNum;
        heap_327=type->mHeap;
        exception__328=type->mException;
        guard__329=type->mGuardValue;
        no_heap_330=type->mNoHeap;
        no_calling_destructor_331=type->mNoCallingDestructor;
        null_value_332=type->mNullValue;
        __dec_obj88=result_290;
        result_290=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_323), "04heap.c", 68, 0))));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        heap_327) {
            result_290->mHeap=heap_327;
        }
        if(        guard__329) {
            result_290->mGuardValue=guard__329;
        }
        if(        no_heap_330) {
            result_290->mNoHeap=(_Bool)1;
            result_290->mHeap=(_Bool)0;
        }
        if(        exception__328) {
            result_290->mException=(_Bool)1;
        }
        if(        no_calling_destructor_331) {
            result_290->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__325) {
            result_290->mImmutable=immutable__325;
        }
        if(        list$1sNodeph_length(array_num_324)>0) {
            __dec_obj89=result_290->mArrayNum;
            result_290->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_324);
            come_call_finalizer3(__dec_obj89,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_332) {
            result_290->mNullValue=null_value_332;
        }
        if(        pointer_num_326>0) {
            result_290->mPointerNum+=pointer_num_326;
        }
        /*i*/come_call_finalizer3(array_num_324,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_309->mGenerics) {
        generics_number_336=klass_309->mGenericsNum;
        if(        generics_number_336>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2_337=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_336), "04heap.c", 110, 1))->mClass;
        generics_number2_338=klass2_337->mGenericsNum;
        if(        generics_number_336!=generics_number2_338) {
            array_num_339=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__340=type->mImmutable;
            pointer_num_341=type->mPointerNum;
            heap_342=type->mHeap;
            guard__343=type->mGuardValue;
            no_heap_344=type->mNoHeap;
            no_calling_destructor_345=type->mNoCallingDestructor;
            null_value_346=type->mNullValue;
            record__347=type->mRecord;
            multiple_types_348=type->mMultipleTypes;
            exception__349=type->mException;
            __dec_obj90=result_290;
            result_290=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_336), "04heap.c", 129, 2))));
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            heap_342) {
                result_290->mHeap=heap_342;
            }
            if(            exception__349) {
                result_290->mException=exception__349;
            }
            if(            guard__343) {
                result_290->mGuardValue=guard__343;
            }
            if(            record__347) {
                result_290->mRecord=record__347;
            }
            if(            no_heap_344) {
                result_290->mNoHeap=(_Bool)1;
                result_290->mHeap=(_Bool)0;
            }
            if(            multiple_types_348) {
                result_290->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_345) {
                result_290->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__340) {
                result_290->mImmutable=immutable__340;
            }
            if(            list$1sNodeph_length(array_num_339)>0) {
                __dec_obj91=result_290->mArrayNum;
                result_290->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_339);
                come_call_finalizer3(__dec_obj91,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            null_value_346) {
                result_290->mNullValue=null_value_346;
            }
            if(            pointer_num_341>0) {
                result_290->mPointerNum+=pointer_num_341;
            }
            /*i*/come_call_finalizer3(array_num_339,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1sTypeph_reset(result_290->mGenericsTypes);
        for(        o2_saved_350=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_351=list$1sTypeph_begin((o2_saved_350));        !list$1sTypeph_end((o2_saved_350));        it_351=list$1sTypeph_next((o2_saved_350))        ){
            type_352=(struct sType*)come_increment_ref_count(solve_generics(it_351,generics_type,info));
            list$1sTypeph_push_back(result_290->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(type_352)));
            /*i*/come_call_finalizer3(type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_350,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_290,generics_type,info)) {
            new_name_353=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_353);
            exit(1);
            /* U13 */new_name_353 = come_decrement_ref_count2(new_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_290;
    /*i*/come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value281 = (void*)0;
struct sType* result_291;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value285 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value286 = (void*)0;
char* __dec_obj62;
void* __right_value293 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value301 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value302 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value309 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value310 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value312 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value314 = (void*)0;
char* __dec_obj80;
void* __right_value315 = (void*)0;
char* __dec_obj81;
void* __right_value316 = (void*)0;
char* __dec_obj82;
struct sType* __result245__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_291=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_291->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_291->mNoSolvedGenericsType;
        result_291->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_291->mOriginalLoadVarType;
        result_291->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_291->mGenericsName;
        result_291->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_291->mGenericsTypes;
        result_291->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_291->mArrayNum;
        result_291->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_291->mParamTypes;
        result_291->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_291->mParamNames;
        result_291->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_291->mResultType;
        result_291->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_291->mAlignas;
        result_291->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_291->mChannelType;
        result_291->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_291->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_291->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_291->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_291->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_291->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_291->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_291->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_291->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_291->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_291->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_291->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_291->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_291->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_291->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_291->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_291->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_291->mSizeNum;
        result_291->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_291->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_291->mOriginalTypeName;
        result_291->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_291->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_291->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_291->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_291->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_291->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_291->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_291->mAsmName;
        result_291->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_291->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_291->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_291->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_291->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_291->mTupleName;
        result_291->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_291;
    /*i*/come_call_finalizer3(result_291,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result230__;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* result_292;
void* __right_value283 = (void*)0;
struct sType* __dec_obj58;
struct tuple1$1sTypeph* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_292=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj58=result_292->v1;
        result_292->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_292;
    /*i*/come_call_finalizer3(result_292,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result232__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1sTypeph* result_293;
struct list_item$1sTypeph* it_294;
void* __right_value292 = (void*)0;
struct list$1sTypeph* __result235__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_293=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1051, "list$1sTypeph"))));
    it_294=self->head;
    while(it_294!=((void*)0)) {
        list$1sTypeph_add(result_293,(struct sType*)come_increment_ref_count(sType_clone(it_294->item)));
        it_294=it_294->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_293;
    /*i*/come_call_finalizer3(result_293,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1sTypeph* litem_295;
struct sType* __dec_obj63;
void* __right_value290 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj64;
void* __right_value291 = (void*)0;
struct list_item$1sTypeph* litem_297;
struct sType* __dec_obj65;
struct list$1sTypeph* __result234__;
    if(    self->len==0) {
        litem_295=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1065, "list_item$1sTypeph"))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj63=litem_295->item;
        litem_295->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1075, "list_item$1sTypeph"))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj64=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value291=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1085, "list_item$1sTypeph"))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj65=litem_297->item;
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNodeph* result_298;
struct list_item$1sNodeph* it_299;
void* __right_value300 = (void*)0;
struct list$1sNodeph* __result241__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_298=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1051, "list$1sNodeph"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1sNodeph_add(result_298,(struct sNode*)come_increment_ref_count(sNode_clone(it_299->item)));
        it_299=it_299->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_298;
    /*i*/come_call_finalizer3(result_298,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj67;
void* __right_value297 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj68;
void* __right_value298 = (void*)0;
struct list_item$1sNodeph* litem_302;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result238__;
    if(    self->len==0) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1065, "list_item$1sNodeph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj67=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value297=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1075, "list_item$1sNodeph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj68=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value298=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1085, "list_item$1sNodeph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj69=litem_302->item;
        litem_302->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result239__;
void* __right_value299 = (void*)0;
struct sNode* result_303;
struct sNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_303=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_303->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_303->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_303->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_303->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_303->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_303->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_303->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_303->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_303->kind=self->kind;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_303;
    if(result_303) { result_303 = come_decrement_ref_count2(result_303, ((struct sNode*)result_303)->finalize, ((struct sNode*)result_303)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1charph* result_304;
struct list_item$1charph* it_305;
void* __right_value308 = (void*)0;
struct list$1charph* __result244__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1051, "list$1charph"))));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        list$1charph_add(result_304,(char*)come_increment_ref_count(string_clone(it_305->item)));
        it_305=it_305->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_304;
    /*i*/come_call_finalizer3(result_304,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj72;
void* __right_value306 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj73;
void* __right_value307 = (void*)0;
struct list_item$1charph* litem_308;
char* __dec_obj74;
struct list$1charph* __result243__;
    if(    self->len==0) {
        litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1065, "list_item$1charph"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj72=litem_306->item;
        litem_306->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value306=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1075, "list_item$1charph"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj73=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value307=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1085, "list_item$1charph"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj74=litem_308->item;
        litem_308->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj83;
struct tuple1$1sTypeph* __result248__;
    __dec_obj83=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_311;
struct list_item$1sTypeph* prev_it_312;
struct list$1sTypeph* __result249__;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        /*i*/come_call_finalizer3(prev_it_312,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_314;
struct sType* __result250__;
struct sType* __result251__;
struct sType* result_315;
struct sType* __result252__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(struct sType*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->head;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_315,0,sizeof(struct sType*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_317;
struct sType* __result253__;
struct sType* __result254__;
struct sType* result_318;
struct sType* __result255__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(struct sType*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_318,0,sizeof(struct sType*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
struct list_item$1sTypeph* litem_320;
struct sType* __dec_obj85;
void* __right_value323 = (void*)0;
struct list_item$1sTypeph* litem_321;
struct sType* __dec_obj86;
void* __right_value324 = (void*)0;
struct list_item$1sTypeph* litem_322;
struct sType* __dec_obj87;
struct list$1sTypeph* __result256__;
    if(    self->len==0) {
        litem_320=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value322=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1135, "list_item$1sTypeph"))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj85=litem_320->item;
        litem_320->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else if(    self->len==1) {
        litem_321=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value323=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1145, "list_item$1sTypeph"))));
        litem_321->prev=self->head;
        litem_321->next=((void*)0);
        __dec_obj86=litem_321->item;
        litem_321->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head->next=litem_321;
    }
    else {
        litem_322=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value324=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1155, "list_item$1sTypeph"))));
        litem_322->prev=self->tail;
        litem_322->next=((void*)0);
        __dec_obj87=litem_322->item;
        litem_322->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_322;
        self->tail=litem_322;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_333;
int i_334;
struct sType* __result257__;
struct sType* default_value_335;
struct sType* __result258__;
default_value_335 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_333=self->head;
    i_334=0;
    while(it_333!=((void*)0)) {
        if(        position==i_334) {
            __result257__ = gComeFunResultObject = __result_obj__ = it_333->item;
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
        it_333=it_333->next;
        i_334++;
    }
    memset(&default_value_335,0,sizeof(struct sType*));
    __result258__ = gComeFunResultObject = __result_obj__ = default_value_335;
    /*i*/come_call_finalizer3(default_value_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
struct sType* result_354;
struct sClass* klass_355;
int generics_number_356;
struct list$1sNodeph* array_num_357;
_Bool immutable__358;
int pointer_num_359;
_Bool heap_360;
_Bool guard__361;
_Bool no_heap_362;
_Bool no_calling_destructor_363;
_Bool null_value_364;
_Bool exception__365;
void* __right_value331 = (void*)0;
struct sType* __dec_obj92;
struct list$1sNodeph* __dec_obj93;
int i_366;
struct list$1sTypeph* o2_saved_367;
struct sType* it_368;
void* __right_value332 = (void*)0;
struct list$1sTypeph* o2_saved_374;
struct sType* it_375;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* __dec_obj95;
struct sType* __result263__;
    result_354=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_355=type->mClass;
    if(    klass_355->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_356=klass_355->mMethodGenericsNum;
        if(        generics_number_356>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_356,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_357=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__358=type->mImmutable;
        pointer_num_359=type->mPointerNum;
        heap_360=type->mHeap;
        guard__361=type->mGuardValue;
        no_heap_362=type->mNoHeap;
        no_calling_destructor_363=type->mNoCallingDestructor;
        null_value_364=type->mNullValue;
        exception__365=type->mException;
        __dec_obj92=result_354;
        result_354=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_356), "04heap.c", 213, 3))));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        heap_360) {
            result_354->mHeap=heap_360||result_354->mHeap;
        }
        if(        exception__365) {
            result_354->mException=exception__365;
        }
        if(        guard__361) {
            result_354->mGuardValue=guard__361||result_354->mGuardValue;
        }
        if(        no_heap_362) {
            result_354->mNoHeap=(_Bool)1;
            result_354->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_363) {
            result_354->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__358) {
            result_354->mImmutable=immutable__358;
        }
        if(        list$1sNodeph_length(array_num_357)>0) {
            __dec_obj93=result_354->mArrayNum;
            result_354->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_357);
            come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_364) {
            result_354->mNullValue=null_value_364;
        }
        if(        pointer_num_359>0) {
            result_354->mPointerNum+=pointer_num_359;
        }
        /*i*/come_call_finalizer3(array_num_357,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_366=0;
    for(    o2_saved_367=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_368=list$1sTypeph_begin((o2_saved_367));    !list$1sTypeph_end((o2_saved_367));    it_368=list$1sTypeph_next((o2_saved_367))    ){
        list$1sTypephp_operator_store_element(result_354->mGenericsTypes,i_366,(struct sType*)come_increment_ref_count(solve_method_generics(it_368,info)));
        i_366++;
    }
    /*i*/come_call_finalizer3(o2_saved_367,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    i_366=0;
    for(    o2_saved_374=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_375=list$1sTypeph_begin((o2_saved_374));    !list$1sTypeph_end((o2_saved_374));    it_375=list$1sTypeph_next((o2_saved_374))    ){
        list$1sTypephp_operator_store_element(result_354->mParamTypes,i_366,(struct sType*)come_increment_ref_count(solve_method_generics(it_375,info)));
        i_366++;
    }
    /*i*/come_call_finalizer3(o2_saved_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj95=result_354->mResultType->v1;
        result_354->mResultType->v1=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType->v1,info));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_354;
    /*i*/come_call_finalizer3(result_354,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result262__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result262__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_369;
int i_370;
struct sType* default_value_371;
struct list$1sTypeph* __result260__;
struct list_item$1sTypeph* it_372;
int i_373;
struct sType* __dec_obj94;
struct list$1sTypeph* __result261__;
default_value_371 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_369=self->len;
        for(        i_370=0;        i_370<position-len_369;        i_370++        ){
            memset(&default_value_371,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_371));
            /*i*/come_call_finalizer3(default_value_371,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result260__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    it_372=self->head;
    i_373=0;
    while(it_372!=((void*)0)) {
        if(        position==i_373) {
            __dec_obj94=it_372->item;
            it_372->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_372=it_372->next;
        i_373++;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
char* __result264__;
void* __right_value336 = (void*)0;
char* __result265__;
void* __right_value337 = (void*)0;
struct sRightValueObject* new_value_376;
struct sType* __dec_obj96;
void* __right_value338 = (void*)0;
char* __dec_obj97;
char* __dec_obj98;
void* __right_value342 = (void*)0;
char* buf_380;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* __result267__;
    if(    gComeGC||gComeC) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value335=__builtin_string(obj)));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    info->no_output_come_code) {
        __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value336=__builtin_string("")));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    new_value_376=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 275, "sRightValueObject"));
    __dec_obj96=new_value_376->mType;
    new_value_376->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_376->mFreed=(_Bool)0;
    new_value_376->mID=gRightValueNum;
    __dec_obj97=new_value_376->mVarName;
    new_value_376->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=new_value_376->mFunName;
    new_value_376->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_376->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_376));
    buf_380=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_380);
    __result267__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value344=xsprintf("((%s)(%s=%s))",((char*)(__right_value343=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_376->mVarName,obj)));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_376,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */buf_380 = come_decrement_ref_count2(buf_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
struct list_item$1sRightValueObjectph* litem_377;
struct sRightValueObject* __dec_obj99;
void* __right_value340 = (void*)0;
struct list_item$1sRightValueObjectph* litem_378;
struct sRightValueObject* __dec_obj100;
void* __right_value341 = (void*)0;
struct list_item$1sRightValueObjectph* litem_379;
struct sRightValueObject* __dec_obj101;
struct list$1sRightValueObjectph* __result266__;
    if(    self->len==0) {
        litem_377=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value339=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1135, "list_item$1sRightValueObjectph"))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj99=litem_377->item;
        litem_377->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value340=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1145, "list_item$1sRightValueObjectph"))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj100=litem_378->item;
        litem_378->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value341=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1155, "list_item$1sRightValueObjectph"))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj101=litem_379->item;
        litem_379->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value345 = (void*)0;
struct sRightValueObject* new_value_381;
struct sType* __dec_obj102;
void* __right_value346 = (void*)0;
char* __dec_obj103;
char* __dec_obj104;
void* __right_value347 = (void*)0;
char* buf_382;
void* __right_value348 = (void*)0;
char* __dec_obj105;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj106;
    if(    gComeGC||gComeC) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_381=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 299, "sRightValueObject"));
    __dec_obj102=new_value_381->mType;
    new_value_381->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_381->mFreed=(_Bool)0;
    new_value_381->mID=gRightValueNum;
    __dec_obj103=new_value_381->mVarName;
    new_value_381->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj104=new_value_381->mFunName;
    new_value_381->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_381->mBlockLevel=info->block_level;
    new_value_381->mDecrementRefCount=decrement_ref_count;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_381));
    buf_382=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_382);
    __dec_obj105=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(come_value->c_value));
    /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value349=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_381->mVarName,come_value->c_value));
    /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_381;
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_381,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */buf_382 = come_decrement_ref_count2(buf_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_383;
struct list$1sRightValueObjectph* o2_saved_384;
struct sRightValueObject* it_385;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_383=0;
    for(    o2_saved_384=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_385=list$1sRightValueObjectph_begin((o2_saved_384));    !list$1sRightValueObjectph_end((o2_saved_384));    it_385=list$1sRightValueObjectph_next((o2_saved_384))    ){
        if(        it_385->mID==right_value_num) {
            break;
        }
        i_383++;
    }
    /*i*/come_call_finalizer3(o2_saved_384,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_383,i_383+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_386;
struct list$1sRightValueObjectph* __result268__;
struct list_item$1sRightValueObjectph* it_389;
int i_390;
struct list_item$1sRightValueObjectph* prev_it_391;
struct list_item$1sRightValueObjectph* it_392;
int i_393;
struct list_item$1sRightValueObjectph* prev_it_394;
struct list_item$1sRightValueObjectph* it_395;
struct list_item$1sRightValueObjectph* head_prev_it_396;
struct list_item$1sRightValueObjectph* tail_it_397;
int i_398;
struct list_item$1sRightValueObjectph* prev_it_399;
struct list$1sRightValueObjectph* __result270__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_386=tail;
        tail=head;
        head=tmp_386;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result268__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    if(    head==0&&tail==self->len) {
        list$1sRightValueObjectph_reset(self);
    }
    else if(    head==0) {
        it_389=self->head;
        i_390=0;
        while(it_389!=((void*)0)) {
            if(            i_390<tail) {
                prev_it_391=it_389;
                it_389=it_389->next;
                i_390++;
                /*i*/come_call_finalizer3(prev_it_391,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_390==tail) {
                self->head=it_389;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_389=it_389->next;
                i_390++;
            }
        }
    }
    else if(    tail==self->len) {
        it_392=self->head;
        i_393=0;
        while(it_392!=((void*)0)) {
            if(            i_393==head) {
                self->tail=it_392->prev;
                self->tail->next=((void*)0);
            }
            if(            i_393>=head) {
                prev_it_394=it_392;
                it_392=it_392->next;
                i_393++;
                /*i*/come_call_finalizer3(prev_it_394,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_392=it_392->next;
                i_393++;
            }
        }
    }
    else {
        it_395=self->head;
        head_prev_it_396=((void*)0);
        tail_it_397=((void*)0);
        i_398=0;
        while(it_395!=((void*)0)) {
            if(            i_398==head) {
                head_prev_it_396=it_395->prev;
            }
            if(            i_398==tail) {
                tail_it_397=it_395;
            }
            if(            i_398>=head&&i_398<tail) {
                prev_it_399=it_395;
                it_395=it_395->next;
                i_398++;
                /*i*/come_call_finalizer3(prev_it_399,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_395=it_395->next;
                i_398++;
            }
        }
        if(        head_prev_it_396!=((void*)0)) {
            head_prev_it_396->next=tail_it_397;
        }
        if(        tail_it_397!=((void*)0)) {
            tail_it_397->prev=head_prev_it_396;
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_387;
struct list_item$1sRightValueObjectph* prev_it_388;
struct list$1sRightValueObjectph* __result269__;
    it_387=self->head;
    while(it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        /*i*/come_call_finalizer3(prev_it_388,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
char* __result271__;
void* __right_value352 = (void*)0;
char* __result272__;
struct sClass* klass_400;
void* __right_value353 = (void*)0;
char* type_name_401;
void* __right_value354 = (void*)0;
char* __result273__;
    if(    gComeGC||gComeC) {
        __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=__builtin_string(obj)));
        /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    if(    info->no_output_come_code) {
        __result272__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string(obj)));
        /* U11 */__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    klass_400=type->mClass;
    type_name_401=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=xsprintf("(%s)come_increment_ref_count(%s)",type_name_401,obj)));
    /* U13 */type_name_401 = come_decrement_ref_count2(type_name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_402;
struct list$1sRightValueObjectph* right_value_objects_403;
struct sClass* klass_404;
void* __right_value355 = (void*)0;
char* name_406;
void* __right_value356 = (void*)0;
_Bool no_decrement_407;
void* __right_value357 = (void*)0;
char* c_value_408;
struct sClass* klass_409;
char* class_name_410;
char* fun_name_411;
void* __right_value358 = (void*)0;
struct sType* type2_412;
void* __right_value359 = (void*)0;
char* fun_name2_413;
struct sFun* finalizer_414;
void* __right_value360 = (void*)0;
char* none_generics_name_418;
void* __right_value361 = (void*)0;
char* generics_fun_name_419;
struct sGenericsFun* generics_fun_420;
int i_424;
void* __right_value362 = (void*)0;
char* new_fun_name_425;
void* __right_value363 = (void*)0;
char* __dec_obj132;
void* __right_value364 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_426=0;
char* new_fun_name_427=0;
char* __dec_obj134;
void* __right_value365 = (void*)0;
char* type_name_428;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* type_name_429;
void* __right_value368 = (void*)0;
char* str_430;
void* __right_value369 = (void*)0;
char* str_431;
struct list$1sRightValueObjectph* __dec_obj135;
struct list$1CVALUEph* __dec_obj136;
memset(&i_424, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_402=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_403=info->right_value_objects;
    klass_404=type->mClass;
    static int dec_num_405=0;
    name_406=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_405));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value356=make_define_var(type,name_406,(_Bool)0,info))));
    /* U11 */__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_406,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_406,obj);
    }
    obj=name_406;
    no_decrement_407=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_408=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_409=type->mClass;
        class_name_410=klass_409->mName;
        fun_name_411="finalize";
        type2_412=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_412->mHeap=(_Bool)0;
        fun_name2_413=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_411,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_414=((void*)0);
        if(        list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_414=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_413);
            if(            finalizer_414==((void*)0)) {
                none_generics_name_418=(char*)come_increment_ref_count(get_none_generics_name(type2_412->mClass->mName));
                generics_fun_name_419=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_418,fun_name_411));
                generics_fun_420=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_419);
                if(                generics_fun_420) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_413),generics_fun_420,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_414=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_413);
                }
                /* U13 */none_generics_name_418 = come_decrement_ref_count2(none_generics_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */generics_fun_name_419 = come_decrement_ref_count2(generics_fun_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_424=128-1;            i_424>=1;            i_424--            ){
                new_fun_name_425=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_413,i_424));
                finalizer_414=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_425);
                if(                finalizer_414) {
                    __dec_obj132=fun_name2_413;
                    fun_name2_413=(char*)come_increment_ref_count(__builtin_string(new_fun_name_425));
                    /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_425 = come_decrement_ref_count2(new_fun_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_425 = come_decrement_ref_count2(new_fun_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_414==((void*)0)) {
                finalizer_414=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_413);
            }
        }
        if(        finalizer_414==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value364=create_finalizer_automatically(type,fun_name_411,info)));
            fun_426=multiple_assign_var1->v1;
            new_fun_name_427=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*g*/come_call_finalizer3(__right_value364,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj134=fun_name2_413;
            fun_name2_413=(char*)come_increment_ref_count(new_fun_name_427);
            /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_414=fun_426;
            /* U13 */new_fun_name_427 = come_decrement_ref_count2(new_fun_name_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_414!=((void*)0)) {
            if(            klass_409->mProtocol&&type->mPointerNum==1) {
                type_name_428=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_408) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0)",fun_name2_413,c_value_408,type_name_428,c_value_408,type_name_428,c_value_408,type->mAllocaValue,no_decrement_407,no_free,force_delete_);
                }
                /* U13 */type_name_428 = come_decrement_ref_count2(type_name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_408) {
                    add_come_last_code2(info,((char*)(__right_value366=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0)",c_value_408,fun_name2_413,type->mAllocaValue,no_decrement_407,no_free,force_delete_))));
                    /* U11 */__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(            klass_409->mProtocol&&type->mPointerNum==1) {
                type_name_429=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_430=(char*)come_increment_ref_count(xsprintf("/* U1 */ if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }",name_406,name_406,name_406,type_name_429,name_406,type_name_429,name_406));
                add_come_last_code2(info,str_430);
                /* U13 */type_name_429 = come_decrement_ref_count2(type_name_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_430 = come_decrement_ref_count2(str_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_431=(char*)come_increment_ref_count(xsprintf("/*G*/ %s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0)",name_406,name_406));
                add_come_last_code2(info,str_431);
                /* U13 */str_431 = come_decrement_ref_count2(str_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        /* U13 */c_value_408 = come_decrement_ref_count2(c_value_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name2_413 = come_decrement_ref_count2(fun_name2_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj135=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_403);
    come_call_finalizer3(__dec_obj135,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj136=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_402);
    come_call_finalizer3(__dec_obj136,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_402,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name_406 = come_decrement_ref_count2(name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_415;
unsigned int hash_416;
unsigned int it_417;
struct sFun* __result274__;
struct sFun* __result275__;
struct sFun* __result276__;
struct sFun* __result277__;
default_value_415 = (void*)0;
    memset(&default_value_415,0,sizeof(struct sFun*));
    hash_416=string_get_hash_key(((char*)key))%self->size;
    it_417=hash_416;
    while((_Bool)1) {
        if(        self->item_existance[it_417]) {
            if(            string_equals(self->keys[it_417],key)) {
                __result274__ = gComeFunResultObject = __result_obj__ = self->items[it_417];
                /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
            it_417++;
            if(            it_417>=self->size) {
                it_417=0;
            }
            else if(            it_417==hash_416) {
                __result275__ = gComeFunResultObject = __result_obj__ = default_value_415;
                /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
        }
        else {
            __result276__ = gComeFunResultObject = __result_obj__ = default_value_415;
            /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = default_value_415;
    /*i*/come_call_finalizer3(default_value_415,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj107;
struct sType* __dec_obj108;
struct list$1sTypeph* __dec_obj109;
struct list$1charph* __dec_obj110;
struct list$1charph* __dec_obj111;
struct sType* __dec_obj112;
struct sBlock* __dec_obj113;
struct buffer* __dec_obj116;
struct buffer* __dec_obj117;
struct buffer* __dec_obj118;
struct buffer* __dec_obj119;
char* __dec_obj120;
char* __dec_obj121;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj107=self->mName;
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj108=self->mResultType;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj109=self->mParamTypes;
            come_call_finalizer3(__dec_obj109,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj110=self->mParamNames;
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj111=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj112=self->mLambdaType;
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj113=self->mBlock;
            come_call_finalizer3(__dec_obj113,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj116=self->mSource;
            come_call_finalizer3(__dec_obj116,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj117=self->mSourceHead;
            come_call_finalizer3(__dec_obj117,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj118=self->mSourceHead2;
            come_call_finalizer3(__dec_obj118,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj119=self->mSourceDefer;
            come_call_finalizer3(__dec_obj119,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj120=self->mComeHeader;
            /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj121=self->mDeclareSName;
            /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj114;
struct sVarTable* __dec_obj115;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj114=self->mNodes;
            come_call_finalizer3(__dec_obj114,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj115=self->mVarTable;
            come_call_finalizer3(__dec_obj115,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_421;
unsigned int hash_422;
unsigned int it_423;
struct sGenericsFun* __result278__;
struct sGenericsFun* __result279__;
struct sGenericsFun* __result280__;
struct sGenericsFun* __result281__;
default_value_421 = (void*)0;
    memset(&default_value_421,0,sizeof(struct sGenericsFun*));
    hash_422=string_get_hash_key(((char*)key))%self->size;
    it_423=hash_422;
    while((_Bool)1) {
        if(        self->item_existance[it_423]) {
            if(            string_equals(self->keys[it_423],key)) {
                __result278__ = gComeFunResultObject = __result_obj__ = self->items[it_423];
                /*i*/come_call_finalizer3(default_value_421,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
            it_423++;
            if(            it_423>=self->size) {
                it_423=0;
            }
            else if(            it_423==hash_422) {
                __result279__ = gComeFunResultObject = __result_obj__ = default_value_421;
                /*i*/come_call_finalizer3(default_value_421,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
        }
        else {
            __result280__ = gComeFunResultObject = __result_obj__ = default_value_421;
            /*i*/come_call_finalizer3(default_value_421,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
    }
    __result281__ = gComeFunResultObject = __result_obj__ = default_value_421;
    /*i*/come_call_finalizer3(default_value_421,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj122;
struct list$1charph* __dec_obj123;
struct list$1charph* __dec_obj124;
char* __dec_obj125;
struct sType* __dec_obj126;
struct list$1sTypeph* __dec_obj127;
struct list$1charph* __dec_obj128;
struct list$1charph* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj122=self->mImplType;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj123=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj124=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj125=self->mName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj126=self->mResultType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj127=self->mParamTypes;
            come_call_finalizer3(__dec_obj127,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj128=self->mParamNames;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj129=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj130=self->mBlock;
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj131=self->mGenericsSName;
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj133=self->v2;
            /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_432;
struct list_item$1sRightValueObjectph* prev_it_433;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        /*i*/come_call_finalizer3(prev_it_433,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_434;
struct list_item$1CVALUEph* prev_it_435;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        /*i*/come_call_finalizer3(prev_it_435,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj138;
struct sType* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj138=self->c_value;
            /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj139=self->type;
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj140=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_436;
struct list_item$1CVALUEph* prev_it_437;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        /*i*/come_call_finalizer3(prev_it_437,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_438;
struct list$1sRightValueObjectph* right_value_objects_439;
struct sType* type_before_440;
_Bool alloca_value_441;
void* __right_value370 = (void*)0;
char* c_value_442;
struct sClass* klass_443;
char* class_name_444;
char* fun_name_445;
void* __right_value371 = (void*)0;
struct sType* type2_446;
void* __right_value372 = (void*)0;
char* fun_name2_447;
struct sFun* finalizer_448;
void* __right_value373 = (void*)0;
char* none_generics_name_449;
void* __right_value374 = (void*)0;
char* generics_fun_name_450;
struct sGenericsFun* generics_fun_451;
int i_452;
void* __right_value375 = (void*)0;
char* new_fun_name_453;
void* __right_value376 = (void*)0;
char* __dec_obj141;
void* __right_value377 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_454=0;
char* new_fun_name_455=0;
char* __dec_obj142;
void* __right_value378 = (void*)0;
char* type_name_456;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_457;
struct tuple2$2charphsTypeph* it_460;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_463=0;
struct sType* field_type_464=0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* obj_465;
struct list$1tuple2$2charphsTypephph* o2_saved_468;
struct tuple2$2charphsTypeph* it_469;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* name_470=0;
struct sType* field_type_471=0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
char* obj_472;
void* __right_value387 = (void*)0;
char* type_name_473;
struct list$1sRightValueObjectph* __dec_obj146;
struct list$1CVALUEph* __dec_obj147;
memset(&i_452, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_438=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_439=info->right_value_objects;
    type_before_440=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType->v1) {
        alloca_value_441=type->mAllocaValue;
        type=type->mNoSolvedGenericsType->v1;
        type->mAllocaValue=alloca_value_441;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        c_value_442=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_443=type->mClass;
        class_name_444=klass_443->mName;
        fun_name_445="finalize";
        type2_446=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_446->mHeap=(_Bool)0;
        fun_name2_447=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_445,info,(_Bool)1));
        finalizer_448=((void*)0);
        if(        list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_448=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_447);
            if(            finalizer_448==((void*)0)) {
                none_generics_name_449=(char*)come_increment_ref_count(get_none_generics_name(type2_446->mClass->mName));
                generics_fun_name_450=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_449,fun_name_445));
                generics_fun_451=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_450);
                if(                generics_fun_451) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_447),generics_fun_451,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_448=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_447);
                }
                /* U13 */none_generics_name_449 = come_decrement_ref_count2(none_generics_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */generics_fun_name_450 = come_decrement_ref_count2(generics_fun_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_452=128-1;            i_452>=1;            i_452--            ){
                new_fun_name_453=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_447,i_452));
                finalizer_448=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_453);
                if(                finalizer_448) {
                    __dec_obj141=fun_name2_447;
                    fun_name2_447=(char*)come_increment_ref_count(__builtin_string(new_fun_name_453));
                    /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_453 = come_decrement_ref_count2(new_fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_453 = come_decrement_ref_count2(new_fun_name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_448==((void*)0)) {
                finalizer_448=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_447);
            }
        }
        if(        finalizer_448==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value377=create_finalizer_automatically(type,fun_name_445,info)));
            fun_454=multiple_assign_var2->v1;
            new_fun_name_455=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            /*g*/come_call_finalizer3(__right_value377,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj142=fun_name2_447;
            fun_name2_447=(char*)come_increment_ref_count(new_fun_name_455);
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_448=fun_454;
            /* U13 */new_fun_name_455 = come_decrement_ref_count2(new_fun_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_448!=((void*)0)) {
            if(            klass_443->mProtocol&&type->mPointerNum==1) {
                type_name_456=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_442) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_447,c_value_442,type_name_456,c_value_442,type_name_456,c_value_442,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                        }
                        else {
                            add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_447,c_value_442,type_name_456,c_value_442,type_name_456,c_value_442,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_447,c_value_442,type_name_456,c_value_442,type_name_456,c_value_442,type->mAllocaValue,no_decrement,no_free,force_delete_);
                        }
                        else {
                            add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_447,c_value_442,type_name_456,c_value_442,type_name_456,c_value_442,type->mAllocaValue,no_decrement,no_free,force_delete_);
                        }
                    }
                }
                /* U13 */type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_442) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value379=xsprintf("/*f*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_442,fun_name2_447,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            /* U11 */__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value380=xsprintf("/*g*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_442,fun_name2_447,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            /* U11 */__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value381=xsprintf("/*h*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_442,fun_name2_447,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value382=xsprintf("/*i*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_442,fun_name2_447,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        else {
            if(            klass_443->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_457=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_443->mFields)),it_460=list$1tuple2$2charphsTypephph_begin((o2_saved_457));                !list$1tuple2$2charphsTypephph_end((o2_saved_457));                it_460=list$1tuple2$2charphsTypephph_next((o2_saved_457))                ){
                    multiple_assign_var3=it_460;
                    name_463=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    field_type_464=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                    if(                    field_type_464->mHeap&&field_type_464->mPointerNum>0) {
                        obj_465=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value383=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_442,name_463));
                        /* U11 */__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_464,obj_465,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /* U13 */obj_465 = come_decrement_ref_count2(obj_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    /* U13 */name_463 = come_decrement_ref_count2(name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_457,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_443->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_468=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_443->mFields)),it_469=list$1tuple2$2charphsTypephph_begin((o2_saved_468));                !list$1tuple2$2charphsTypephph_end((o2_saved_468));                it_469=list$1tuple2$2charphsTypephph_next((o2_saved_468))                ){
                    multiple_assign_var4=it_469;
                    name_470=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type_471=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    field_type_471->mHeap&&field_type_471->mPointerNum>0) {
                        obj_472=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value385=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_442,name_470));
                        /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_471,obj_472,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /* U13 */obj_472 = come_decrement_ref_count2(obj_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    /* U13 */name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_468,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                klass_443->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_442) {
                        type_name_473=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_442,c_value_442,c_value_442,type_name_473,c_value_442,type_name_473,c_value_442,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                            else {
                                add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_442,c_value_442,c_value_442,type_name_473,c_value_442,type_name_473,c_value_442,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_442,c_value_442,c_value_442,type_name_473,c_value_442,type_name_473,c_value_442,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_442,c_value_442,c_value_442,type_name_473,c_value_442,type_name_473,c_value_442,no_decrement,no_free,force_delete_);
                            }
                        }
                        /* U13 */type_name_473 = come_decrement_ref_count2(type_name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(                    c_value_442) {
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,"/* U10 */ (%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_442,c_value_442,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                            else {
                                add_come_code(info,"/* U11 */%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_442,c_value_442,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,"/* U12 */ (%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_442,c_value_442,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"/* U13 */%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_442,c_value_442,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                }
            }
        }
        /* U13 */c_value_442 = come_decrement_ref_count2(c_value_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name2_447 = come_decrement_ref_count2(fun_name2_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj146=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_439);
    come_call_finalizer3(__dec_obj146,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj147=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_438);
    come_call_finalizer3(__dec_obj147,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_438,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_458;
struct tuple2$2charphsTypeph* __result282__;
struct tuple2$2charphsTypeph* __result283__;
struct tuple2$2charphsTypeph* result_459;
struct tuple2$2charphsTypeph* __result284__;
result_458 = (void*)0;
result_459 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_458,0,sizeof(struct tuple2$2charphsTypeph*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_458;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_459,0,sizeof(struct tuple2$2charphsTypeph*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_459;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_461;
struct tuple2$2charphsTypeph* __result285__;
struct tuple2$2charphsTypeph* __result286__;
struct tuple2$2charphsTypeph* result_462;
struct tuple2$2charphsTypeph* __result287__;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_461,0,sizeof(struct tuple2$2charphsTypeph*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_461;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_462,0,sizeof(struct tuple2$2charphsTypeph*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_462;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_466;
struct list_item$1tuple2$2charphsTypephph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        /*i*/come_call_finalizer3(prev_it_467,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj143;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj143=self->item;
            come_call_finalizer3(__dec_obj143,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj144;
struct sType* __dec_obj145;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj144=self->v1;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj145=self->v2;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_474;
void* __right_value388 = (void*)0;
struct sType* type2_475;
char* result_476;
struct sType* result_type_477;
struct list$1CVALUEph* stack_saved_478;
struct list$1sRightValueObjectph* right_value_objects_479;
void* __right_value389 = (void*)0;
char* c_value_480;
struct sClass* klass_481;
char* class_name_482;
char* fun_name_483;
struct sFun* cloner_484;
char* fun_name2_485;
void* __right_value390 = (void*)0;
char* none_generics_name_486;
void* __right_value391 = (void*)0;
struct sType* obj_type_487;
void* __right_value392 = (void*)0;
char* __dec_obj148;
void* __right_value393 = (void*)0;
char* fun_name3_488;
struct sGenericsFun* generics_fun_489;
void* __right_value394 = (void*)0;
_Bool _if_conditional1;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2sTypephcharph* __result293__;
void* __right_value400 = (void*)0;
char* __dec_obj153;
int i_492;
void* __right_value401 = (void*)0;
char* new_fun_name_493;
void* __right_value402 = (void*)0;
char* __dec_obj154;
void* __right_value403 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_494=0;
char* new_fun_name_495=0;
char* __dec_obj155;
struct sType* __dec_obj156;
void* __right_value404 = (void*)0;
struct sType* __dec_obj157;
void* __right_value405 = (void*)0;
char* __dec_obj158;
void* __right_value406 = (void*)0;
char* __dec_obj159;
void* __right_value407 = (void*)0;
struct sType* __dec_obj160;
void* __right_value408 = (void*)0;
char* type_name_496;
void* __right_value409 = (void*)0;
char* __dec_obj161;
void* __right_value410 = (void*)0;
char* __dec_obj162;
struct list$1sRightValueObjectph* __dec_obj163;
struct list$1CVALUEph* __dec_obj164;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct tuple2$2sTypephcharph* __result294__;
fun_name2_485 = (void*)0;
memset(&i_492, 0, sizeof(int));
    in_clone_object_474=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_475=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_476=((void*)0);
    result_type_477=((void*)0);
    stack_saved_478=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_479=info->right_value_objects;
    c_value_480=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_481=type->mClass;
    class_name_482=klass_481->mName;
    fun_name_483="clone";
    cloner_484=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_486=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_487=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj148=fun_name2_485;
        fun_name2_485=(char*)come_increment_ref_count(create_method_name(obj_type_487,(_Bool)0,fun_name_483,info,(_Bool)1));
        /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_488=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_486,fun_name_483));
        generics_fun_489=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_488,((void*)0));
        if(        generics_fun_489) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_485)),generics_fun_489,obj_type_487,info))),            _if_conditional1) {
                __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value399=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 713, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 713, "sType")),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                /* U13 */none_generics_name_486 = come_decrement_ref_count2(none_generics_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_488 = come_decrement_ref_count2(fun_name3_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_475,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */result_476 = come_decrement_ref_count2(result_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_478,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */c_value_480 = come_decrement_ref_count2(c_value_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_485 = come_decrement_ref_count2(fun_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value399,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
        }
        cloner_484=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_485);
        /* U13 */none_generics_name_486 = come_decrement_ref_count2(none_generics_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_488 = come_decrement_ref_count2(fun_name3_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj153=fun_name2_485;
        fun_name2_485=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_483,info,(_Bool)1));
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_492=128-1;        i_492>=1;        i_492--        ){
            new_fun_name_493=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_485,i_492));
            cloner_484=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_493);
            if(            cloner_484) {
                __dec_obj154=fun_name2_485;
                fun_name2_485=(char*)come_increment_ref_count(__builtin_string(new_fun_name_493));
                /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_493 = come_decrement_ref_count2(new_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_493 = come_decrement_ref_count2(new_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_484==((void*)0)) {
            cloner_484=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_485);
        }
    }
    if(    cloner_484==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value403=create_cloner_automatically(type,fun_name_483,info)));
        fun_494=multiple_assign_var5->v1;
        new_fun_name_495=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        /*g*/come_call_finalizer3(__right_value403,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj155=fun_name2_485;
        fun_name2_485=(char*)come_increment_ref_count(new_fun_name_495);
        /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_484=fun_494;
        /* U13 */new_fun_name_495 = come_decrement_ref_count2(new_fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    cloner_484!=((void*)0)) {
        __dec_obj156=result_type_477;
        result_type_477=(struct sType*)come_increment_ref_count(cloner_484->mResultType);
        come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj157=result_type_477;
        result_type_477=(struct sType*)come_increment_ref_count(solve_generics(result_type_477,type,info));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj158=result_476;
        result_476=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_485,c_value_480));
        /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj159=result_476;
            result_476=(char*)come_increment_ref_count(append_stackframe(result_476,result_type_477,info));
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj160=result_type_477;
        result_type_477=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_475->mHeap=(_Bool)1;
        type_name_496=(char*)come_increment_ref_count(make_type_name_string(type2_475,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj161=result_476;
        result_476=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_496,c_value_480,info->sname,info->sline,type_name_496));
        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj162=result_476;
            result_476=(char*)come_increment_ref_count(append_stackframe(result_476,result_type_477,info));
            /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        /* U13 */type_name_496 = come_decrement_ref_count2(type_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj163=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_479);
    come_call_finalizer3(__dec_obj163,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj164=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_478);
    come_call_finalizer3(__dec_obj164,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_474;
    __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value412=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 772, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_477),(char*)come_increment_ref_count(result_476))));
    /*i*/come_call_finalizer3(type2_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_476 = come_decrement_ref_count2(result_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_478,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */c_value_480 = come_decrement_ref_count2(c_value_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_485 = come_decrement_ref_count2(fun_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value412,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_490;
unsigned int it_491;
struct sGenericsFun* __result288__;
struct sGenericsFun* __result289__;
struct sGenericsFun* __result290__;
struct sGenericsFun* __result291__;
    hash_490=string_get_hash_key(((char*)key))%self->size;
    it_491=hash_490;
    while((_Bool)1) {
        if(        self->item_existance[it_491]) {
            if(            string_equals(self->keys[it_491],key)) {
                __result288__ = gComeFunResultObject = __result_obj__ = self->items[it_491];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
            it_491++;
            if(            it_491>=self->size) {
                it_491=0;
            }
            else if(            it_491==hash_490) {
                __result289__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result289__;
            }
        }
        else {
            __result290__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj149;
char* __dec_obj150;
struct tuple2$2sTypephcharph* __result292__;
    __dec_obj149=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj150=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj151;
char* __dec_obj152;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj151=self->v1;
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj152=self->v2;
            /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_497;
struct list$1CVALUEph* stack_saved_498;
struct list$1sRightValueObjectph* right_value_objects_499;
struct sClass* klass_500;
char* class_name_501;
char* fun_name_502;
void* __right_value413 = (void*)0;
struct sType* type2_503;
struct sFun* cloner_504;
char* fun_name2_505;
void* __right_value414 = (void*)0;
char* none_generics_name_506;
void* __right_value415 = (void*)0;
struct sType* obj_type_507;
void* __right_value416 = (void*)0;
char* __dec_obj165;
void* __right_value417 = (void*)0;
char* fun_name3_508;
struct sGenericsFun* generics_fun_509;
void* __right_value418 = (void*)0;
_Bool _if_conditional2;
_Bool __result295__;
void* __right_value419 = (void*)0;
char* __dec_obj166;
int i_510;
void* __right_value420 = (void*)0;
char* new_fun_name_511;
void* __right_value421 = (void*)0;
char* __dec_obj167;
void* __right_value422 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_512=0;
char* new_fun_name_513=0;
char* __dec_obj168;
struct list$1sRightValueObjectph* __dec_obj169;
struct list$1CVALUEph* __dec_obj170;
_Bool __result296__;
fun_name2_505 = (void*)0;
memset(&i_510, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_497=((void*)0);
    stack_saved_498=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_499=info->right_value_objects;
    klass_500=type->mClass;
    class_name_501=klass_500->mName;
    fun_name_502="equals";
    type2_503=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_503->mHeap=(_Bool)0;
    cloner_504=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_506=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_507=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj165=fun_name2_505;
        fun_name2_505=(char*)come_increment_ref_count(create_method_name(obj_type_507,(_Bool)0,fun_name_502,info,(_Bool)1));
        /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_508=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_506,fun_name_502));
        generics_fun_509=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_508,((void*)0));
        if(        generics_fun_509) {
            if(            (_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_505)),generics_fun_509,obj_type_507,info))),            _if_conditional2) {
                __result295__ = (_Bool)0;
                /* U13 */none_generics_name_506 = come_decrement_ref_count2(none_generics_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_508 = come_decrement_ref_count2(fun_name3_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_497 = come_decrement_ref_count2(result_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_498,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_503,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_505 = come_decrement_ref_count2(fun_name2_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result295__;
            }
        }
        cloner_504=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_505);
        /* U13 */none_generics_name_506 = come_decrement_ref_count2(none_generics_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_508 = come_decrement_ref_count2(fun_name3_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj166=fun_name2_505;
        fun_name2_505=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_502,info,(_Bool)1));
        /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_510=128-1;        i_510>=1;        i_510--        ){
            new_fun_name_511=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_505,i_510));
            cloner_504=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_511);
            if(            cloner_504) {
                __dec_obj167=fun_name2_505;
                fun_name2_505=(char*)come_increment_ref_count(__builtin_string(new_fun_name_511));
                /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_511 = come_decrement_ref_count2(new_fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_511 = come_decrement_ref_count2(new_fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_504==((void*)0)) {
            cloner_504=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_505);
        }
    }
    if(    cloner_504==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value422=create_equals_automatically(type,fun_name_502,info)));
        fun_512=multiple_assign_var6->v1;
        new_fun_name_513=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        /*g*/come_call_finalizer3(__right_value422,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj168=fun_name2_505;
        fun_name2_505=(char*)come_increment_ref_count(new_fun_name_513);
        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_504=fun_512;
        /* U13 */new_fun_name_513 = come_decrement_ref_count2(new_fun_name_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj169=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_499);
    come_call_finalizer3(__dec_obj169,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj170=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_498);
    come_call_finalizer3(__dec_obj170,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result296__ = (_Bool)1;
    /* U13 */result_497 = come_decrement_ref_count2(result_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_498,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_505 = come_decrement_ref_count2(fun_name2_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result296__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_514;
struct list$1CVALUEph* stack_saved_515;
struct list$1sRightValueObjectph* right_value_objects_516;
struct sClass* klass_517;
char* class_name_518;
char* fun_name_519;
void* __right_value423 = (void*)0;
struct sType* type2_520;
struct sFun* cloner_521;
char* fun_name2_522;
void* __right_value424 = (void*)0;
char* none_generics_name_523;
void* __right_value425 = (void*)0;
struct sType* obj_type_524;
void* __right_value426 = (void*)0;
char* __dec_obj171;
void* __right_value427 = (void*)0;
char* fun_name3_525;
struct sGenericsFun* generics_fun_526;
void* __right_value428 = (void*)0;
_Bool _if_conditional3;
_Bool __result297__;
void* __right_value429 = (void*)0;
char* __dec_obj172;
int i_527;
void* __right_value430 = (void*)0;
char* new_fun_name_528;
void* __right_value431 = (void*)0;
char* __dec_obj173;
void* __right_value432 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_529=0;
char* new_fun_name_530=0;
char* __dec_obj174;
struct list$1sRightValueObjectph* __dec_obj175;
struct list$1CVALUEph* __dec_obj176;
_Bool __result298__;
fun_name2_522 = (void*)0;
memset(&i_527, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_514=((void*)0);
    stack_saved_515=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_516=info->right_value_objects;
    klass_517=type->mClass;
    class_name_518=klass_517->mName;
    fun_name_519="operator_equals";
    type2_520=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_520->mHeap=(_Bool)0;
    cloner_521=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_523=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_524=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj171=fun_name2_522;
        fun_name2_522=(char*)come_increment_ref_count(create_method_name(obj_type_524,(_Bool)0,fun_name_519,info,(_Bool)1));
        /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_525=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_523,fun_name_519));
        generics_fun_526=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_525,((void*)0));
        if(        generics_fun_526) {
            if(            (_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_522)),generics_fun_526,obj_type_524,info))),            _if_conditional3) {
                __result297__ = (_Bool)0;
                /* U13 */none_generics_name_523 = come_decrement_ref_count2(none_generics_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_525 = come_decrement_ref_count2(fun_name3_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_514 = come_decrement_ref_count2(result_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_515,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_520,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_522 = come_decrement_ref_count2(fun_name2_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result297__;
            }
        }
        cloner_521=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_522);
        /* U13 */none_generics_name_523 = come_decrement_ref_count2(none_generics_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_525 = come_decrement_ref_count2(fun_name3_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj172=fun_name2_522;
        fun_name2_522=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_519,info,(_Bool)1));
        /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_527=128-1;        i_527>=1;        i_527--        ){
            new_fun_name_528=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_522,i_527));
            cloner_521=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_528);
            if(            cloner_521) {
                __dec_obj173=fun_name2_522;
                fun_name2_522=(char*)come_increment_ref_count(__builtin_string(new_fun_name_528));
                /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_528 = come_decrement_ref_count2(new_fun_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_528 = come_decrement_ref_count2(new_fun_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_521==((void*)0)) {
            cloner_521=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_522);
        }
    }
    if(    cloner_521==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value432=create_operator_equals_automatically(type,fun_name_519,info)));
        fun_529=multiple_assign_var7->v1;
        new_fun_name_530=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        /*g*/come_call_finalizer3(__right_value432,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj174=fun_name2_522;
        fun_name2_522=(char*)come_increment_ref_count(new_fun_name_530);
        /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_521=fun_529;
        /* U13 */new_fun_name_530 = come_decrement_ref_count2(new_fun_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj175=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_516);
    come_call_finalizer3(__dec_obj175,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj176=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_515);
    come_call_finalizer3(__dec_obj176,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result298__ = (_Bool)1;
    /* U13 */result_514 = come_decrement_ref_count2(result_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_515,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_520,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_522 = come_decrement_ref_count2(fun_name2_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result298__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_531;
struct list$1CVALUEph* stack_saved_532;
struct list$1sRightValueObjectph* right_value_objects_533;
struct sClass* klass_534;
char* class_name_535;
char* fun_name_536;
void* __right_value433 = (void*)0;
struct sType* type2_537;
struct sFun* cloner_538;
char* fun_name2_539;
void* __right_value434 = (void*)0;
char* none_generics_name_540;
void* __right_value435 = (void*)0;
struct sType* obj_type_541;
void* __right_value436 = (void*)0;
char* __dec_obj177;
void* __right_value437 = (void*)0;
char* fun_name3_542;
struct sGenericsFun* generics_fun_543;
void* __right_value438 = (void*)0;
_Bool _if_conditional4;
_Bool __result299__;
void* __right_value439 = (void*)0;
char* __dec_obj178;
int i_544;
void* __right_value440 = (void*)0;
char* new_fun_name_545;
void* __right_value441 = (void*)0;
char* __dec_obj179;
void* __right_value442 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_546=0;
char* new_fun_name_547=0;
char* __dec_obj180;
struct list$1sRightValueObjectph* __dec_obj181;
struct list$1CVALUEph* __dec_obj182;
_Bool __result300__;
fun_name2_539 = (void*)0;
memset(&i_544, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_531=((void*)0);
    stack_saved_532=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_533=info->right_value_objects;
    klass_534=type->mClass;
    class_name_535=klass_534->mName;
    fun_name_536="operator_not_equals";
    type2_537=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_537->mHeap=(_Bool)0;
    cloner_538=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_540=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_541=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj177=fun_name2_539;
        fun_name2_539=(char*)come_increment_ref_count(create_method_name(obj_type_541,(_Bool)0,fun_name_536,info,(_Bool)1));
        /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_542=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_540,fun_name_536));
        generics_fun_543=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_542,((void*)0));
        if(        generics_fun_543) {
            if(            (_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_539)),generics_fun_543,obj_type_541,info))),            _if_conditional4) {
                __result299__ = (_Bool)0;
                /* U13 */none_generics_name_540 = come_decrement_ref_count2(none_generics_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_542 = come_decrement_ref_count2(fun_name3_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_531 = come_decrement_ref_count2(result_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_532,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_537,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_539 = come_decrement_ref_count2(fun_name2_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result299__;
            }
        }
        cloner_538=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_539);
        /* U13 */none_generics_name_540 = come_decrement_ref_count2(none_generics_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_542 = come_decrement_ref_count2(fun_name3_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj178=fun_name2_539;
        fun_name2_539=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_536,info,(_Bool)1));
        /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_544=128-1;        i_544>=1;        i_544--        ){
            new_fun_name_545=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_539,i_544));
            cloner_538=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_545);
            if(            cloner_538) {
                __dec_obj179=fun_name2_539;
                fun_name2_539=(char*)come_increment_ref_count(__builtin_string(new_fun_name_545));
                /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_545 = come_decrement_ref_count2(new_fun_name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_545 = come_decrement_ref_count2(new_fun_name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_538==((void*)0)) {
            cloner_538=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_539);
        }
    }
    if(    cloner_538==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value442=create_operator_not_equals_automatically(type,fun_name_536,info)));
        fun_546=multiple_assign_var8->v1;
        new_fun_name_547=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        /*g*/come_call_finalizer3(__right_value442,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj180=fun_name2_539;
        fun_name2_539=(char*)come_increment_ref_count(new_fun_name_547);
        /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_538=fun_546;
        /* U13 */new_fun_name_547 = come_decrement_ref_count2(new_fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj181=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_533);
    come_call_finalizer3(__dec_obj181,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj182=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_532);
    come_call_finalizer3(__dec_obj182,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = (_Bool)1;
    /* U13 */result_531 = come_decrement_ref_count2(result_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_532,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_539 = come_decrement_ref_count2(fun_name2_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result300__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_548;
struct list$1sRightValueObjectph* right_value_objects_549;
int n_550;
struct list$1sRightValueObjectph* o2_saved_551;
struct sRightValueObject* it_552;
struct sType* type_553;
void* __right_value443 = (void*)0;
struct sType* type2_554;
void* __right_value444 = (void*)0;
struct sType* __dec_obj183;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_548=(_Bool)0;
    right_value_objects_549=info->right_value_objects;
    n_550=0;
    for(    o2_saved_551=(right_value_objects_549),it_552=list$1sRightValueObjectph_begin((o2_saved_551));    !list$1sRightValueObjectph_end((o2_saved_551));    it_552=list$1sRightValueObjectph_next((o2_saved_551))    ){
        if(        it_552&&!it_552->mFreed) {
            if(            string_operator_equals(it_552->mFunName,info->come_fun->mName)&&it_552->mBlockLevel==info->block_level&&!it_552->mStored) {
                type_553=(struct sType*)come_increment_ref_count(it_552->mType);
                type2_554=(struct sType*)come_increment_ref_count(sType_clone(type_553));
                if(                info->generics_type) {
                    __dec_obj183=type_553;
                    type_553=(struct sType*)come_increment_ref_count(solve_generics(type2_554,info->generics_type,info));
                    come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                free_object(type_553,it_552->mVarName,!it_552->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_552->mFreed=(_Bool)1;
                free_right_value_548=(_Bool)1;
                /*i*/come_call_finalizer3(type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_554,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_550++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_555;
struct sVar* var__556;
struct sVar* __result305__;
struct sVar* __result306__;
    it_555=table;
    while(it_555) {
        var__556=map$2charphsVarphp_operator_load_element(it_555->mVars,name);
        if(        var__556) {
            __result305__ = gComeFunResultObject = __result_obj__ = var__556;
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
        it_555=it_555->mParent;
    }
    __result306__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_557;
unsigned int hash_558;
unsigned int it_559;
struct sVar* __result301__;
struct sVar* __result302__;
struct sVar* __result303__;
struct sVar* __result304__;
default_value_557 = (void*)0;
    memset(&default_value_557,0,sizeof(struct sVar*));
    hash_558=string_get_hash_key(((char*)key))%self->size;
    it_559=hash_558;
    while((_Bool)1) {
        if(        self->item_existance[it_559]) {
            if(            string_equals(self->keys[it_559],key)) {
                __result301__ = gComeFunResultObject = __result_obj__ = self->items[it_559];
                /*i*/come_call_finalizer3(default_value_557,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
            it_559++;
            if(            it_559>=self->size) {
                it_559=0;
            }
            else if(            it_559==hash_558) {
                __result302__ = gComeFunResultObject = __result_obj__ = default_value_557;
                /*i*/come_call_finalizer3(default_value_557,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result302__;
            }
        }
        else {
            __result303__ = gComeFunResultObject = __result_obj__ = default_value_557;
            /*i*/come_call_finalizer3(default_value_557,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = default_value_557;
    /*i*/come_call_finalizer3(default_value_557,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj184;
char* __dec_obj185;
struct sType* __dec_obj186;
char* __dec_obj187;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj184=self->mName;
            /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj185=self->mCValueName;
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj186=self->mType;
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj187=self->mFunName;
            /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_560;
char* it_563;
struct sVar* p_566;
struct sType* type_567;
struct sClass* klass_568;
void* __right_value445 = (void*)0;
char* c_value_569;
void* __right_value446 = (void*)0;
struct sType* type2_570;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_560=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_563=map$2charphsVarph_begin((o2_saved_560));    !map$2charphsVarph_end((o2_saved_560));    it_563=map$2charphsVarph_next((o2_saved_560))    ){
        p_566=map$2charphsVarphp_operator_load_element(table->mVars,it_563);
        type_567=p_566->mType;
        klass_568=type_567->mClass;
        if(        type_567->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_566->mCValueName,p_566->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_566->mCValueName,p_566->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_566->mCValueName!=((void*)0)&&string_operator_equals(p_566->mCValueName,ret_value->mCValueName)&&type_567->mHeap) {
            free_object(type_567,p_566->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else if(        type_567->mHeap&&p_566->mCValueName) {
            free_object(type_567,p_566->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        }
        else if(        klass_568->mStruct&&p_566->mCValueName&&type_567->mAllocaValue&&!type_567->mNoCallingDestructor) {
            c_value_569=(char*)come_increment_ref_count(xsprintf("(&%s)",p_566->mCValueName));
            type2_570=(struct sType*)come_increment_ref_count(sType_clone(type_567));
            type2_570->mPointerNum++;
            free_object(type2_570,c_value_569,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            /* U13 */c_value_569 = come_decrement_ref_count2(c_value_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_570,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    /*i*/come_call_finalizer3(o2_saved_560,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_561;
char* __result307__;
char* __result308__;
char* result_562;
char* __result309__;
result_561 = (void*)0;
result_562 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_561,0,sizeof(char*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_561;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_562,0,sizeof(char*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_562;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_564;
char* __result310__;
char* __result311__;
char* result_565;
char* __result312__;
result_564 = (void*)0;
result_565 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_564,0,sizeof(char*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_564;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_565,0,sizeof(char*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_565;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_571;
int i_572;
    for(    i_571=0;    i_571<self->size;    i_571++    ){
        if(        self->item_existance[i_571]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_571],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_572=0;    i_572<self->size;    i_572++    ){
        if(        self->item_existance[i_572]) {
            if(            1) {
                /* U13 */self->keys[i_572] = come_decrement_ref_count2(self->keys[i_572], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_573;
    if(    gComeGC||gComeC) {
        return;
    }
    it_573=info->lv_table;
    if(    it_573==info->come_fun->mBlock->mVarTable) {
        free_objects(it_573,ret_value,info);
    }
    else {
        while(it_573!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_573,ret_value,info);
            it_573=it_573->mParent;
        }
        free_objects(it_573,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_574;
struct sVarTable* current_loop_vtable_575;
struct sVarTable* it_576;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_574=((void*)0);
    current_loop_vtable_575=info->current_loop_vtable;
    if(    current_loop_vtable_575!=((void*)0)) {
        it_576=info->lv_table;
        while(it_576!=current_loop_vtable_575) {
            free_objects(it_576,ret_value_574,info);
            it_576=it_576->mParent;
        }
        free_objects(it_576,ret_value_574,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
char* __result313__;
void* __right_value452 = (void*)0;
char* var_name_578;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* __result314__;
void* __right_value461 = (void*)0;
char* __result315__;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value451=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value447=string_to_string(info->sname))),((char*)(__right_value448=int_to_string(info->sline))),((char*)(__right_value449=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value450=charp_to_string(c_value))))));
            /* U11 */__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /* U11 */__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /* U11 */__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /* U11 */__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /* U11 */__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_577=0;
        ++n_577;
        var_name_578=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_577));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value453=make_define_var(type,var_name_578,(_Bool)0,info))));
        /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value460=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value454=string_to_string(info->sname))),((char*)(__right_value455=int_to_string(info->sline))),((char*)(__right_value456=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value457=string_to_string(var_name_578))),((char*)(__right_value458=charp_to_string(c_value))),((char*)(__right_value459=string_to_string(var_name_578))))));
        /* U13 */var_name_578 = come_decrement_ref_count2(var_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result314__;
        /* U13 */var_name_578 = come_decrement_ref_count2(var_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value461=__builtin_string(c_value)));
    /* U11 */__right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_579;
char* it_580;
struct sVar* p_581;
struct sType* type_582;
struct sClass* klass_583;
_Bool __result316__;
_Bool __result317__;
_Bool __result318__;
_Bool __result319__;
_Bool __result320__;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_579=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_580=map$2charphsVarph_begin((o2_saved_579));    !map$2charphsVarph_end((o2_saved_579));    it_580=map$2charphsVarph_next((o2_saved_579))    ){
        p_581=map$2charphsVarphp_operator_load_element(table->mVars,it_580);
        type_582=p_581->mType;
        klass_583=type_582->mClass;
        if(        type_582->mChannel) {
            __result316__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result316__;
        }
        else if(        ret_value!=((void*)0)&&p_581->mCValueName!=((void*)0)&&string_operator_equals(p_581->mCValueName,ret_value->mCValueName)&&type_582->mHeap) {
            __result317__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result317__;
        }
        else if(        type_582->mHeap&&p_581->mCValueName) {
            if(            type_582->mFunctionParam) {
                __result318__ = (_Bool)1;
                /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result318__;
            }
            else {
                __result319__ = (_Bool)1;
                /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result319__;
            }
        }
        else if(        klass_583->mStruct&&p_581->mCValueName&&type_582->mAllocaValue&&!type_582->mNoCallingDestructor) {
            __result320__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result320__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_579,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_584;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_584=info->lv_table;
    if(    it_584==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_584,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_584!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_584,ret_value,info)) {
                return (_Bool)1;
            }
            it_584=it_584->mParent;
        }
        if(        existance_free_objects(it_584,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_585;
struct list$1sRightValueObjectph* o2_saved_586;
struct sRightValueObject* it_587;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_585=info->right_value_objects;
    for(    o2_saved_586=(right_value_objects_585),it_587=list$1sRightValueObjectph_begin((o2_saved_586));    !list$1sRightValueObjectph_end((o2_saved_586));    it_587=list$1sRightValueObjectph_next((o2_saved_586))    ){
        if(        it_587&&!it_587->mFreed) {
            if(            string_operator_equals(it_587->mFunName,info->come_fun->mName)&&it_587->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

