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
char* parse_function_attribute(struct sInfo* info);
char* parse_attribute(struct sInfo* info);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3635, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3642, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3651, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3658, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3665, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3672, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3679, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1162, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1162, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1162, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1162, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1162, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1162, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1162, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1936, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1936, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1936, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1936, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1936, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1936, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1936, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
struct sSemicolonNode* __result198__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string("sSemicolonNode")));
    /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
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
void* __right_value247 = (void*)0;
struct sLambdaNode* __result200__;
    ((struct sNodeBase*)(__right_value247=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value247,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
char* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string("sLambdaNode")));
    /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_247;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* result_type_248;
void* __right_value251 = (void*)0;
int block_level_249;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_250;
void* __right_value254 = (void*)0;
char* __dec_obj35;
void* __right_value291 = (void*)0;
struct sType* __dec_obj81;
_Bool __result220__;
    come_fun_247=info->come_fun;
    info->come_fun=self->mFun;
    result_type_248=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value251=make_define_var(result_type_248,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_249=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_249;
    come_value_250=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj35=come_value_250->c_value;
    come_value_250->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_250->type;
    come_value_250->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_250->var=((void*)0);
    add_come_last_code(info,"%s",come_value_250->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_250));
    info->come_fun=come_fun_247;
    __result220__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result220__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result202__;
