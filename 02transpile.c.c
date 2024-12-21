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
    int* n_257;
    char** msg2_251;
    char** p_253;
    char** last_lf_254;
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
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block2_(struct __current_stack2__* parent, char* it);
static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
void create_pico_version_header();
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphbufferph* map$2charphbufferph_initialize(struct map$2charphbufferph* self);
static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self);
static void map$2charphbufferph_finalize(struct map$2charphbufferph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static struct map$2charphint* map$2charphint_initialize(struct map$2charphint* self);
static void map$2charphintp_finalize(struct map$2charphint* self);
static void map$2charphint_finalize(struct map$2charphint* self);
static void sInfo_finalize(struct sInfo* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3599, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3606, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3615, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3622, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3629, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3636, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3971, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3976, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 3981, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 3986, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 3991, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4024, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4031, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4033, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4038, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4040, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4045, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4047, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4052, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4054, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4059, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4061, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4068, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4073, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4078, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4083, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4088, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4093, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4098, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4103, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4108, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4113, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4118, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4123, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4128, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4133, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4138, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
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
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
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
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
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
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
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
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
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
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
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
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
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
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
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
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1106, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1116, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1126, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1106, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1116, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1126, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1106, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1116, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1126, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1106, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1116, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1126, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1106, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1116, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1126, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1106, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1116, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1126, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1106, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1116, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1126, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1900, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1900, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1900, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1900, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1900, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1900, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1900, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1106, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1116, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1126, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value247=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value245=int_to_string(info->sline))),((char*)(__right_value246=string_to_string(info->sname)))))));
            /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value248 = (void*)0;