void* __right_value255 = (void*)0;
struct sType* result_251;
void* __right_value258 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value259 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value260 = (void*)0;
char* __dec_obj60;
void* __right_value267 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value276 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value286 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value288 = (void*)0;
char* __dec_obj78;
void* __right_value289 = (void*)0;
char* __dec_obj79;
void* __right_value290 = (void*)0;
char* __dec_obj80;
struct sType* __result218__;
    if(    self==(void*)0) {
        __result202__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    result_251=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_251->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj58=result_251->mNoSolvedGenericsType;
        result_251->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_251->mOriginalLoadVarType;
        result_251->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_251->mGenericsName;
        result_251->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_251->mGenericsTypes;
        result_251->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_251->mArrayNum;
        result_251->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_251->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_251->mParamTypes;
        result_251->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_251->mParamNames;
        result_251->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_251->mResultType;
        result_251->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_251->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_251->mAlignas;
        result_251->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_251->mChannelType;
        result_251->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_251->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_251->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_251->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_251->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_251->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_251->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_251->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_251->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_251->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_251->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_251->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_251->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_251->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_251->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_251->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_251->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_251->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_251->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_251->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_251->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_251->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_251->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_251->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_251->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_251->mSizeNum;
        result_251->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_251->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_251->mOriginalTypeName;
        result_251->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_251->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_251->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_251->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_251->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_251->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_251->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_251->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_251->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_251->mAsmName;
        result_251->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_251->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_251->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_251->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_251->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_251->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_251->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_251->mTupleName;
        result_251->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_251;
    /*i*/come_call_finalizer3(result_251,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result203__;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* result_252;
void* __right_value257 = (void*)0;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result204__;
    if(    self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_252=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_252->v1;
        result_252->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_252;
    /*i*/come_call_finalizer3(result_252,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
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
struct list_item$1sTypeph* it_253;
struct list_item$1sTypeph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        /*i*/come_call_finalizer3(prev_it_254,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_255;
struct list_item$1sTypeph* prev_it_256;
    it_255=self->head;
    while(it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*i*/come_call_finalizer3(prev_it_256,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_257;
struct list_item$1sNodeph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        /*i*/come_call_finalizer3(prev_it_258,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_259;
struct list_item$1sNodeph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*i*/come_call_finalizer3(prev_it_260,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_261;
struct list_item$1charph* prev_it_262;
    it_261=self->head;
    while(it_261!=((void*)0)) {
        prev_it_262=it_261;
        it_261=it_261->next;
        /*i*/come_call_finalizer3(prev_it_262,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* __result205__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1sTypeph* result_263;
struct list_item$1sTypeph* it_264;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __result208__;
    if(    self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_263=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_264=self->head;
    while(it_264!=((void*)0)) {
        list$1sTypeph_add(result_263,(struct sType*)come_increment_ref_count(sType_clone(it_264->item)));
        it_264=it_264->next;
    }
    __result208__ = gComeFunResultObject = __result_obj__ = result_263;
    /*i*/come_call_finalizer3(result_263,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_265;
struct sType* __dec_obj61;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_266;
struct sType* __dec_obj62;
void* __right_value265 = (void*)0;
struct list_item$1sTypeph* litem_267;
struct sType* __dec_obj63;
struct list$1sTypeph* __result207__;
    if(    self->len==0) {
        litem_265=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_265->prev=((void*)0);
        litem_265->next=((void*)0);
        __dec_obj61=litem_265->item;
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_265;
        self->head=litem_265;
    }
    else if(    self->len==1) {
        litem_266=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_266->prev=self->head;
        litem_266->next=((void*)0);
        __dec_obj62=litem_266->item;
        litem_266->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_266;
        self->head->next=litem_266;
    }
    else {
        litem_267=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value265=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_267->prev=self->tail;
        litem_267->next=((void*)0);
        __dec_obj63=litem_267->item;
        litem_267->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_267;
        self->tail=litem_267;
    }
    self->len++;
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result209__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_268;
struct list_item$1sNodeph* it_269;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result214__;
    if(    self==((void*)0)) {
        __result209__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_268=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_269=self->head;
    while(it_269!=((void*)0)) {
        list$1sNodeph_add(result_268,(struct sNode*)come_increment_ref_count(sNode_clone(it_269->item)));
        it_269=it_269->next;
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_268;
    /*i*/come_call_finalizer3(result_268,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result210__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result210__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_270;
struct sNode* __dec_obj65;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_271;
struct sNode* __dec_obj66;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_272;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result211__;
    if(    self->len==0) {
        litem_270=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        __dec_obj65=litem_270->item;
        litem_270->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1) {
        litem_271=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        __dec_obj66=litem_271->item;
        litem_271->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        __dec_obj67=litem_272->item;
        litem_272->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result212__;
void* __right_value273 = (void*)0;
struct sNode* result_273;
struct sNode* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_273=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_273->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_273->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_273->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_273->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_273->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_273->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_273->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_273->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_273->kind=self->kind;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_273;
    if(result_273) { result_273 = come_decrement_ref_count2(result_273, ((struct sNode*)result_273)->finalize, ((struct sNode*)result_273)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result215__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_274;
struct list_item$1charph* it_275;
void* __right_value282 = (void*)0;
struct list$1charph* __result217__;
    if(    self==((void*)0)) {
        __result215__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_274=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_275=self->head;
    while(it_275!=((void*)0)) {
        list$1charph_add(result_274,(char*)come_increment_ref_count(string_clone(it_275->item)));
        it_275=it_275->next;
    }
    __result217__ = gComeFunResultObject = __result_obj__ = result_274;
    /*i*/come_call_finalizer3(result_274,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_276;
char* __dec_obj70;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_277;
char* __dec_obj71;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_278;
char* __dec_obj72;
struct list$1charph* __result216__;
    if(    self->len==0) {
        litem_276=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_276->prev=((void*)0);
        litem_276->next=((void*)0);
        __dec_obj70=litem_276->item;
        litem_276->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_276;
        self->head=litem_276;
    }
    else if(    self->len==1) {
        litem_277=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_277->prev=self->head;
        litem_277->next=((void*)0);
        __dec_obj71=litem_277->item;
        litem_277->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_277;
        self->head->next=litem_277;
    }
    else {
        litem_278=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_278->prev=self->tail;
        litem_278->next=((void*)0);
        __dec_obj72=litem_278->item;
        litem_278->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_278;
        self->tail=litem_278;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
struct list_item$1CVALUEph* litem_279;
struct CVALUE* __dec_obj82;
void* __right_value293 = (void*)0;
struct list_item$1CVALUEph* litem_280;
struct CVALUE* __dec_obj86;
void* __right_value294 = (void*)0;
struct list_item$1CVALUEph* litem_281;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result219__;
    if(    self->len==0) {
        litem_279=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value292=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj82=litem_279->item;
        litem_279->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value293=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj86=litem_280->item;
        litem_280->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value294=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj87=litem_281->item;
        litem_281->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
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
void* __right_value295 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result221__;
    ((struct sNodeBase*)(__right_value295=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value295,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=__builtin_string("sFunNode")));
    /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_282;
char* come_fun_name_283;
void* __right_value297 = (void*)0;
char* __dec_obj106;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sType* result_type_284;
void* __right_value300 = (void*)0;
int block_level_285;
void* __right_value301 = (void*)0;
char* __dec_obj107;
_Bool __result223__;
    come_fun_282=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_283=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj106=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_284=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value300=make_define_var(result_type_284,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_285=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_285;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value301=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_282;
    __dec_obj107=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_283);
    /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = (_Bool)1;
    /* U13 */come_fun_name_283 = come_decrement_ref_count2(come_fun_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result223__;
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
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sNodeph* __dec_obj108;
struct sBlock* __result224__;
    __dec_obj108=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj109;
void* __right_value305 = (void*)0;
struct list$1charph* __dec_obj110;
void* __right_value306 = (void*)0;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
struct sType* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
char* __dec_obj117;
void* __right_value307 = (void*)0;
char* __dec_obj118;
struct sGenericsFun* __result225__;
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
    __result225__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result225__;
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
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sBlock* result_286;
int sline_top_287;
int block_level_288;
char* p_saved_289;
int sline_saved_290;
char* sname_saved_291;
void* __right_value310 = (void*)0;
char* __dec_obj129;
char* __dec_obj130;
struct map$2charphcharph* __dec_obj131;
char* p_294;
int sline_295;
char* sname_296;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
char* module_name_297;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* params_298;
void* __right_value315 = (void*)0;
char* word_299;
void* __right_value316 = (void*)0;
char* __dec_obj132;
void* __right_value317 = (void*)0;
char* __dec_obj133;
void* __right_value318 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result230__;
void* __right_value319 = (void*)0;
struct sClassModule* module_303;
void* __right_value320 = (void*)0;
void* __right_value326 = (void*)0;
struct map$2charphcharph* __dec_obj139;
int i_307;
struct list$1charph* o2_saved_308;
char* it_311;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj140;
void* __right_value335 = (void*)0;
struct sNode* node_358;
void* __right_value336 = (void*)0;
char* __dec_obj141;
_Bool omit_semicolon_362;
void* __right_value340 = (void*)0;
char* __dec_obj145;
char* head_377;
void* __right_value341 = (void*)0;
struct sNode* value_378;
char* tail_379;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sNode* node_381;
void* __right_value345 = (void*)0;
char* __dec_obj147;
struct sNode* node_382;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj151;
_Bool omit_semicolon_384;
char* p_385;
char* head_386;
void* __right_value352 = (void*)0;
char* source_387;
void* __right_value353 = (void*)0;
struct sNode* node_388;
struct sBlock* __result269__;
node_382 = (void*)0;
    result_286=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_287=info->sline_top;
    info->sline_top=info->sline;
    block_level_288=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_289=((void*)0);
        sline_saved_290=0;
        sname_saved_291=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_289) {
                if(                *info->p==0) {
                    info->p=p_saved_289;
                    info->sline=sline_saved_290;
                    __dec_obj129=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_291));
                    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_289=((void*)0);
                    sline_saved_290=0;
                    __dec_obj130=sname_saved_291;
                    sname_saved_291=((void*)0);
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
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_294=info->p;
            sline_295=info->sline;
            sname_296=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_295;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value311=parse_word(info)));
                /* U11 */__right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_297=(char*)come_increment_ref_count(parse_word(info));
                params_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_299=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_298,(char*)come_increment_ref_count(word_299));
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
                            /* U13 */word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        /* U13 */word_299 = come_decrement_ref_count2(word_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_289=info->p;
                sline_saved_290=info->sline;
                __dec_obj132=sname_saved_291;
                sname_saved_291=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj133=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_297));
                /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value318=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_297)))==((void*)0))),                /*f*/come_call_finalizer3(__right_value318,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */module_name_297 = come_decrement_ref_count2(module_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */sname_saved_291 = come_decrement_ref_count2(sname_saved_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_286,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result230__;
                }
                module_303=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value319=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_297))), "05function.c", 262, 0));
                /*g*/come_call_finalizer3(__right_value319,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_303->mParams)!=list$1charph_length(params_298)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj139=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj139,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_307=0;
                for(                o2_saved_308=(struct list$1charph*)come_increment_ref_count((module_303->mParams)),it_311=list$1charph_begin((o2_saved_308));                !list$1charph_end((o2_saved_308));                it_311=list$1charph_next((o2_saved_308))                ){
                    ((char*)(__right_value333=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_311)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value328=list$1charphp_operator_load_element(params_298,i_307))), "05function.c", 273, 1)))))));
                    /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_307++;
                }
                /*i*/come_call_finalizer3(o2_saved_308,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_303->mText;
                info->sline=module_303->mSLine;
                __dec_obj140=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_303->mSName));
                /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */module_name_297 = come_decrement_ref_count2(module_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_358=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj141=info->sname;
            info->sname=(char*)come_increment_ref_count(node_358->sname(node_358->_protocol_obj));
            /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_358->sline(node_358->_protocol_obj);
            if(            node_358==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_286->mNodes,(struct sNode*)come_increment_ref_count(node_358));
            parse_sharp_v5(info);
            if(            node_358->terminated(node_358->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_362=(_Bool)1;
            if(            node_358->terminated(node_358->_protocol_obj)) {
                omit_semicolon_362=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_362=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_286->mOmitSemicolon=omit_semicolon_362;
                if(                omit_semicolon_362&&in_function) {
                    list$1sNodeph_delete(result_286->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_294;
                    info->sline=sline_295;
                    __dec_obj145=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_296));
                    /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_377=info->p;
                    value_378=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_379=info->p;
                    __dec_obj146=value_378;
                    value_378=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_378),info));
                    /* U1 */ if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_380[tail_379-head_377+1];
                    memset(&buf_380, 0, sizeof(char)                    *(tail_379-head_377+1)                    );
                    memcpy(buf_380,head_377,tail_379-head_377);
                    buf_380[tail_379-head_377]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_381=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_378),(char*)come_increment_ref_count(__builtin_string(buf_380)),info));
                    list$1sNodeph_push_back(result_286->mNodes,(struct sNode*)come_increment_ref_count(node_381));
                    if(value_378) { value_378 = come_decrement_ref_count2(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_378) { value_378 = come_decrement_ref_count2(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_289) {
            if(            info->p==0) {
                info->p=p_saved_289;
                info->sline=sline_saved_290;
                __dec_obj147=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_291));
                /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_289=((void*)0);
                sline_saved_290=0;
            }
        }
        /* U13 */sname_saved_291 = come_decrement_ref_count2(sname_saved_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value347=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj150=node_382;
            node_382=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value347,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_286->mNodes,(struct sNode*)come_increment_ref_count(node_382));
        }
        else {
            __dec_obj151=node_382;
            node_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_382==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_382->terminated(node_382->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_384=(_Bool)1;
            if(            node_382->terminated(node_382->_protocol_obj)) {
                omit_semicolon_384=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_384=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_286->mOmitSemicolon=omit_semicolon_384;
            list$1sNodeph_push_back(result_286->mNodes,(struct sNode*)come_increment_ref_count(node_382));
        }
        if(node_382) { node_382 = come_decrement_ref_count2(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_385=info->p;
        head_386=info->head;
        source_387=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_387;
        info->head=source_387;
        node_388=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_388==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_286->mNodes,(struct sNode*)come_increment_ref_count(node_388));
        info->p=p_385;
        info->head=head_386;
        /* U13 */source_387 = come_decrement_ref_count2(source_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_388) { node_388 = come_decrement_ref_count2(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_288;
    __result269__ = gComeFunResultObject = __result_obj__ = result_286;
    /*i*/come_call_finalizer3(result_286,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_292;
int i_293;
    for(    i_292=0;    i_292<self->size;    i_292++    ){
        if(        self->item_existance[i_292]) {
            if(            1) {
                /* U13 */self->items[i_292] = come_decrement_ref_count2(self->items[i_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_293=0;    i_293<self->size;    i_293++    ){
        if(        self->item_existance[i_293]) {
            if(            1) {
                /* U13 */self->keys[i_293] = come_decrement_ref_count2(self->keys[i_293], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_300;
unsigned int hash_301;
unsigned int it_302;
struct sClassModule* __result226__;
struct sClassModule* __result227__;
struct sClassModule* __result228__;
struct sClassModule* __result229__;
default_value_300 = (void*)0;
    memset(&default_value_300,0,sizeof(struct sClassModule*));
    hash_301=charp_get_hash_key(((char*)key))%self->size;
    it_302=hash_301;
    while((_Bool)1) {
        if(        self->item_existance[it_302]) {
            if(            charp_equals(self->keys[it_302],key)) {
                __result226__ = gComeFunResultObject = __result_obj__ = self->items[it_302];
                /*i*/come_call_finalizer3(default_value_300,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result226__;
            }
            it_302++;
            if(            it_302>=self->size) {
                it_302=0;
            }
            else if(            it_302==hash_301) {
                __result227__ = gComeFunResultObject = __result_obj__ = default_value_300;
                /*i*/come_call_finalizer3(default_value_300,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result227__;
            }
        }
        else {
            __result228__ = gComeFunResultObject = __result_obj__ = default_value_300;
            /*i*/come_call_finalizer3(default_value_300,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result228__;
        }
    }
    __result229__ = gComeFunResultObject = __result_obj__ = default_value_300;
    /*i*/come_call_finalizer3(default_value_300,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
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
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
int i_304;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct list$1charp* __dec_obj138;
struct map$2charphcharph* __result232__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value321=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2319, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value322=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2320, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value323=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2321, "bool"))));
    for(    i_304=0;    i_304<128;    i_304++    ){
        self->item_existance[i_304]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj138=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj138,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_305;
int i_306;
    for(    i_305=0;    i_305<self->size;    i_305++    ){
        if(        self->item_existance[i_305]) {
            if(            1) {
                /* U13 */self->items[i_305] = come_decrement_ref_count2(self->items[i_305], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_306=0;    i_306<self->size;    i_306++    ){
        if(        self->item_existance[i_306]) {
            if(            1) {
                /* U13 */self->keys[i_306] = come_decrement_ref_count2(self->keys[i_306], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_309;
char* __result233__;
char* __result234__;
char* result_310;
char* __result235__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_309,0,sizeof(char*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->head;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_310,0,sizeof(char*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_312;
char* __result236__;
char* __result237__;
char* result_313;
char* __result238__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_312,0,sizeof(char*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_313,0,sizeof(char*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_314;
int i_315;
char* __result239__;
char* default_value_316;
char* __result240__;
default_value_316 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_314=self->head;
    i_315=0;
    while(it_314!=((void*)0)) {
        if(        position==i_315) {
            __result239__ = gComeFunResultObject = __result_obj__ = it_314->item;
            gComeFunResultObject = (void*)0;
            return __result239__;
        }
        it_314=it_314->next;
        i_315++;
    }
    memset(&default_value_316,0,sizeof(char*));
    __result240__ = gComeFunResultObject = __result_obj__ = default_value_316;
    /* U13 */default_value_316 = come_decrement_ref_count2(default_value_316, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result262__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result262__ = gComeFunResultObject = __result_obj__ = item;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_334;
unsigned int it_335;
_Bool same_key_exist_352;
char* it2_355;
struct map$2charphcharph* __result261__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_334=charp_get_hash_key(key)%self->size;
    it_335=hash_334;
    while((_Bool)1) {
        if(        self->item_existance[it_335]) {
            if(            charp_equals(self->keys[it_335],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_335]);
                    /* U13 */self->keys[it_335] = come_decrement_ref_count2(self->keys[it_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_335]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_335]);
                    self->keys[it_335]=key;
                }
                if(                1) {
                    /* U13 */self->items[it_335] = come_decrement_ref_count2(self->items[it_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_335]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_335]=item;
                }
                break;
            }
            it_335++;
            if(            it_335>=self->size) {
                it_335=0;
            }
            else if(            it_335==hash_334) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_335]=(_Bool)1;
            if(            1) {
                self->keys[it_335]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_335]=key;
            }
            if(            1) {
                self->items[it_335]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_335]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_352=(_Bool)0;
    for(    it2_355=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_355=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_355,key)) {
            same_key_exist_352=(_Bool)1;
        }
    }
    if(    !same_key_exist_352) {
        list$1charp_push_back(self->key_list,key);
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_317;
void* __right_value330 = (void*)0;
char** keys_318;
void* __right_value331 = (void*)0;
char** items_319;
void* __right_value332 = (void*)0;
_Bool* item_existance_320;
int len_321;
char* it_324;
char* default_value_327;
char* it2_328;
unsigned int hash_331;
int n_332;
char* default_value_333;
default_value_327 = (void*)0;
default_value_333 = (void*)0;
    size_317=self->size*10;
    keys_318=(char**)come_increment_ref_count(((char**)(__right_value330=(char**)come_calloc(1, sizeof(char*)*(1*(size_317)), "./comelang.h", 2547, "char*%"))));
    items_319=(char**)come_increment_ref_count(((char**)(__right_value331=(char**)come_calloc(1, sizeof(char*)*(1*(size_317)), "./comelang.h", 2548, "char*%"))));
    item_existance_320=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value332=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_317)), "./comelang.h", 2549, "bool"))));
    len_321=0;
    for(    it_324=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_324=map$2charphcharph_next(self)    ){
        memset(&default_value_327,0,sizeof(char*));
        it2_328=map$2charphcharph_at(self,it_324,default_value_327);
        hash_331=charp_get_hash_key(it_324)%size_317;
        n_332=hash_331;
        while((_Bool)1) {
            if(            item_existance_320[n_332]) {
                n_332++;
                if(                n_332>=size_317) {
                    n_332=0;
                }
                else if(                n_332==hash_331) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_320[n_332]=(_Bool)1;
                keys_318[n_332]=it_324;
                items_319[n_332]=map$2charphcharph_at(self,it_324,default_value_333);
                len_321++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_318;
    self->items=items_319;
    self->item_existance=item_existance_320;
    self->size=size_317;
    self->len=len_321;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_322;
char* __result241__;
char* __result242__;
char* result_323;
char* __result243__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_323,0,sizeof(char*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result244__;
char* __result245__;
char* result_326;
char* __result246__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_326,0,sizeof(char*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_329;
unsigned int it_330;
char* __result247__;
char* __result248__;
char* __result249__;
char* __result250__;
    hash_329=charp_get_hash_key(((char*)key))%self->size;
    it_330=hash_329;
    while((_Bool)1) {
        if(        self->item_existance[it_330]) {
            if(            charp_equals(self->keys[it_330],key)) {
                __result247__ = gComeFunResultObject = __result_obj__ = self->items[it_330];
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
            it_330++;
            if(            it_330>=self->size) {
                it_330=0;
            }
            else if(            it_330==hash_329) {
                __result248__ = gComeFunResultObject = __result_obj__ = default_value;
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result248__;
            }
        }
        else {
            __result249__ = gComeFunResultObject = __result_obj__ = default_value;
            /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result249__;
        }
    }
    __result250__ = gComeFunResultObject = __result_obj__ = default_value;
    /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_336;
struct list_item$1charp* it_337;
struct list$1charp* __result254__;
    it2_336=0;
    it_337=self->head;
    while(it_337!=((void*)0)) {
        if(        charp_equals(it_337->item,item)) {
            list$1charp_delete(self,it2_336,it2_336+1);
            break;
        }
        it2_336++;
        it_337=it_337->next;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_338;
struct list$1charp* __result251__;
struct list_item$1charp* it_341;
int i_342;
struct list_item$1charp* prev_it_343;
struct list_item$1charp* it_344;
int i_345;
struct list_item$1charp* prev_it_346;
struct list_item$1charp* it_347;
struct list_item$1charp* head_prev_it_348;
struct list_item$1charp* tail_it_349;
int i_350;
struct list_item$1charp* prev_it_351;
struct list$1charp* __result253__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_338=tail;
        tail=head;
        head=tmp_338;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result251__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_341=self->head;
        i_342=0;
        while(it_341!=((void*)0)) {
            if(            i_342<tail) {
                prev_it_343=it_341;
                it_341=it_341->next;
                i_342++;
                /*i*/come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_342==tail) {
                self->head=it_341;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_341=it_341->next;
                i_342++;
            }
        }
    }
    else if(    tail==self->len) {
        it_344=self->head;
        i_345=0;
        while(it_344!=((void*)0)) {
            if(            i_345==head) {
                self->tail=it_344->prev;
                self->tail->next=((void*)0);
            }
            if(            i_345>=head) {
                prev_it_346=it_344;
                it_344=it_344->next;
                i_345++;
                /*i*/come_call_finalizer3(prev_it_346,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_344=it_344->next;
                i_345++;
            }
        }
    }
    else {
        it_347=self->head;
        head_prev_it_348=((void*)0);
        tail_it_349=((void*)0);
        i_350=0;
        while(it_347!=((void*)0)) {
            if(            i_350==head) {
                head_prev_it_348=it_347->prev;
            }
            if(            i_350==tail) {
                tail_it_349=it_347;
            }
            if(            i_350>=head&&i_350<tail) {
                prev_it_351=it_347;
                it_347=it_347->next;
                i_350++;
                /*i*/come_call_finalizer3(prev_it_351,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_347=it_347->next;
                i_350++;
            }
        }
        if(        head_prev_it_348!=((void*)0)) {
            head_prev_it_348->next=tail_it_349;
        }
        if(        tail_it_349!=((void*)0)) {
            tail_it_349->prev=head_prev_it_348;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_339;
struct list_item$1charp* prev_it_340;
struct list$1charp* __result252__;
    it_339=self->head;
    while(it_339!=((void*)0)) {
        prev_it_340=it_339;
        it_339=it_339->next;
        /*i*/come_call_finalizer3(prev_it_340,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result255__;
char* __result256__;
char* result_354;
char* __result257__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->head;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_354,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result258__;
char* __result259__;
char* result_357;
char* __result260__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_357,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
struct list_item$1sNodeph* litem_359;
struct sNode* __dec_obj142;
void* __right_value338 = (void*)0;
struct list_item$1sNodeph* litem_360;
struct sNode* __dec_obj143;
void* __right_value339 = (void*)0;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj144;
struct list$1sNodeph* __result263__;
    if(    self->len==0) {
        litem_359=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value337=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1142, "list_item$1sNodeph"))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj142=litem_359->item;
        litem_359->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value338=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1152, "list_item$1sNodeph"))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj143=litem_360->item;
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value339=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1162, "list_item$1sNodeph"))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj144=litem_361->item;
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_363;
struct list$1sNodeph* __result264__;
struct list_item$1sNodeph* it_366;
int i_367;
struct list_item$1sNodeph* prev_it_368;
struct list_item$1sNodeph* it_369;
int i_370;
struct list_item$1sNodeph* prev_it_371;
struct list_item$1sNodeph* it_372;
struct list_item$1sNodeph* head_prev_it_373;
struct list_item$1sNodeph* tail_it_374;
int i_375;
struct list_item$1sNodeph* prev_it_376;
struct list$1sNodeph* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_363=tail;
        tail=head;
        head=tmp_363;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367<tail) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                /*i*/come_call_finalizer3(prev_it_368,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_367==tail) {
                self->head=it_366;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else if(    tail==self->len) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370==head) {
                self->tail=it_369->prev;
                self->tail->next=((void*)0);
            }
            if(            i_370>=head) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                /*i*/come_call_finalizer3(prev_it_371,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else {
        it_372=self->head;
        head_prev_it_373=((void*)0);
        tail_it_374=((void*)0);
        i_375=0;
        while(it_372!=((void*)0)) {
            if(            i_375==head) {
                head_prev_it_373=it_372->prev;
            }
            if(            i_375==tail) {
                tail_it_374=it_372;
            }
            if(            i_375>=head&&i_375<tail) {
                prev_it_376=it_372;
                it_372=it_372->next;
                i_375++;
                /*i*/come_call_finalizer3(prev_it_376,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_375++;
            }
        }
        if(        head_prev_it_373!=((void*)0)) {
            head_prev_it_373->next=tail_it_374;
        }
        if(        tail_it_374!=((void*)0)) {
            tail_it_374->prev=head_prev_it_373;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_364;
struct list_item$1sNodeph* prev_it_365;
struct list$1sNodeph* __result265__;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        /*i*/come_call_finalizer3(prev_it_365,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
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
struct sSemicolonNode* __result267__;
void* __right_value348 = (void*)0;
struct sSemicolonNode* result_383;
void* __right_value349 = (void*)0;
char* __dec_obj149;
struct sSemicolonNode* __result268__;
    if(    self==(void*)0) {
        __result267__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_383=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_383->sname;
        result_383->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_383;
    /*i*/come_call_finalizer3(result_383,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_389;
struct sVarTable* old_table_390;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sVarTable* __dec_obj152;
struct sVarTable* current_loop_vtable_391;
struct list$1sTypeph* param_types__392;
struct list$1charph* param_names__393;
int i_394;
struct list$1charph* o2_saved_395;
char* name_396;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* type_397;
void* __right_value358 = (void*)0;
int block_level_401;
int i_402;
struct list$1sNodeph* o2_saved_403;
struct sNode* node_406;
struct list$1sRightValueObjectph* right_value_objects_409;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
int stack_num_before_414;
int sline_415;
void* __right_value361 = (void*)0;
char* sname_416;
void* __right_value362 = (void*)0;
char* __dec_obj160;
_Bool Value_417;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value368 = (void*)0;
struct CVALUE* come_value2_419;
void* __right_value369 = (void*)0;
char* __dec_obj164;
void* __right_value370 = (void*)0;
struct CVALUE* come_value2_421;
struct sVar* var__422;
void* __right_value371 = (void*)0;
struct CVALUE* come_value3_423;
void* __right_value372 = (void*)0;
_Bool _if_conditional2;
void* __right_value373 = (void*)0;
struct sType* __dec_obj165;
void* __right_value374 = (void*)0;
char* c_value_440;
void* __right_value375 = (void*)0;
char* __dec_obj166;
void* __right_value376 = (void*)0;
char* __dec_obj167;
void* __right_value377 = (void*)0;
char* __dec_obj168;
_Bool Value_441;
void* __right_value378 = (void*)0;
char* __dec_obj169;
struct list$1sRightValueObjectph* __dec_obj170;
void* __if_result__0_444 = (void*)0;
struct list$1sVarph* o2_saved_445;
struct sVar* it_448;
struct list$1sVarph* __dec_obj176;
memset(&i_394, 0, sizeof(int));
memset(&i_402, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_389=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_390=info->lv_table;
    if(    !no_var_table) {
        __dec_obj152=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "sVarTable")),(_Bool)0,old_table_390));
        come_call_finalizer3(__dec_obj152,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_391=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__392=info->param_types;
    param_names__393=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_395=(param_names),name_396=list$1charph_begin((o2_saved_395));        !list$1charph_end((o2_saved_395));        name_396=list$1charph_next((o2_saved_395))        ){
            type_397=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value356=list$1sTypephp_operator_load_element(param_types,i_394))), "05function.c", 465, 2))));
            /*g*/come_call_finalizer3(__right_value356,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_397->mFunctionParam=(_Bool)1;
            type_397->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_396,(struct sType*)come_increment_ref_count(sType_clone(type_397)),info);
            i_394++;
            /*i*/come_call_finalizer3(type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_401=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_403=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_406=list$1sNodeph_begin((o2_saved_403));        !list$1sNodeph_end((o2_saved_403));        node_406=list$1sNodeph_next((o2_saved_403))        ){
            right_value_objects_409=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj157=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj158=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj159=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_414=list$1CVALUEph_length(info->stack);
            sline_415=info->sline;
            sname_416=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_406->sline(node_406->_protocol_obj);
            __dec_obj160=info->sname;
            info->sname=(char*)come_increment_ref_count(node_406->sname(node_406->_protocol_obj));
            /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_402==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_417=node_compile(node_406,info);
                if(                !Value_417) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_414+1) {
                    come_value_418=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_418->type->mClass->mName,"void")&&come_value_418->type->mPointerNum==0) {
                        come_value2_419=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_418));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_419));
                        __dec_obj164=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_419->c_value));
                        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_421=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_418));
                        var__422=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__422) {
                            come_value3_423=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "CVALUE"));
                            if(                            var__422->mType->mClass=="void"&&var__422->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__422->mType,((struct sType*)(__right_value372=sType_clone(come_value_418->type))),come_value3_423,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value372,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj165=var__422->mType;
                            var__422->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_418->type));
                            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_418->type->mHeap) {
                                c_value_440=(char*)come_increment_ref_count(increment_ref_count_object(come_value_418->type,come_value_418->c_value,info));
                                __dec_obj166=come_value2_421->c_value;
                                come_value2_421->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__422->mCValueName,c_value_440));
                                /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                /* U13 */c_value_440 = come_decrement_ref_count2(c_value_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj167=come_value2_421->c_value;
                                come_value2_421->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__422->mCValueName,come_value_418->c_value));
                                /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_421));
                        __dec_obj168=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_421->c_value));
                        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_441=node_compile(node_406,info);
                if(                !Value_441) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_415;
            __dec_obj169=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_416));
            /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_414);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj170=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_409);
            come_call_finalizer3(__dec_obj170,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_402++;
            /*i*/come_call_finalizer3(right_value_objects_409,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_416 = come_decrement_ref_count2(sname_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_403,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_401==0) {
            for(            o2_saved_445=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_448=list$1sVarph_begin((o2_saved_445));            !list$1sVarph_end((o2_saved_445));            it_448=list$1sVarph_next((o2_saved_445))            ){
                free_object(it_448->mType,it_448->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_445,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj176=info->match_it_var;
            __if_result__0_444=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj176,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_444,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_390;
    info->block_level=block_level_401;
    info->param_types=param_types__392;
    info->param_names=param_names__393;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_391;
    info->inhibits_output_code=inhibits_output_code_389;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_398;
int i_399;
struct sType* __result270__;
struct sType* default_value_400;
struct sType* __result271__;
default_value_400 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_398=self->head;
    i_399=0;
    while(it_398!=((void*)0)) {
        if(        position==i_399) {
            __result270__ = gComeFunResultObject = __result_obj__ = it_398->item;
            gComeFunResultObject = (void*)0;
            return __result270__;
        }
        it_398=it_398->next;
        i_399++;
    }
    memset(&default_value_400,0,sizeof(struct sType*));
    __result271__ = gComeFunResultObject = __result_obj__ = default_value_400;
    /*i*/come_call_finalizer3(default_value_400,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_404;
struct sNode* __result272__;
struct sNode* __result273__;
struct sNode* result_405;
struct sNode* __result274__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_404,0,sizeof(struct sNode*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->head;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_405,0,sizeof(struct sNode*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_405;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_407;
struct sNode* __result275__;
struct sNode* __result276__;
struct sNode* result_408;
struct sNode* __result277__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_407,0,sizeof(struct sNode*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_408,0,sizeof(struct sNode*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result278__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_410;
struct list_item$1sRightValueObjectph* prev_it_411;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        /*i*/come_call_finalizer3(prev_it_411,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_412;
struct list_item$1sRightValueObjectph* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        /*i*/come_call_finalizer3(prev_it_413,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result279__;
void* __right_value364 = (void*)0;
struct CVALUE* result_420;
void* __right_value365 = (void*)0;
char* __dec_obj161;
void* __right_value366 = (void*)0;
struct sType* __dec_obj162;
void* __right_value367 = (void*)0;
char* __dec_obj163;
struct CVALUE* __result280__;
    if(    self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_420=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj161=result_420->c_value;
        result_420->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj162=result_420->type;
        result_420->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_420->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj163=result_420->c_value_without_right_value_objects;
        result_420->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_420;
    /*i*/come_call_finalizer3(result_420,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
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
    if(    !charp_equals(left->mName,right->mName)) {
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
    if(    !charp_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_424;
struct list_item$1tuple2$2charphsTypephph* it2_425;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_424=left->head;
    it2_425=right->head;
    while(it_424!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_424->item,it2_425->item)) {
            return (_Bool)0;
        }
        it_424=it_424->next;
        it2_425=it2_425->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !charp_equals(self->v1,right->v1)) {
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
struct list_item$1sTypeph* it_426;
struct list_item$1sTypeph* it2_427;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_426=left->head;
    it2_427=right->head;
    while(it_426!=((void*)0)) {
        if(        !sType_equals(it_426->item,it2_427->item)) {
            return (_Bool)0;
        }
        it_426=it_426->next;
        it2_427=it2_427->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_428;
struct list_item$1sNodeph* it2_429;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_428=left->head;
    it2_429=right->head;
    while(it_428!=((void*)0)) {
        if(        !sNode_equals(it_428->item,it2_429->item)) {
            return (_Bool)0;
        }
        it_428=it_428->next;
        it2_429=it2_429->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_430;
struct list_item$1charph* it2_431;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_430=left->head;
    it2_431=right->head;
    while(it_430!=((void*)0)) {
        if(        !charp_equals(it_430->item,it2_431->item)) {
            return (_Bool)0;
        }
        it_430=it_430->next;
        it2_431=it2_431->next;
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
struct list_item$1tuple2$2charphsTypephph* it_432;
struct list_item$1tuple2$2charphsTypephph* it2_433;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_432=left->head;
    it2_433=right->head;
    while(it_432!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_432->item,it2_433->item))) {
            return (_Bool)0;
        }
        it_432=it_432->next;
        it2_433=it2_433->next;
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
    if(    !charp_equals(left->mGenericsName,right->mGenericsName)) {
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
    if(    !charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
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
    if(    !charp_equals(left->mAsmName,right->mAsmName)) {
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
    if(    !charp_equals(left->mTupleName,right->mTupleName)) {
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
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
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
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName));
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
struct list_item$1sTypeph* it_434;
struct list_item$1sTypeph* it2_435;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_434=left->head;
    it2_435=right->head;
    while(it_434!=((void*)0)) {
        if(        !(sType_operator_equals(it_434->item,it2_435->item))) {
            return (_Bool)0;
        }
        it_434=it_434->next;
        it2_435=it2_435->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_436;
struct list_item$1sNodeph* it2_437;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_436=left->head;
    it2_437=right->head;
    while(it_436!=((void*)0)) {
        if(        !(sNode_operator_equals(it_436->item,it2_437->item))) {
            return (_Bool)0;
        }
        it_436=it_436->next;
        it2_437=it2_437->next;
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
struct list_item$1charph* it_438;
struct list_item$1charph* it2_439;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_438=left->head;
    it2_439=right->head;
    while(it_438!=((void*)0)) {
        if(        !(string_operator_equals(it_438->item,it2_439->item))) {
            return (_Bool)0;
        }
        it_438=it_438->next;
        it2_439=it2_439->next;
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
struct list_item$1sRightValueObjectph* it_442;
struct list_item$1sRightValueObjectph* prev_it_443;
struct list$1sRightValueObjectph* __result281__;
    it_442=self->head;
    while(it_442!=((void*)0)) {
        prev_it_443=it_442;
        it_442=it_442->next;
        /*i*/come_call_finalizer3(prev_it_443,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_446;
struct sVar* __result282__;
struct sVar* __result283__;
struct sVar* result_447;
struct sVar* __result284__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_446,0,sizeof(struct sVar*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_447,0,sizeof(struct sVar*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_449;
struct sVar* __result285__;
struct sVar* __result286__;
struct sVar* result_450;
struct sVar* __result287__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_449,0,sizeof(struct sVar*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_450,0,sizeof(struct sVar*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_451;
struct list_item$1sVarph* prev_it_452;
    it_451=self->head;
    while(it_451!=((void*)0)) {
        prev_it_452=it_451;
        it_451=it_451->next;
        /*i*/come_call_finalizer3(prev_it_452,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sVarph* it_453;
struct list_item$1sVarph* prev_it_454;
    it_453=self->head;
    while(it_453!=((void*)0)) {
        prev_it_454=it_453;
        it_453=it_453->next;
        /*i*/come_call_finalizer3(prev_it_454,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_455;
_Bool dquort_456;
_Bool squort_457;
int sline_458;
int nest_459;
char* tail_460;
void* __right_value379 = (void*)0;
char* buf_461;
void* __right_value380 = (void*)0;
char* __result288__;
    head_455=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_456=(_Bool)0;
        squort_457=(_Bool)0;
        sline_458=0;
        nest_459=0;
        while(1) {
            if(            dquort_456) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_456=!dquort_456;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                }
            }
            else if(            squort_457) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_457=!squort_457;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_458);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_458=info->sline;
                info->p++;
                squort_457=!squort_457;
            }
            else if(            *info->p==34) {
                sline_458=info->sline;
                info->p++;
                dquort_456=!dquort_456;
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
                nest_459++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_459==0) {
                    break;
                }
                nest_459--;
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
    tail_460=info->p;
    buf_461=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_460-head_455+1)), "05function.c", 757, "char"));
    memcpy(buf_461,head_455,tail_460-head_455);
    buf_461[tail_460-head_455]=0;
    skip_spaces_and_lf(info);
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string(buf_461)));
    /* U13 */buf_461 = come_decrement_ref_count2(buf_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_462;
char* p3_463;
int i_464;
    terminated_462=(_Bool)0;
    p3_463=p;
    for(    i_464=0;    i_464<strlen(p2);    i_464++    ){
        if(        *p3_463==0) {
            terminated_462=(_Bool)1;
            break;
        }
        p3_463++;
    }
    return !terminated_462&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct buffer* asm_fun_name_465;
int brace_num_466;
int brace_num_467;
int len_468;
_Bool in_dquort_469;
int brace_num_470;
int nest_471;
int nest_472;
int nest_473;
int nest_474;
int nest_475;
int brace_num_476;
void* __right_value383 = (void*)0;
char* __result289__;
    asm_fun_name_465=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_466=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_466++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_466--;
                        if(                        brace_num_466==0) {
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
        else if(        strmemcmp(info->p,"__declspec")) {
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_467=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_467++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_467--;
                        if(                        brace_num_467==0) {
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
        else if(        strmemcmp(info->p,"_Noreturn")) {
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_468=0;
            if(            *info->p==40) {
                in_dquort_469=(_Bool)0;
                brace_num_470=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_469=!in_dquort_469;
                    }
                    else if(                    in_dquort_469) {
                        buffer_append_char(asm_fun_name_465,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_470++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_470--;
                        if(                        brace_num_470==0) {
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
                nest_471=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_471++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_471--;
                        if(                        nest_471==0) {
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
                nest_472=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_472++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_472--;
                        if(                        nest_472==0) {
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
                nest_473=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_473++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_473--;
                        if(                        nest_473==0) {
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
                nest_474=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_474++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_474--;
                        if(                        nest_474==0) {
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
                nest_475=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_475++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_475--;
                        if(                        nest_475==0) {
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
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_476=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_476++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_476--;
                        if(                        brace_num_476==0) {
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
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value383=buffer_to_string(asm_fun_name_465)));
    /*i*/come_call_finalizer3(asm_fun_name_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct buffer* asm_fun_name_477;
int nest_478;
int nest_479;
int nest_480;
int nest_481;
int nest_482;
int brace_num_483;
int len_484;
_Bool in_dquort_485;
int brace_num_486;
int brace_num_487;
void* __right_value386 = (void*)0;
char* __result290__;
    asm_fun_name_477=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1139, "buffer"))));
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
                nest_478=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_478++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_478--;
                        if(                        nest_478==0) {
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
                nest_479=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_479++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_479--;
                        if(                        nest_479==0) {
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
                nest_480=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_480++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_480--;
                        if(                        nest_480==0) {
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
                nest_481=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_481++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_481--;
                        if(                        nest_481==0) {
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
                nest_482=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_482++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_482--;
                        if(                        nest_482==0) {
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
                brace_num_483=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_483++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_483--;
                        if(                        brace_num_483==0) {
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
            len_484=0;
            if(            *info->p==40) {
                in_dquort_485=(_Bool)0;
                brace_num_486=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_485=!in_dquort_485;
                    }
                    else if(                    in_dquort_485) {
                        buffer_append_char(asm_fun_name_477,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
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
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_487=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_487++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_487--;
                        if(                        brace_num_487==0) {
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
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=buffer_to_string(asm_fun_name_477)));
    /*i*/come_call_finalizer3(asm_fun_name_477,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value387 = (void*)0;
char* __dec_obj177;
char* head_488;
int head_sline_489;
void* __right_value388 = (void*)0;
char* buf_490;
void* __right_value389 = (void*)0;
struct sNode* node_491;
_Bool Value_492;
    while(*info->p) {
        __dec_obj177=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(string_clone(info->sname));
        /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_488=info->p;
        head_sline_489=info->sline;
        buf_490=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_490 = come_decrement_ref_count2(buf_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_491=(struct sNode*)come_increment_ref_count(top_level_v99(buf_490,head_488,head_sline_489,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_491!=((void*)0)) {
            Value_492=node_compile(node_491,info);
            if(            !Value_492) {
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
            /* U13 */buf_490 = come_decrement_ref_count2(buf_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_490 = come_decrement_ref_count2(buf_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value390 = (void*)0;
char* name_493;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* result_type_494;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __list_values1___495[5];
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1sTypeph* param_types_500;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* __list_values2___501[5];
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1charph* param_names_503;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1charph* param_default_parametors_504;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sFun* main_fun_505;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
char* name_527;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* result_type_528;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* __list_values3___529[1];
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1sTypeph* param_types_530;
void* __right_value435 = (void*)0;
char* __list_values4___531[1];
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1charph* param_names_532;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* param_default_parametors_533;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sFun* main_fun_534;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* name_535;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* result_type_536;
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
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* __list_values5___537[7];
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1sTypeph* param_types_538;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __list_values6___539[7];
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1charph* param_names_540;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1charph* param_default_parametors_541;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sFun* main_fun_542;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
char* name_543;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* result_type_544;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __list_values7___545[5];
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct list$1sTypeph* param_types_546;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* __list_values8___547[5];
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1charph* param_names_548;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1charph* param_default_parametors_549;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sFun* main_fun_550;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
char* name_551;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* result_type_552;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __list_values9___553[1];
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1sTypeph* param_types_554;
void* __right_value516 = (void*)0;
char* __list_values10___555[1];
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1charph* param_names_556;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1charph* param_default_parametors_557;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sFun* main_fun_558;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* name_559;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* result_type_560;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __list_values11___561[4];
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1sTypeph* param_types_562;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* __list_values12___563[4];
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1charph* param_names_564;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_default_parametors_565;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sFun* main_fun_566;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* name_567;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* result_type_568;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __list_values13___569[3];
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1sTypeph* param_types_570;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* __list_values14___571[3];
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1charph* param_names_572;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1charph* param_default_parametors_573;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sFun* main_fun_574;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* name_575;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* result_type_576;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* __list_values15___577[1];
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1sTypeph* param_types_578;
void* __right_value585 = (void*)0;
char* __list_values16___579[1];
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1charph* param_names_580;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1charph* param_default_parametors_581;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sFun* main_fun_582;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
char* name_583;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sType* result_type_584;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __list_values17___585[3];
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct list$1sTypeph* param_types_586;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* __list_values18___587[3];
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1charph* param_names_588;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1charph* param_default_parametors_589;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* main_fun_590;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* name_591;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* result_type_592;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct list$1sTypeph* param_types_593;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1charph* param_names_594;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1charph* param_default_parametors_595;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sFun* main_fun_596;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* name_597;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sType* result_type_598;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __list_values19___599[4];
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
char* __list_values20___601[4];
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* main_fun_604;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* name_605;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* result_type_606;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1sTypeph* param_types_607;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1charph* param_names_608;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1charph* param_default_parametors_609;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sFun* fun_610;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
char* name_611;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* result_type_612;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1sTypeph* param_types_613;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1charph* param_names_614;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1charph* param_default_parametors_615;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sFun* fun_616;
void* __right_value685 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_493=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_494=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1487, "sType")),"void*",(_Bool)0,info));
        param_types_500=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___495[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value394=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___495[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value396=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___495[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value398=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"char*",(_Bool)0,info)))),
__list_values1___495[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value400=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___495[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value402=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1488, "struct list$1sTypeph")),5,__list_values1___495)));
        /*g*/come_call_finalizer3(__right_value394,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value396,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value398,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value400,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value402,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_503=(struct list$1charph*)come_increment_ref_count((__list_values2___501[0]=(char*)come_increment_ref_count(((char*)(__right_value408=__builtin_string("count")))),
__list_values2___501[1]=(char*)come_increment_ref_count(((char*)(__right_value409=__builtin_string("size")))),
__list_values2___501[2]=(char*)come_increment_ref_count(((char*)(__right_value410=__builtin_string("sname")))),
__list_values2___501[3]=(char*)come_increment_ref_count(((char*)(__right_value411=__builtin_string("sline")))),
__list_values2___501[4]=(char*)come_increment_ref_count(((char*)(__right_value412=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1489, "struct list$1charph")),5,__list_values2___501)));
        /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_504=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1490, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_504,((void*)0));
        list$1charph_push_back(param_default_parametors_504,((void*)0));
        list$1charph_push_back(param_default_parametors_504,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_504,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_504,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_505=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1496, "sFun")),(char*)come_increment_ref_count(name_493),(struct sType*)come_increment_ref_count(result_type_494),(struct list$1sTypeph*)come_increment_ref_count(param_types_500),(struct list$1charph*)come_increment_ref_count(param_names_503),(struct list$1charph*)come_increment_ref_count(param_default_parametors_504),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_493)),(struct sFun*)come_increment_ref_count(main_fun_505));
        /* U13 */name_493 = come_decrement_ref_count2(name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_500,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_505,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_527=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_528=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1507, "sType")),"void*",(_Bool)0,info));
        param_types_530=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___529[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value432=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1508, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1508, "struct list$1sTypeph")),1,__list_values3___529)));
        /*g*/come_call_finalizer3(__right_value432,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_532=(struct list$1charph*)come_increment_ref_count((__list_values4___531[0]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1509, "struct list$1charph")),1,__list_values4___531)));
        /* U11 */__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_533=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1510, "list$1charph"))));
        main_fun_534=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1511, "sFun")),(char*)come_increment_ref_count(name_527),(struct sType*)come_increment_ref_count(result_type_528),(struct list$1sTypeph*)come_increment_ref_count(param_types_530),(struct list$1charph*)come_increment_ref_count(param_names_532),(struct list$1charph*)come_increment_ref_count(param_default_parametors_533),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_527)),(struct sFun*)come_increment_ref_count(main_fun_534));
        /* U13 */name_527 = come_decrement_ref_count2(name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_530,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_532,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_533,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_534,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_535=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_536=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "sType")),"void",(_Bool)0,info));
        param_types_538=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___537[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value449=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___537[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value451=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___537[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value453=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___537[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value455=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___537[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value457=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
__list_values5___537[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
__list_values5___537[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value461=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1523, "struct list$1sTypeph")),7,__list_values5___537)));
        /*g*/come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value451,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value457,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_540=(struct list$1charph*)come_increment_ref_count((__list_values6___539[0]=(char*)come_increment_ref_count(((char*)(__right_value464=__builtin_string("fun")))),
__list_values6___539[1]=(char*)come_increment_ref_count(((char*)(__right_value465=__builtin_string("mem")))),
__list_values6___539[2]=(char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("protocol_fun")))),
__list_values6___539[3]=(char*)come_increment_ref_count(((char*)(__right_value467=__builtin_string("protocol_obj")))),
__list_values6___539[4]=(char*)come_increment_ref_count(((char*)(__right_value468=__builtin_string("call_finalizer_only")))),
__list_values6___539[5]=(char*)come_increment_ref_count(((char*)(__right_value469=__builtin_string("no_decrement")))),
__list_values6___539[6]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1524, "struct list$1charph")),7,__list_values6___539)));
        /* U11 */__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_541=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1525, "list$1charph"))));
        main_fun_542=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1526, "sFun")),(char*)come_increment_ref_count(name_535),(struct sType*)come_increment_ref_count(result_type_536),(struct list$1sTypeph*)come_increment_ref_count(param_types_538),(struct list$1charph*)come_increment_ref_count(param_names_540),(struct list$1charph*)come_increment_ref_count(param_default_parametors_541),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_535)),(struct sFun*)come_increment_ref_count(main_fun_542));
        /* U13 */name_535 = come_decrement_ref_count2(name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_536,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_538,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_540,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_541,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_542,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_543=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_544=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "sType")),"void*",(_Bool)0,info));
        param_types_546=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___545[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___545[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___545[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___545[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"bool",(_Bool)0,info)))),
__list_values7___545[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value492=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1538, "struct list$1sTypeph")),5,__list_values7___545)));
        /*g*/come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_548=(struct list$1charph*)come_increment_ref_count((__list_values8___547[0]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("mem")))),
__list_values8___547[1]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("protocol_fun")))),
__list_values8___547[2]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("protocol_obj")))),
__list_values8___547[3]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("no_decrement")))),
__list_values8___547[4]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1539, "struct list$1charph")),5,__list_values8___547)));
        /* U11 */__right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_549=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1540, "list$1charph"))));
        main_fun_550=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1541, "sFun")),(char*)come_increment_ref_count(name_543),(struct sType*)come_increment_ref_count(result_type_544),(struct list$1sTypeph*)come_increment_ref_count(param_types_546),(struct list$1charph*)come_increment_ref_count(param_names_548),(struct list$1charph*)come_increment_ref_count(param_default_parametors_549),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_543)),(struct sFun*)come_increment_ref_count(main_fun_550));
        /* U13 */name_543 = come_decrement_ref_count2(name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_544,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_546,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_550,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_551=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_552=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1552, "sType")),"void",(_Bool)0,info));
        param_types_554=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___553[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value513=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1553, "struct list$1sTypeph")),1,__list_values9___553)));
        /*g*/come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_556=(struct list$1charph*)come_increment_ref_count((__list_values10___555[0]=(char*)come_increment_ref_count(((char*)(__right_value516=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1554, "struct list$1charph")),1,__list_values10___555)));
        /* U11 */__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_557=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1555, "list$1charph"))));
        main_fun_558=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1556, "sFun")),(char*)come_increment_ref_count(name_551),(struct sType*)come_increment_ref_count(result_type_552),(struct list$1sTypeph*)come_increment_ref_count(param_types_554),(struct list$1charph*)come_increment_ref_count(param_names_556),(struct list$1charph*)come_increment_ref_count(param_default_parametors_557),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_551)),(struct sFun*)come_increment_ref_count(main_fun_558));
        /* U13 */name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_554,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_556,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_557,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_558,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_559=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_560=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "sType")),"void*",(_Bool)0,info));
        param_types_562=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___561[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value530=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"void*",(_Bool)0,info)))),
__list_values11___561[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value532=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"char*",(_Bool)0,info)))),
__list_values11___561[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value534=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"int",(_Bool)0,info)))),
__list_values11___561[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value536=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1568, "struct list$1sTypeph")),4,__list_values11___561)));
        /*g*/come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value532,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value536,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_564=(struct list$1charph*)come_increment_ref_count((__list_values12___563[0]=(char*)come_increment_ref_count(((char*)(__right_value539=__builtin_string("block")))),
__list_values12___563[1]=(char*)come_increment_ref_count(((char*)(__right_value540=__builtin_string("sname")))),
__list_values12___563[2]=(char*)come_increment_ref_count(((char*)(__right_value541=__builtin_string("sline")))),
__list_values12___563[3]=(char*)come_increment_ref_count(((char*)(__right_value542=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1569, "struct list$1charph")),4,__list_values12___563)));
        /* U11 */__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_565=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1570, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_565,((void*)0));
        list$1charph_push_back(param_default_parametors_565,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_565,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_565,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_566=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1575, "sFun")),(char*)come_increment_ref_count(name_559),(struct sType*)come_increment_ref_count(result_type_560),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_564),(struct list$1charph*)come_increment_ref_count(param_default_parametors_565),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_559)),(struct sFun*)come_increment_ref_count(main_fun_566));
        /* U13 */name_559 = come_decrement_ref_count2(name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_565,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_566,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_567=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_568=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "sType")),"void*",(_Bool)0,info));
        param_types_570=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___569[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value559=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"void*",(_Bool)0,info)))),
__list_values13___569[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value561=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"int",(_Bool)0,info)))),
__list_values13___569[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value563=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1587, "struct list$1sTypeph")),3,__list_values13___569)));
        /*g*/come_call_finalizer3(__right_value559,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value561,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value563,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_572=(struct list$1charph*)come_increment_ref_count((__list_values14___571[0]=(char*)come_increment_ref_count(((char*)(__right_value566=__builtin_string("b")))),
__list_values14___571[1]=(char*)come_increment_ref_count(((char*)(__right_value567=__builtin_string("c")))),
__list_values14___571[2]=(char*)come_increment_ref_count(((char*)(__right_value568=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph")),3,__list_values14___571)));
        /* U11 */__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_573=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1589, "list$1charph"))));
        main_fun_574=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1590, "sFun")),(char*)come_increment_ref_count(name_567),(struct sType*)come_increment_ref_count(result_type_568),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_572),(struct list$1charph*)come_increment_ref_count(param_default_parametors_573),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_567)),(struct sFun*)come_increment_ref_count(main_fun_574));
        /* U13 */name_567 = come_decrement_ref_count2(name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_574,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_575=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_576=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "sType")),"char*",(_Bool)0,info));
        param_types_578=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___577[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value582=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1602, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1602, "struct list$1sTypeph")),1,__list_values15___577)));
        /*g*/come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_580=(struct list$1charph*)come_increment_ref_count((__list_values16___579[0]=(char*)come_increment_ref_count(((char*)(__right_value585=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph")),1,__list_values16___579)));
        /* U11 */__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_581=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1604, "list$1charph"))));
        main_fun_582=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1605, "sFun")),(char*)come_increment_ref_count(name_575),(struct sType*)come_increment_ref_count(result_type_576),(struct list$1sTypeph*)come_increment_ref_count(param_types_578),(struct list$1charph*)come_increment_ref_count(param_names_580),(struct list$1charph*)come_increment_ref_count(param_default_parametors_581),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_575)),(struct sFun*)come_increment_ref_count(main_fun_582));
        /* U13 */name_575 = come_decrement_ref_count2(name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_580,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_582,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_583=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_584=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "sType")),"void",(_Bool)0,info));
        param_types_586=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___585[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
__list_values17___585[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
__list_values17___585[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value603=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1664, "struct list$1sTypeph")),3,__list_values17___585)));
        /*g*/come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_588=(struct list$1charph*)come_increment_ref_count((__list_values18___587[0]=(char*)come_increment_ref_count(((char*)(__right_value606=xsprintf("come_malloc")))),
__list_values18___587[1]=(char*)come_increment_ref_count(((char*)(__right_value607=xsprintf("come_debug")))),
__list_values18___587[2]=(char*)come_increment_ref_count(((char*)(__right_value608=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1665, "struct list$1charph")),3,__list_values18___587)));
        /* U11 */__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_589=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1666, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_589,((void*)0));
        main_fun_590=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1668, "sFun")),(char*)come_increment_ref_count(name_583),(struct sType*)come_increment_ref_count(result_type_584),(struct list$1sTypeph*)come_increment_ref_count(param_types_586),(struct list$1charph*)come_increment_ref_count(param_names_588),(struct list$1charph*)come_increment_ref_count(param_default_parametors_589),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_583)),(struct sFun*)come_increment_ref_count(main_fun_590));
        /* U13 */name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_586,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_588,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_589,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_590,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_591=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_592=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1679, "sType")),"void",(_Bool)0,info));
        param_types_593=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1680, "list$1sTypeph"))));
        param_names_594=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1681, "list$1charph"))));
        param_default_parametors_595=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1682, "list$1charph"))));
        main_fun_596=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1683, "sFun")),(char*)come_increment_ref_count(name_591),(struct sType*)come_increment_ref_count(result_type_592),(struct list$1sTypeph*)come_increment_ref_count(param_types_593),(struct list$1charph*)come_increment_ref_count(param_names_594),(struct list$1charph*)come_increment_ref_count(param_default_parametors_595),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_591)),(struct sFun*)come_increment_ref_count(main_fun_596));
        /* U13 */name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_592,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_593,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_594,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_595,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1694, "sType")),"void*",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value636=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"void*",(_Bool)0,info)))),
__list_values19___599[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value638=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"char*",(_Bool)0,info)))),
__list_values19___599[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value640=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"int",(_Bool)0,info)))),
__list_values19___599[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value642=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1695, "struct list$1sTypeph")),4,__list_values19___599)));
        /*g*/come_call_finalizer3(__right_value636,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value638,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value640,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value642,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values20___601[0]=(char*)come_increment_ref_count(((char*)(__right_value645=__builtin_string("mem")))),
__list_values20___601[1]=(char*)come_increment_ref_count(((char*)(__right_value646=__builtin_string("sname")))),
__list_values20___601[2]=(char*)come_increment_ref_count(((char*)(__right_value647=__builtin_string("sline")))),
__list_values20___601[3]=(char*)come_increment_ref_count(((char*)(__right_value648=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1696, "struct list$1charph")),4,__list_values20___601)));
        /* U11 */__right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1697, "list$1charph"))));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1698, "sFun")),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        /* U13 */name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1709, "sType")),"void",(_Bool)0,info));
        param_types_607=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1710, "list$1sTypeph"))));
        param_names_608=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1711, "list$1charph"))));
        param_default_parametors_609=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1712, "list$1charph"))));
        fun_610=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1713, "sFun")),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_607),(struct list$1charph*)come_increment_ref_count(param_names_608),(struct list$1charph*)come_increment_ref_count(param_default_parametors_609),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(fun_610));
        /* U13 */name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_607,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_608,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_610,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_611=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_612=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1741, "sType")),"void",(_Bool)0,info));
        param_types_613=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1742, "list$1sTypeph"))));
        param_names_614=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1743, "list$1charph"))));
        param_default_parametors_615=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "list$1charph"))));
        fun_616=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1745, "sFun")),(char*)come_increment_ref_count(name_611),(struct sType*)come_increment_ref_count(result_type_612),(struct list$1sTypeph*)come_increment_ref_count(param_types_613),(struct list$1charph*)come_increment_ref_count(param_names_614),(struct list$1charph*)come_increment_ref_count(param_default_parametors_615),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_611)),(struct sFun*)come_increment_ref_count(fun_616));
        /* U13 */name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_613,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_614,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_616,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_496;
struct list$1sTypeph* __result292__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_496=0;    i_496<num_value;    i_496++    ){
        list$1sTypeph_push_back(self,values[i_496]);
    }
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
struct list_item$1sTypeph* litem_497;
struct sType* __dec_obj178;
void* __right_value404 = (void*)0;
struct list_item$1sTypeph* litem_498;
struct sType* __dec_obj179;
void* __right_value405 = (void*)0;
struct list_item$1sTypeph* litem_499;
struct sType* __dec_obj180;
struct list$1sTypeph* __result291__;
    if(    self->len==0) {
        litem_497=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value403=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1142, "list_item$1sTypeph"))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        __dec_obj178=litem_497->item;
        litem_497->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1) {
        litem_498=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value404=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1152, "list_item$1sTypeph"))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        __dec_obj179=litem_498->item;
        litem_498->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value405=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1162, "list_item$1sTypeph"))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        __dec_obj180=litem_499->item;
        litem_499->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_502;