char* sname_247;
int sline_248;
int sline_real_249;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
_Bool result_250;
void* __right_value251 = (void*)0;
char* __dec_obj33;
_Bool __result198__;
    sname_247=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_248=info->sline;
    sline_real_249=info->sline_real;
    __dec_obj32=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value249=node->sname(node->_protocol_obj)))));
    /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_250=node->compile(node->_protocol_obj,info);
    __dec_obj33=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_247));
    /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_248;
    info->sline_real=sline_real_249;
    __result198__ = result_250;
    /* U13 */sname_247 = come_decrement_ref_count2(sname_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result198__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_251;
va_list args_252;
char* p_253;
char* last_lf_254;
int col_255;
int col_256;
int n_257;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value256 = (void*)0;
struct __current_stack2__ __current_stack2__;
void* __right_value261 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
msg2_251 = (void*)0;
memset(&args_252, 0, sizeof(va_list));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(    !info->no_output_err) {
        __builtin_va_start(args_252,msg);
        vasprintf(&msg2_251,msg,args_252);
        __builtin_va_end(args_252);
        p_253=info->p;
        last_lf_254=((void*)0);
        while(p_253>=info->head) {
            if(            *p_253==10) {
                last_lf_254=p_253;
                break;
            }
            p_253--;
        }
        if(        last_lf_254) {
            col_255=info->p-last_lf_254;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_255,msg2_251);
        }
        else {
            col_256=info->p-info->head;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_256,msg2_251);
        }
        info->err_num++;
        stackframe();
        if(        info->come_fun) {
            n_257=info->sline-5;
            __current_stack2__.n_257 = &n_257;
            __current_stack2__.msg2_251 = &msg2_251;
            __current_stack2__.p_253 = &p_253;
            __current_stack2__.last_lf_254 = &last_lf_254;
            __current_stack2__.info = &info;
            __current_stack2__.msg = &msg;
            ((char*)(__right_value266=charp_puts(((char*)(__right_value265=list$1charph_join(((struct list$1charph*)(__right_value261=list$1charph_map(((struct list$1charph*)(__right_value256=list$1charph_sublist(((struct list$1charph*)(__right_value253=charp_split_char(((char*)(__right_value252=buffer_to_string(info->original_source))),10))),n_257,n_257+10))),&__current_stack2__,(void*)method_block2_))),"\n"))))));
            /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value253,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value256,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value261,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /* U11 */__right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_251);
        /*i*/come_call_finalizer3((&args_252),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1charph* result_258;
struct list_item$1charph* it_259;
int i_260;
struct list$1charph* __result199__;
    result_258=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1536, "list$1charph"))));
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
    it_259=self->head;
    i_260=0;
    while(it_259!=((void*)0)) {
        if(        i_260>=begin&&i_260<tail) {
            list$1charph_push_back(result_258,(char*)come_increment_ref_count(it_259->item));
        }
        it_259=it_259->next;
        i_260++;
    }
    __result199__ = gComeFunResultObject = __result_obj__ = result_258;
    /*i*/come_call_finalizer3(result_258,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static struct list$1charph* list$1charph_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1charph* result_267;
struct list_item$1charph* it_268;
void* __right_value259 = (void*)0;
char* item_269;
struct list$1charph* __result204__;
    result_267=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1748, "list$1charph"))));
    it_268=self->head;
    while(it_268!=((void*)0)) {
        item_269=(char*)come_increment_ref_count(block(parent,it_268->item));
        list$1charph_push_back(result_267,(char*)come_increment_ref_count(item_269));
        it_268=it_268->next;
        /* U13 */item_269 = come_decrement_ref_count2(item_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_267;
    /*i*/come_call_finalizer3(result_267,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

char* method_block2_(struct __current_stack2__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result205__;
    __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=xsprintf("%d %s",++(*(parent->n_257)),it)));
    /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct buffer* buf_270;
int n_271;
char* it_274;
void* __right_value264 = (void*)0;
char* __result212__;
    buf_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 1858, "buffer"))));
    n_271=0;
    for(    it_274=list$1charph_begin(self);    !list$1charph_end(self);    it_274=list$1charph_next(self)    ){
        buffer_append_str(buf_270,it_274);
        if(        n_271<list$1charph_length(self)-1) {
            buffer_append_str(buf_270,sep);
        }
        n_271++;
    }
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value264=buffer_to_string(buf_270)));
    /*i*/come_call_finalizer3(buf_270,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_272;
char* __result206__;
char* __result207__;
char* result_273;
char* __result208__;
result_272 = (void*)0;
result_273 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_272,0,sizeof(char*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_272;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->it=self->head;
    if(    self->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_273,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_273;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_275;
char* __result209__;
char* __result210__;
char* result_276;
char* __result211__;
result_275 = (void*)0;
result_276 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_275,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_275;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_276,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_276;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value267 = (void*)0;
char* output_file_name_277;
void* __right_value268 = (void*)0;
_Bool __result213__;
    output_file_name_277=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    charp_write(((char*)(__right_value268=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_277,(_Bool)0);
    /* U11 */__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result213__ = (_Bool)1;
    /* U13 */output_file_name_277 = come_decrement_ref_count2(output_file_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result213__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_278;
void* __right_value269 = (void*)0;
    input_file_name_278=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_278!=((void*)0)&&string_operator_not_equals(input_file_name_278,"")) {
        system(((char*)(__right_value269=xsprintf("%s %s.*",RM,input_file_name_278))));
        /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_278 = come_decrement_ref_count2(input_file_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_279;
void* __right_value270 = (void*)0;
    input_file_name_279=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_279!=((void*)0)&&string_operator_not_equals(input_file_name_279,"")) {
        system(((char*)(__right_value270=xsprintf("%s %s.i* %s.c*",RM,input_file_name_279,input_file_name_279))));
        /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_279 = come_decrement_ref_count2(input_file_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_280;
void* __right_value271 = (void*)0;
    input_file_name_280=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_280!=((void*)0)&&string_operator_not_equals(input_file_name_280,"")) {
        system(((char*)(__right_value271=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_280,input_file_name_280))));
        /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    /* U13 */input_file_name_280 = come_decrement_ref_count2(input_file_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_281;
char* output_file_name_282;
void* __right_value272 = (void*)0;
char* __dec_obj34;
void* __right_value273 = (void*)0;
char* __dec_obj35;
_Bool exist_common_h_283;
struct _IO_FILE* Value_284;
int is_mac_285;
int is_android_286;
int is_debian_287;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* cmd3_288;
int rc_289;
void* __right_value276 = (void*)0;
char* command2_290;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
char* cmd2_291;
int rc_292;
void* __right_value279 = (void*)0;
char* command2_293;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* cmd3_294;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* __dec_obj36;
int rc_295;
void* __right_value284 = (void*)0;
char* command2_296;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
char* cmd4_297;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* __dec_obj37;
void* __right_value289 = (void*)0;
char* command_298;
int rc_299;
void* __right_value290 = (void*)0;
char* command2_300;
_Bool __result214__;
output_file_name_282 = (void*)0;
    input_file_name_281=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj34=output_file_name_282;
        output_file_name_282=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj35=output_file_name_282;
        output_file_name_282=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_283=(_Bool)0;
    {
        Value_284=fopen("common.h","r");
        if(        Value_284) {
            exist_common_h_283=(_Bool)1;
            fclose(Value_284);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_283=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_283=(_Bool)0;
        }
    }
    is_mac_285=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    is_android_286=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    is_debian_287=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
    if(    is_android_286==0) {
        cmd3_288=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):("-C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value274=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
        /* U11 */__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd3_288);
        }
        rc_289=system(cmd3_288);
        command2_290=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_282));
        if(        info->verbose) {
            puts(command2_290);
        }
        (void)system(command2_290);
        if(        rc_289!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        /* U13 */cmd3_288 = come_decrement_ref_count2(cmd3_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_290 = come_decrement_ref_count2(command2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_mac_285==0) {
        cmd2_291=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):("-C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value277=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
        /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_291);
        }
        rc_292=system(cmd2_291);
        if(        rc_292!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_291);
            exit(5);
        }
        command2_293=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_282));
        if(        info->verbose) {
            puts(command2_293);
        }
        (void)system(command2_293);
        /* U13 */cmd2_291 = come_decrement_ref_count2(cmd2_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_293 = come_decrement_ref_count2(command2_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_294=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):("-C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value280=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
        /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        is_debian_287==0) {
            __dec_obj36=cmd3_294;
            cmd3_294=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):("-C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value282=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(        info->verbose) {
            puts(cmd3_294);
        }
        rc_295=system(cmd3_294);
        command2_296=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_282));
        if(        info->verbose) {
            puts(command2_296);
        }
        (void)system(command2_296);
        if(        rc_295!=0) {
            cmd4_297=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):("-C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value285=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
            /* U11 */__right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            is_debian_287==0) {
                __dec_obj37=cmd4_297;
                cmd4_297=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):("-C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_283)?(((char*)(__right_value287=__builtin_string(" -include common.h ")))):("")),input_file_name_281,output_file_name_282,output_file_name_282));
                /*G*/ __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            command_298=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_282,input_file_name_281,info->clang_option,input_file_name_281));
            if(            info->verbose) {
                puts(cmd4_297);
            }
            rc_299=system(cmd4_297);
            command2_300=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_282));
            if(            info->verbose) {
                puts(command2_300);
            }
            (void)system(command2_300);
            if(            rc_299!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_297);
                exit(5);
            }
            /* U13 */cmd4_297 = come_decrement_ref_count2(cmd4_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */command_298 = come_decrement_ref_count2(command_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */command2_300 = come_decrement_ref_count2(command2_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /* U13 */cmd3_294 = come_decrement_ref_count2(cmd3_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_296 = come_decrement_ref_count2(command2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result214__ = (_Bool)1;
    /* U13 */input_file_name_281 = come_decrement_ref_count2(input_file_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */output_file_name_282 = come_decrement_ref_count2(output_file_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result214__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value291 = (void*)0;
char* input_file_name_301;
char* output_file_name_302;
void* __right_value292 = (void*)0;
char* __dec_obj38;
void* __right_value293 = (void*)0;
char* __dec_obj39;
void* __right_value294 = (void*)0;
char* command_303;
int rc_304;
void* __right_value295 = (void*)0;
char* command2_305;
_Bool __result215__;
void* __right_value299 = (void*)0;
_Bool __result218__;
output_file_name_302 = (void*)0;
    input_file_name_301=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj38=output_file_name_302;
        output_file_name_302=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj39=output_file_name_302;
        output_file_name_302=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_303=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_302,input_file_name_301,info->clang_option,input_file_name_301));
    if(    info->verbose) {
        puts(command_303);
    }
    rc_304=system(command_303);
    command2_305=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_301));
    if(    info->verbose) {
        puts(command2_305);
    }
    (void)system(command2_305);
    if(    rc_304!=0) {
        printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
        __result215__ = (_Bool)0;
        /* U13 */input_file_name_301 = come_decrement_ref_count2(input_file_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_302 = come_decrement_ref_count2(output_file_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command_303 = come_decrement_ref_count2(command_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */command2_305 = come_decrement_ref_count2(command2_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result215__;
    }
    if(    !output_object_file) {
        list$1charph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_302)));
    }
    __result218__ = (_Bool)1;
    /* U13 */input_file_name_301 = come_decrement_ref_count2(input_file_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */output_file_name_302 = come_decrement_ref_count2(output_file_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */command_303 = come_decrement_ref_count2(command_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */command2_305 = come_decrement_ref_count2(command2_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result218__;
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_306;
int i_307;
char* default_value_308;
struct list$1charph* __result216__;
void* __right_value296 = (void*)0;
struct list_item$1charph* litem_309;
char* __dec_obj40;
void* __right_value297 = (void*)0;
struct list_item$1charph* litem_310;
char* __dec_obj41;
struct list_item$1charph* it_311;
int i_312;
void* __right_value298 = (void*)0;
struct list_item$1charph* litem_313;
char* __dec_obj42;
struct list$1charph* __result217__;
default_value_308 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_306=self->len;
        for(        i_307=0;        i_307<position-len_306;        i_307++        ){
            memset(&default_value_308,0,sizeof(char*));
            list$1charph_push_back(self,(char*)come_increment_ref_count(default_value_308));
            /* U13 */default_value_308 = come_decrement_ref_count2(default_value_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charph_push_back(self,(char*)come_increment_ref_count(item));
        __result216__ = gComeFunResultObject = __result_obj__ = self;
        /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    if(    position==0) {
        litem_309=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value296=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1266, "list_item$1charph"))));
        litem_309->prev=((void*)0);
        litem_309->next=self->head;
        __dec_obj40=litem_309->item;
        litem_309->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_309;
        self->head=litem_309;
        self->len++;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value297=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1278, "list_item$1charph"))));
        litem_310->prev=self->head;
        litem_310->next=self->tail;
        __dec_obj41=litem_310->item;
        litem_310->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_310;
        self->head->next=litem_310;
        self->len++;
    }
    else {
        it_311=self->head;
        i_312=0;
        while(it_311!=((void*)0)) {
            if(            position==i_312) {
                litem_313=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value298=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1294, "list_item$1charph"))));
                litem_313->prev=it_311->prev;
                litem_313->next=it_311;
                __dec_obj42=litem_313->item;
                litem_313->item=(char*)come_increment_ref_count(item);
                /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_311->prev->next=litem_313;
                it_311->prev=litem_313;
                self->len++;
            }
            it_311=it_311->next;
            i_312++;
        }
    }
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_314;
void* __right_value300 = (void*)0;
char* __dec_obj43;
void* __right_value301 = (void*)0;
char* __dec_obj44;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* command_315;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1charph* o2_saved_316;
char* it_317;
int is_mac_318;
void* __right_value306 = (void*)0;
char* cmd_319;
int rc_320;
void* __right_value307 = (void*)0;
char* cmd_321;
int rc_322;
void* __right_value308 = (void*)0;
char* cmd_323;
int rc_324;
int is_apline_325;
int is_debian_326;
int is_android_327;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
int Value_328;
_Bool _if_conditional1;
_Bool __result219__;
_Bool __result220__;
    output_file_name_314=((void*)0);
    if(    info->output_file_name) {
        __dec_obj43=output_file_name_314;
        output_file_name_314=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj44=output_file_name_314;
        output_file_name_314=(char*)come_increment_ref_count(xnoextname(info->sname));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 296, "buffer"))));
    buffer_append_format(command_315,"%s -o %s ",CC,output_file_name_314);
    buffer_append_str(command_315,((char*)(__right_value305=charp_operator_add(" ",((char*)(__right_value304=string_operator_add(info->linker_option," ")))))));
    /* U11 */__right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_316=(object_files),it_317=list$1charph_begin((o2_saved_316));    !list$1charph_end((o2_saved_316));    it_317=list$1charph_next((o2_saved_316))    ){
        buffer_append_format(command_315,"%s ",it_317);
    }
    is_mac_318=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_318==0) {
        buffer_append_str(command_315," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_319=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_320=system(cmd_319);
    if(    rc_320==0) {
        buffer_append_str(command_315," -L. -L/usr/local/lib ");
    }
    /* U13 */cmd_319 = come_decrement_ref_count2(cmd_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_321=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_322=system(cmd_321);
    if(    rc_322==0) {
        buffer_append_format(command_315," -L%s/lib ",getenv("HOME"));
    }
    /* U13 */cmd_321 = come_decrement_ref_count2(cmd_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_323=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_324=system(cmd_323);
    if(    rc_324==0) {
        buffer_append_format(command_315," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_315," %s ",info->clang_option);
    if(    gComeStr) {
        if(        gComeGC) {
            if(            is_mac_318==0) {
                buffer_append_format(command_315," %s/lib/libcomelang-str-gc.c.o -lpcre ","/usr/local/");
            }
            else {
                buffer_append_str(command_315," -lcomelang-str-gc -lpcre ");
            }
        }
        else {
            if(            is_mac_318==0) {
                buffer_append_format(command_315," %s/lib/libcomelang-str.c.o -lpcre ","/usr/local/");
            }
            else {
                buffer_append_str(command_315," -lcomelang-str -lpcre ");
            }
        }
    }
    if(    gComeGC) {
        if(        is_mac_318==0) {
            buffer_append_format(command_315," %s/lib/libcomelang-gc.c.o -lgc ","/usr/local/");
        }
        else {
            buffer_append_str(command_315," -lcomelang-gc -lgc ");
        }
    }
    if(    gComePthread) {
        if(        is_mac_318==0) {
            buffer_append_format(command_315," %s/lib/libcomelang-pthread.c.o -lpthread ","/usr/local/");
        }
        else {
            buffer_append_str(command_315," -lcomelang-pthread -lpthread ");
        }
    }
    if(    gComeNet) {
        is_apline_325=system("which apk 1> /dev/null 2>/dev/null");
        is_debian_326=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        is_android_327=system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        if(        is_android_327==0) {
            if(            gComeGC) {
                buffer_append_str(command_315," -lcomelang-net-gc -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
            else {
                buffer_append_str(command_315," -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
        }
        else if(        is_apline_325==0||is_debian_326==0) {
            if(            gComeGC) {
                buffer_append_str(command_315," -lcomelang-net-gc -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
            else {
                buffer_append_str(command_315," -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
        }
        else if(        is_mac_318==0) {
            if(            gComeGC) {
                buffer_append_format(command_315," %s/lib/libcomelang-net-gc.c.o -lssl `mysql_config --cflags --libs`","/usr/local/");
            }
            else {
                buffer_append_format(command_315," %s/lib/libcomelang-net.c.o -lssl `mysql_config --cflags --libs`","/usr/local/");
            }
        }
        else {
            if(            gComeGC) {
                buffer_append_str(command_315," -lcomelang-net-gc -lssl `mysql_config --cflags --libs`");
            }
            else {
                buffer_append_str(command_315," -lcomelang-net -lssl `mysql_config --cflags --libs`");
            }
        }
    }
    if(    info->verbose) {
        puts(((char*)(__right_value309=buffer_to_string(command_315))));
        /* U11 */__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_328=system(((char*)(__right_value310=buffer_to_string(command_315))));
    if(    (_if_conditional1=(Value_328)),    /* U10 */ (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional1) {
        printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
        __result219__ = (_Bool)0;
        /* U13 */output_file_name_314 = come_decrement_ref_count2(output_file_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(command_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */cmd_323 = come_decrement_ref_count2(cmd_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result219__;
    }
    else {
    }
    __result220__ = (_Bool)1;
    /* U13 */output_file_name_314 = come_decrement_ref_count2(output_file_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(command_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */cmd_323 = come_decrement_ref_count2(cmd_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result220__;
}

_Bool new_project(int argc, char** argv){
void* __right_value311 = (void*)0;
char* project_name_329;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* project_name_debug_330;
void* __right_value315 = (void*)0;
char* cc_331;
void* __right_value316 = (void*)0;
char* install_332;
void* __right_value317 = (void*)0;
char* libs_333;
void* __right_value318 = (void*)0;
char* os_334;
void* __right_value319 = (void*)0;
char* prefix_335;
void* __right_value320 = (void*)0;
char* cflags_336;
void* __right_value321 = (void*)0;
char* cflags_debug_337;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
int Value_338;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
_Bool __result221__;
    project_name_329=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_330=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value312=__builtin_string(argv[2]))),((char*)(__right_value313=__builtin_string("-debug")))));
    /* U11 */__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_331=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_332=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_333=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_334=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_335=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_336=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_337=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_338=system(((char*)(__right_value323=xsprintf("mkdir \%s",((char*)(__right_value322=string_to_string(project_name_329)))))));
    if(    (_if_conditional2=(Value_338<0)),    /* U10 */ (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    /* U10 */ (__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 426, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value349=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value324=string_to_string(project_name_329))),((char*)(__right_value325=string_to_string(project_name_329))),((char*)(__right_value326=string_to_string(project_name_329))),((char*)(__right_value327=string_to_string(project_name_329))),((char*)(__right_value328=string_to_string(cc_331))),((char*)(__right_value329=string_to_string(install_332))),((char*)(__right_value330=string_to_string(cflags_336))),((char*)(__right_value331=string_to_string(cflags_debug_337))),((char*)(__right_value332=string_to_string(libs_333))),((char*)(__right_value333=string_to_string(os_334))),((char*)(__right_value334=string_to_string(prefix_335))),((char*)(__right_value335=string_to_string(project_name_329))),((char*)(__right_value336=string_to_string(project_name_debug_330))),((char*)(__right_value337=string_to_string(project_name_329))),((char*)(__right_value338=string_to_string(project_name_329))),((char*)(__right_value339=string_to_string(project_name_329))),((char*)(__right_value340=string_to_string(project_name_329))),((char*)(__right_value341=string_to_string(project_name_debug_330))),((char*)(__right_value342=string_to_string(project_name_329))),((char*)(__right_value343=string_to_string(project_name_329))),((char*)(__right_value344=string_to_string(project_name_329))),((char*)(__right_value345=string_to_string(project_name_329))),((char*)(__right_value346=string_to_string(project_name_329))),((char*)(__right_value347=string_to_string(project_name_debug_330))),((char*)(__right_value348=string_to_string(project_name_debug_330)))))),((char*)(__right_value351=xsprintf("\%s/Makefile",((char*)(__right_value350=string_to_string(project_name_329)))))),(_Bool)0);
    /* U11 */__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result221__ = (_Bool)1;
    /* U13 */project_name_329 = come_decrement_ref_count2(project_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */project_name_debug_330 = come_decrement_ref_count2(project_name_debug_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cc_331 = come_decrement_ref_count2(cc_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */install_332 = come_decrement_ref_count2(install_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */libs_333 = come_decrement_ref_count2(libs_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */os_334 = come_decrement_ref_count2(os_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */prefix_335 = come_decrement_ref_count2(prefix_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cflags_336 = come_decrement_ref_count2(cflags_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */cflags_debug_337 = come_decrement_ref_count2(cflags_debug_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result221__;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* Value_339;
int Value_340;
_Bool __exception_result_var_b2;
int Value_341;
_Bool __exception_result_var_b3;
    Value_339=fopen("common.h","r");
    if(    Value_339) {
        fclose(Value_339);
    }
    else {
        Value_340=system("make header");
        if(        Value_340<0) {
            (come_push_stackframe("02transpile.c", 532, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_341=system("make run");
    if(    Value_341<0) {
        (come_push_stackframe("02transpile.c", 537, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_342;
_Bool __exception_result_var_b4;
    Value_342=system("make header");
    if(    Value_342<0) {
        (come_push_stackframe("02transpile.c", 546, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* Value_343;
int Value_344;
_Bool __exception_result_var_b5;
int Value_345;
_Bool __exception_result_var_b6;
    Value_343=fopen("common.h","r");
    if(    Value_343) {
        fclose(Value_343);
    }
    else {
        Value_344=system("make header");
        if(        Value_344<0) {
            (come_push_stackframe("02transpile.c", 559, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_345=system("make compile");
    if(    Value_345<0) {
        (come_push_stackframe("02transpile.c", 563, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* Value_346;
int Value_347;
_Bool __exception_result_var_b7;
int Value_348;
_Bool __exception_result_var_b8;
    Value_346=fopen("common.h","r");
    if(    Value_346) {
        fclose(Value_346);
    }
    else {
        Value_347=system("make header");
        if(        Value_347<0) {
            (come_push_stackframe("02transpile.c", 576, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_348=system("make debug");
    if(    Value_348<0) {
        (come_push_stackframe("02transpile.c", 580, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_349;
_Bool __exception_result_var_b9;
    Value_349=system("make clean");
    if(    Value_349<0) {
        (come_push_stackframe("02transpile.c", 589, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
int Value_350;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_350=system(((char*)(__right_value353=xsprintf("make install DESTDIR=\%s",((char*)(__right_value352=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_350<0)),    /* U10 */ (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    /* U10 */ (__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 598, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
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
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
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
int i_406;
void* __right_value396 = (void*)0;
char* generics_type_407;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
int i_408;
void* __right_value399 = (void*)0;
char* generics_type_409;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
int is_mac_410;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
char* type_name_411;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sType* type_412;
void* __right_value408 = (void*)0;
char* __dec_obj72;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sClass* klass_434;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
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
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 606, "sClass")),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 607, "sClass")),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 608, "sClass")),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 609, "sClass")),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 610, "sClass")),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 611, "sClass")),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 612, "sClass")),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 613, "sClass")),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 614, "sClass")),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 615, "sClass")),"_Float16",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 616, "sClass")),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 617, "sClass")),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 618, "sClass")),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_406=0;    i_406<12;    i_406++    ){
        generics_type_407=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_406));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_407),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "sClass")),generics_type_407,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_406,-1,(_Bool)0,info)));
        /* U13 */generics_type_407 = come_decrement_ref_count2(generics_type_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_408=0;    i_408<7;    i_408++    ){
        generics_type_409=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_408));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_409),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "sClass")),generics_type_409,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_408,(_Bool)0,info)));
        /* U13 */generics_type_409 = come_decrement_ref_count2(generics_type_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    is_mac_410=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_410==0) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 630, "sClass")),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_411=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_412=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 634, "sType")),"__builtin_va_list",(_Bool)0,info));
        __dec_obj72=type_412->mOriginalTypeName;
        type_412->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_411)),(struct sType*)come_increment_ref_count(type_412));
        /* U13 */type_name_411 = come_decrement_ref_count2(type_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_434=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 640, "sClass")),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2charphsTypephph_push_back(klass_434->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 642, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 642, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_434->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 643, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 643, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_434->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 644, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 644, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_434->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 645, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 645, "sType")),"int",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_434->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 646, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 646, "sType")),"int",(_Bool)0,info)))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_434));
        /*i*/come_call_finalizer3(klass_434,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_382;
unsigned int it_383;
_Bool same_key_exist_400;
char* it2_403;
struct map$2charphsClassph* __result242__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_382=charp_get_hash_key(key)%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(        self->item_existance[it_383]) {
            if(            charp_equals(self->keys[it_383],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_383]);
                    /* U13 */self->keys[it_383] = come_decrement_ref_count2(self->keys[it_383], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_383]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_383]);
                    self->keys[it_383]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_383],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_383]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_383]=item;
                }
                break;
            }
            it_383++;
            if(            it_383>=self->size) {
                it_383=0;
            }
            else if(            it_383==hash_382) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_383]=(_Bool)1;
            if(            1) {
                self->keys[it_383]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_383]=key;
            }
            if(            1) {
                self->items[it_383]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_383]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_400=(_Bool)0;
    for(    it2_403=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_403=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_403,key)) {
            same_key_exist_400=(_Bool)1;
        }
    }
    if(    !same_key_exist_400) {
        list$1charp_push_back(self->key_list,key);
    }
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_351;
void* __right_value354 = (void*)0;
char** keys_352;
void* __right_value355 = (void*)0;
struct sClass** items_353;
void* __right_value356 = (void*)0;
_Bool* item_existance_354;
int len_355;
char* it_358;
struct sClass* default_value_361;
struct sClass* it2_362;
unsigned int hash_379;
int n_380;
struct sClass* default_value_381;
default_value_361 = (void*)0;
default_value_381 = (void*)0;
    size_351=self->size*10;
    keys_352=(char**)come_increment_ref_count(((char**)(__right_value354=(char**)come_calloc(1, sizeof(char*)*(1*(size_351)), "./comelang.h", 2511, "char*%"))));
    items_353=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value355=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_351)), "./comelang.h", 2512, "sClass*%"))));
    item_existance_354=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value356=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_351)), "./comelang.h", 2513, "bool"))));
    len_355=0;
    for(    it_358=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_358=map$2charphsClassph_next(self)    ){
        memset(&default_value_361,0,sizeof(struct sClass*));
        it2_362=map$2charphsClassph_at(self,it_358,default_value_361);
        hash_379=charp_get_hash_key(it_358)%size_351;
        n_380=hash_379;
        while((_Bool)1) {
            if(            item_existance_354[n_380]) {
                n_380++;
                if(                n_380>=size_351) {
                    n_380=0;
                }
                else if(                n_380==hash_379) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_354[n_380]=(_Bool)1;
                keys_352[n_380]=it_358;
                items_353[n_380]=map$2charphsClassph_at(self,it_358,default_value_381);
                len_355++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_352;
    self->items=items_353;
    self->item_existance=item_existance_354;
    self->size=size_351;
    self->len=len_355;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result222__;
char* __result223__;
char* result_357;
char* __result224__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result222__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result223__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    memset(&result_357,0,sizeof(char*));
    __result224__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_359;
char* __result225__;
char* __result226__;
char* result_360;
char* __result227__;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result225__ = gComeFunResultObject = __result_obj__ = result_359;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result226__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    memset(&result_360,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = result_360;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_363;
unsigned int it_364;
struct sClass* __result228__;
struct sClass* __result229__;
struct sClass* __result230__;
struct sClass* __result231__;
    hash_363=charp_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while((_Bool)1) {
        if(        self->item_existance[it_364]) {
            if(            charp_equals(self->keys[it_364],key)) {
                __result228__ = gComeFunResultObject = __result_obj__ = self->items[it_364];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
            it_364++;
            if(            it_364>=self->size) {
                it_364=0;
            }
            else if(            it_364==hash_363) {
                __result229__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        else {
            __result230__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj45;
struct list$1tuple2$2charphsTypephph* __dec_obj46;
char* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj45=self->mName;
            /*G*/ __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj46=self->mFields;
            come_call_finalizer3(__dec_obj46,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj70=self->mDeclareSName;
            /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj71=self->mParentClassName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_365;
struct list_item$1tuple2$2charphsTypephph* prev_it_366;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        /*i*/come_call_finalizer3(prev_it_366,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            come_call_finalizer3(__dec_obj47,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj52;
char* __dec_obj54;
struct list$1sTypeph* __dec_obj55;
struct list$1sNodeph* __dec_obj57;
struct list$1sTypeph* __dec_obj59;
struct list$1charph* __dec_obj60;
struct tuple1$1sTypeph* __dec_obj61;
struct sNode* __dec_obj63;
struct tuple1$1sTypeph* __dec_obj64;
struct sNode* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj50=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj52=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj54=self->mGenericsName;
            /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj55=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj57=self->mArrayNum;
            come_call_finalizer3(__dec_obj57,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj59=self->mParamTypes;
            come_call_finalizer3(__dec_obj59,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj60=self->mParamNames;
            come_call_finalizer3(__dec_obj60,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj61=self->mResultType;
            come_call_finalizer3(__dec_obj61,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj63=self->mAlignas;
            /* U1 */ if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj64=self->mChannelType;
            come_call_finalizer3(__dec_obj64,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj66=self->mSizeNum;
            /* U1 */ if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj67=self->mOriginalTypeName;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj68=self->mAsmName;
            /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj69=self->mTupleName;
            /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_367;
struct list_item$1sTypeph* prev_it_368;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        /*i*/come_call_finalizer3(prev_it_368,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj56;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj56=self->item;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_369;
struct list_item$1sTypeph* prev_it_370;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        prev_it_370=it_369;
        it_369=it_369->next;
        /*i*/come_call_finalizer3(prev_it_370,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_371;
struct list_item$1sNodeph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        /*i*/come_call_finalizer3(prev_it_372,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj58;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj58=self->item;
            /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_373;
struct list_item$1sNodeph* prev_it_374;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        /*i*/come_call_finalizer3(prev_it_374,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_375;
struct list_item$1charph* prev_it_376;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        /*i*/come_call_finalizer3(prev_it_376,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj65;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj65=self->v1;
            come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_377;
struct list_item$1tuple2$2charphsTypephph* prev_it_378;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        /*i*/come_call_finalizer3(prev_it_378,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_384;
struct list_item$1charp* it_385;
struct list$1charp* __result235__;
    it2_384=0;
    it_385=self->head;
    while(it_385!=((void*)0)) {
        if(        charp_equals(it_385->item,item)) {
            list$1charp_delete(self,it2_384,it2_384+1);
            break;
        }
        it2_384++;
        it_385=it_385->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_386;
struct list$1charp* __result232__;
struct list_item$1charp* it_389;
int i_390;
struct list_item$1charp* prev_it_391;
struct list_item$1charp* it_392;
int i_393;
struct list_item$1charp* prev_it_394;
struct list_item$1charp* it_395;
struct list_item$1charp* head_prev_it_396;
struct list_item$1charp* tail_it_397;
int i_398;
struct list_item$1charp* prev_it_399;
struct list$1charp* __result234__;
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
        __result232__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_389=self->head;
        i_390=0;
        while(it_389!=((void*)0)) {
            if(            i_390<tail) {
                prev_it_391=it_389;
                it_389=it_389->next;
                i_390++;
                /*i*/come_call_finalizer3(prev_it_391,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
                /*i*/come_call_finalizer3(prev_it_394,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
                /*i*/come_call_finalizer3(prev_it_399,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_387;
struct list_item$1charp* prev_it_388;
struct list$1charp* __result233__;
    it_387=self->head;
    while(it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        /*i*/come_call_finalizer3(prev_it_388,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_401;
char* __result236__;
char* __result237__;
char* result_402;
char* __result238__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_401,0,sizeof(char*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->head;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_402,0,sizeof(char*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_404;
char* __result239__;
char* __result240__;
char* result_405;
char* __result241__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_404,0,sizeof(char*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_405,0,sizeof(char*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_405;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_430;
unsigned int it_431;
_Bool same_key_exist_432;
char* it2_433;
struct map$2charphsTypeph* __result253__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_430=charp_get_hash_key(key)%self->size;
    it_431=hash_430;
    while((_Bool)1) {
        if(        self->item_existance[it_431]) {
            if(            charp_equals(self->keys[it_431],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_431]);
                    /* U13 */self->keys[it_431] = come_decrement_ref_count2(self->keys[it_431], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_431]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_431]);
                    self->keys[it_431]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_431],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_431]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_431]=item;
                }
                break;
            }
            it_431++;
            if(            it_431>=self->size) {
                it_431=0;
            }
            else if(            it_431==hash_430) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_431]=(_Bool)1;
            if(            1) {
                self->keys[it_431]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_431]=key;
            }
            if(            1) {
                self->items[it_431]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_431]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_432=(_Bool)0;
    for(    it2_433=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_433=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_433,key)) {
            same_key_exist_432=(_Bool)1;
        }
    }
    if(    !same_key_exist_432) {
        list$1charp_push_back(self->key_list,key);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_413;
void* __right_value409 = (void*)0;
char** keys_414;
void* __right_value410 = (void*)0;
struct sType** items_415;
void* __right_value411 = (void*)0;
_Bool* item_existance_416;
int len_417;
char* it_420;
struct sType* default_value_423;
struct sType* it2_424;
unsigned int hash_427;
int n_428;
struct sType* default_value_429;
default_value_423 = (void*)0;
default_value_429 = (void*)0;
    size_413=self->size*10;
    keys_414=(char**)come_increment_ref_count(((char**)(__right_value409=(char**)come_calloc(1, sizeof(char*)*(1*(size_413)), "./comelang.h", 2511, "char*%"))));
    items_415=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value410=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_413)), "./comelang.h", 2512, "sType*%"))));
    item_existance_416=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value411=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_413)), "./comelang.h", 2513, "bool"))));
    len_417=0;
    for(    it_420=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_420=map$2charphsTypeph_next(self)    ){
        memset(&default_value_423,0,sizeof(struct sType*));
        it2_424=map$2charphsTypeph_at(self,it_420,default_value_423);
        hash_427=charp_get_hash_key(it_420)%size_413;
        n_428=hash_427;
        while((_Bool)1) {
            if(            item_existance_416[n_428]) {
                n_428++;
                if(                n_428>=size_413) {
                    n_428=0;
                }
                else if(                n_428==hash_427) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_416[n_428]=(_Bool)1;
                keys_414[n_428]=it_420;
                items_415[n_428]=map$2charphsTypeph_at(self,it_420,default_value_429);
                len_417++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_414;
    self->items=items_415;
    self->item_existance=item_existance_416;
    self->size=size_413;
    self->len=len_417;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_418;
char* __result243__;
char* __result244__;
char* result_419;
char* __result245__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_419,0,sizeof(char*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_421;
char* __result246__;
char* __result247__;
char* result_422;
char* __result248__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_422,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_425;
unsigned int it_426;
struct sType* __result249__;
struct sType* __result250__;
struct sType* __result251__;
struct sType* __result252__;
    hash_425=charp_get_hash_key(((char*)key))%self->size;
    it_426=hash_425;
    while((_Bool)1) {
        if(        self->item_existance[it_426]) {
            if(            charp_equals(self->keys[it_426],key)) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_426];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_426++;
            if(            it_426>=self->size) {
                it_426=0;
            }
            else if(            it_426==hash_425) {
                __result250__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_435;
struct tuple2$2charphsTypeph* __dec_obj73;
void* __right_value416 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_436;
struct tuple2$2charphsTypeph* __dec_obj76;
void* __right_value417 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_437;
struct tuple2$2charphsTypeph* __dec_obj79;
struct list$1tuple2$2charphsTypephph* __result254__;
    if(    self->len==0) {
        litem_435=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value415=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1106, "list_item$1tuple2$2charphsTypephph"))));
        litem_435->prev=((void*)0);
        litem_435->next=((void*)0);
        __dec_obj73=litem_435->item;
        litem_435->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_435;
        self->head=litem_435;
    }
    else if(    self->len==1) {
        litem_436=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value416=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1116, "list_item$1tuple2$2charphsTypephph"))));
        litem_436->prev=self->head;
        litem_436->next=((void*)0);
        __dec_obj76=litem_436->item;
        litem_436->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_436;
        self->head->next=litem_436;
    }
    else {
        litem_437=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value417=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1126, "list_item$1tuple2$2charphsTypephph"))));
        litem_437->prev=self->tail;
        litem_437->next=((void*)0);
        __dec_obj79=litem_437->item;
        litem_437->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_437;
        self->tail=litem_437;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj80;
struct sType* __dec_obj81;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj81=self->v2;
            come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj82;
struct sType* __dec_obj83;
struct tuple2$2charphsTypeph* __result255__;
    __dec_obj82=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj83=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

void create_pico_version_header(){
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* Value_438;
_Bool _if_conditional4;
int version_major_439;
char* p_440;
int version_miner_441;
char* p_442;
int version_revision_443;
char* p_444;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* version_string_445;
int Value_446;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_438=(char*)come_increment_ref_count(charp_read((((char*)(__right_value444=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_438)),        /* U10 */ (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            version_major_439=0;
            p_440=strstr(Value_438,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_440) {
                p_440+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_440==32||*p_440==9) {
                    p_440++;
                }
                while(xisdigit(*p_440)) {
                    version_major_439=version_major_439*10+(*p_440-48);
                    p_440++;
                }
            }
            version_miner_441=0;
            p_442=strstr(Value_438,"set(PICO_SDK_VERSION_MINOR");
            if(            p_442) {
                p_442+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_442==32||*p_442==9) {
                    p_442++;
                }
                while(xisdigit(*p_442)) {
                    version_miner_441=version_miner_441*10+*p_442-48;
                    p_442++;
                }
            }
            version_revision_443=0;
            p_444=strstr(Value_438,"set(PICO_SDK_VERSION_REVISION");
            if(            p_444) {
                p_444+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_444==32||*p_444==9) {
                    p_444++;
                }
                while(xisdigit(*p_444)) {
                    version_revision_443=version_revision_443*10+*p_444-48;
                    p_444++;
                }
            }
            version_string_445=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value446=int_to_string(version_major_439))),((char*)(__right_value447=int_to_string(version_miner_441))),((char*)(__right_value448=int_to_string(version_revision_443)))));
            /* U11 */__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            Value_446=system("mkdir -p pico");
            if(            !Value_446) {
                charp_write(((char*)(__right_value454=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value450=int_to_string(version_major_439))),((char*)(__right_value451=int_to_string(version_miner_441))),((char*)(__right_value452=int_to_string(version_revision_443))),((char*)(__right_value453=string_to_string(version_string_445)))))),"pico/version.h",(_Bool)0);
                /* U11 */__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
            }
            /* U13 */version_string_445 = come_decrement_ref_count2(version_string_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
        }
        /* U13 */Value_438 = come_decrement_ref_count2(Value_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main_v2(int argc, char** argv){
int start_num_447;
void* __right_value455 = (void*)0;
char* output_file_name_str_448;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* clang_option_449;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct buffer* linker_option_450;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct buffer* cpp_option_451;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1charph* files_452;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* object_files_453;
_Bool output_object_file_454;
_Bool output_cpp_file_455;
_Bool output_source_file_flag_456;
_Bool output_object_file_flag_457;
char* output_file_name_458;
_Bool verbose_459;
_Bool come_debug_460;
_Bool come_malloc_461;
_Bool remove_comment_462;
int i_463;
void* __right_value466 = (void*)0;
char* __dec_obj84;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* env_464;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* __dec_obj85;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
_Bool _elif_conditional1;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
_Bool _elif_conditional2;
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
int Value_465;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct _IO_FILE* Value_466;
_Bool __exception_result_var_b12;
void* __right_value497 = (void*)0;
char* tmp_file_467;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
int Value_468;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_469;
void* __right_value502 = (void*)0;
char* __dec_obj86;
void* __right_value503 = (void*)0;
char* __dec_obj87;
void* __right_value504 = (void*)0;
char* __dec_obj88;
void* __right_value505 = (void*)0;
char* __dec_obj89;
void* __right_value506 = (void*)0;
char* __dec_obj90;
void* __right_value507 = (void*)0;
void* __right_value513 = (void*)0;
struct map$2charphsFunph* __dec_obj107;
void* __right_value514 = (void*)0;
void* __right_value520 = (void*)0;
struct map$2charphbufferph* __dec_obj109;
void* __right_value521 = (void*)0;
void* __right_value527 = (void*)0;
struct map$2charphcharph* __dec_obj111;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct map$2charphbufferph* __dec_obj112;
void* __right_value530 = (void*)0;
void* __right_value536 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj124;
void* __right_value537 = (void*)0;
void* __right_value543 = (void*)0;
struct map$2charphsClassph* __dec_obj126;
void* __right_value544 = (void*)0;
void* __right_value550 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj132;
void* __right_value551 = (void*)0;
void* __right_value557 = (void*)0;
struct map$2charphsTypeph* __dec_obj134;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sModule* __dec_obj135;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj145;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1CVALUEph* __dec_obj150;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sVarTable* __dec_obj151;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sVarTable* lv_table_513;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1charph* __dec_obj152;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct list$1charph* __dec_obj153;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct map$2charphsClassph* __dec_obj154;
void* __right_value574 = (void*)0;
void* __right_value580 = (void*)0;
struct map$2charphint* __dec_obj156;
void* __right_value581 = (void*)0;
char* __dec_obj157;
_Bool Value_520;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* __dec_obj158;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct buffer* __dec_obj159;
_Bool Value_521;
_Bool Value_522;
void* __right_value588 = (void*)0;
_Bool Value_527;
_Bool Value_528;
_Bool Value_529;
_Bool Value_530;
_Bool Value_531;
_Bool Value_532;
_Bool Value_533;
_Bool Value_534;
int start_num_535;
char* output_file_name_str_536;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct buffer* clang_option_537;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct buffer* linker_option_538;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* cpp_option_539;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1charph* files_540;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1charph* object_files_541;
_Bool output_object_file_542;
_Bool output_cpp_file_543;
_Bool output_source_file_flag_544;
_Bool output_object_file_flag_545;
char* output_file_name_546;
_Bool verbose_547;
_Bool come_debug_548;
_Bool come_malloc_549;
_Bool remove_comment_550;
int i_551;
void* __right_value599 = (void*)0;
char* __dec_obj202;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
char* env_552;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct buffer* __dec_obj203;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
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
_Bool _elif_conditional3;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
_Bool _elif_conditional4;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1charph* o2_saved_553;
char* it_554;
struct sInfo info_555;
struct _IO_FILE* Value_556;
void* __right_value629 = (void*)0;
char* __dec_obj204;
void* __right_value630 = (void*)0;
char* __dec_obj205;
void* __right_value631 = (void*)0;
char* __dec_obj206;
void* __right_value632 = (void*)0;
char* __dec_obj207;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct map$2charphsFunph* __dec_obj208;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct map$2charphbufferph* __dec_obj209;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct map$2charphcharph* __dec_obj210;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct map$2charphbufferph* __dec_obj211;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj212;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct map$2charphsClassph* __dec_obj213;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj214;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct map$2charphsTypeph* __dec_obj215;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sModule* __dec_obj216;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj217;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1CVALUEph* __dec_obj218;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sVarTable* __dec_obj219;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sVarTable* lv_table_557;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* __dec_obj220;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* __dec_obj221;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct map$2charphsClassph* __dec_obj222;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct map$2charphint* __dec_obj223;
_Bool Value_558;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct buffer* __dec_obj224;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct buffer* __dec_obj225;
void* __right_value673 = (void*)0;
char* __dec_obj226;
char* __dec_obj227;
_Bool Value_559;
_Bool Value_560;
_Bool Value_561;
_Bool Value_562;
struct sInfo info_563;
void* __right_value674 = (void*)0;
char* __dec_obj228;
void* __right_value675 = (void*)0;
char* __dec_obj229;
void* __right_value676 = (void*)0;
char* __dec_obj230;
void* __right_value677 = (void*)0;
char* __dec_obj231;
char* __dec_obj232;
_Bool Value_567;
memset(&info_469, 0, sizeof(struct sInfo));
memset(&info_555, 0, sizeof(struct sInfo));
memset(&info_563, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        start_num_447=2;
        output_file_name_str_448=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 715, "buffer"))));
        linker_option_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 716, "buffer"))));
        cpp_option_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 717, "buffer"))));
        buffer_append_str(cpp_option_451,"-U__GNUC__");
        files_452=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 719, "list$1charph"))));
        object_files_453=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 720, "list$1charph"))));
        output_object_file_454=(_Bool)0;
        output_cpp_file_455=(_Bool)0;
        output_source_file_flag_456=(_Bool)0;
        output_object_file_flag_457=(_Bool)1;
        output_file_name_458=(char*)come_increment_ref_count(output_file_name_str_448);
        verbose_459=(_Bool)0;
        come_debug_460=(_Bool)0;
        come_malloc_461=(_Bool)0;
        remove_comment_462=(_Bool)0;
        for(        i_463=start_num_447;        i_463<argc;        i_463++        ){
            if(            charp_operator_equals(argv[i_463],"-o")&&i_463+1<argc) {
                __dec_obj84=output_file_name_458;
                output_file_name_458=(char*)come_increment_ref_count(__builtin_string(argv[i_463+1]));
                /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_463++;
            }
            else if(            charp_operator_equals(argv[i_463],"-e")&&i_463+1<argc) {
                buffer_append_str(linker_option_450,((char*)(__right_value468=xsprintf("-e \%s",((char*)(__right_value467=charp_to_string(argv[i_463+1])))))));
                /* U11 */__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_463++;
            }
            else if(            charp_operator_equals(argv[i_463],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-pico")) {
                output_source_file_flag_456=(_Bool)1;
                output_object_file_flag_457=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_464=getenv("PICO_SDK_PATH");
                __dec_obj85=cpp_option_451;
                cpp_option_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 750, "buffer"))));
                come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_451,((char*)(__right_value473=xsprintf(" -nostdinc -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include -I %%s/include/newlib-nano \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I $(find $PICO_TOOLCHAIN_PATH/.. -name stdarg.h | sed 's/stdarg.h//' | grep -v c++ | awk 'NR==1') -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value471=charp_to_string(env_464))),((char*)(__right_value472=charp_to_string(env_464)))))),"/usr/local/");
                /* U11 */__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
            }
            else if(            i_463+1<argc&&charp_operator_equals(argv[i_463],"-target")) {
                buffer_append_str(clang_option_449,((char*)(__right_value475=xsprintf("-target \%s",((char*)(__right_value474=charp_to_string(argv[i_463+1])))))));
                /* U11 */__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_463++;
            }
            else if(            i_463+1<argc&&charp_operator_equals(argv[i_463],"-T")) {
                buffer_append_str(clang_option_449,((char*)(__right_value477=xsprintf(" -T \%s ",((char*)(__right_value476=charp_to_string(argv[i_463+1])))))));
                /* U11 */__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_463++;
            }
            else if(            charp_operator_equals(argv[i_463],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-gc")) {
                gComeGC=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-cg")) {
                come_debug_460=(_Bool)1;
                buffer_append_str(clang_option_449,"-g ");
            }
            else if(            charp_operator_equals(argv[i_463],"-C")) {
                remove_comment_462=(_Bool)1;
            }
            else if(            i_463+1<argc&&charp_operator_equals(argv[i_463],"-target")) {
                buffer_append_str(clang_option_449,((char*)(__right_value479=xsprintf("-target \%s",((char*)(__right_value478=charp_to_string(argv[i_463+1])))))));
                /* U11 */__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_463++;
            }
            else if(            i_463+1<argc&&charp_operator_equals(argv[i_463],"-T")) {
                buffer_append_str(clang_option_449,((char*)(__right_value481=xsprintf(" -T \%s ",((char*)(__right_value480=charp_to_string(argv[i_463+1])))))));
                /* U11 */__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_463++;
            }
            else if(            charp_operator_equals(argv[i_463],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value482=charp_operator_load_range_element(argv[i_463],0,2))),"-O"))),            /* U10 */ (__right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_449,((char*)(__right_value484=xsprintf(" \%s ",((char*)(__right_value483=charp_to_string(argv[i_463])))))));
                /* U11 */__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_460=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value485=charp_operator_load_range_element(argv[i_463],0,2))),"-D"))),            /* U10 */ (__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_451,((char*)(__right_value487=xsprintf(" \%s ",((char*)(__right_value486=charp_to_string(argv[i_463])))))));
                /* U11 */__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_449,((char*)(__right_value489=xsprintf(" \%s ",((char*)(__right_value488=charp_to_string(argv[i_463])))))));
                /* U11 */__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_463],"-g")) {
                buffer_append_str(clang_option_449,"-g ");
            }
            else if(            charp_operator_equals(argv[i_463],"-v")) {
                buffer_append_str(clang_option_449,"-v ");
                verbose_459=(_Bool)1;
            }
            else if(            strlen(argv[i_463])>=2&&memcmp(argv[i_463],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_451,((char*)(__right_value491=charp_operator_add(" ",((char*)(__right_value490=charp_operator_add(argv[i_463]," ")))))));
                /* U11 */__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_463],"-gdwarf-4")) {
                buffer_append_str(clang_option_449,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_463],"-s")||charp_operator_equals(argv[i_463],"-S")) {
                output_source_file_flag_456=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_463],"-c")) {
                output_object_file_454=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_463],"-E")) {
                output_cpp_file_455=(_Bool)1;
            }
            else if(            argv[i_463][0]==45) {
                buffer_append_str(clang_option_449,((char*)(__right_value492=charp_operator_add(argv[i_463]," "))));
                /* U11 */__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_463])>2&&memcmp(argv[i_463]+strlen(argv[i_463])-2,".o",2)==0) {
                list$1charph_push_back(object_files_453,(char*)come_increment_ref_count(__builtin_string(argv[i_463])));
            }
            else if(            strlen(argv[i_463])>2&&memcmp(argv[i_463]+strlen(argv[i_463])-2,".a",2)==0) {
                list$1charph_push_back(object_files_453,(char*)come_increment_ref_count(__builtin_string(argv[i_463])));
            }
            else {
                list$1charph_push_back(files_452,(char*)come_increment_ref_count(__builtin_string(argv[i_463])));
            }
        }
        gComeDebug=come_debug_460;
        gComeMalloc=come_malloc_461;
        Value_465=system(((char*)(__right_value496=xsprintf("%s %s",RM,output_file_name_458))));
        if(        (_if_conditional5=(Value_465<0)),        /* U10 */ (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 854, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_466=fopen(output_file_name_458,"w");
        if(        Value_466) {
            fclose(Value_466);
        }
        else {
            (come_push_stackframe("02transpile.c", 861, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_467=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_468=system(((char*)(__right_value501=xsprintf("cat \%s > \%s",((char*)(__right_value499=string_to_string(((char*)(__right_value498=list$1charph_join(files_452," ")))))),((char*)(__right_value500=string_to_string(tmp_file_467)))))));
        if(        (_if_conditional6=(Value_468<0)),        /* U10 */ (__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        /* U10 */ (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 867, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_469,0,sizeof(struct sInfo));
        __dec_obj86=info_469.base_sname;
        info_469.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_467));
        /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj87=info_469.sname;
        info_469.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_467));
        /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_469.sline=1;
        info_469.err_num=0;
        __dec_obj88=info_469.clang_option;
        info_469.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_449));
        /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj89=info_469.cpp_option;
        info_469.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_451));
        /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj90=info_469.linker_option;
        info_469.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_450));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_469.no_output_err=(_Bool)0;
        __dec_obj107=info_469.funcs;
        info_469.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 882, "map$2charphsFunph"))));
        come_call_finalizer3(__dec_obj107,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj109=info_469.struct_definition;
        info_469.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferph_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 883, "map$2charphbufferph"))));
        come_call_finalizer3(__dec_obj109,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj111=info_469.uniq_definition;
        info_469.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 884, "map$2charphcharph"))));
        come_call_finalizer3(__dec_obj111,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj112=info_469.previous_struct_definition;
        info_469.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferph_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 885, "map$2charphbufferph"))));
        come_call_finalizer3(__dec_obj112,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj124=info_469.generics_funcs;
        info_469.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 886, "map$2charphsGenericsFunph"))));
        come_call_finalizer3(__dec_obj124,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj126=info_469.classes;
        info_469.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 887, "map$2charphsClassph"))));
        come_call_finalizer3(__dec_obj126,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj132=info_469.modules;
        info_469.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 888, "map$2charphsClassModuleph"))));
        come_call_finalizer3(__dec_obj132,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj134=info_469.types;
        info_469.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 889, "map$2charphsTypeph"))));
        come_call_finalizer3(__dec_obj134,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj135=info_469.module;
        info_469.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 890, "sModule"))));
        come_call_finalizer3(__dec_obj135,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj145=info_469.right_value_objects;
        info_469.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 891, "list$1sRightValueObjectph"))));
        come_call_finalizer3(__dec_obj145,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj150=info_469.stack;
        info_469.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 892, "list$1CVALUEph"))));
        come_call_finalizer3(__dec_obj150,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj151=info_469.gv_table;
        info_469.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 893, "sVarTable")),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj151,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_513=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 894, "sVarTable")),(_Bool)0,((void*)0)));
        info_469.lv_table=lv_table_513;
        __dec_obj152=info_469.generics_type_names;
        info_469.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 896, "list$1charph"))));
        come_call_finalizer3(__dec_obj152,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj153=info_469.method_generics_type_names;
        info_469.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 897, "list$1charph"))));
        come_call_finalizer3(__dec_obj153,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj154=info_469.generics_classes;
        info_469.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 898, "map$2charphsClassph"))));
        come_call_finalizer3(__dec_obj154,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_469.verbose=verbose_459;
        info_469.output_header_file=(_Bool)1;
        __dec_obj156=info_469.outputed_class;
        info_469.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphint_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 901, "map$2charphint"))));
        come_call_finalizer3(__dec_obj156,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
        info_469.remove_comment=remove_comment_462;
        static int n_519=0;
        info_469.num_source_files=n_519++;
        info_469.max_source_files=list$1charph_length(files_452);
        __dec_obj157=info_469.output_file_name;
        info_469.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_458));
        /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_469);
        clear_tmp_file(&info_469);
        Value_520=cpp(&info_469);
        if(        !Value_520) {
            printf("%s %d: transpile failed\n",info_469.sname,info_469.sline);
            exit(2);
        }
        else {
        }
        __dec_obj158=info_469.original_source;
        info_469.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value583=charp_read(((char*)(__right_value582=xsprintf("%s",tmp_file_467))))))));
        come_call_finalizer3(__dec_obj158,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj159=info_469.source;
        info_469.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value586=charp_read(((char*)(__right_value585=xsprintf("%s.i",tmp_file_467))))))));
        come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_469.p=info_469.source->buf;
        info_469.head=info_469.source->buf;
        Value_521=output_cpp_file_455;
        if(        !Value_521) {
            transpile_v5(&info_469);
            Value_522=output_header_file(&info_469);
            if(            !Value_522) {
                printf("%s %d: output source file faield\n",info_469.sname,info_469.sline);
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value588=xsprintf("%s %s*",RM,tmp_file_467))));
        /* U11 */__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U13 */output_file_name_str_448 = come_decrement_ref_count2(output_file_name_str_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(clang_option_449,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(linker_option_450,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_451,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_458 = come_decrement_ref_count2(output_file_name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */tmp_file_467 = come_decrement_ref_count2(tmp_file_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3((&info_469),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(lv_table_513,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_527=new_project(argc,argv);
        if(        !Value_527) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_528=run_project(argc,argv);
        if(        !Value_528) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_529=make_header_project(argc,argv);
        if(        !Value_529) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_530=compile_project(argc,argv);
        if(        !Value_530) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_531=debug_run_project(argc,argv);
        if(        !Value_531) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_532=clean_project(argc,argv);
        if(        !Value_532) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_533=install_project(argc,argv,"/usr/local");
            if(            !Value_533) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_534=install_project(argc,argv,argv[2]);
            if(            !Value_534) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        gProgramName=argv[0];
        start_num_535=1;
        output_file_name_str_536=((void*)0);
        clang_option_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 715, "buffer"))));
        linker_option_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 716, "buffer"))));
        cpp_option_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 717, "buffer"))));
        buffer_append_str(cpp_option_539,"-U__GNUC__");
        files_540=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 719, "list$1charph"))));
        object_files_541=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 720, "list$1charph"))));
        output_object_file_542=(_Bool)0;
        output_cpp_file_543=(_Bool)0;
        output_source_file_flag_544=(_Bool)0;
        output_object_file_flag_545=(_Bool)1;
        output_file_name_546=(char*)come_increment_ref_count(output_file_name_str_536);
        verbose_547=(_Bool)0;
        come_debug_548=(_Bool)0;
        come_malloc_549=(_Bool)0;
        remove_comment_550=(_Bool)0;
        for(        i_551=start_num_535;        i_551<argc;        i_551++        ){
            if(            charp_operator_equals(argv[i_551],"-o")&&i_551+1<argc) {
                __dec_obj202=output_file_name_546;
                output_file_name_546=(char*)come_increment_ref_count(__builtin_string(argv[i_551+1]));
                /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_551++;
            }
            else if(            charp_operator_equals(argv[i_551],"-e")&&i_551+1<argc) {
                buffer_append_str(linker_option_538,((char*)(__right_value601=xsprintf("-e \%s",((char*)(__right_value600=charp_to_string(argv[i_551+1])))))));
                /* U11 */__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_551++;
            }
            else if(            charp_operator_equals(argv[i_551],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-pico")) {
                output_source_file_flag_544=(_Bool)1;
                output_object_file_flag_545=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_552=getenv("PICO_SDK_PATH");
                __dec_obj203=cpp_option_539;
                cpp_option_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 750, "buffer"))));
                come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_539,((char*)(__right_value606=xsprintf(" -nostdinc -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include -I %%s/include/newlib-nano \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I $(find $PICO_TOOLCHAIN_PATH/.. -name stdarg.h | sed 's/stdarg.h//' | grep -v c++ | awk 'NR==1') -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value604=charp_to_string(env_552))),((char*)(__right_value605=charp_to_string(env_552)))))),"/usr/local/");
                /* U11 */__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
            }
            else if(            i_551+1<argc&&charp_operator_equals(argv[i_551],"-target")) {
                buffer_append_str(clang_option_537,((char*)(__right_value608=xsprintf("-target \%s",((char*)(__right_value607=charp_to_string(argv[i_551+1])))))));
                /* U11 */__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_551++;
            }
            else if(            i_551+1<argc&&charp_operator_equals(argv[i_551],"-T")) {
                buffer_append_str(clang_option_537,((char*)(__right_value610=xsprintf(" -T \%s ",((char*)(__right_value609=charp_to_string(argv[i_551+1])))))));
                /* U11 */__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_551++;
            }
            else if(            charp_operator_equals(argv[i_551],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-gc")) {
                gComeGC=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-cg")) {
                come_debug_548=(_Bool)1;
                buffer_append_str(clang_option_537,"-g ");
            }
            else if(            charp_operator_equals(argv[i_551],"-C")) {
                remove_comment_550=(_Bool)1;
            }
            else if(            i_551+1<argc&&charp_operator_equals(argv[i_551],"-target")) {
                buffer_append_str(clang_option_537,((char*)(__right_value612=xsprintf("-target \%s",((char*)(__right_value611=charp_to_string(argv[i_551+1])))))));
                /* U11 */__right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_551++;
            }
            else if(            i_551+1<argc&&charp_operator_equals(argv[i_551],"-T")) {
                buffer_append_str(clang_option_537,((char*)(__right_value614=xsprintf(" -T \%s ",((char*)(__right_value613=charp_to_string(argv[i_551+1])))))));
                /* U11 */__right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_551++;
            }
            else if(            charp_operator_equals(argv[i_551],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value615=charp_operator_load_range_element(argv[i_551],0,2))),"-O"))),            /* U10 */ (__right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(clang_option_537,((char*)(__right_value617=xsprintf(" \%s ",((char*)(__right_value616=charp_to_string(argv[i_551])))))));
                /* U11 */__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_548=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value618=charp_operator_load_range_element(argv[i_551],0,2))),"-D"))),            /* U10 */ (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(cpp_option_539,((char*)(__right_value620=xsprintf(" \%s ",((char*)(__right_value619=charp_to_string(argv[i_551])))))));
                /* U11 */__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_537,((char*)(__right_value622=xsprintf(" \%s ",((char*)(__right_value621=charp_to_string(argv[i_551])))))));
                /* U11 */__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_551],"-g")) {
                buffer_append_str(clang_option_537,"-g ");
            }
            else if(            charp_operator_equals(argv[i_551],"-v")) {
                buffer_append_str(clang_option_537,"-v ");
                verbose_547=(_Bool)1;
            }
            else if(            strlen(argv[i_551])>=2&&memcmp(argv[i_551],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_539,((char*)(__right_value624=charp_operator_add(" ",((char*)(__right_value623=charp_operator_add(argv[i_551]," ")))))));
                /* U11 */__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_551],"-gdwarf-4")) {
                buffer_append_str(clang_option_537,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_551],"-s")||charp_operator_equals(argv[i_551],"-S")) {
                output_source_file_flag_544=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_551],"-c")) {
                output_object_file_542=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_551],"-E")) {
                output_cpp_file_543=(_Bool)1;
            }
            else if(            argv[i_551][0]==45) {
                buffer_append_str(clang_option_537,((char*)(__right_value625=charp_operator_add(argv[i_551]," "))));
                /* U11 */__right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_551])>2&&memcmp(argv[i_551]+strlen(argv[i_551])-2,".o",2)==0) {
                list$1charph_push_back(object_files_541,(char*)come_increment_ref_count(__builtin_string(argv[i_551])));
            }
            else if(            strlen(argv[i_551])>2&&memcmp(argv[i_551]+strlen(argv[i_551])-2,".a",2)==0) {
                list$1charph_push_back(object_files_541,(char*)come_increment_ref_count(__builtin_string(argv[i_551])));
            }
            else {
                list$1charph_push_back(files_540,(char*)come_increment_ref_count(__builtin_string(argv[i_551])));
            }
        }
        gComeDebug=come_debug_548;
        gComeMalloc=come_malloc_549;
        for(        o2_saved_553=(struct list$1charph*)come_increment_ref_count((files_540)),it_554=list$1charph_begin((o2_saved_553));        !list$1charph_end((o2_saved_553));        it_554=list$1charph_next((o2_saved_553))        ){
            memset(&info_555,0,sizeof(struct sInfo));
            Value_556=fopen(it_554,"r");
            if(            Value_556) {
                fclose(Value_556);
            }
            else {
                /*i*/come_call_finalizer3((&info_555),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj204=info_555.sname;
            info_555.sname=(char*)come_increment_ref_count(__builtin_string(it_554));
            /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_555.sline=1;
            info_555.err_num=0;
            __dec_obj205=info_555.clang_option;
            info_555.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_537));
            /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj206=info_555.cpp_option;
            info_555.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_539));
            /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj207=info_555.linker_option;
            info_555.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_538));
            /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_555.no_output_err=(_Bool)0;
            __dec_obj208=info_555.funcs;
            info_555.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 1003, "map$2charphsFunph"))));
            come_call_finalizer3(__dec_obj208,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj209=info_555.struct_definition;
            info_555.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferph_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1004, "map$2charphbufferph"))));
            come_call_finalizer3(__dec_obj209,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj210=info_555.uniq_definition;
            info_555.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 1005, "map$2charphcharph"))));
            come_call_finalizer3(__dec_obj210,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj211=info_555.previous_struct_definition;
            info_555.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferph_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1006, "map$2charphbufferph"))));
            come_call_finalizer3(__dec_obj211,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj212=info_555.generics_funcs;
            info_555.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 1007, "map$2charphsGenericsFunph"))));
            come_call_finalizer3(__dec_obj212,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj213=info_555.classes;
            info_555.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1008, "map$2charphsClassph"))));
            come_call_finalizer3(__dec_obj213,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj214=info_555.modules;
            info_555.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 1009, "map$2charphsClassModuleph"))));
            come_call_finalizer3(__dec_obj214,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj215=info_555.types;
            info_555.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 1010, "map$2charphsTypeph"))));
            come_call_finalizer3(__dec_obj215,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj216=info_555.module;
            info_555.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1011, "sModule"))));
            come_call_finalizer3(__dec_obj216,sModule_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj217=info_555.right_value_objects;
            info_555.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 1012, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj217,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj218=info_555.stack;
            info_555.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 1013, "list$1CVALUEph"))));
            come_call_finalizer3(__dec_obj218,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj219=info_555.gv_table;
            info_555.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1014, "sVarTable")),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj219,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            lv_table_557=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1015, "sVarTable")),(_Bool)0,((void*)0)));
            info_555.lv_table=lv_table_557;
            __dec_obj220=info_555.generics_type_names;
            info_555.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1017, "list$1charph"))));
            come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj221=info_555.method_generics_type_names;
            info_555.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1018, "list$1charph"))));
            come_call_finalizer3(__dec_obj221,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj222=info_555.generics_classes;
            info_555.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1019, "map$2charphsClassph"))));
            come_call_finalizer3(__dec_obj222,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            info_555.verbose=verbose_547;
            __dec_obj223=info_555.outputed_class;
            info_555.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphint_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 1021, "map$2charphint"))));
            come_call_finalizer3(__dec_obj223,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
            info_555.remove_comment=remove_comment_550;
            init_classes(&info_555);
            clear_tmp_file(&info_555);
            Value_558=cpp(&info_555);
            if(            !Value_558) {
                printf("%s %d: transpile failed\n",info_555.sname,info_555.sline);
                exit(2);
            }
            else {
            }
            __dec_obj224=info_555.original_source;
            info_555.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value668=charp_read(((char*)(__right_value667=xsprintf("%s",it_554))))))));
            come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj225=info_555.source;
            info_555.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value671=charp_read(((char*)(__right_value670=xsprintf("%s.i",it_554))))))));
            come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value670 = come_decrement_ref_count2(__right_value670, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info_555.p=info_555.source->buf;
            info_555.head=info_555.source->buf;
            if(            output_file_name_546) {
                __dec_obj226=info_555.output_file_name;
                info_555.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_546));
                /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj227=info_555.output_file_name;
                info_555.output_file_name=((void*)0);
                /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_559=output_cpp_file_543;
            if(            !Value_559) {
                transpile_v5(&info_555);
                Value_560=output_source_file_v3(&info_555);
                if(                !Value_560) {
                    printf("%s %d: output source file faield\n",info_555.sname,info_555.sline);
                    exit(2);
                }
                else {
                }
                if(                info_555.err_num>0) {
                    printf("transpile error. err num %d\n",info_555.err_num);
                    exit(2);
                }
                else {
                    Value_561=output_object_file_flag_545;
                    if(                    Value_561) {
                        Value_562=compile(&info_555,output_object_file_542,object_files_541);
                        if(                        !Value_562) {
                            printf("%s %d: compile faield\n",info_555.sname,info_555.sline);
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
            if(            output_cpp_file_543) {
            }
            else if(            info_555.err_num>0) {
            }
            else if(            output_source_file_flag_544) {
                clear_tmp_file_without_object_file_and_ccfile(&info_555);
            }
            else {
                clear_tmp_file_without_object_file(&info_555);
            }
            /*i*/come_call_finalizer3((&info_555),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(lv_table_557,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_542&&!output_cpp_file_543&&(list$1charph_length(files_540)>0||list$1charph_length(object_files_541)>0)) {
            memset(&info_563,0,sizeof(struct sInfo));
            __dec_obj228=info_563.sname;
            info_563.sname=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(files_540,0)));
            /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj229=info_563.clang_option;
            info_563.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_537));
            /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj230=info_563.linker_option;
            info_563.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_538));
            /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_563.verbose=verbose_547;
            if(            output_file_name_546) {
                __dec_obj231=info_563.output_file_name;
                info_563.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_546));
                /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj232=info_563.output_file_name;
                info_563.output_file_name=((void*)0);
                /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_545) {
                Value_567=linker(&info_563,object_files_541);
                if(                !Value_567) {
                    printf("%s %d: linker faield\n",info_563.sname,info_563.sline);
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_543&&!output_source_file_flag_544) {
                clear_tmp_file(&info_563);
            }
            /*i*/come_call_finalizer3((&info_563),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        /* U13 */output_file_name_str_536 = come_decrement_ref_count2(output_file_name_str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(clang_option_537,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(linker_option_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_540,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_541,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */output_file_name_546 = come_decrement_ref_count2(output_file_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
int i_470;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1charp* __dec_obj91;
struct map$2charphsFunph* __result257__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value508=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value509=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 2284, "sFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value510=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_470=0;    i_470<128;    i_470++    ){
        self->item_existance[i_470]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj91=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj91,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
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

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_471;
int i_472;
    for(    i_471=0;    i_471<self->size;    i_471++    ){
        if(        self->item_existance[i_471]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_471],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_472=0;    i_472<self->size;    i_472++    ){
        if(        self->item_existance[i_472]) {
            if(            1) {
                /* U13 */self->keys[i_472] = come_decrement_ref_count2(self->keys[i_472], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1sTypeph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct sType* __dec_obj97;
struct sBlock* __dec_obj98;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj93=self->mResultType;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj94=self->mParamTypes;
            come_call_finalizer3(__dec_obj94,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj95=self->mParamNames;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj96=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj97=self->mLambdaType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj101=self->mSource;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead2;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj104=self->mSourceDefer;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj105=self->mComeHeader;
            /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj99;
struct sVarTable* __dec_obj100;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj99=self->mNodes;
            come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj100=self->mVarTable;
            come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_473;
int i_474;
    for(    i_473=0;    i_473<self->size;    i_473++    ){
        if(        self->item_existance[i_473]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_473],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_474=0;    i_474<self->size;    i_474++    ){
        if(        self->item_existance[i_474]) {
            if(            1) {
                /* U13 */self->keys[i_474] = come_decrement_ref_count2(self->keys[i_474], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphbufferph* map$2charphbufferph_initialize(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
int i_475;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1charp* __dec_obj108;
struct map$2charphbufferph* __result258__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value515=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value516=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(128)), "./comelang.h", 2284, "buffer*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value517=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_475=0;    i_475<128;    i_475++    ){
        self->item_existance[i_475]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj108=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj108,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphbufferphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self){
int i_476;
int i_477;
    for(    i_476=0;    i_476<self->size;    i_476++    ){
        if(        self->item_existance[i_476]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_476],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_477=0;    i_477<self->size;    i_477++    ){
        if(        self->item_existance[i_477]) {
            if(            1) {
                /* U13 */self->keys[i_477] = come_decrement_ref_count2(self->keys[i_477], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphbufferph_finalize(struct map$2charphbufferph* self){
int i_478;
int i_479;
    for(    i_478=0;    i_478<self->size;    i_478++    ){
        if(        self->item_existance[i_478]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_478],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_479=0;    i_479<self->size;    i_479++    ){
        if(        self->item_existance[i_479]) {
            if(            1) {
                /* U13 */self->keys[i_479] = come_decrement_ref_count2(self->keys[i_479], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
int i_480;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1charp* __dec_obj110;
struct map$2charphcharph* __result259__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value522=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value523=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2284, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value524=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_480=0;    i_480<128;    i_480++    ){
        self->item_existance[i_480]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj110=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj110,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_481;
int i_482;
    for(    i_481=0;    i_481<self->size;    i_481++    ){
        if(        self->item_existance[i_481]) {
            if(            1) {
                /* U13 */self->items[i_481] = come_decrement_ref_count2(self->items[i_481], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_482=0;    i_482<self->size;    i_482++    ){
        if(        self->item_existance[i_482]) {
            if(            1) {
                /* U13 */self->keys[i_482] = come_decrement_ref_count2(self->keys[i_482], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_483;
int i_484;
    for(    i_483=0;    i_483<self->size;    i_483++    ){
        if(        self->item_existance[i_483]) {
            if(            1) {
                /* U13 */self->items[i_483] = come_decrement_ref_count2(self->items[i_483], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_484=0;    i_484<self->size;    i_484++    ){
        if(        self->item_existance[i_484]) {
            if(            1) {
                /* U13 */self->keys[i_484] = come_decrement_ref_count2(self->keys[i_484], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
int i_485;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charp* __dec_obj113;
struct map$2charphsGenericsFunph* __result260__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value531=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value532=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 2284, "sGenericsFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value533=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_485=0;    i_485<128;    i_485++    ){
        self->item_existance[i_485]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj113=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj113,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_486;
int i_487;
    for(    i_486=0;    i_486<self->size;    i_486++    ){
        if(        self->item_existance[i_486]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_486],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_487=0;    i_487<self->size;    i_487++    ){
        if(        self->item_existance[i_487]) {
            if(            1) {
                /* U13 */self->keys[i_487] = come_decrement_ref_count2(self->keys[i_487], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
char* __dec_obj117;
struct sType* __dec_obj118;
struct list$1sTypeph* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj114=self->mImplType;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj116=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj118=self->mResultType;
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj119=self->mParamTypes;
            come_call_finalizer3(__dec_obj119,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj120=self->mParamNames;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj121=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj122=self->mBlock;
            /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj123=self->mGenericsSName;
            /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_488;
int i_489;
    for(    i_488=0;    i_488<self->size;    i_488++    ){
        if(        self->item_existance[i_488]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_488],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_489=0;    i_489<self->size;    i_489++    ){
        if(        self->item_existance[i_489]) {
            if(            1) {
                /* U13 */self->keys[i_489] = come_decrement_ref_count2(self->keys[i_489], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
int i_490;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1charp* __dec_obj125;
struct map$2charphsClassph* __result261__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value538=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value539=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 2284, "sClass*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value540=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_490=0;    i_490<128;    i_490++    ){
        self->item_existance[i_490]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj125=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj125,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_491;
int i_492;
    for(    i_491=0;    i_491<self->size;    i_491++    ){
        if(        self->item_existance[i_491]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_491],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_492=0;    i_492<self->size;    i_492++    ){
        if(        self->item_existance[i_492]) {
            if(            1) {
                /* U13 */self->keys[i_492] = come_decrement_ref_count2(self->keys[i_492], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_493;
int i_494;
    for(    i_493=0;    i_493<self->size;    i_493++    ){
        if(        self->item_existance[i_493]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_493],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_494=0;    i_494<self->size;    i_494++    ){
        if(        self->item_existance[i_494]) {
            if(            1) {
                /* U13 */self->keys[i_494] = come_decrement_ref_count2(self->keys[i_494], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
int i_495;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1charp* __dec_obj127;
struct map$2charphsClassModuleph* __result262__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value545=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value546=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 2284, "sClassModule*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value547=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_495=0;    i_495<128;    i_495++    ){
        self->item_existance[i_495]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj127=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj127,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_496;
int i_497;
    for(    i_496=0;    i_496<self->size;    i_496++    ){
        if(        self->item_existance[i_496]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_496],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_497=0;    i_497<self->size;    i_497++    ){
        if(        self->item_existance[i_497]) {
            if(            1) {
                /* U13 */self->keys[i_497] = come_decrement_ref_count2(self->keys[i_497], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj128;
char* __dec_obj129;
struct list$1charph* __dec_obj130;
char* __dec_obj131;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj128=self->mName;
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj129=self->mText;
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj130=self->mParams;
            come_call_finalizer3(__dec_obj130,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj131=self->mSName;
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_498;
int i_499;
    for(    i_498=0;    i_498<self->size;    i_498++    ){
        if(        self->item_existance[i_498]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_498],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_499=0;    i_499<self->size;    i_499++    ){
        if(        self->item_existance[i_499]) {
            if(            1) {
                /* U13 */self->keys[i_499] = come_decrement_ref_count2(self->keys[i_499], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
int i_500;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charp* __dec_obj133;
struct map$2charphsTypeph* __result263__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value552=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value553=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 2284, "sType*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value554=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_500=0;    i_500<128;    i_500++    ){
        self->item_existance[i_500]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj133=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj133,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_501;
int i_502;
    for(    i_501=0;    i_501<self->size;    i_501++    ){
        if(        self->item_existance[i_501]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_501],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_502=0;    i_502<self->size;    i_502++    ){
        if(        self->item_existance[i_502]) {
            if(            1) {
                /* U13 */self->keys[i_502] = come_decrement_ref_count2(self->keys[i_502], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_503;
int i_504;
    for(    i_503=0;    i_503<self->size;    i_503++    ){
        if(        self->item_existance[i_503]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_503],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_504=0;    i_504<self->size;    i_504++    ){
        if(        self->item_existance[i_504]) {
            if(            1) {
                /* U13 */self->keys[i_504] = come_decrement_ref_count2(self->keys[i_504], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj136;
struct buffer* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
struct buffer* __dec_obj140;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj136=self->mSourceHead;
            come_call_finalizer3(__dec_obj136,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj137=self->mSource;
            come_call_finalizer3(__dec_obj137,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj138=self->mLastCode;
            /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj139=self->mLastCode2;
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj140=self->mHeader;
            come_call_finalizer3(__dec_obj140,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result264__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_505;
struct list_item$1sRightValueObjectph* prev_it_506;
    it_505=self->head;
    while(it_505!=((void*)0)) {
        prev_it_506=it_505;
        it_505=it_505->next;
        /*i*/come_call_finalizer3(prev_it_506,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj141;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj141=self->item;
            come_call_finalizer3(__dec_obj141,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj142=self->mType;
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj143=self->mVarName;
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj144=self->mFunName;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_507;
struct list_item$1sRightValueObjectph* prev_it_508;
    it_507=self->head;
    while(it_507!=((void*)0)) {
        prev_it_508=it_507;
        it_507=it_507->next;
        /*i*/come_call_finalizer3(prev_it_508,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result265__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_509;
struct list_item$1CVALUEph* prev_it_510;
    it_509=self->head;
    while(it_509!=((void*)0)) {
        prev_it_510=it_509;
        it_509=it_509->next;
        /*i*/come_call_finalizer3(prev_it_510,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj146;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj146=self->item;
            come_call_finalizer3(__dec_obj146,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj147;
struct sType* __dec_obj148;
char* __dec_obj149;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj147=self->c_value;
            /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj148=self->type;
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj149=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_511;
struct list_item$1CVALUEph* prev_it_512;
    it_511=self->head;
    while(it_511!=((void*)0)) {
        prev_it_512=it_511;
        it_511=it_511->next;
        /*i*/come_call_finalizer3(prev_it_512,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphint* map$2charphint_initialize(struct map$2charphint* self){
void* __result_obj__=(void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
int i_514;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1charp* __dec_obj155;
struct map$2charphint* __result266__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value575=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2283, "char*%"))));
    self->items=(int*)come_increment_ref_count(((int*)(__right_value576=(int*)come_calloc(1, sizeof(int)*(1*(128)), "./comelang.h", 2284, "int"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value577=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2285, "bool"))));
    for(    i_514=0;    i_514<128;    i_514++    ){
        self->item_existance[i_514]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj155=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj155,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphintp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void map$2charphintp_finalize(struct map$2charphint* self){
int i_515;
int i_516;
    for(    i_515=0;    i_515<self->size;    i_515++    ){
        if(        self->item_existance[i_515]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_516=0;    i_516<self->size;    i_516++    ){
        if(        self->item_existance[i_516]) {
            if(            1) {
                /* U13 */self->keys[i_516] = come_decrement_ref_count2(self->keys[i_516], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphint_finalize(struct map$2charphint* self){
int i_517;
int i_518;
    for(    i_517=0;    i_517<self->size;    i_517++    ){
        if(        self->item_existance[i_517]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_518=0;    i_518<self->size;    i_518++    ){
        if(        self->item_existance[i_518]) {
            if(            1) {
                /* U13 */self->keys[i_518] = come_decrement_ref_count2(self->keys[i_518], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj160;
struct buffer* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
struct map$2charphsFunph* __dec_obj170;
struct map$2charphsGenericsFunph* __dec_obj171;
struct map$2charphsClassph* __dec_obj172;
struct map$2charphsClassModuleph* __dec_obj173;
struct map$2charphsTypeph* __dec_obj174;
struct map$2charphsClassph* __dec_obj175;
struct map$2charphbufferph* __dec_obj176;
struct map$2charphbufferph* __dec_obj177;
struct sModule* __dec_obj178;
struct sType* __dec_obj179;
struct list$1sRightValueObjectph* __dec_obj180;
struct sType* __dec_obj181;
struct list$1sTypeph* __dec_obj182;
struct list$1CVALUEph* __dec_obj183;
struct sType* __dec_obj184;
struct sType* __dec_obj185;
struct sVarTable* __dec_obj186;
struct list$1charph* __dec_obj187;
struct list$1charph* __dec_obj188;
struct sType* __dec_obj189;
char* __dec_obj190;
struct sType* __dec_obj191;
struct map$2charphcharph* __dec_obj192;
char* __dec_obj193;
struct list$1sVarph* __dec_obj194;
struct map$2charphint* __dec_obj200;
struct map$2charphcharph* __dec_obj201;
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(        self->original_source==gComeFunResultObject) {
            __dec_obj160=self->original_source;
            come_call_finalizer3(__dec_obj160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj161=self->source;
            come_call_finalizer3(__dec_obj161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj162=self->sname;
            /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        if(        self->sname_at_head==gComeFunResultObject) {
            __dec_obj163=self->sname_at_head;
            /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(        self->base_sname==gComeFunResultObject) {
            __dec_obj164=self->base_sname;
            /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(        self->err_line==gComeFunResultObject) {
            __dec_obj165=self->err_line;
            /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(        self->clang_option==gComeFunResultObject) {
            __dec_obj166=self->clang_option;
            /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(        self->cpp_option==gComeFunResultObject) {
            __dec_obj167=self->cpp_option;
            /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        if(        self->linker_option==gComeFunResultObject) {
            __dec_obj168=self->linker_option;
            /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(        self->come_fun_name==gComeFunResultObject) {
            __dec_obj169=self->come_fun_name;
            /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(        self->funcs==gComeFunResultObject) {
            __dec_obj170=self->funcs;
            come_call_finalizer3(__dec_obj170,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(        self->generics_funcs==gComeFunResultObject) {
            __dec_obj171=self->generics_funcs;
            come_call_finalizer3(__dec_obj171,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        if(        self->classes==gComeFunResultObject) {
            __dec_obj172=self->classes;
            come_call_finalizer3(__dec_obj172,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        if(        self->modules==gComeFunResultObject) {
            __dec_obj173=self->modules;
            come_call_finalizer3(__dec_obj173,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        if(        self->types==gComeFunResultObject) {
            __dec_obj174=self->types;
            come_call_finalizer3(__dec_obj174,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(        self->generics_classes==gComeFunResultObject) {
            __dec_obj175=self->generics_classes;
            come_call_finalizer3(__dec_obj175,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        if(        self->struct_definition==gComeFunResultObject) {
            __dec_obj176=self->struct_definition;
            come_call_finalizer3(__dec_obj176,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        if(        self->previous_struct_definition==gComeFunResultObject) {
            __dec_obj177=self->previous_struct_definition;
            come_call_finalizer3(__dec_obj177,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->previous_struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        if(        self->module==gComeFunResultObject) {
            __dec_obj178=self->module;
            come_call_finalizer3(__dec_obj178,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj179=self->type;
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(        self->right_value_objects==gComeFunResultObject) {
            __dec_obj180=self->right_value_objects;
            come_call_finalizer3(__dec_obj180,list$1sRightValueObjectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(        self->generics_type==gComeFunResultObject) {
            __dec_obj181=self->generics_type;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj182=self->method_generics_types;
            come_call_finalizer3(__dec_obj182,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        if(        self->stack==gComeFunResultObject) {
            __dec_obj183=self->stack;
            come_call_finalizer3(__dec_obj183,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(        self->come_function_result_type==gComeFunResultObject) {
            __dec_obj184=self->come_function_result_type;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(        self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj185=self->come_method_block_function_result_type;
            come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(        self->gv_table==gComeFunResultObject) {
            __dec_obj186=self->gv_table;
            come_call_finalizer3(__dec_obj186,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(        self->generics_type_names==gComeFunResultObject) {
            __dec_obj187=self->generics_type_names;
            come_call_finalizer3(__dec_obj187,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(        self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj188=self->method_generics_type_names;
            come_call_finalizer3(__dec_obj188,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(        self->impl_type==gComeFunResultObject) {
            __dec_obj189=self->impl_type;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(        self->output_file_name==gComeFunResultObject) {
            __dec_obj190=self->output_file_name;
            /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(        self->function_result_type==gComeFunResultObject) {
            __dec_obj191=self->function_result_type;
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(        self->module_params==gComeFunResultObject) {
            __dec_obj192=self->module_params;
            come_call_finalizer3(__dec_obj192,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        if(        self->if_result_var_name==gComeFunResultObject) {
            __dec_obj193=self->if_result_var_name;
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        if(        self->match_it_var==gComeFunResultObject) {
            __dec_obj194=self->match_it_var;
            come_call_finalizer3(__dec_obj194,list$1sVarph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->match_it_var,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->outputed_class!=((void*)0)) {
        if(        self->outputed_class==gComeFunResultObject) {
            __dec_obj200=self->outputed_class;
            come_call_finalizer3(__dec_obj200,map$2charphint_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->outputed_class,map$2charphintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        if(        self->uniq_definition==gComeFunResultObject) {
            __dec_obj201=self->uniq_definition;
            come_call_finalizer3(__dec_obj201,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->uniq_definition,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_523;
struct list_item$1sVarph* prev_it_524;
    it_523=self->head;
    while(it_523!=((void*)0)) {
        prev_it_524=it_523;
        it_523=it_523->next;
        /*i*/come_call_finalizer3(prev_it_524,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj195;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj195=self->item;
            come_call_finalizer3(__dec_obj195,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj196;
char* __dec_obj197;
struct sType* __dec_obj198;
char* __dec_obj199;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj196=self->mName;
            /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj197=self->mCValueName;
            /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj198=self->mType;
            come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj199=self->mFunName;
            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_525;
struct list_item$1sVarph* prev_it_526;
    it_525=self->head;
    while(it_525!=((void*)0)) {
        prev_it_526=it_525;
        it_525=it_525->next;
        /*i*/come_call_finalizer3(prev_it_526,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_564;
int i_565;
char* __result267__;
char* default_value_566;
char* __result268__;
default_value_566 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_564=self->head;
    i_565=0;
    while(it_564!=((void*)0)) {
        if(        position==i_565) {
            __result267__ = gComeFunResultObject = __result_obj__ = it_564->item;
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
        it_564=it_564->next;
        i_565++;
    }
    memset(&default_value_566,0,sizeof(char*));
    __result268__ = gComeFunResultObject = __result_obj__ = default_value_566;
    /* U13 */default_value_566 = come_decrement_ref_count2(default_value_566, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