struct list$1charph* __result293__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_502=0;    i_502<num_value;    i_502++    ){
        list$1charph_push_back(self,values[i_502]);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_523;
unsigned int it_524;
_Bool same_key_exist_525;
char* it2_526;
struct map$2charphsFunph* __result304__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_523=charp_get_hash_key(key)%self->size;
    it_524=hash_523;
    while((_Bool)1) {
        if(        self->item_existance[it_524]) {
            if(            charp_equals(self->keys[it_524],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_524]);
                    /* U13 */self->keys[it_524] = come_decrement_ref_count2(self->keys[it_524], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_524]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_524]);
                    self->keys[it_524]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_524],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_524]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_524]=item;
                }
                break;
            }
            it_524++;
            if(            it_524>=self->size) {
                it_524=0;
            }
            else if(            it_524==hash_523) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_524]=(_Bool)1;
            if(            1) {
                self->keys[it_524]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_524]=key;
            }
            if(            1) {
                self->items[it_524]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_524]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_525=(_Bool)0;
    for(    it2_526=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_526=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_526,key)) {
            same_key_exist_525=(_Bool)1;
        }
    }
    if(    !same_key_exist_525) {
        list$1charp_push_back(self->key_list,key);
    }
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_506;
void* __right_value424 = (void*)0;
char** keys_507;
void* __right_value425 = (void*)0;
struct sFun** items_508;
void* __right_value426 = (void*)0;
_Bool* item_existance_509;
int len_510;
char* it_513;
struct sFun* default_value_516;
struct sFun* it2_517;
unsigned int hash_520;
int n_521;
struct sFun* default_value_522;
default_value_516 = (void*)0;
default_value_522 = (void*)0;
    size_506=self->size*10;
    keys_507=(char**)come_increment_ref_count(((char**)(__right_value424=(char**)come_calloc(1, sizeof(char*)*(1*(size_506)), "./comelang.h", 2547, "char*%"))));
    items_508=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value425=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_506)), "./comelang.h", 2548, "sFun*%"))));
    item_existance_509=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value426=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_506)), "./comelang.h", 2549, "bool"))));
    len_510=0;
    for(    it_513=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_513=map$2charphsFunph_next(self)    ){
        memset(&default_value_516,0,sizeof(struct sFun*));
        it2_517=map$2charphsFunph_at(self,it_513,default_value_516);
        hash_520=charp_get_hash_key(it_513)%size_506;
        n_521=hash_520;
        while((_Bool)1) {
            if(            item_existance_509[n_521]) {
                n_521++;
                if(                n_521>=size_506) {
                    n_521=0;
                }
                else if(                n_521==hash_520) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_509[n_521]=(_Bool)1;
                keys_507[n_521]=it_513;
                items_508[n_521]=map$2charphsFunph_at(self,it_513,default_value_522);
                len_510++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_507;
    self->items=items_508;
    self->item_existance=item_existance_509;
    self->size=size_506;
    self->len=len_510;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_511;
char* __result294__;
char* __result295__;
char* result_512;
char* __result296__;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_511,0,sizeof(char*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_511;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_512,0,sizeof(char*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_512;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_514;
char* __result297__;
char* __result298__;
char* result_515;
char* __result299__;
result_514 = (void*)0;
result_515 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_514,0,sizeof(char*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_514;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_515,0,sizeof(char*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_515;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_518;
unsigned int it_519;
struct sFun* __result300__;
struct sFun* __result301__;
struct sFun* __result302__;
struct sFun* __result303__;
    hash_518=charp_get_hash_key(((char*)key))%self->size;
    it_519=hash_518;
    while((_Bool)1) {
        if(        self->item_existance[it_519]) {
            if(            charp_equals(self->keys[it_519],key)) {
                __result300__ = gComeFunResultObject = __result_obj__ = self->items[it_519];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result300__;
            }
            it_519++;
            if(            it_519>=self->size) {
                it_519=0;
            }
            else if(            it_519==hash_518) {
                __result301__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
        }
        else {
            __result302__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result302__;
        }
    }
    __result303__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_617;
_Bool is_type_name_flag_618;
int sline_619;
_Bool define_struct_nobody_620;
char* p_621;
int sline_622;
void* __right_value686 = (void*)0;
char* word_623;
_Bool define_function_pointer_result_function_624;
_Bool define_variable_between_brace_625;
char* p_626;
void* __right_value687 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_627=0;
char* fun_name_628=0;
_Bool err_629=0;
void* __right_value688 = (void*)0;
char* word_630;
_Bool define_function_flag_631;
char* p_632;
void* __right_value689 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_633=0;
char* fun_name_634=0;
_Bool err_635=0;
char* word_636;
void* __right_value690 = (void*)0;
char* __dec_obj183;
void* __right_value691 = (void*)0;
char* __dec_obj184;
char* __dec_obj185;
void* __right_value692 = (void*)0;
char* __dec_obj186;
_Bool define_variable_637;
char* p_638;
void* __right_value693 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_639=0;
char* fun_name_640=0;
_Bool err_641=0;
void* __right_value694 = (void*)0;
char* word_642;
void* __right_value695 = (void*)0;
char* word_643;
char* p_644;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
char* word_645;
void* __right_value698 = (void*)0;
char* __dec_obj187;
void* __right_value699 = (void*)0;
char* word_646;
void* __right_value700 = (void*)0;
char* word_649;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* node_650;
struct sNode* __result306__;
void* __right_value703 = (void*)0;
struct sNode* __result307__;
char* header_head_651;
void* __right_value704 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_652=0;
char* fun_name_653=0;
_Bool err_654=0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1sTypeph* param_types_655;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1charph* param_names_656;
void* __right_value709 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_657=0;
char* param_name_658=0;
_Bool err_659=0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1sTypeph* param_types2_661;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1charph* param_names2_662;
void* __right_value716 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_663=0;
char* param_name_664=0;
_Bool err_665=0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* header_tail_667;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* result_type2_668;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct tuple1$1sTypeph* __dec_obj189;
void* __right_value723 = (void*)0;
struct list$1sTypeph* __dec_obj190;
void* __right_value724 = (void*)0;
struct list$1charph* __dec_obj191;
_Bool var_args_669;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct buffer* header_buf_670;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1charph* param_default_parametors_671;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sFun* fun_672;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sFun* fun2_676;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value773 = (void*)0;
struct sNode* __result335__;
void* __right_value774 = (void*)0;
struct sNode* node_711;
struct sNode* __result336__;
void* __right_value775 = (void*)0;
struct sNode* node_712;
char* source_tail_713;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct buffer* header_714;
struct sNode* __result337__;
void* __right_value778 = (void*)0;
char* buf2_715;
void* __right_value779 = (void*)0;
struct sNode* __result338__;
    info->in_top_level=(_Bool)1;
    source_head_617=info->p;
    is_type_name_flag_618=is_type_name(buf,info);
    sline_619=info->sline;
    define_struct_nobody_620=(_Bool)0;
    {
        p_621=info->p;
        sline_622=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_623=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_620=(_Bool)1;
                }
                /* U13 */word_623 = come_decrement_ref_count2(word_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_622;
    }
    define_function_pointer_result_function_624=(_Bool)0;
    define_variable_between_brace_625=(_Bool)0;
    if(    is_type_name_flag_618) {
        p_626=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value687=backtrace_parse_type((_Bool)0,info)));
            result_type_627=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_628=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_629=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value687,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_624=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_630=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_630,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_625=(_Bool)1;
                            }
                        }
                        /* U13 */word_630 = come_decrement_ref_count2(word_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_628 = come_decrement_ref_count2(fun_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_619;
    }
    define_function_flag_631=(_Bool)0;
    if(    is_type_name_flag_618&&!define_function_pointer_result_function_624&&charp_operator_not_equals(buf,"__typeof__")) {
        p_632=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value689=backtrace_parse_type((_Bool)0,info)));
            result_type_633=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_634=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_635=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value689,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_633,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_634 = come_decrement_ref_count2(fun_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_636=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj183=word_636;
                word_636=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_636,"extern")) {
                    __dec_obj184=word_636;
                    word_636=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj185=word_636;
                word_636=((void*)0);
                /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_636) {
                if(                is_type_name(word_636,info)) {
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
                        __dec_obj186=word_636;
                        word_636=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_636)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_618) {
                        define_function_flag_631=(_Bool)1;
                    }
                }
            }
            /* U13 */word_636 = come_decrement_ref_count2(word_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_632;
        info->sline=sline_619;
    }
    define_variable_637=(_Bool)1;
    if(    is_type_name_flag_618&&!define_function_pointer_result_function_624) {
        p_638=info->p;
        info->p=head;
        if(        !is_type_name_flag_618) {
            define_variable_637=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value693=backtrace_parse_type((_Bool)0,info)));
            result_type_639=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_640=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_641=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value693,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_642=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_637=(_Bool)1;
                            }
                        }
                        /* U13 */word_642 = come_decrement_ref_count2(word_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_643=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_643,info)&&*info->p!=40) {
                            define_variable_637=(_Bool)1;
                        }
                    }
                    /* U13 */word_643 = come_decrement_ref_count2(word_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_640 = come_decrement_ref_count2(fun_name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_637=(_Bool)0;
        }
        else if(        define_variable_637) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_637=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_637=(_Bool)0;
            }
        }
        info->p=p_638;
        info->sline=sline_619;
    }
    else {
        define_variable_637=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_624) {
        p_644=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value696=parse_word(info)));
                /* U11 */__right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_645=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj187=word_645;
                        word_645=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_645,"extends")) {
                            define_variable_637=(_Bool)0;
                        }
                    }
                    /* U13 */word_645 = come_decrement_ref_count2(word_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_637=(_Bool)0;
        }
        else if(        define_variable_637) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_637=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_637=(_Bool)0;
            }
        }
        info->p=p_644;
        info->sline=sline_619;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_646=(char*)come_increment_ref_count(parse_word(info));
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
                    word_649=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_649)));
                    /* U13 */word_649 = come_decrement_ref_count2(word_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_650=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result306__ = gComeFunResultObject = __result_obj__ = node_650;
            if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_646 = come_decrement_ref_count2(word_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
            if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_646 = come_decrement_ref_count2(word_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_620) {
    }
    else if(    define_variable_between_brace_625) {
        info->p=head;
        info->sline=sline_619;
        __result307__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value703=parse_global_variable(info)));
        if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    else if(    define_function_pointer_result_function_624) {
        header_head_651=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value704=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_652=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_653=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_654=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value704,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_655=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2070, "list$1sTypeph"))));
            param_names_656=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2071, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value709=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_657=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_658=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_659=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value709,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_659) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_655,(struct sType*)come_increment_ref_count(param_type_657));
                    static int num_function_pointer_result_var_name_a_660=0;
                    list$1charph_push_back(param_names_656,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_660)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value711=parse_word(info)));
                        /* U11 */__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_658 = come_decrement_ref_count2(param_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_657,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_658 = come_decrement_ref_count2(param_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_661=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2117, "list$1sTypeph"))));
                param_names2_662=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2118, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value716=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_663=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_664=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_665=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value716,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_665) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_661,(struct sType*)come_increment_ref_count(param_type_663));
                        static int num_function_pointer_result_var_name_b_666=0;
                        list$1charph_push_back(param_names2_662,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_666)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value718=parse_word(info)));
                            /* U11 */__right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_664 = come_decrement_ref_count2(param_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_664 = come_decrement_ref_count2(param_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_667=info->p;
                result_type2_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2160, "sType")),"lambda",(_Bool)0,info));
                __dec_obj189=result_type2_668->mResultType;
                result_type2_668->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2162, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_652)));
                come_call_finalizer3(__dec_obj189,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj190=result_type2_668->mParamTypes;
                result_type2_668->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_661));
                come_call_finalizer3(__dec_obj190,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj191=result_type2_668->mParamNames;
                result_type2_668->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_662));
                come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_668->mVarArgs=(_Bool)0;
                result_type2_668->mStatic=(_Bool)0;
                var_args_669=(_Bool)0;
                header_buf_670=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2170, "buffer"))));
                buffer_append(header_buf_670,header_head_651,header_tail_667-header_head_651);
                buffer_append_char(header_buf_670,0);
                param_default_parametors_671=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2174, "list$1charph"))));
                fun_672=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2176, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_653)),(struct sType*)come_increment_ref_count(result_type2_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_655),(struct list$1charph*)come_increment_ref_count(param_names_656),(struct list$1charph*)come_increment_ref_count(param_default_parametors_671),(_Bool)1,var_args_669,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_670)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
                fun2_676=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value734=__builtin_string(fun_name_653)))));
                /* U11 */__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_676==((void*)0)||fun2_676->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_653)),(struct sFun*)come_increment_ref_count(fun_672));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2188, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value738=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2188, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_672),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value773=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_661,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_662,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_671,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_672,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun2_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_655,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_653 = come_decrement_ref_count2(fun_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value738,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value773) { __right_value773 = come_decrement_ref_count2(__right_value773, ((struct sNode*)__right_value773)->finalize, ((struct sNode*)__right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result335__;
                /*i*/come_call_finalizer3(param_types2_661,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_662,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_671,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_672,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun2_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_655,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_653 = come_decrement_ref_count2(fun_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_631) {
        info->p=head;
        info->sline=sline_619;
        node_711=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result336__ = gComeFunResultObject = __result_obj__ = node_711;
        if(node_711) { node_711 = come_decrement_ref_count2(node_711, ((struct sNode*)node_711)->finalize, ((struct sNode*)node_711)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result336__;
        if(node_711) { node_711 = come_decrement_ref_count2(node_711, ((struct sNode*)node_711)->finalize, ((struct sNode*)node_711)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_637) {
        info->p=head;
        info->sline=sline_619;
        node_712=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_713=info->p;
        header_714=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2212, "buffer"))));
        buffer_append(header_714,source_head_617,source_tail_713-source_head_617);
        __result337__ = gComeFunResultObject = __result_obj__ = node_712;
        if(node_712) { node_712 = come_decrement_ref_count2(node_712, ((struct sNode*)node_712)->finalize, ((struct sNode*)node_712)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result337__;
        if(node_712) { node_712 = come_decrement_ref_count2(node_712, ((struct sNode*)node_712)->finalize, ((struct sNode*)node_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_619;
    buf2_715=(char*)come_increment_ref_count(parse_word(info));
    __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value779=top_level_v98(buf2_715,head,head_sline,info)));
    /* U13 */buf2_715 = come_decrement_ref_count2(buf2_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value779) { __right_value779 = come_decrement_ref_count2(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj181;
char* __dec_obj182;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj181=self->v1;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj182=self->v2;
            /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_647;
struct list_item$1charph* prev_it_648;
struct list$1charph* __result305__;
    it_647=self->head;
    while(it_647!=((void*)0)) {
        prev_it_648=it_647;
        it_647=it_647->next;
        /*i*/come_call_finalizer3(prev_it_648,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj188;
struct tuple1$1sTypeph* __result308__;
    __dec_obj188=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_673;
unsigned int hash_674;
unsigned int it_675;
struct sFun* __result309__;
struct sFun* __result310__;
struct sFun* __result311__;
struct sFun* __result312__;
default_value_673 = (void*)0;
    memset(&default_value_673,0,sizeof(struct sFun*));
    hash_674=charp_get_hash_key(((char*)key))%self->size;
    it_675=hash_674;
    while((_Bool)1) {
        if(        self->item_existance[it_675]) {
            if(            charp_equals(self->keys[it_675],key)) {
                __result309__ = gComeFunResultObject = __result_obj__ = self->items[it_675];
                /*i*/come_call_finalizer3(default_value_673,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result309__;
            }
            it_675++;
            if(            it_675>=self->size) {
                it_675=0;
            }
            else if(            it_675==hash_674) {
                __result310__ = gComeFunResultObject = __result_obj__ = default_value_673;
                /*i*/come_call_finalizer3(default_value_673,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result310__;
            }
        }
        else {
            __result311__ = gComeFunResultObject = __result_obj__ = default_value_673;
            /*i*/come_call_finalizer3(default_value_673,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
    }
    __result312__ = gComeFunResultObject = __result_obj__ = default_value_673;
    /*i*/come_call_finalizer3(default_value_673,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result314__;
void* __right_value741 = (void*)0;
struct sFun* result_678;
void* __right_value742 = (void*)0;
char* __dec_obj195;
void* __right_value743 = (void*)0;
struct sType* __dec_obj196;
void* __right_value744 = (void*)0;
struct list$1sTypeph* __dec_obj197;
void* __right_value745 = (void*)0;
struct list$1charph* __dec_obj198;
void* __right_value746 = (void*)0;
struct list$1charph* __dec_obj199;
void* __right_value747 = (void*)0;
struct sType* __dec_obj200;
void* __right_value765 = (void*)0;
struct sBlock* __dec_obj206;
void* __right_value766 = (void*)0;
struct buffer* __dec_obj207;
void* __right_value767 = (void*)0;
struct buffer* __dec_obj208;
void* __right_value768 = (void*)0;
struct buffer* __dec_obj209;
void* __right_value769 = (void*)0;
struct buffer* __dec_obj210;
void* __right_value770 = (void*)0;
char* __dec_obj211;
void* __right_value771 = (void*)0;
char* __dec_obj212;
struct sFun* __result333__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_678=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj195=result_678->mName;
        result_678->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj196=result_678->mResultType;
        result_678->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj197=result_678->mParamTypes;
        result_678->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj197,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj198=result_678->mParamNames;
        result_678->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj199=result_678->mParamDefaultParametors;
        result_678->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj199,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj200=result_678->mLambdaType;
        result_678->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj206=result_678->mBlock;
        result_678->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj206,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_678->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj207=result_678->mSource;
        result_678->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj208=result_678->mSourceHead;
        result_678->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj209=result_678->mSourceHead2;
        result_678->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj210=result_678->mSourceDefer;
        result_678->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_678->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_678->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj211=result_678->mComeHeader;
        result_678->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj212=result_678->mDeclareSName;
        result_678->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_678->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_678->no_output_come_code2=self->no_output_come_code2;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_678;
    /*i*/come_call_finalizer3(result_678,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result315__;
void* __right_value748 = (void*)0;
struct sBlock* result_679;
void* __right_value749 = (void*)0;
struct list$1sNodeph* __dec_obj201;
void* __right_value764 = (void*)0;
struct sVarTable* __dec_obj205;
struct sBlock* __result332__;
    if(    self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_679=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj201=result_679->mNodes;
        result_679->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj201,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj205=result_679->mVarTable;
        result_679->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj205,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_679;
    /*i*/come_call_finalizer3(result_679,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result316__;
void* __right_value750 = (void*)0;
struct sVarTable* result_680;
void* __right_value763 = (void*)0;
struct map$2charphsVarph* __dec_obj204;
struct sVarTable* __result331__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_680=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj204=result_680->mVars;
        result_680->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj204,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_680->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_680->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_680->mID=self->mID;
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_680;
    /*i*/come_call_finalizer3(result_680,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result317__;
void* __right_value751 = (void*)0;
void* __right_value757 = (void*)0;
struct map$2charphsVarph* result_684;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1charp* __dec_obj203;
char* it_687;
struct sVar* default_value_690;
struct sVar* it2_693;
struct map$2charphsVarph* __result330__;
default_value_690 = (void*)0;
    if(    self==((void*)0)) {
        __result317__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_684=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj203=result_684->key_list;
    result_684->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj203,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_687=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_687=map$2charphsVarph_next(self)    ){
        memset(&default_value_690,0,sizeof(struct sVar*));
        it2_693=map$2charphsVarph_at(self,it_687,default_value_690);
        map$2charphsVarph_put(result_684,it_687,it2_693);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_684;
    /*i*/come_call_finalizer3(result_684,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
int i_681;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1charp* __dec_obj202;
struct map$2charphsVarph* __result318__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value752=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value753=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value754=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2321, "bool"))));
    for(    i_681=0;    i_681<128;    i_681++    ){
        self->item_existance[i_681]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj202=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj202,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_682;
int i_683;
    for(    i_682=0;    i_682<self->size;    i_682++    ){
        if(        self->item_existance[i_682]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_682],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_683=0;    i_683<self->size;    i_683++    ){
        if(        self->item_existance[i_683]) {
            if(            1) {
                /* U13 */self->keys[i_683] = come_decrement_ref_count2(self->keys[i_683], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_685;
char* __result319__;
char* __result320__;
char* result_686;
char* __result321__;
result_685 = (void*)0;
result_686 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_685,0,sizeof(char*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_685;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_686,0,sizeof(char*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_686;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_688;
char* __result322__;
char* __result323__;
char* result_689;
char* __result324__;
result_688 = (void*)0;
result_689 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_688,0,sizeof(char*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_688;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_689,0,sizeof(char*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_689;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_691;
unsigned int it_692;
struct sVar* __result325__;
struct sVar* __result326__;
struct sVar* __result327__;
struct sVar* __result328__;
    hash_691=charp_get_hash_key(((char*)key))%self->size;
    it_692=hash_691;
    while((_Bool)1) {
        if(        self->item_existance[it_692]) {
            if(            charp_equals(self->keys[it_692],key)) {
                __result325__ = gComeFunResultObject = __result_obj__ = self->items[it_692];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
            it_692++;
            if(            it_692>=self->size) {
                it_692=0;
            }
            else if(            it_692==hash_691) {
                __result326__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result326__;
            }
        }
        else {
            __result327__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
    }
    __result328__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_705;
int it_706;
_Bool same_key_exist_707;
char* it2_708;
struct map$2charphsVarph* __result329__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_705=charp_get_hash_key(key)%self->size;
    it_706=hash_705;
    while((_Bool)1) {
        if(        self->item_existance[it_706]) {
            if(            charp_equals(self->keys[it_706],key)) {
                if(                1) {
                    /* U13 */self->keys[it_706] = come_decrement_ref_count2(self->keys[it_706], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_706]);
                    self->keys[it_706]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_706]);
                    self->keys[it_706]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_706],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_706]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_706]=item;
                }
                break;
            }
            it_706++;
            if(            it_706>=self->size) {
                it_706=0;
            }
            else if(            it_706==hash_705) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_706]=(_Bool)1;
            if(            1) {
                self->keys[it_706]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_706]=key;
            }
            if(            1) {
                self->items[it_706]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_706]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_707=(_Bool)0;
    for(    it2_708=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_708=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_708,key)) {
            same_key_exist_707=(_Bool)1;
        }
    }
    if(    !same_key_exist_707) {
        list$1charp_push_back(self->key_list,key);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_694;
void* __right_value760 = (void*)0;
char** keys_695;
void* __right_value761 = (void*)0;
struct sVar** items_696;
void* __right_value762 = (void*)0;
_Bool* item_existance_697;
int len_698;
char* it_699;
struct sVar* default_value_700;
struct sVar* it2_701;
unsigned int hash_702;
int n_703;
struct sVar* default_value_704;
default_value_700 = (void*)0;
default_value_704 = (void*)0;
    size_694=self->size*10;
    keys_695=(char**)come_increment_ref_count(((char**)(__right_value760=(char**)come_calloc(1, sizeof(char*)*(1*(size_694)), "./comelang.h", 2547, "char*%"))));
    items_696=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value761=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_694)), "./comelang.h", 2548, "sVar*%"))));
    item_existance_697=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value762=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_694)), "./comelang.h", 2549, "bool"))));
    len_698=0;
    for(    it_699=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_699=map$2charphsVarph_next(self)    ){
        memset(&default_value_700,0,sizeof(struct sVar*));
        it2_701=map$2charphsVarph_at(self,it_699,default_value_700);
        hash_702=charp_get_hash_key(it_699)%size_694;
        n_703=hash_702;
        while((_Bool)1) {
            if(            item_existance_697[n_703]) {
                n_703++;
                if(                n_703>=size_694) {
                    n_703=0;
                }
                else if(                n_703==hash_702) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_697[n_703]=(_Bool)1;
                keys_695[n_703]=it_699;
                items_696[n_703]=map$2charphsVarph_at(self,it_699,default_value_704);
                len_698++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_695;
    self->items=items_696;
    self->item_existance=item_existance_697;
    self->size=size_694;
    self->len=len_698;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_709;
int i_710;
    for(    i_709=0;    i_709<self->size;    i_709++    ){
        if(        self->item_existance[i_709]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_709],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_710=0;    i_710<self->size;    i_710++    ){
        if(        self->item_existance[i_710]) {
            if(            1) {
                /* U13 */self->keys[i_710] = come_decrement_ref_count2(self->keys[i_710], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_716;
int caller_line_717;
char* caller_sname_718;
_Bool comma_instead_of_semicolon_719;
char* last_code_720;
char* __dec_obj214;
char* last_code2_721;
char* __dec_obj215;
void* __right_value780 = (void*)0;
char* sname_top_722;
int sline_top_723;
void* __right_value781 = (void*)0;
struct sFun* funX_724;
_Bool __result339__;
void* __right_value782 = (void*)0;
struct sType* result_type_725;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct list$1sTypeph* param_types_726;
struct list$1sTypeph* o2_saved_727;
struct sType* it_730;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sType* param_type_733;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct list$1charph* param_names_734;
void* __right_value789 = (void*)0;
struct list$1charph* param_default_parametors_735;
char* p_736;
int sline_737;
char* sname_738;
char* head_739;
struct buffer* source_740;
void* __right_value790 = (void*)0;
struct buffer* __dec_obj216;
struct sType* generics_type_saved_741;
void* __right_value791 = (void*)0;
struct sType* __dec_obj217;
struct list$1charph* method_generics_type_names_742;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct list$1charph* __dec_obj218;
struct list$1charph* o2_saved_743;
char* it_744;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct list$1charph* __dec_obj219;
char* __dec_obj220;
void* __right_value796 = (void*)0;
struct sBlock* block_745;
struct buffer* __dec_obj221;
char* __dec_obj222;
_Bool var_args_746;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sFun* fun_747;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value808 = (void*)0;
struct sNode* node_748;
_Bool in_generics_fun_750;
_Bool Value_751;
void* __if_result__1_752 = (void*)0;
_Bool __result348__;
struct sType* __dec_obj227;
struct list$1charph* __dec_obj228;
void* __right_value809 = (void*)0;
char* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
_Bool __result349__;
    caller_fun_716=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_717=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_718=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_719=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_720=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_721=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_722=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_723=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_724=((struct sFun*)(__right_value781=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    /*g*/come_call_finalizer3(__right_value781,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_724) {
        __result339__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_720 = come_decrement_ref_count2(last_code_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_721 = come_decrement_ref_count2(last_code2_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_722 = come_decrement_ref_count2(sname_top_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result339__;
    }
    result_type_725=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_726=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2258, "list$1sTypeph"))));
    for(    o2_saved_727=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_730=list$1sTypeph_begin((o2_saved_727));    !list$1sTypeph_end((o2_saved_727));    it_730=list$1sTypeph_next((o2_saved_727))    ){
        param_type_733=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value785=sType_clone(it_730))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value785,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_733->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_726,(struct sType*)come_increment_ref_count(sType_clone(param_type_733)));
        /*i*/come_call_finalizer3(param_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_727,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_734=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_735=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_736=info->p;
    sline_737=info->sline;
    sname_738=(char*)come_increment_ref_count(info->sname);
    head_739=info->head;
    source_740=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj216=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_741=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj217=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_742=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj218=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2285, "list$1charph"))));
    come_call_finalizer3(__dec_obj218,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_743=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_744=list$1charph_begin((o2_saved_743));    !list$1charph_end((o2_saved_743));    it_744=list$1charph_next((o2_saved_743))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_744)));
    }
    /*i*/come_call_finalizer3(o2_saved_743,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj219=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj219,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj220=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_745=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_739;
    __dec_obj221=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_740);
    come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_736;
    info->sline=sline_737;
    __dec_obj222=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_738);
    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_725->mInline=(_Bool)0;
    result_type_725->mStatic=(_Bool)0;
    result_type_725->mUniq=(_Bool)0;
    var_args_746=generics_fun->mVarArgs;
    fun_747=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2309, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_725),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_726)),(struct list$1charph*)come_increment_ref_count(param_names_734),(struct list$1charph*)come_increment_ref_count(param_default_parametors_735),(_Bool)0,var_args_746,(struct sBlock*)come_increment_ref_count(block_745),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_747));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2316, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value804=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2316, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_747),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_748=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value804,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_750=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_751=node_compile(node_748,info);
    if(    !Value_751) {
        __result348__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_720 = come_decrement_ref_count2(last_code_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_721 = come_decrement_ref_count2(last_code2_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_722 = come_decrement_ref_count2(sname_top_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_726,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_734,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_738 = come_decrement_ref_count2(sname_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_741,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_742,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_745,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_747,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result348__;
    }
    else {
        __if_result__1_752=(void*)(Value_751);
;
    }
    info->in_generics_fun=in_generics_fun_750;
    __dec_obj227=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_741);
    come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj228=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_742);
    come_call_finalizer3(__dec_obj228,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj229=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_722));
    /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_723;
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_720);
    /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_721);
    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_716;
    info->caller_line=caller_line_717;
    info->caller_sname=caller_sname_718;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_719;
    __result349__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_720 = come_decrement_ref_count2(last_code_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_721 = come_decrement_ref_count2(last_code2_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_722 = come_decrement_ref_count2(sname_top_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_726,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_734,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_738 = come_decrement_ref_count2(sname_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_741,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_742,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_745,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_747,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result349__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_728;
struct sType* __result340__;
struct sType* __result341__;
struct sType* result_729;
struct sType* __result342__;
result_728 = (void*)0;
result_729 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_728,0,sizeof(struct sType*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_728;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->head;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_729,0,sizeof(struct sType*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_729;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_731;
struct sType* __result343__;
struct sType* __result344__;
struct sType* result_732;
struct sType* __result345__;
result_731 = (void*)0;
result_732 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_731,0,sizeof(struct sType*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_731;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_732,0,sizeof(struct sType*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_732;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_753;
int caller_line_754;
char* caller_sname_755;
_Bool comma_instead_of_semicolon_756;
char* last_code_757;
char* __dec_obj232;
char* last_code2_758;
char* __dec_obj233;
void* __right_value810 = (void*)0;
char* sname_top_759;
int sline_top_760;
void* __right_value811 = (void*)0;
struct sFun* funX_761;
_Bool __result350__;
void* __right_value812 = (void*)0;
struct sType* result_type_762;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1sTypeph* param_types_763;
struct list$1sTypeph* o2_saved_764;
struct sType* it_765;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sType* param_type_766;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1charph* param_names_767;
void* __right_value819 = (void*)0;
struct list$1charph* param_default_parametors_768;
char* p_769;
int sline_770;
char* sname_771;
char* head_772;
struct buffer* source_773;
void* __right_value820 = (void*)0;
struct buffer* __dec_obj234;
struct list$1charph* method_generics_type_names_774;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1charph* __dec_obj235;
struct list$1charph* o2_saved_775;
char* it_776;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1charph* __dec_obj236;
char* __dec_obj237;
void* __right_value825 = (void*)0;
struct sBlock* block_777;
struct buffer* __dec_obj238;
char* __dec_obj239;
_Bool var_args_778;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sFun* fun_779;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value837 = (void*)0;
struct sNode* node_780;
_Bool Value_782;
void* __if_result__2_783 = (void*)0;
_Bool __result353__;
struct list$1charph* __dec_obj244;
void* __right_value838 = (void*)0;
char* __dec_obj245;
char* __dec_obj246;
char* __dec_obj247;
_Bool __result354__;
    caller_fun_753=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_754=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_755=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_756=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_757=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_758=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_759=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_760=info->sline;
    funX_761=((struct sFun*)(__right_value811=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    /*g*/come_call_finalizer3(__right_value811,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_761) {
        __result350__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_757 = come_decrement_ref_count2(last_code_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_758 = come_decrement_ref_count2(last_code2_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_759 = come_decrement_ref_count2(sname_top_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result350__;
    }
    result_type_762=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_763=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2370, "list$1sTypeph"))));
    for(    o2_saved_764=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_765=list$1sTypeph_begin((o2_saved_764));    !list$1sTypeph_end((o2_saved_764));    it_765=list$1sTypeph_next((o2_saved_764))    ){
        param_type_766=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value815=sType_clone(it_765))),info));
        /*g*/come_call_finalizer3(__right_value815,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_766->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_763,(struct sType*)come_increment_ref_count(sType_clone(param_type_766)));
        /*i*/come_call_finalizer3(param_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_764,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_767=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_768=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_769=info->p;
    sline_770=info->sline;
    sname_771=(char*)come_increment_ref_count(info->sname);
    head_772=info->head;
    source_773=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj234=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_774=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj235=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2394, "list$1charph"))));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_775=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_776=list$1charph_begin((o2_saved_775));    !list$1charph_end((o2_saved_775));    it_776=list$1charph_next((o2_saved_775))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_776)));
    }
    /*i*/come_call_finalizer3(o2_saved_775,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj236=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_777=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_772;
    __dec_obj238=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_773);
    come_call_finalizer3(__dec_obj238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_769;
    info->sline=sline_770;
    __dec_obj239=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_771);
    /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_762->mInline=(_Bool)0;
    result_type_762->mStatic=(_Bool)0;
    result_type_762->mUniq=(_Bool)0;
    var_args_778=generics_fun->mVarArgs;
    fun_779=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2418, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_762),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_763)),(struct list$1charph*)come_increment_ref_count(param_names_767),(struct list$1charph*)come_increment_ref_count(param_default_parametors_768),(_Bool)0,var_args_778,(struct sBlock*)come_increment_ref_count(block_777),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_779));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2425, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value833=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2425, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_779),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_780=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value833,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_782=node_compile(node_780,info);
    if(    !Value_782) {
        __result353__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_757 = come_decrement_ref_count2(last_code_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_758 = come_decrement_ref_count2(last_code2_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_759 = come_decrement_ref_count2(sname_top_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_763,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_767,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_768,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_771 = come_decrement_ref_count2(sname_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_777,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_779,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_780) { node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result353__;
    }
    else {
        __if_result__2_783=(void*)(Value_782);
;
    }
    __dec_obj244=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_774);
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj245=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_759));
    /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_760;
    __dec_obj246=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_757);
    /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj247=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_758);
    /*G*/ __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_753;
    info->caller_line=caller_line_754;
    info->caller_sname=caller_sname_755;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_756;
    __result354__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_757 = come_decrement_ref_count2(last_code_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_758 = come_decrement_ref_count2(last_code2_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_759 = come_decrement_ref_count2(sname_top_759, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_763,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_767,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_768,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_771 = come_decrement_ref_count2(sname_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_777,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_779,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_780) { node_780 = come_decrement_ref_count2(node_780, ((struct sNode*)node_780)->finalize, ((struct sNode*)node_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result354__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_784;
char* source_head_785;
struct sType* result_type_786;
char* var_name_787;
_Bool constructor__788;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct sType* __dec_obj248;
void* __right_value841 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_789=0;
char* var_name2_790=0;
_Bool err_791=0;
struct sType* __dec_obj249;
char* __dec_obj250;
_Bool method_definition_792;
char* p_793;
int sline_794;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct buffer* buf2_795;
char* fun_name_796;
char* base_fun_name_797;
void* __right_value844 = (void*)0;
char* __dec_obj251;
void* __right_value845 = (void*)0;
char* __dec_obj252;
void* __right_value846 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_798=0;
char* name_799=0;
_Bool err_800=0;
void* __right_value847 = (void*)0;
char* __dec_obj253;
void* __right_value848 = (void*)0;
char* __dec_obj254;
void* __right_value849 = (void*)0;
char* __dec_obj255;
void* __right_value850 = (void*)0;
char* __dec_obj256;
void* __right_value851 = (void*)0;
char* __dec_obj257;
void* __right_value852 = (void*)0;
char* __dec_obj258;
void* __right_value853 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_801=0;
struct list$1charph* param_names_802=0;
struct list$1charph* param_default_parametors_803=0;
_Bool var_args_804=0;
char* header_tail_805;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct buffer* header_buf_806;
int version_807;
int n_808;
_Bool in_top_level_809;
void* __right_value856 = (void*)0;
struct sBlock* block_810;
void* __right_value857 = (void*)0;
char* fun_name_812;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sFun* fun_813;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct sFun* fun2_814;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value870 = (void*)0;
struct sNode* __result357__;
void* __right_value871 = (void*)0;
char* none_generics_name_816;
void* __right_value872 = (void*)0;
char* generics_sname_817;
int generics_sline_818;
void* __right_value873 = (void*)0;
char* block_819;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct sGenericsFun* fun_820;
void* __right_value880 = (void*)0;
char* fun_name3_821;
void* __right_value884 = (void*)0;
struct sNode* __result369__;
void* __right_value885 = (void*)0;
char* generics_sname_843;
int generics_sline_844;
void* __right_value886 = (void*)0;
char* block_845;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sGenericsFun* fun_846;
void* __right_value893 = (void*)0;
char* fun_name3_847;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct sNode* __result370__;
char* source_tail_848;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct buffer* header_849;
void* __right_value898 = (void*)0;
char* name_850;
void* __right_value899 = (void*)0;
char* name_851;
int i_852;
void* __right_value900 = (void*)0;
struct sType* param_type_853;
void* __right_value901 = (void*)0;
char* param_name_854;
void* __right_value902 = (void*)0;
char* default_parametor_855;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
char* impl_name_856;
void* __right_value906 = (void*)0;
char* result_type_name_857;
void* __right_value907 = (void*)0;
char* impl_name_858;
void* __right_value908 = (void*)0;
char* result_type_name_859;
int i_860;
void* __right_value909 = (void*)0;
struct sType* param_type_861;
void* __right_value910 = (void*)0;
char* param_name_862;
void* __right_value911 = (void*)0;
char* default_parametor_863;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sBlock* block_864;
_Bool static_fun_865;
_Bool inline_fun_866;
_Bool uniq_fun_867;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
char* new_fun_name_868;
void* __right_value918 = (void*)0;
char* __dec_obj264;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sFun* fun_869;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sFun* fun2_870;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value934 = (void*)0;
struct sNode* __result373__;
void* __right_value935 = (void*)0;
char* new_fun_name_872;
void* __right_value936 = (void*)0;
char* __dec_obj269;
char* source_tail_873;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct buffer* header_874;
_Bool result_type_static_875;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sFun* fun_876;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sFun* fun2_877;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value953 = (void*)0;
struct sNode* __result376__;
void* __right_value954 = (void*)0;
char* asm_fun_879;
void* __right_value955 = (void*)0;
char* __dec_obj274;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* header_880;
char* source_tail_881;
_Bool result_type_static_882;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct sFun* fun_883;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sFun* fun2_884;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value972 = (void*)0;
struct sNode* __result379__;
struct sNode* __result380__;
fun_name_796 = (void*)0;
    header_head_784=info->p;
    source_head_785=info->p;
    result_type_786=((void*)0);
    var_name_787=((void*)0);
    constructor__788=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value839=parse_word(info)));
        /* U11 */__right_value839 = come_decrement_ref_count2(__right_value839, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj248=result_type_786;
        result_type_786=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_786->mHeap=(_Bool)1;
        constructor__788=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value841=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_789=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_790=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_791=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value841,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj249=result_type_786;
        result_type_786=(struct sType*)come_increment_ref_count(result_type2_789);
        come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj250=var_name_787;
        var_name_787=(char*)come_increment_ref_count(var_name2_790);
        /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_791) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_790 = come_decrement_ref_count2(var_name2_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_792=(_Bool)0;
    {
        p_793=info->p;
        sline_794=info->sline;
        buf2_795=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2489, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_795,*info->p);
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
        if(        buffer_length(buf2_795)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_792=(_Bool)1;
        }
        info->p=p_793;
        info->sline=sline_794;
        /*i*/come_call_finalizer3(buf2_795,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_797=((void*)0);
    if(    constructor__788) {
        __dec_obj251=base_fun_name_797;
        base_fun_name_797=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj252=fun_name_796;
        fun_name_796=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_797,info,(_Bool)1));
        /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_792) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value846=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_798=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_799=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_800=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value846,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_800) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj253=base_fun_name_797;
        base_fun_name_797=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=fun_name_796;
        fun_name_796=(char*)come_increment_ref_count(create_method_name(obj_type_798,(_Bool)0,base_fun_name_797,info,(_Bool)1));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_798,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj255=base_fun_name_797;
        base_fun_name_797=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=fun_name_796;
        fun_name_796=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_797,info,(_Bool)1));
        /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj257=fun_name_796;
        fun_name_796=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=base_fun_name_797;
        base_fun_name_797=(char*)come_increment_ref_count(__builtin_string(fun_name_796));
        /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_797,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value853=parse_params(info,constructor__788)));
    param_types_801=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_802=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_803=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_804=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value853,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_805=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_797,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_806=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2556, "buffer"))));
    buffer_append(header_buf_806,header_head_784,header_tail_805-header_head_784);
    buffer_append_char(header_buf_806,0);
    version_807=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_808=0;
        while(xisdigit(*info->p)) {
            n_808=n_808*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_807=n_808;
    }
    in_top_level_809=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_797,"lambda")) {
        block_810=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_811=0;
        lambda_num_811++;
        fun_name_812=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_811));
        result_type_786->mInline=(_Bool)0;
        result_type_786->mStatic=(_Bool)0;
        result_type_786->mUniq=(_Bool)0;
        fun_813=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2591, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_812)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),(_Bool)0,var_args_804,(struct sBlock*)come_increment_ref_count(block_810),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_806)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_814=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value863=__builtin_string(fun_name_812)))));
        /* U11 */__right_value863 = come_decrement_ref_count2(__right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_814==((void*)0)||fun2_814->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_812)),(struct sFun*)come_increment_ref_count(fun_813));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2601, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value867=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2601, "sLambdaNode")),fun_813,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value870=_inf_value5));
        /*i*/come_call_finalizer3(block_810,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_812 = come_decrement_ref_count2(fun_name_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_813,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value867,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value870) { __right_value870 = come_decrement_ref_count2(__right_value870, ((struct sNode*)__right_value870)->finalize, ((struct sNode*)__right_value870)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result357__;
        /*i*/come_call_finalizer3(block_810,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_812 = come_decrement_ref_count2(fun_name_812, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_813,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_816=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_817=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_818=info->sline;
        block_819=(char*)come_increment_ref_count(skip_block(info));
        fun_820=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2611, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value875=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value876=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),var_args_804,(char*)come_increment_ref_count(block_819),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_817)),generics_sline_818));
        /*g*/come_call_finalizer3(__right_value875,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value876,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_821=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_816,base_fun_name_797));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_821)),(struct sGenericsFun*)come_increment_ref_count(fun_820));
        __result369__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_816 = come_decrement_ref_count2(none_generics_name_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_817 = come_decrement_ref_count2(generics_sname_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_819 = come_decrement_ref_count2(block_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_820,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_821 = come_decrement_ref_count2(fun_name3_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result369__;
        /* U13 */none_generics_name_816 = come_decrement_ref_count2(none_generics_name_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_817 = come_decrement_ref_count2(generics_sname_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_819 = come_decrement_ref_count2(block_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_820,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_821 = come_decrement_ref_count2(fun_name3_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_843=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_844=info->sline;
        block_845=(char*)come_increment_ref_count(skip_block(info));
        fun_846=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2625, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value888=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value889=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),var_args_804,(char*)come_increment_ref_count(block_845),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_843)),generics_sline_844));
        /*g*/come_call_finalizer3(__right_value888,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value889,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_847=(char*)come_increment_ref_count(charp_clone(base_fun_name_797));
        if(        method_definition_792) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sGenericsFun*)come_increment_ref_count(fun_846));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_847)),(struct sGenericsFun*)come_increment_ref_count(fun_846));
        }
        __result370__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_843 = come_decrement_ref_count2(generics_sname_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_845 = come_decrement_ref_count2(block_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_846,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_847 = come_decrement_ref_count2(fun_name3_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result370__;
        /* U13 */generics_sname_843 = come_decrement_ref_count2(generics_sname_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_845 = come_decrement_ref_count2(block_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_846,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_847 = come_decrement_ref_count2(fun_name3_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_848=info->p-1;
        header_849=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2641, "buffer"))));
        if(        constructor__788) {
            if(            list$1sTypeph_length(param_types_801)==1) {
                name_850=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_849,"extern %s*%% %s*::initialize(%s*%% self);\n",name_850,name_850,name_850);
                /* U13 */name_850 = come_decrement_ref_count2(name_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_851=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_849,"extern %s*%% %s*::initialize(%s*%% self, ",name_851,name_851,name_851);
                for(                i_852=1;                i_852<list$1sTypeph_length(param_types_801);                i_852++                ){
                    param_type_853=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_801,i_852));
                    param_name_854=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_802,i_852));
                    default_parametor_855=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_803,i_852));
                    if(                    default_parametor_855) {
                        buffer_append_format(header_849,"extern %s %s=%s",((char*)(__right_value903=make_come_type_name_string_no_solved(param_type_853,(_Bool)0,info))),param_name_854,default_parametor_855);
                        /* U11 */__right_value903 = come_decrement_ref_count2(__right_value903, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_849,"extern %s %s",((char*)(__right_value904=make_come_type_name_string_no_solved(param_type_853,(_Bool)0,info))),param_name_854);
                        /* U11 */__right_value904 = come_decrement_ref_count2(__right_value904, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_852!=list$1sTypeph_length(param_types_801)-1) {
                        buffer_append_str(header_849,",");
                    }
                    /*i*/come_call_finalizer3(param_type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_854 = come_decrement_ref_count2(param_name_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */default_parametor_855 = come_decrement_ref_count2(default_parametor_855, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_849,");\n");
                /* U13 */name_851 = come_decrement_ref_count2(name_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_801)==1) {
                impl_name_856=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_857=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_786,(_Bool)0,info));
                buffer_append_format(header_849,"extern %s %s*::%s(%s* self);\n",result_type_name_857,impl_name_856,base_fun_name_797,impl_name_856);
                /* U13 */impl_name_856 = come_decrement_ref_count2(impl_name_856, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_857 = come_decrement_ref_count2(result_type_name_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_858=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_859=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_786,(_Bool)0,info));
                buffer_append_format(header_849,"extern %s %s*::%s(%s* self, ",result_type_name_859,impl_name_858,base_fun_name_797,impl_name_858);
                for(                i_860=1;                i_860<list$1sTypeph_length(param_types_801);                i_860++                ){
                    param_type_861=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_801,i_860));
                    param_name_862=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_802,i_860));
                    default_parametor_863=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_803,i_860));
                    if(                    default_parametor_863) {
                        buffer_append_format(header_849,"extern %s %s=%s",((char*)(__right_value912=make_come_type_name_string_no_solved(param_type_861,(_Bool)0,info))),param_name_862,default_parametor_863);
                        /* U11 */__right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_849,"extern %s %s",((char*)(__right_value913=make_come_type_name_string_no_solved(param_type_861,(_Bool)0,info))),param_name_862);
                        /* U11 */__right_value913 = come_decrement_ref_count2(__right_value913, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_860!=list$1sTypeph_length(param_types_801)-1) {
                        buffer_append_str(header_849,",");
                    }
                    /*i*/come_call_finalizer3(param_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_862 = come_decrement_ref_count2(param_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */default_parametor_863 = come_decrement_ref_count2(default_parametor_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_849,");\n");
                /* U13 */impl_name_858 = come_decrement_ref_count2(impl_name_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_859 = come_decrement_ref_count2(result_type_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_849,source_head_785,source_tail_848-source_head_785);
            buffer_append_str(header_849,";\n");
        }
        if(        !result_type_786->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value914=buffer_to_string(header_849))));
                /* U11 */__right_value914 = come_decrement_ref_count2(__right_value914, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_864=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__788,(_Bool)1));
        static_fun_865=(_Bool)0;
        if(        result_type_786->mStatic) {
            result_type_786->mStatic=(_Bool)0;
            result_type_786->mUniq=(_Bool)0;
            static_fun_865=(_Bool)1;
        }
        inline_fun_866=(_Bool)0;
        if(        result_type_786->mInline) {
            result_type_786->mInline=(_Bool)0;
            result_type_786->mUniq=(_Bool)0;
            inline_fun_866=(_Bool)1;
        }
        uniq_fun_867=(_Bool)0;
        if(        result_type_786->mUniq) {
            result_type_786->mUniq=(_Bool)0;
            result_type_786->mInline=(_Bool)0;
            result_type_786->mStatic=(_Bool)0;
            uniq_fun_867=(_Bool)1;
        }
        if(        version_807>0) {
            new_fun_name_868=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value916=__builtin_string(fun_name_796))),version_807));
            /* U11 */__right_value916 = come_decrement_ref_count2(__right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj264=fun_name_796;
            fun_name_796=(char*)come_increment_ref_count(__builtin_string(new_fun_name_868));
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_868 = come_decrement_ref_count2(new_fun_name_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_869=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2743, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),(_Bool)0,var_args_804,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_864)),static_fun_865,(char*)come_increment_ref_count(buffer_to_string(header_buf_806)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_866,uniq_fun_867));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_796)),(struct sFun*)come_increment_ref_count(fun_869));
        }
        else {
            fun2_870=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value926=__builtin_string(fun_name_796)))));
            /* U11 */__right_value926 = come_decrement_ref_count2(__right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_870==((void*)0)||fun2_870->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_796)),(struct sFun*)come_increment_ref_count(fun_869));
            }
            /*i*/come_call_finalizer3(fun2_870,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2763, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value930=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2763, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_869),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value934=_inf_value6));
        /*i*/come_call_finalizer3(header_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_869,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value930,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value934) { __right_value934 = come_decrement_ref_count2(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        /*i*/come_call_finalizer3(header_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_869,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_807>0) {
            new_fun_name_872=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_796,version_807));
            __dec_obj269=fun_name_796;
            fun_name_796=(char*)come_increment_ref_count(__builtin_string(new_fun_name_872));
            /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_872 = come_decrement_ref_count2(new_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_873=info->p;
            header_874=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2776, "buffer"))));
            buffer_append(header_874,source_head_785,source_tail_873-source_head_785);
            skip_spaces_and_lf(info);
            result_type_static_875=result_type_786->mStatic;
            result_type_786->mStatic=(_Bool)0;
            result_type_786->mUniq=(_Bool)0;
            result_type_786->mInline=(_Bool)0;
            fun_876=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2786, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),(_Bool)1,var_args_804,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_806)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_877=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value944=__builtin_string(fun_name_796)))));
            /* U11 */__right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_877==((void*)0)||fun2_877->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_796)),(struct sFun*)come_increment_ref_count(fun_876));
            }
            if(            !result_type_static_875) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value947=buffer_to_string(header_874))));
                    /* U11 */__right_value947 = come_decrement_ref_count2(__right_value947, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2804, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value949=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2804, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_876),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value953=_inf_value7));
            /*i*/come_call_finalizer3(header_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_876,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun2_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value949,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value953) { __right_value953 = come_decrement_ref_count2(__right_value953, ((struct sNode*)__right_value953)->finalize, ((struct sNode*)__right_value953)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            /*i*/come_call_finalizer3(header_874,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_876,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun2_877,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_879=(char*)come_increment_ref_count(parse_function_attribute(info));
            if(            string_operator_not_equals(asm_fun_879,"")) {
                __dec_obj274=fun_name_796;
                fun_name_796=(char*)come_increment_ref_count(__builtin_string(asm_fun_879));
                /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2813, "buffer"))));
            if(            *info->p==59) {
                info->p++;
                source_tail_881=info->p;
                buffer_append(header_880,source_head_785,source_tail_881-source_head_785);
                skip_spaces_and_lf(info);
            }
            result_type_static_882=result_type_786->mStatic;
            result_type_786->mStatic=(_Bool)0;
            result_type_786->mUniq=(_Bool)0;
            result_type_786->mInline=(_Bool)0;
            fun_883=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2826, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_796)),(struct sType*)come_increment_ref_count(result_type_786),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_802),(struct list$1charph*)come_increment_ref_count(param_default_parametors_803),(_Bool)1,var_args_804,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_806)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_884=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value963=__builtin_string(fun_name_796)))));
            /* U11 */__right_value963 = come_decrement_ref_count2(__right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_884==((void*)0)||fun2_884->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_796)),(struct sFun*)come_increment_ref_count(fun_883));
            }
            if(            !result_type_static_882) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value966=buffer_to_string(header_880))));
                    /* U11 */__right_value966 = come_decrement_ref_count2(__right_value966, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2844, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value968=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2844, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_883),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value972=_inf_value8));
            /* U13 */asm_fun_879 = come_decrement_ref_count2(asm_fun_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_883,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun2_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value968,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value972) { __right_value972 = come_decrement_ref_count2(__right_value972, ((struct sNode*)__right_value972)->finalize, ((struct sNode*)__right_value972)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result379__;
            /* U13 */asm_fun_879 = come_decrement_ref_count2(asm_fun_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_883,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun2_884,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_809;
    __result380__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_786,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_787 = come_decrement_ref_count2(var_name_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_796 = come_decrement_ref_count2(fun_name_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_797 = come_decrement_ref_count2(base_fun_name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_802,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj259;
struct list$1charph* __dec_obj260;
struct list$1charph* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj259=self->v1;
            come_call_finalizer3(__dec_obj259,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj260=self->v2;
            come_call_finalizer3(__dec_obj260,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj261=self->v3;
            come_call_finalizer3(__dec_obj261,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj262;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj262=self->sname;
            /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result355__;
void* __right_value868 = (void*)0;
struct sLambdaNode* result_815;
void* __right_value869 = (void*)0;
char* __dec_obj263;
struct sLambdaNode* __result356__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_815=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_815->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_815->sname;
        result_815->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_815->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_815->mFun=self->mFun;
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_815;
    /*i*/come_call_finalizer3(result_815,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_839;
unsigned int it_840;
_Bool same_key_exist_841;
char* it2_842;
struct map$2charphsGenericsFunph* __result368__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_839=charp_get_hash_key(key)%self->size;
    it_840=hash_839;
    while((_Bool)1) {
        if(        self->item_existance[it_840]) {
            if(            charp_equals(self->keys[it_840],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_840]);
                    /* U13 */self->keys[it_840] = come_decrement_ref_count2(self->keys[it_840], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_840]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_840]);
                    self->keys[it_840]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_840],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_840]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_840]=item;
                }
                break;
            }
            it_840++;
            if(            it_840>=self->size) {
                it_840=0;
            }
            else if(            it_840==hash_839) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_840]=(_Bool)1;
            if(            1) {
                self->keys[it_840]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_840]=key;
            }
            if(            1) {
                self->items[it_840]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_840]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_841=(_Bool)0;
    for(    it2_842=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_842=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_842,key)) {
            same_key_exist_841=(_Bool)1;
        }
    }
    if(    !same_key_exist_841) {
        list$1charp_push_back(self->key_list,key);
    }
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_822;
void* __right_value881 = (void*)0;
char** keys_823;
void* __right_value882 = (void*)0;
struct sGenericsFun** items_824;
void* __right_value883 = (void*)0;
_Bool* item_existance_825;
int len_826;
char* it_829;
struct sGenericsFun* default_value_832;
struct sGenericsFun* it2_833;
unsigned int hash_836;
int n_837;
struct sGenericsFun* default_value_838;
default_value_832 = (void*)0;
default_value_838 = (void*)0;
    size_822=self->size*10;
    keys_823=(char**)come_increment_ref_count(((char**)(__right_value881=(char**)come_calloc(1, sizeof(char*)*(1*(size_822)), "./comelang.h", 2547, "char*%"))));
    items_824=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value882=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_822)), "./comelang.h", 2548, "sGenericsFun*%"))));
    item_existance_825=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value883=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_822)), "./comelang.h", 2549, "bool"))));
    len_826=0;
    for(    it_829=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_829=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_832,0,sizeof(struct sGenericsFun*));
        it2_833=map$2charphsGenericsFunph_at(self,it_829,default_value_832);
        hash_836=charp_get_hash_key(it_829)%size_822;
        n_837=hash_836;
        while((_Bool)1) {
            if(            item_existance_825[n_837]) {
                n_837++;
                if(                n_837>=size_822) {
                    n_837=0;
                }
                else if(                n_837==hash_836) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_825[n_837]=(_Bool)1;
                keys_823[n_837]=it_829;
                items_824[n_837]=map$2charphsGenericsFunph_at(self,it_829,default_value_838);
                len_826++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_823;
    self->items=items_824;
    self->item_existance=item_existance_825;
    self->size=size_822;
    self->len=len_826;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_827;
char* __result358__;
char* __result359__;
char* result_828;
char* __result360__;
result_827 = (void*)0;
result_828 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_827,0,sizeof(char*));
        __result358__ = gComeFunResultObject = __result_obj__ = result_827;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result359__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    memset(&result_828,0,sizeof(char*));
    __result360__ = gComeFunResultObject = __result_obj__ = result_828;
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_830;
char* __result361__;
char* __result362__;
char* result_831;
char* __result363__;
result_830 = (void*)0;
result_831 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_830,0,sizeof(char*));
        __result361__ = gComeFunResultObject = __result_obj__ = result_830;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result362__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    memset(&result_831,0,sizeof(char*));
    __result363__ = gComeFunResultObject = __result_obj__ = result_831;
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_834;
unsigned int it_835;
struct sGenericsFun* __result364__;
struct sGenericsFun* __result365__;
struct sGenericsFun* __result366__;
struct sGenericsFun* __result367__;
    hash_834=charp_get_hash_key(((char*)key))%self->size;
    it_835=hash_834;
    while((_Bool)1) {
        if(        self->item_existance[it_835]) {
            if(            charp_equals(self->keys[it_835],key)) {
                __result364__ = gComeFunResultObject = __result_obj__ = self->items[it_835];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result364__;
            }
            it_835++;
            if(            it_835>=self->size) {
                it_835=0;
            }
            else if(            it_835==hash_834) {
                __result365__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result365__;
            }
        }
        else {
            __result366__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result366__;
        }
    }
    __result367__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_886;
char* __dec_obj279;
char* last_code2_887;
char* __dec_obj280;
_Bool comma_instead_of_semicolon_888;
struct sClass* current_stack_frame_struct_889;
struct sFun* finalizer_890;
void* __right_value973 = (void*)0;
char* real_fun_name_891;
void* __right_value974 = (void*)0;
char* user_real_fun_name_892;
void* __right_value975 = (void*)0;
struct sFun* user_finalizer_893;
void* __right_value976 = (void*)0;
struct sType* type2_894;
struct sClass* klass_895;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct buffer* source_896;
void* __right_value979 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_905;
struct tuple2$2charphsTypeph* it_908;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_911=0;
struct sType* field_type_912=0;
char* p_915;
int sline_916;
char* sname_917;
char* head_918;
struct buffer* source3_919;
struct buffer* __dec_obj288;
void* __right_value980 = (void*)0;
char* __dec_obj289;
void* __right_value981 = (void*)0;
struct sBlock* block_920;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sType* result_type_921;
void* __right_value984 = (void*)0;
char* name_922;
void* __right_value985 = (void*)0;
struct sType* self_type_923;
struct sType* __list_values21___924[1];
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct list$1sTypeph* param_types_925;
void* __right_value988 = (void*)0;
char* __list_values22___926[1];
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct list$1charph* param_names_927;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct list$1charph* param_default_parametors_928;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct buffer* header_buf_929;
void* __right_value995 = (void*)0;
int i_930;
void* __right_value996 = (void*)0;
struct sType* param_type_931;
void* __right_value997 = (void*)0;
char* param_name_932;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sFun* fun_933;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct sFun* fun2_934;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1011 = (void*)0;
struct sNode* node_935;
_Bool Value_937;
struct buffer* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
char* __dec_obj297;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct tuple2$2sFunpcharph* __result394__;
    last_code_886=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_887=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_888=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_889=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_890=((void*)0);
    real_fun_name_891=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_892=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_893=((struct sFun*)(__right_value975=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_892)));
    /*g*/come_call_finalizer3(__right_value975,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_894=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_894;
    klass_895=type->mClass;
    if(    type->mPointerNum>0&&klass_895->mStruct||type->mAllocaValue) {
        source_896=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2885, "buffer"))));
        buffer_append_char(source_896,123);
        if(        user_finalizer_893) {
            char source2_897[1024];
            memset(&source2_897, 0, sizeof(char)            *(1024)            );
            snprintf(source2_897,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_892);
            buffer_append_str(source_896,source2_897);
        }
        klass_895=((struct sClass*)(__right_value979=map$2charphsClassphp_operator_load_element(info->classes,klass_895->mName)));
        /*g*/come_call_finalizer3(__right_value979,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_905=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_895->mFields)),it_908=list$1tuple2$2charphsTypephph_begin((o2_saved_905));        !list$1tuple2$2charphsTypephph_end((o2_saved_905));        it_908=list$1tuple2$2charphsTypephph_next((o2_saved_905))        ){
            multiple_assign_var10=it_908;
            name_911=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_912=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_912->mClass->mName)&&type->mPointerNum==field_type_912->mPointerNum&&field_type_912->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_912->mHeap) {
                char source2_913[1024];
                memset(&source2_913, 0, sizeof(char)                *(1024)                );
                snprintf(source2_913,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_911,name_911,name_911,name_911);
                buffer_append_str(source_896,source2_913);
            }
            else if(            field_type_912->mChannel) {
                char source2_914[1024];
                memset(&source2_914, 0, sizeof(char)                *(1024)                );
                snprintf(source2_914,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_911,name_911);
                buffer_append_str(source_896,source2_914);
                snprintf(source2_914,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_911,name_911);
                buffer_append_str(source_896,source2_914);
            }
            /* U13 */name_911 = come_decrement_ref_count2(name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_912,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_905,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_896,125);
        p_915=info->p;
        sline_916=info->sline;
        sname_917=(char*)come_increment_ref_count(info->sname);
        head_918=info->head;
        source3_919=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_896);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_896->buf;
        info->head=source_896->buf;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_891));
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_920=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_921=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2940, "sType")),"void",(_Bool)0,info));
        name_922=(char*)come_increment_ref_count(string_clone(real_fun_name_891));
        self_type_923=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_923->mHeap=(_Bool)0;
        if(        self_type_923->mPointerNum==0) {
            self_type_923->mPointerNum=1;
        }
        if(        self_type_923->mPointerNum>1) {
            self_type_923->mPointerNum=1;
        }
        param_types_925=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___924[0]=(struct sType*)come_increment_ref_count(self_type_923),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2950, "struct list$1sTypeph")),1,__list_values21___924)));
        param_names_927=(struct list$1charph*)come_increment_ref_count((__list_values22___926[0]=(char*)come_increment_ref_count(((char*)(__right_value988=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2951, "struct list$1charph")),1,__list_values22___926)));
        /* U11 */__right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_928=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2952, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_928,((void*)0));
        header_buf_929=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2955, "buffer"))));
        buffer_append_str(header_buf_929,((char*)(__right_value995=make_come_type_name_string(result_type_921,info))));
        /* U11 */__right_value995 = come_decrement_ref_count2(__right_value995, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_929," ");
        buffer_append_str(header_buf_929,real_fun_name_891);
        buffer_append_str(header_buf_929,"(");
        for(        i_930=0;        i_930<list$1sTypeph_length(param_types_925);        i_930++        ){
            param_type_931=((struct sType*)come_null_check(((struct sType*)(__right_value996=list$1sTypephp_operator_load_element(param_types_925,i_930))), "05function.c", 2963, 7));
            /*g*/come_call_finalizer3(__right_value996,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_932=((char*)come_null_check(((char*)(__right_value997=list$1charphp_operator_load_element(param_names_927,i_930))), "05function.c", 2964, 8));
            /* U11 */__right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_929,((char*)(__right_value998=make_come_type_name_string(param_type_931,info))));
            /* U11 */__right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_929," ");
            buffer_append_str(header_buf_929,param_name_932);
            if(            i_930!=list$1sTypeph_length(param_types_925)-1) {
                buffer_append_str(header_buf_929,",");
            }
        }
        buffer_append_str(header_buf_929,")");
        result_type_921->mStatic=(_Bool)0;
        result_type_921->mUniq=(_Bool)0;
        result_type_921->mInline=(_Bool)0;
        fun_933=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2980, "sFun")),(char*)come_increment_ref_count(name_922),(struct sType*)come_increment_ref_count(result_type_921),(struct list$1sTypeph*)come_increment_ref_count(param_types_925),(struct list$1charph*)come_increment_ref_count(param_names_927),(struct list$1charph*)come_increment_ref_count(param_default_parametors_928),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_920),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_929)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_934=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1003=__builtin_string(fun_name)))));
        /* U11 */__right_value1003 = come_decrement_ref_count2(__right_value1003, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_934==((void*)0)||fun2_934->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_922)),(struct sFun*)come_increment_ref_count(fun_933));
        }
        finalizer_890=fun_933;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2996, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1007=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2996, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_933),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_935=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value1007,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_937=node_compile(node_935,info);
        if(        !Value_937) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_919);
        come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_915;
        info->head=head_918;
        info->sline=sline_916;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_917);
        /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_917 = come_decrement_ref_count2(sname_917, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_919,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_920,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_921,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_922 = come_decrement_ref_count2(name_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_923,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_925,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_927,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_928,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_929,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_933,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_934,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_935) { node_935 = come_decrement_ref_count2(node_935, ((struct sNode*)node_935)->finalize, ((struct sNode*)node_935)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_889;
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_886);
    /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_887);
    /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_888;
    __result394__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1013=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3016, "struct tuple2$2sFunpcharph")),finalizer_890,(char*)come_increment_ref_count(real_fun_name_891))));
    /* U13 */last_code_886 = come_decrement_ref_count2(last_code_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_887 = come_decrement_ref_count2(last_code2_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_891 = come_decrement_ref_count2(real_fun_name_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_892 = come_decrement_ref_count2(user_real_fun_name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_894,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1013,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_898;
unsigned int hash_899;
unsigned int it_900;
struct sClass* __result381__;
struct sClass* __result382__;
struct sClass* __result383__;
struct sClass* __result384__;
default_value_898 = (void*)0;
    memset(&default_value_898,0,sizeof(struct sClass*));
    hash_899=charp_get_hash_key(((char*)key))%self->size;
    it_900=hash_899;
    while((_Bool)1) {
        if(        self->item_existance[it_900]) {
            if(            charp_equals(self->keys[it_900],key)) {
                __result381__ = gComeFunResultObject = __result_obj__ = self->items[it_900];
                /*i*/come_call_finalizer3(default_value_898,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result381__;
            }
            it_900++;
            if(            it_900>=self->size) {
                it_900=0;
            }
            else if(            it_900==hash_899) {
                __result382__ = gComeFunResultObject = __result_obj__ = default_value_898;
                /*i*/come_call_finalizer3(default_value_898,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result382__;
            }
        }
        else {
            __result383__ = gComeFunResultObject = __result_obj__ = default_value_898;
            /*i*/come_call_finalizer3(default_value_898,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result383__;
        }
    }
    __result384__ = gComeFunResultObject = __result_obj__ = default_value_898;
    /*i*/come_call_finalizer3(default_value_898,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj281;
struct list$1tuple2$2charphsTypephph* __dec_obj282;
char* __dec_obj286;
char* __dec_obj287;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj281=self->mName;
            /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj282=self->mFields;
            come_call_finalizer3(__dec_obj282,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj286=self->mDeclareSName;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj287=self->mParentClassName;
            /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_901;
struct list_item$1tuple2$2charphsTypephph* prev_it_902;
    it_901=self->head;
    while(it_901!=((void*)0)) {
        prev_it_902=it_901;
        it_901=it_901->next;
        /*i*/come_call_finalizer3(prev_it_902,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj283;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj283=self->item;
            come_call_finalizer3(__dec_obj283,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj284;
struct sType* __dec_obj285;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj284=self->v1;
            /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj285=self->v2;
            come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_903;
struct list_item$1tuple2$2charphsTypephph* prev_it_904;
    it_903=self->head;
    while(it_903!=((void*)0)) {
        prev_it_904=it_903;
        it_903=it_903->next;
        /*i*/come_call_finalizer3(prev_it_904,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_906;
struct tuple2$2charphsTypeph* __result385__;
struct tuple2$2charphsTypeph* __result386__;
struct tuple2$2charphsTypeph* result_907;
struct tuple2$2charphsTypeph* __result387__;
result_906 = (void*)0;
result_907 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_906,0,sizeof(struct tuple2$2charphsTypeph*));
        __result385__ = gComeFunResultObject = __result_obj__ = result_906;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    self->it=self->head;
    if(    self->it) {
        __result386__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    memset(&result_907,0,sizeof(struct tuple2$2charphsTypeph*));
    __result387__ = gComeFunResultObject = __result_obj__ = result_907;
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_909;
struct tuple2$2charphsTypeph* __result388__;
struct tuple2$2charphsTypeph* __result389__;
struct tuple2$2charphsTypeph* result_910;
struct tuple2$2charphsTypeph* __result390__;
result_909 = (void*)0;
result_910 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_909,0,sizeof(struct tuple2$2charphsTypeph*));
        __result388__ = gComeFunResultObject = __result_obj__ = result_909;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result389__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    memset(&result_910,0,sizeof(struct tuple2$2charphsTypeph*));
    __result390__ = gComeFunResultObject = __result_obj__ = result_910;
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj298;
struct tuple2$2sFunpcharph* __result393__;
    self->v1=v1;
    __dec_obj298=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result393__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj299;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj299=self->v2;
            /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_938;
char* __dec_obj300;
char* last_code2_939;
char* __dec_obj301;
_Bool comma_instead_of_semicolon_940;
struct sClass* current_stack_frame_struct_941;
struct sFun* equaler_942;
void* __right_value1014 = (void*)0;
char* real_fun_name_943;
void* __right_value1015 = (void*)0;
struct sType* type2_944;
struct sClass* klass_945;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct buffer* source_946;
char* name_947;
void* __right_value1018 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_949;
struct tuple2$2charphsTypeph* it_950;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_951=0;
struct sType* field_type_952=0;
char* p_954;
int sline_955;
char* sname_956;
char* head_957;
struct buffer* source3_958;
struct buffer* __dec_obj302;
void* __right_value1019 = (void*)0;
char* __dec_obj303;
void* __right_value1020 = (void*)0;
struct sBlock* block_959;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sType* result_type_960;
void* __right_value1023 = (void*)0;
char* name_961;
void* __right_value1024 = (void*)0;
struct sType* left_type_962;
void* __right_value1025 = (void*)0;
struct sType* right_type_963;
struct sType* __list_values23___964[2];
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct list$1sTypeph* param_types_965;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
char* __list_values24___966[2];
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct list$1charph* param_names_967;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct list$1charph* param_default_parametors_968;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct buffer* header_buf_969;
void* __right_value1036 = (void*)0;
int i_970;
void* __right_value1037 = (void*)0;
struct sType* param_type_971;
void* __right_value1038 = (void*)0;
char* param_name_972;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct sFun* fun_973;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sFun* fun2_974;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1052 = (void*)0;
struct sNode* node_975;
_Bool Value_977;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct tuple2$2sFunpcharph* __result397__;
    last_code_938=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj300=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_939=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj301=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_940=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_941=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_942=((void*)0);
    real_fun_name_943=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_944=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_944;
    klass_945=type->mClass;
    if(    type->mPointerNum>0&&!klass_945->mNumber) {
        source_946=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3042, "buffer"))));
        buffer_append_char(source_946,123);
        if(        klass_945->mProtocol) {
            name_947="_protocol_obj";
            char source2_948[1024];
            memset(&source2_948, 0, sizeof(char)            *(1024)            );
            snprintf(source2_948,1024,"return left.%s.equals(right.%s);\n",name_947,name_947);
            buffer_append_str(source_946,source2_948);
        }
        else {
            klass_945=((struct sClass*)(__right_value1018=map$2charphsClassphp_operator_load_element(info->classes,klass_945->mName)));
            /*g*/come_call_finalizer3(__right_value1018,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_949=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_945->mFields)),it_950=list$1tuple2$2charphsTypephph_begin((o2_saved_949));            !list$1tuple2$2charphsTypephph_end((o2_saved_949));            it_950=list$1tuple2$2charphsTypephph_next((o2_saved_949))            ){
                multiple_assign_var11=it_950;
                name_951=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                field_type_952=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_952->mClass->mName)&&type->mPointerNum==field_type_952->mPointerNum&&field_type_952->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_953[1024];
                memset(&source2_953, 0, sizeof(char)                *(1024)                );
                snprintf(source2_953,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_951,name_951,name_951);
                buffer_append_str(source_946,source2_953);
                /* U13 */name_951 = come_decrement_ref_count2(name_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_952,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_949,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_946,"return true;");
        buffer_append_char(source_946,125);
        p_954=info->p;
        sline_955=info->sline;
        sname_956=(char*)come_increment_ref_count(info->sname);
        head_957=info->head;
        source3_958=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_946);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_946->buf;
        info->head=source_946->buf;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_943));
        /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_959=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_960=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3088, "sType")),"bool",(_Bool)0,info));
        name_961=(char*)come_increment_ref_count(string_clone(real_fun_name_943));
        left_type_962=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_962->mHeap=(_Bool)0;
        right_type_963=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_963->mHeap=(_Bool)0;
        param_types_965=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___964[0]=(struct sType*)come_increment_ref_count(left_type_962),
__list_values23___964[1]=(struct sType*)come_increment_ref_count(right_type_963),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3094, "struct list$1sTypeph")),2,__list_values23___964)));
        param_names_967=(struct list$1charph*)come_increment_ref_count((__list_values24___966[0]=(char*)come_increment_ref_count(((char*)(__right_value1028=__builtin_string("left")))),
__list_values24___966[1]=(char*)come_increment_ref_count(((char*)(__right_value1029=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3095, "struct list$1charph")),2,__list_values24___966)));
        /* U11 */__right_value1028 = come_decrement_ref_count2(__right_value1028, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1029 = come_decrement_ref_count2(__right_value1029, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_968=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3096, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_968,((void*)0));
        list$1charph_push_back(param_default_parametors_968,((void*)0));
        header_buf_969=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3100, "buffer"))));
        buffer_append_str(header_buf_969,((char*)(__right_value1036=make_come_type_name_string(result_type_960,info))));
        /* U11 */__right_value1036 = come_decrement_ref_count2(__right_value1036, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_969," ");
        buffer_append_str(header_buf_969,real_fun_name_943);
        buffer_append_str(header_buf_969,"(");
        for(        i_970=0;        i_970<list$1sTypeph_length(param_types_965);        i_970++        ){
            param_type_971=((struct sType*)come_null_check(((struct sType*)(__right_value1037=list$1sTypephp_operator_load_element(param_types_965,i_970))), "05function.c", 3108, 9));
            /*g*/come_call_finalizer3(__right_value1037,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_972=((char*)come_null_check(((char*)(__right_value1038=list$1charphp_operator_load_element(param_names_967,i_970))), "05function.c", 3109, 10));
            /* U11 */__right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_969,((char*)(__right_value1039=make_come_type_name_string(param_type_971,info))));
            /* U11 */__right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_969," ");
            buffer_append_str(header_buf_969,param_name_972);
            if(            i_970!=list$1sTypeph_length(param_types_965)-1) {
                buffer_append_str(header_buf_969,",");
            }
        }
        buffer_append_str(header_buf_969,")");
        result_type_960->mStatic=(_Bool)0;
        result_type_960->mUniq=(_Bool)0;
        result_type_960->mInline=(_Bool)0;
        fun_973=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3125, "sFun")),(char*)come_increment_ref_count(name_961),(struct sType*)come_increment_ref_count(result_type_960),(struct list$1sTypeph*)come_increment_ref_count(param_types_965),(struct list$1charph*)come_increment_ref_count(param_names_967),(struct list$1charph*)come_increment_ref_count(param_default_parametors_968),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_959),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_969)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_974=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1044=__builtin_string(fun_name)))));
        /* U11 */__right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_974==((void*)0)||fun2_974->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_961)),(struct sFun*)come_increment_ref_count(fun_973));
        }
        equaler_942=fun_973;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3141, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1048=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3141, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_973),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_975=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value1048,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_977=node_compile(node_975,info);
        if(        !Value_977) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_958);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_954;
        info->head=head_957;
        info->sline=sline_955;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_956);
        /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_946,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_956 = come_decrement_ref_count2(sname_956, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_958,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_959,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_960,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_961 = come_decrement_ref_count2(name_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_962,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_963,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_965,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_967,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_968,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_969,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_973,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_974,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_975) { node_975 = come_decrement_ref_count2(node_975, ((struct sNode*)node_975)->finalize, ((struct sNode*)node_975)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_941;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_938);
    /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_939);
    /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_940;
    __result397__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1054=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3161, "struct tuple2$2sFunpcharph")),equaler_942,(char*)come_increment_ref_count(real_fun_name_943))));
    /* U13 */last_code_938 = come_decrement_ref_count2(last_code_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_939 = come_decrement_ref_count2(last_code2_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_943 = come_decrement_ref_count2(real_fun_name_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_944,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1054,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_978;
char* __dec_obj312;
char* last_code2_979;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_980;
struct sClass* current_stack_frame_struct_981;
struct sFun* equaler_982;
void* __right_value1055 = (void*)0;
char* real_fun_name_983;
void* __right_value1056 = (void*)0;
struct sType* type2_984;
struct sClass* klass_985;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct buffer* source_986;
char* name_987;
int i_990;
void* __right_value1059 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_991;
struct tuple2$2charphsTypeph* it_992;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_993=0;
struct sType* field_type_994=0;
char* p_998;
int sline_999;
char* sname_1000;
char* head_1001;
struct buffer* source3_1002;
struct buffer* __dec_obj314;
void* __right_value1060 = (void*)0;
char* __dec_obj315;
void* __right_value1061 = (void*)0;
struct sBlock* block_1003;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sType* result_type_1004;
void* __right_value1064 = (void*)0;
char* name_1005;
void* __right_value1065 = (void*)0;
struct sType* left_type_1006;
void* __right_value1066 = (void*)0;
struct sType* right_type_1007;
struct sType* __list_values25___1008[2];
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct list$1sTypeph* param_types_1009;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
char* __list_values26___1010[2];
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct list$1charph* param_names_1011;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct list$1charph* param_default_parametors_1012;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct buffer* header_buf_1013;
void* __right_value1077 = (void*)0;
int i_1014;
void* __right_value1078 = (void*)0;
struct sType* param_type_1015;
void* __right_value1079 = (void*)0;
char* param_name_1016;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sFun* fun_1017;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct sFun* fun2_1018;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1093 = (void*)0;
struct sNode* node_1019;
_Bool Value_1021;
struct buffer* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
char* __dec_obj323;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct tuple2$2sFunpcharph* __result400__;
    last_code_978=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_979=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_980=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_981=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_982=((void*)0);
    real_fun_name_983=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_984=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_984;
    klass_985=type->mClass;
    if(    type->mPointerNum>0&&!klass_985->mNumber) {
        source_986=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3186, "buffer"))));
        buffer_append_char(source_986,123);
        if(        klass_985->mProtocol) {
            name_987="_protocol_obj";
            char source2_988[1024];
            memset(&source2_988, 0, sizeof(char)            *(1024)            );
            snprintf(source2_988,1024,"return left.%s !== right.%s;\n",name_987,name_987);
            buffer_append_str(source_986,source2_988);
        }
        else {
            char source2_989[1024];
            memset(&source2_989, 0, sizeof(char)            *(1024)            );
            snprintf(source2_989,1024,"return !(");
            buffer_append_str(source_986,source2_989);
            snprintf(source2_989,1024,"( ");
            buffer_append_str(source_986,source2_989);
            i_990=0;
            klass_985=((struct sClass*)(__right_value1059=map$2charphsClassphp_operator_load_element(info->classes,klass_985->mName)));
            /*g*/come_call_finalizer3(__right_value1059,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_991=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_985->mFields)),it_992=list$1tuple2$2charphsTypephph_begin((o2_saved_991));            !list$1tuple2$2charphsTypephph_end((o2_saved_991));            it_992=list$1tuple2$2charphsTypephph_next((o2_saved_991))            ){
                multiple_assign_var12=it_992;
                name_993=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_994=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_994->mClass->mName)&&type->mPointerNum==field_type_994->mPointerNum&&field_type_994->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_995[1024];
                memset(&source2_995, 0, sizeof(char)                *(1024)                );
                snprintf(source2_995,1024,"(left.%s === right.%s)",name_993,name_993,name_993);
                buffer_append_str(source_986,source2_995);
                if(                i_990==list$1tuple2$2charphsTypephph_length(klass_985->mFields)-1) {
                    char source2_996[1024];
                    memset(&source2_996, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_996,1024,"));");
                    buffer_append_str(source_986,source2_996);
                }
                else {
                    char source2_997[1024];
                    memset(&source2_997, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_997,1024," && ");
                    buffer_append_str(source_986,source2_997);
                }
                i_990++;
                /* U13 */name_993 = come_decrement_ref_count2(name_993, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_994,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_991,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_986,125);
        p_998=info->p;
        sline_999=info->sline;
        sname_1000=(char*)come_increment_ref_count(info->sname);
        head_1001=info->head;
        source3_1002=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_986);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_986->buf;
        info->head=source_986->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_983));
        /*G*/ __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1003=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1004=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3252, "sType")),"bool",(_Bool)0,info));
        name_1005=(char*)come_increment_ref_count(string_clone(real_fun_name_983));
        left_type_1006=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1006->mHeap=(_Bool)0;
        right_type_1007=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1007->mHeap=(_Bool)0;
        param_types_1009=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1008[0]=(struct sType*)come_increment_ref_count(left_type_1006),
__list_values25___1008[1]=(struct sType*)come_increment_ref_count(right_type_1007),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3258, "struct list$1sTypeph")),2,__list_values25___1008)));
        param_names_1011=(struct list$1charph*)come_increment_ref_count((__list_values26___1010[0]=(char*)come_increment_ref_count(((char*)(__right_value1069=__builtin_string("left")))),
__list_values26___1010[1]=(char*)come_increment_ref_count(((char*)(__right_value1070=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3259, "struct list$1charph")),2,__list_values26___1010)));
        /* U11 */__right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1070 = come_decrement_ref_count2(__right_value1070, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1012=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3260, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1012,((void*)0));
        list$1charph_push_back(param_default_parametors_1012,((void*)0));
        header_buf_1013=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3264, "buffer"))));
        buffer_append_str(header_buf_1013,((char*)(__right_value1077=make_come_type_name_string(result_type_1004,info))));
        /* U11 */__right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1013," ");
        buffer_append_str(header_buf_1013,real_fun_name_983);
        buffer_append_str(header_buf_1013,"(");
        for(        i_1014=0;        i_1014<list$1sTypeph_length(param_types_1009);        i_1014++        ){
            param_type_1015=((struct sType*)come_null_check(((struct sType*)(__right_value1078=list$1sTypephp_operator_load_element(param_types_1009,i_1014))), "05function.c", 3272, 11));
            /*g*/come_call_finalizer3(__right_value1078,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1016=((char*)come_null_check(((char*)(__right_value1079=list$1charphp_operator_load_element(param_names_1011,i_1014))), "05function.c", 3273, 12));
            /* U11 */__right_value1079 = come_decrement_ref_count2(__right_value1079, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1013,((char*)(__right_value1080=make_come_type_name_string(param_type_1015,info))));
            /* U11 */__right_value1080 = come_decrement_ref_count2(__right_value1080, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1013," ");
            buffer_append_str(header_buf_1013,param_name_1016);
            if(            i_1014!=list$1sTypeph_length(param_types_1009)-1) {
                buffer_append_str(header_buf_1013,",");
            }
        }
        buffer_append_str(header_buf_1013,")");
        result_type_1004->mStatic=(_Bool)0;
        result_type_1004->mUniq=(_Bool)0;
        result_type_1004->mInline=(_Bool)0;
        fun_1017=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3289, "sFun")),(char*)come_increment_ref_count(name_1005),(struct sType*)come_increment_ref_count(result_type_1004),(struct list$1sTypeph*)come_increment_ref_count(param_types_1009),(struct list$1charph*)come_increment_ref_count(param_names_1011),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1012),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1003),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1013)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1018=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1085=__builtin_string(fun_name)))));
        /* U11 */__right_value1085 = come_decrement_ref_count2(__right_value1085, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1018==((void*)0)||fun2_1018->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1005)),(struct sFun*)come_increment_ref_count(fun_1017));
        }
        equaler_982=fun_1017;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3305, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1089=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3305, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1017),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_1019=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value1089,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1021=node_compile(node_1019,info);
        if(        !Value_1021) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj320=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1002);
        come_call_finalizer3(__dec_obj320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_998;
        info->head=head_1001;
        info->sline=sline_999;
        __dec_obj321=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1000);
        /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_986,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1000 = come_decrement_ref_count2(sname_1000, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1002,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1003,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1004,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1005 = come_decrement_ref_count2(name_1005, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1006,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1007,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1009,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1011,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1012,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1013,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1017,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_1018,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1019) { node_1019 = come_decrement_ref_count2(node_1019, ((struct sNode*)node_1019)->finalize, ((struct sNode*)node_1019)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_981;
    __dec_obj322=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_978);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_979);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_980;
    __result400__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1095=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3325, "struct tuple2$2sFunpcharph")),equaler_982,(char*)come_increment_ref_count(real_fun_name_983))));
    /* U13 */last_code_978 = come_decrement_ref_count2(last_code_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_979 = come_decrement_ref_count2(last_code2_979, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_983 = come_decrement_ref_count2(real_fun_name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_984,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1095,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1022;
char* __dec_obj324;
char* last_code2_1023;
char* __dec_obj325;
_Bool comma_instead_of_semicolon_1024;
struct sClass* current_stack_frame_struct_1025;
struct sFun* equaler_1026;
void* __right_value1096 = (void*)0;
char* real_fun_name_1027;
void* __right_value1097 = (void*)0;
struct sType* type2_1028;
struct sClass* klass_1029;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct buffer* source_1030;
char* name_1031;
int i_1034;
void* __right_value1100 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1035;
struct tuple2$2charphsTypeph* it_1036;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1037=0;
struct sType* field_type_1038=0;
char* p_1042;
int sline_1043;
char* sname_1044;
char* head_1045;
struct buffer* source3_1046;
struct buffer* __dec_obj326;
void* __right_value1101 = (void*)0;
char* __dec_obj327;
void* __right_value1102 = (void*)0;
struct sBlock* block_1047;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct sType* result_type_1048;
void* __right_value1105 = (void*)0;
char* name_1049;
void* __right_value1106 = (void*)0;
struct sType* left_type_1050;
void* __right_value1107 = (void*)0;
struct sType* right_type_1051;
struct sType* __list_values27___1052[2];
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
struct list$1sTypeph* param_types_1053;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
char* __list_values28___1054[2];
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct list$1charph* param_names_1055;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
struct list$1charph* param_default_parametors_1056;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
struct buffer* header_buf_1057;
void* __right_value1118 = (void*)0;
int i_1058;
void* __right_value1119 = (void*)0;
struct sType* param_type_1059;
void* __right_value1120 = (void*)0;
char* param_name_1060;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct sFun* fun_1061;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sFun* fun2_1062;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1134 = (void*)0;
struct sNode* node_1063;
_Bool Value_1065;
struct buffer* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct tuple2$2sFunpcharph* __result403__;
    last_code_1022=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj324=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1023=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj325=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1024=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1025=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1026=((void*)0);
    real_fun_name_1027=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1028=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1028;
    klass_1029=type->mClass;
    if(    type->mPointerNum>0&&!klass_1029->mNumber) {
        source_1030=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3350, "buffer"))));
        buffer_append_char(source_1030,123);
        if(        klass_1029->mProtocol) {
            name_1031="_protocol_obj";
            char source2_1032[1024];
            memset(&source2_1032, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1032,1024,"return !left.%s.equals(right.%s);\n",name_1031,name_1031);
            buffer_append_str(source_1030,source2_1032);
        }
        else {
            char source2_1033[1024];
            memset(&source2_1033, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1033,1024,"return !(");
            buffer_append_str(source_1030,source2_1033);
            i_1034=0;
            klass_1029=((struct sClass*)(__right_value1100=map$2charphsClassphp_operator_load_element(info->classes,klass_1029->mName)));
            /*g*/come_call_finalizer3(__right_value1100,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1035=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1029->mFields)),it_1036=list$1tuple2$2charphsTypephph_begin((o2_saved_1035));            !list$1tuple2$2charphsTypephph_end((o2_saved_1035));            it_1036=list$1tuple2$2charphsTypephph_next((o2_saved_1035))            ){
                multiple_assign_var13=it_1036;
                name_1037=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1038=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1038->mClass->mName)&&type->mPointerNum==field_type_1038->mPointerNum&&field_type_1038->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1039[1024];
                memset(&source2_1039, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1039,1024,"left.%s.equals(right.%s)",name_1037,name_1037);
                buffer_append_str(source_1030,source2_1039);
                if(                i_1034==list$1tuple2$2charphsTypephph_length(klass_1029->mFields)-1) {
                    char source2_1040[1024];
                    memset(&source2_1040, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1040,1024,");");
                    buffer_append_str(source_1030,source2_1040);
                }
                else {
                    char source2_1041[1024];
                    memset(&source2_1041, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1041,1024," && ");
                    buffer_append_str(source_1030,source2_1041);
                }
                i_1034++;
                /* U13 */name_1037 = come_decrement_ref_count2(name_1037, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1038,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1035,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1030,125);
        p_1042=info->p;
        sline_1043=info->sline;
        sname_1044=(char*)come_increment_ref_count(info->sname);
        head_1045=info->head;
        source3_1046=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1030);
        come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1030->buf;
        info->head=source_1030->buf;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1027));
        /*G*/ __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1047=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1048=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3413, "sType")),"bool",(_Bool)0,info));
        name_1049=(char*)come_increment_ref_count(string_clone(real_fun_name_1027));
        left_type_1050=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1050->mHeap=(_Bool)0;
        right_type_1051=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1051->mHeap=(_Bool)0;
        param_types_1053=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1052[0]=(struct sType*)come_increment_ref_count(left_type_1050),
__list_values27___1052[1]=(struct sType*)come_increment_ref_count(right_type_1051),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3419, "struct list$1sTypeph")),2,__list_values27___1052)));
        param_names_1055=(struct list$1charph*)come_increment_ref_count((__list_values28___1054[0]=(char*)come_increment_ref_count(((char*)(__right_value1110=__builtin_string("left")))),
__list_values28___1054[1]=(char*)come_increment_ref_count(((char*)(__right_value1111=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3420, "struct list$1charph")),2,__list_values28___1054)));
        /* U11 */__right_value1110 = come_decrement_ref_count2(__right_value1110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1111 = come_decrement_ref_count2(__right_value1111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1056=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3421, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1056,((void*)0));
        list$1charph_push_back(param_default_parametors_1056,((void*)0));
        header_buf_1057=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3425, "buffer"))));
        buffer_append_str(header_buf_1057,((char*)(__right_value1118=make_come_type_name_string(result_type_1048,info))));
        /* U11 */__right_value1118 = come_decrement_ref_count2(__right_value1118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1057," ");
        buffer_append_str(header_buf_1057,real_fun_name_1027);
        buffer_append_str(header_buf_1057,"(");
        for(        i_1058=0;        i_1058<list$1sTypeph_length(param_types_1053);        i_1058++        ){
            param_type_1059=((struct sType*)come_null_check(((struct sType*)(__right_value1119=list$1sTypephp_operator_load_element(param_types_1053,i_1058))), "05function.c", 3433, 13));
            /*g*/come_call_finalizer3(__right_value1119,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1060=((char*)come_null_check(((char*)(__right_value1120=list$1charphp_operator_load_element(param_names_1055,i_1058))), "05function.c", 3434, 14));
            /* U11 */__right_value1120 = come_decrement_ref_count2(__right_value1120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057,((char*)(__right_value1121=make_come_type_name_string(param_type_1059,info))));
            /* U11 */__right_value1121 = come_decrement_ref_count2(__right_value1121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057," ");
            buffer_append_str(header_buf_1057,param_name_1060);
            if(            i_1058!=list$1sTypeph_length(param_types_1053)-1) {
                buffer_append_str(header_buf_1057,",");
            }
        }
        buffer_append_str(header_buf_1057,")");
        result_type_1048->mStatic=(_Bool)0;
        result_type_1048->mUniq=(_Bool)0;
        result_type_1048->mInline=(_Bool)0;
        fun_1061=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3450, "sFun")),(char*)come_increment_ref_count(name_1049),(struct sType*)come_increment_ref_count(result_type_1048),(struct list$1sTypeph*)come_increment_ref_count(param_types_1053),(struct list$1charph*)come_increment_ref_count(param_names_1055),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1056),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1047),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1057)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1062=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1126=__builtin_string(fun_name)))));
        /* U11 */__right_value1126 = come_decrement_ref_count2(__right_value1126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1062==((void*)0)||fun2_1062->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1049)),(struct sFun*)come_increment_ref_count(fun_1061));
        }
        equaler_1026=fun_1061;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3466, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1130=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3466, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1061),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_1063=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value1130,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1065=node_compile(node_1063,info);
        if(        !Value_1065) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj332=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1046);
        come_call_finalizer3(__dec_obj332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1042;
        info->head=head_1045;
        info->sline=sline_1043;
        __dec_obj333=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1044);
        /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_1030,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1044 = come_decrement_ref_count2(sname_1044, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1047,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1048,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1049 = come_decrement_ref_count2(name_1049, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1050,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1053,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1055,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1056,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1061,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_1062,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1063) { node_1063 = come_decrement_ref_count2(node_1063, ((struct sNode*)node_1063)->finalize, ((struct sNode*)node_1063)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1025;
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1022);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1023);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1024;
    __result403__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1136=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3486, "struct tuple2$2sFunpcharph")),equaler_1026,(char*)come_increment_ref_count(real_fun_name_1027))));
    /* U13 */last_code_1022 = come_decrement_ref_count2(last_code_1022, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1023 = come_decrement_ref_count2(last_code2_1023, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1027 = come_decrement_ref_count2(real_fun_name_1027, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1028,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1136,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1066;
char* __dec_obj336;
char* last_code2_1067;
char* __dec_obj337;
_Bool comma_instead_of_semicolon_1068;
struct sClass* current_stack_frame_struct_1069;
struct sFun* equaler_1070;
void* __right_value1137 = (void*)0;
char* real_fun_name_1071;
void* __right_value1138 = (void*)0;
struct sType* type2_1072;
struct sClass* klass_1073;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct buffer* source_1074;
char* name_1075;
void* __right_value1141 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1078;
struct tuple2$2charphsTypeph* it_1079;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1080=0;
struct sType* field_type_1081=0;
char* p_1083;
int sline_1084;
char* sname_1085;
char* head_1086;
struct buffer* source3_1087;
struct buffer* __dec_obj338;
void* __right_value1142 = (void*)0;
char* __dec_obj339;
void* __right_value1143 = (void*)0;
struct sBlock* block_1088;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
struct sType* result_type_1089;
void* __right_value1146 = (void*)0;
char* name_1090;
void* __right_value1147 = (void*)0;
struct sType* left_type_1091;
void* __right_value1148 = (void*)0;
struct sType* right_type_1092;
struct sType* __list_values29___1093[2];
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1sTypeph* param_types_1094;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
char* __list_values30___1095[2];
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1charph* param_names_1096;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct list$1charph* param_default_parametors_1097;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* header_buf_1098;
void* __right_value1159 = (void*)0;
int i_1099;
void* __right_value1160 = (void*)0;
struct sType* param_type_1100;
void* __right_value1161 = (void*)0;
char* param_name_1101;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
struct sFun* fun_1102;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct sFun* fun2_1103;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1175 = (void*)0;
struct sNode* node_1104;
_Bool Value_1106;
struct buffer* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
    last_code_1066=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj336=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1067=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj337=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1068=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1069=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1070=((void*)0);
    real_fun_name_1071=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1072=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1072;
    klass_1073=type->mClass;
    if(    type->mPointerNum>0&&!klass_1073->mNumber) {
        source_1074=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3511, "buffer"))));
        buffer_append_char(source_1074,123);
        if(        klass_1073->mProtocol) {
            name_1075="_protocol_obj";
            char source2_1076[1024];
            memset(&source2_1076, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1076,1024,"return left.%s === right.%s;\n",name_1075,name_1075);
            buffer_append_str(source_1074,source2_1076);
        }
        else {
            char source2_1077[1024];
            memset(&source2_1077, 0, sizeof(char)            *(1024)            );
            klass_1073=((struct sClass*)(__right_value1141=map$2charphsClassphp_operator_load_element(info->classes,klass_1073->mName)));
            /*g*/come_call_finalizer3(__right_value1141,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1078=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1073->mFields)),it_1079=list$1tuple2$2charphsTypephph_begin((o2_saved_1078));            !list$1tuple2$2charphsTypephph_end((o2_saved_1078));            it_1079=list$1tuple2$2charphsTypephph_next((o2_saved_1078))            ){
                multiple_assign_var14=it_1079;
                name_1080=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1081=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1081->mClass->mName)&&type->mPointerNum==field_type_1081->mPointerNum&&field_type_1081->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1082[1024];
                memset(&source2_1082, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1082,1024,"if(left.%s !== right.%s) { return false; }\n",name_1080,name_1080,name_1080);
                buffer_append_str(source_1074,source2_1082);
                /* U13 */name_1080 = come_decrement_ref_count2(name_1080, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1078,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1074,"return true;\n");
        buffer_append_char(source_1074,125);
        p_1083=info->p;
        sline_1084=info->sline;
        sname_1085=(char*)come_increment_ref_count(info->sname);
        head_1086=info->head;
        source3_1087=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1074);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1074->buf;
        info->head=source_1074->buf;
        __dec_obj339=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1071));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1088=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1089=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3559, "sType")),"bool",(_Bool)0,info));
        name_1090=(char*)come_increment_ref_count(string_clone(real_fun_name_1071));
        left_type_1091=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1091->mHeap=(_Bool)0;
        right_type_1092=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1092->mHeap=(_Bool)0;
        param_types_1094=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1093[0]=(struct sType*)come_increment_ref_count(left_type_1091),
__list_values29___1093[1]=(struct sType*)come_increment_ref_count(right_type_1092),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3565, "struct list$1sTypeph")),2,__list_values29___1093)));
        param_names_1096=(struct list$1charph*)come_increment_ref_count((__list_values30___1095[0]=(char*)come_increment_ref_count(((char*)(__right_value1151=__builtin_string("left")))),
__list_values30___1095[1]=(char*)come_increment_ref_count(((char*)(__right_value1152=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3566, "struct list$1charph")),2,__list_values30___1095)));
        /* U11 */__right_value1151 = come_decrement_ref_count2(__right_value1151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1152 = come_decrement_ref_count2(__right_value1152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1097=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3567, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1097,((void*)0));
        list$1charph_push_back(param_default_parametors_1097,((void*)0));
        header_buf_1098=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3571, "buffer"))));
        buffer_append_str(header_buf_1098,((char*)(__right_value1159=make_come_type_name_string(result_type_1089,info))));
        /* U11 */__right_value1159 = come_decrement_ref_count2(__right_value1159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1098," ");
        buffer_append_str(header_buf_1098,real_fun_name_1071);
        buffer_append_str(header_buf_1098,"(");
        for(        i_1099=0;        i_1099<list$1sTypeph_length(param_types_1094);        i_1099++        ){
            param_type_1100=((struct sType*)come_null_check(((struct sType*)(__right_value1160=list$1sTypephp_operator_load_element(param_types_1094,i_1099))), "05function.c", 3579, 15));
            /*g*/come_call_finalizer3(__right_value1160,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1101=((char*)come_null_check(((char*)(__right_value1161=list$1charphp_operator_load_element(param_names_1096,i_1099))), "05function.c", 3580, 16));
            /* U11 */__right_value1161 = come_decrement_ref_count2(__right_value1161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1098,((char*)(__right_value1162=make_come_type_name_string(param_type_1100,info))));
            /* U11 */__right_value1162 = come_decrement_ref_count2(__right_value1162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1098," ");
            buffer_append_str(header_buf_1098,param_name_1101);
            if(            i_1099!=list$1sTypeph_length(param_types_1094)-1) {
                buffer_append_str(header_buf_1098,",");
            }
        }
        buffer_append_str(header_buf_1098,")");
        result_type_1089->mStatic=(_Bool)0;
        result_type_1089->mUniq=(_Bool)0;
        result_type_1089->mInline=(_Bool)0;
        fun_1102=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3596, "sFun")),(char*)come_increment_ref_count(name_1090),(struct sType*)come_increment_ref_count(result_type_1089),(struct list$1sTypeph*)come_increment_ref_count(param_types_1094),(struct list$1charph*)come_increment_ref_count(param_names_1096),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1097),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1088),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1098)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1103=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1167=__builtin_string(fun_name)))));
        /* U11 */__right_value1167 = come_decrement_ref_count2(__right_value1167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1103==((void*)0)||fun2_1103->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1090)),(struct sFun*)come_increment_ref_count(fun_1102));
        }
        equaler_1070=fun_1102;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3612, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1171=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3612, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1102),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_1104=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value1171,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1106=node_compile(node_1104,info);
        if(        !Value_1106) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1087);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1083;
        info->head=head_1086;
        info->sline=sline_1084;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1085);
        /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_1074,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1085 = come_decrement_ref_count2(sname_1085, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1087,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1088,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1089,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1090 = come_decrement_ref_count2(name_1090, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_1091,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1094,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1096,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1097,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1098,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1102,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_1103,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1104) { node_1104 = come_decrement_ref_count2(node_1104, ((struct sNode*)node_1104)->finalize, ((struct sNode*)node_1104)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1069;
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1066);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1067);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1068;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1177=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3632, "struct tuple2$2sFunpcharph")),equaler_1070,(char*)come_increment_ref_count(real_fun_name_1071))));
    /* U13 */last_code_1066 = come_decrement_ref_count2(last_code_1066, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1067 = come_decrement_ref_count2(last_code2_1067, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1071 = come_decrement_ref_count2(real_fun_name_1071, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1072,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1177,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1107;
char* __dec_obj348;
char* last_code2_1108;
char* __dec_obj349;
_Bool comma_instead_of_semicolon_1109;
struct sClass* current_stack_frame_struct_1110;
struct sFun* cloner_1111;
void* __right_value1178 = (void*)0;
char* real_fun_name_1112;
void* __right_value1179 = (void*)0;
struct sType* type2_1113;
struct sClass* klass_1114;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct buffer* source_1115;
void* __right_value1182 = (void*)0;
char* name_1116;
void* __right_value1183 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1118;
struct tuple2$2charphsTypeph* it_1119;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1120=0;
struct sType* field_type_1121=0;
void* __right_value1184 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1124;
struct tuple2$2charphsTypeph* it_1125;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1126=0;
struct sType* field_type_1127=0;
char* p_1131;
int sline_1132;
char* sname_1133;
struct buffer* source3_1134;
char* head_1135;
struct buffer* __dec_obj350;
void* __right_value1185 = (void*)0;
char* __dec_obj351;
void* __right_value1186 = (void*)0;
struct sBlock* block_1136;
void* __right_value1187 = (void*)0;
struct sType* result_type_1137;
void* __right_value1188 = (void*)0;
char* name_1138;
void* __right_value1189 = (void*)0;
struct sType* self_type_1139;
struct sType* __list_values31___1140[1];
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct list$1sTypeph* param_types_1141;
void* __right_value1192 = (void*)0;
char* __list_values32___1142[1];
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct list$1charph* param_names_1143;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct list$1charph* param_default_parametors_1144;
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct buffer* header_buf_1145;
void* __right_value1199 = (void*)0;
int i_1146;
void* __right_value1200 = (void*)0;
struct sType* param_type_1147;
void* __right_value1201 = (void*)0;
char* param_name_1148;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct sFun* fun_1149;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
struct sFun* fun2_1150;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1215 = (void*)0;
struct sNode* node_1151;
_Bool Value_1153;
char* __dec_obj356;
struct buffer* __dec_obj357;
char* __dec_obj358;
char* __dec_obj359;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_1107=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1108=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1109=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1110=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1111=((void*)0);
    real_fun_name_1112=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1113=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1113;
    klass_1114=type->mClass;
    if(    type->mPointerNum>0&&!klass_1114->mNumber) {
        source_1115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3657, "buffer"))));
        buffer_append_str(source_1115,"{\n");
        buffer_append_str(source_1115,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1115,"var result = new %s;\n",((char*)(__right_value1182=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        /* U11 */__right_value1182 = come_decrement_ref_count2(__right_value1182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1114->mProtocol) {
            name_1116="_protocol_obj";
            char source2_1117[1024];
            memset(&source2_1117, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1117,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1115,source2_1117);
            klass_1114=((struct sClass*)(__right_value1183=map$2charphsClassphp_operator_load_element(info->classes,klass_1114->mName)));
            /*g*/come_call_finalizer3(__right_value1183,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1118=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1114->mFields)),it_1119=list$1tuple2$2charphsTypephph_begin((o2_saved_1118));            !list$1tuple2$2charphsTypephph_end((o2_saved_1118));            it_1119=list$1tuple2$2charphsTypephph_next((o2_saved_1118))            ){
                multiple_assign_var15=it_1119;
                name_1120=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1121=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1121->mClass->mName)&&type->mPointerNum==field_type_1121->mPointerNum&&field_type_1121->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_1120,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1121->mArrayNum)>0) {
                    char source2_1122[1024];
                    memset(&source2_1122, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1122,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1120,name_1120,name_1120);
                    buffer_append_str(source_1115,source2_1122);
                }
                else {
                    char source2_1123[1024];
                    memset(&source2_1123, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1123,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1120,name_1120);
                    buffer_append_str(source_1115,source2_1123);
                }
                /* U13 */name_1120 = come_decrement_ref_count2(name_1120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1121,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1118,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1114=((struct sClass*)(__right_value1184=map$2charphsClassphp_operator_load_element(info->classes,klass_1114->mName)));
            /*g*/come_call_finalizer3(__right_value1184,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1124=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1114->mFields)),it_1125=list$1tuple2$2charphsTypephph_begin((o2_saved_1124));            !list$1tuple2$2charphsTypephph_end((o2_saved_1124));            it_1125=list$1tuple2$2charphsTypephph_next((o2_saved_1124))            ){
                multiple_assign_var16=it_1125;
                name_1126=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1127=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1127->mClass->mName)&&type->mPointerNum==field_type_1127->mPointerNum&&field_type_1127->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_1127->mHeap) {
                    char source2_1128[1024];
                    memset(&source2_1128, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1128,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1126,name_1126,name_1126);
                    buffer_append_str(source_1115,source2_1128);
                }
                else if(                list$1sNodeph_length(field_type_1127->mArrayNum)>0) {
                    char source2_1129[1024];
                    memset(&source2_1129, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1129,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1126,name_1126,name_1126);
                    buffer_append_str(source_1115,source2_1129);
                }
                else {
                    char source2_1130[1024];
                    memset(&source2_1130, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1130,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1126,name_1126);
                    buffer_append_str(source_1115,source2_1130);
                }
                /* U13 */name_1126 = come_decrement_ref_count2(name_1126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_1127,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_1124,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1115,"return result;");
        buffer_append_char(source_1115,125);
        p_1131=info->p;
        sline_1132=info->sline;
        sname_1133=(char*)come_increment_ref_count(info->sname);
        source3_1134=(struct buffer*)come_increment_ref_count(info->source);
        head_1135=info->head;
        __dec_obj350=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1115);
        come_call_finalizer3(__dec_obj350,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj351=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1112));
        /*G*/ __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1136=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1137=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1138=(char*)come_increment_ref_count(string_clone(real_fun_name_1112));
        self_type_1139=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1139->mHeap=(_Bool)0;
        param_types_1141=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1140[0]=(struct sType*)come_increment_ref_count(self_type_1139),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3751, "struct list$1sTypeph")),1,__list_values31___1140)));
        param_names_1143=(struct list$1charph*)come_increment_ref_count((__list_values32___1142[0]=(char*)come_increment_ref_count(((char*)(__right_value1192=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3752, "struct list$1charph")),1,__list_values32___1142)));
        /* U11 */__right_value1192 = come_decrement_ref_count2(__right_value1192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1144=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3753, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1144,((void*)0));
        header_buf_1145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3756, "buffer"))));
        buffer_append_str(header_buf_1145,((char*)(__right_value1199=make_come_type_name_string(result_type_1137,info))));
        /* U11 */__right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1145," ");
        buffer_append_str(header_buf_1145,real_fun_name_1112);
        buffer_append_str(header_buf_1145,"(");
        for(        i_1146=0;        i_1146<list$1sTypeph_length(param_types_1141);        i_1146++        ){
            param_type_1147=((struct sType*)come_null_check(((struct sType*)(__right_value1200=list$1sTypephp_operator_load_element(param_types_1141,i_1146))), "05function.c", 3764, 17));
            /*g*/come_call_finalizer3(__right_value1200,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1148=((char*)come_null_check(((char*)(__right_value1201=list$1charphp_operator_load_element(param_names_1143,i_1146))), "05function.c", 3765, 18));
            /* U11 */__right_value1201 = come_decrement_ref_count2(__right_value1201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1145,((char*)(__right_value1202=make_come_type_name_string(param_type_1147,info))));
            /* U11 */__right_value1202 = come_decrement_ref_count2(__right_value1202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1145," ");
            buffer_append_str(header_buf_1145,param_name_1148);
            if(            i_1146!=list$1sTypeph_length(param_types_1141)-1) {
                buffer_append_str(header_buf_1145,",");
            }
        }
        buffer_append_str(header_buf_1145,")");
        result_type_1137->mStatic=(_Bool)0;
        result_type_1137->mUniq=(_Bool)0;
        result_type_1137->mInline=(_Bool)0;
        fun_1149=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3781, "sFun")),(char*)come_increment_ref_count(name_1138),(struct sType*)come_increment_ref_count(result_type_1137),(struct list$1sTypeph*)come_increment_ref_count(param_types_1141),(struct list$1charph*)come_increment_ref_count(param_names_1143),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1144),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1136),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1145)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1149->mCloner=(_Bool)1;
        fun2_1150=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1207=__builtin_string(fun_name)))));
        /* U11 */__right_value1207 = come_decrement_ref_count2(__right_value1207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1150==((void*)0)||fun2_1150->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1138)),(struct sFun*)come_increment_ref_count(fun_1149));
        }
        cloner_1111=fun_1149;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3798, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1211=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3798, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1149),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_1151=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1211,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1153=node_compile(node_1151,info);
        if(        !Value_1153) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj356=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1133);
        /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1132;
        __dec_obj357=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1134);
        come_call_finalizer3(__dec_obj357,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1131;
        info->head=head_1135;
        info->sline=sline_1132;
        /*i*/come_call_finalizer3(source_1115,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1133 = come_decrement_ref_count2(sname_1133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1137,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1138 = come_decrement_ref_count2(name_1138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1139,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1141,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1143,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1144,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1145,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1149,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_1150,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1151) { node_1151 = come_decrement_ref_count2(node_1151, ((struct sNode*)node_1151)->finalize, ((struct sNode*)node_1151)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1110;
    __dec_obj358=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1107);
    /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj359=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1108);
    /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1109;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1217=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3820, "struct tuple2$2sFunpcharph")),cloner_1111,(char*)come_increment_ref_count(real_fun_name_1112))));
    /* U13 */last_code_1107 = come_decrement_ref_count2(last_code_1107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1108 = come_decrement_ref_count2(last_code2_1108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1112 = come_decrement_ref_count2(real_fun_name_1112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1113,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1217,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1154;
char* __dec_obj360;
char* last_code2_1155;
char* __dec_obj361;
_Bool comma_instead_of_semicolon_1156;
struct sClass* current_stack_frame_struct_1157;
struct sFun* cloner_1158;
void* __right_value1218 = (void*)0;
char* real_fun_name_1159;
void* __right_value1219 = (void*)0;
struct sType* type2_1160;
struct sClass* klass_1161;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct buffer* source_1162;
int i_1163;
void* __right_value1222 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1164;
struct tuple2$2charphsTypeph* it_1165;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1166=0;
struct sType* field_type_1167=0;
char* p_1170;
int sline_1171;
char* sname_1172;
struct buffer* source3_1173;
char* head_1174;
struct buffer* __dec_obj362;
void* __right_value1223 = (void*)0;
char* __dec_obj363;
void* __right_value1224 = (void*)0;
struct sBlock* block_1175;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct sType* result_type_1176;
void* __right_value1227 = (void*)0;
char* name_1177;
void* __right_value1228 = (void*)0;
struct sType* self_type_1178;
struct sType* __list_values33___1179[1];
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct list$1sTypeph* param_types_1180;
void* __right_value1231 = (void*)0;
char* __list_values34___1181[1];
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct list$1charph* param_names_1182;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct list$1charph* param_default_parametors_1183;
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
struct buffer* header_buf_1184;
void* __right_value1238 = (void*)0;
int i_1185;
void* __right_value1239 = (void*)0;
struct sType* param_type_1186;
void* __right_value1240 = (void*)0;
char* param_name_1187;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
struct sFun* fun_1188;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct sFun* fun2_1189;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1254 = (void*)0;
struct sNode* node_1190;
_Bool Value_1192;
char* __dec_obj368;
struct buffer* __dec_obj369;
char* __dec_obj370;
char* __dec_obj371;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1154=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1155=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1156=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1157=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1158=((void*)0);
    real_fun_name_1159=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1160=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1160;
    klass_1161=type->mClass;
    if(    type->mPointerNum>0&&!klass_1161->mNumber) {
        source_1162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3845, "buffer"))));
        buffer_append_str(source_1162,"{\n");
        buffer_append_str(source_1162,"var result = new buffer();\n");
        buffer_append_format(source_1162,"result.append_str(\"%s {\");\n",klass_1161->mName);
        i_1163=0;
        klass_1161=((struct sClass*)(__right_value1222=map$2charphsClassphp_operator_load_element(info->classes,klass_1161->mName)));
        /*g*/come_call_finalizer3(__right_value1222,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1164=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1161->mFields)),it_1165=list$1tuple2$2charphsTypephph_begin((o2_saved_1164));        !list$1tuple2$2charphsTypephph_end((o2_saved_1164));        it_1165=list$1tuple2$2charphsTypephph_next((o2_saved_1164))        ){
            multiple_assign_var17=it_1165;
            name_1166=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            field_type_1167=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1167->mClass->mName)&&type->mPointerNum==field_type_1167->mPointerNum&&field_type_1167->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1163==list$1tuple2$2charphsTypephph_length(klass_1161->mFields)-1) {
                char source2_1168[1024];
                memset(&source2_1168, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1168,1024,"result.append_str(\"%s:\");\n",name_1166);
                buffer_append_str(source_1162,source2_1168);
                snprintf(source2_1168,1024,"result.append_str(self.%s.to_string());\n",name_1166);
                buffer_append_str(source_1162,source2_1168);
            }
            else {
                char source2_1169[1024];
                memset(&source2_1169, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1169,1024,"result.append_str(\"%s:\");\n",name_1166);
                buffer_append_str(source_1162,source2_1169);
                snprintf(source2_1169,1024,"result.append_str(self.%s.to_string());\n",name_1166);
                buffer_append_str(source_1162,source2_1169);
                snprintf(source2_1169,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1162,source2_1169);
            }
            i_1163++;
            /* U13 */name_1166 = come_decrement_ref_count2(name_1166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_1167,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_1164,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1162,"result.append_str(\"}\");\n");
        buffer_append_format(source_1162,"return result.to_string();\n");
        buffer_append_char(source_1162,125);
        p_1170=info->p;
        sline_1171=info->sline;
        sname_1172=(char*)come_increment_ref_count(info->sname);
        source3_1173=(struct buffer*)come_increment_ref_count(info->source);
        head_1174=info->head;
        __dec_obj362=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1162);
        come_call_finalizer3(__dec_obj362,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj363=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1159));
        /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1175=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1176=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3912, "sType")),"char*",(_Bool)0,info));
        result_type_1176->mHeap=(_Bool)1;
        name_1177=(char*)come_increment_ref_count(string_clone(real_fun_name_1159));
        self_type_1178=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1178->mHeap=(_Bool)0;
        param_types_1180=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1179[0]=(struct sType*)come_increment_ref_count(self_type_1178),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3917, "struct list$1sTypeph")),1,__list_values33___1179)));
        param_names_1182=(struct list$1charph*)come_increment_ref_count((__list_values34___1181[0]=(char*)come_increment_ref_count(((char*)(__right_value1231=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3918, "struct list$1charph")),1,__list_values34___1181)));
        /* U11 */__right_value1231 = come_decrement_ref_count2(__right_value1231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1183=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3919, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1183,((void*)0));
        header_buf_1184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3922, "buffer"))));
        buffer_append_str(header_buf_1184,((char*)(__right_value1238=make_come_type_name_string(result_type_1176,info))));
        /* U11 */__right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1184," ");
        buffer_append_str(header_buf_1184,real_fun_name_1159);
        buffer_append_str(header_buf_1184,"(");
        for(        i_1185=0;        i_1185<list$1sTypeph_length(param_types_1180);        i_1185++        ){
            param_type_1186=((struct sType*)come_null_check(((struct sType*)(__right_value1239=list$1sTypephp_operator_load_element(param_types_1180,i_1185))), "05function.c", 3930, 19));
            /*g*/come_call_finalizer3(__right_value1239,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1187=((char*)come_null_check(((char*)(__right_value1240=list$1charphp_operator_load_element(param_names_1182,i_1185))), "05function.c", 3931, 20));
            /* U11 */__right_value1240 = come_decrement_ref_count2(__right_value1240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1184,((char*)(__right_value1241=make_come_type_name_string(param_type_1186,info))));
            /* U11 */__right_value1241 = come_decrement_ref_count2(__right_value1241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1184," ");
            buffer_append_str(header_buf_1184,param_name_1187);
            if(            i_1185!=list$1sTypeph_length(param_types_1180)-1) {
                buffer_append_str(header_buf_1184,",");
            }
        }
        buffer_append_str(header_buf_1184,")");
        result_type_1176->mStatic=(_Bool)0;
        result_type_1176->mUniq=(_Bool)0;
        result_type_1176->mInline=(_Bool)0;
        fun_1188=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3947, "sFun")),(char*)come_increment_ref_count(name_1177),(struct sType*)come_increment_ref_count(result_type_1176),(struct list$1sTypeph*)come_increment_ref_count(param_types_1180),(struct list$1charph*)come_increment_ref_count(param_names_1182),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1183),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1175),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1184)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1188->mCloner=(_Bool)1;
        fun2_1189=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1246=__builtin_string(fun_name)))));
        /* U11 */__right_value1246 = come_decrement_ref_count2(__right_value1246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1189==((void*)0)||fun2_1189->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1177)),(struct sFun*)come_increment_ref_count(fun_1188));
        }
        cloner_1158=fun_1188;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3964, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1250=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3964, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1188),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_1190=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1250,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1192=node_compile(node_1190,info);
        if(        !Value_1192) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj368=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1172);
        /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1171;
        __dec_obj369=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1173);
        come_call_finalizer3(__dec_obj369,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1170;
        info->head=head_1174;
        info->sline=sline_1171;
        /*i*/come_call_finalizer3(source_1162,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1172 = come_decrement_ref_count2(sname_1172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1173,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1175,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1176,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1177 = come_decrement_ref_count2(name_1177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1178,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1180,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1182,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1183,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1188,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun2_1189,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1190) { node_1190 = come_decrement_ref_count2(node_1190, ((struct sNode*)node_1190)->finalize, ((struct sNode*)node_1190)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1157;
    __dec_obj370=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1154);
    /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj371=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1155);
    /*G*/ __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1156;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1256=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3986, "struct tuple2$2sFunpcharph")),cloner_1158,(char*)come_increment_ref_count(real_fun_name_1159))));
    /* U13 */last_code_1154 = come_decrement_ref_count2(last_code_1154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1155 = come_decrement_ref_count2(last_code2_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1159 = come_decrement_ref_count2(real_fun_name_1159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1160,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1256,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj364;
struct sFun* __dec_obj365;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj364=self->sname;
            /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj365=self->mFun;
            come_call_finalizer3(__dec_obj365,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result410__;
void* __right_value1251 = (void*)0;
struct sFunNode* result_1191;
void* __right_value1252 = (void*)0;
char* __dec_obj366;
void* __right_value1253 = (void*)0;
struct sFun* __dec_obj367;
struct sFunNode* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_1191=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1191->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj366=result_1191->sname;
        result_1191->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1191->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj367=result_1191->mFun;
        result_1191->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj367,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_1191;
    /*i*/come_call_finalizer3(result_1191,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

