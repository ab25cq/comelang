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
long long __lldata;
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

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
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
struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1void$ph
{
    void* item;
    struct list_item$1void$ph* prev;
    struct list_item$1void$ph* next;
};

struct list$1void$ph
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
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
    struct list$1void$ph* mFields;
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

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1void$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
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
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
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
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1void$p
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
};

struct map$2void$phvoid$ph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1void$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2void$phvoid$ph* mHeader;
    struct map$2void$phvoid$ph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2void$phvoid$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
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
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
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
    struct map$2void$phvoid$ph* funcs;
    struct map$2void$phvoid$ph* generics_funcs;
    struct map$2void$phvoid$ph* classes;
    struct map$2void$phvoid$ph* modules;
    struct map$2void$phvoid$ph* types;
    struct map$2void$phvoid$ph* generics_classes;
    struct map$2void$phvoid$ph* struct_definition;
    struct map$2void$phvoid$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1void$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1void$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
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
    struct map$2void$phvoid$ph* module_params;
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
    struct list$1void$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2void$phvoid$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1void$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

extern struct list$1void$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

int gRightValueNum=0;
struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
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
void come_print_heap_info(void* mem);
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
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
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
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
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
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
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
void free_objects_of_match_lv_tables(struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item);
static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self);
static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1void$ph* list$1void$ph$p_delete(struct list$1void$ph* self, int head, int tail);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1493, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1503, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1513, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1493, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1503, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1513, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1493, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1503, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1513, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1493, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1503, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1513, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1493, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1503, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1513, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1493, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1503, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1513, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1493, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1503, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1513, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2310, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2437, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2310, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2437, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2310, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2437, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2310, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2437, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2310, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2437, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2310, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2437, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2310, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2437, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1493, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1503, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1513, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_350;
struct list$1void$ph* o2_saved_351;
struct sRightValueObject* it2_354;
char* __dec_obj23;
void* __right_value259 = (void*)0;
char* __dec_obj24;
void* __right_value260 = (void*)0;
char* __dec_obj25;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_350=right_value->right_value_objects;
        for(        o2_saved_351=(struct list$1void$ph*)come_increment_ref_count((info->right_value_objects)),it2_354=((struct sRightValueObject*)list$1void$ph$p_begin((o2_saved_351)));        !list$1void$ph$p_end((o2_saved_351));        it2_354=((struct sRightValueObject*)list$1void$ph$p_next((o2_saved_351)))        ){
            if(            it_350->mID==it2_354->mID) {
                it2_354->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_351,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj23=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj24=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(append_stackframe(right_value->c_value,right_value->type,info));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj25=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_352;
void* __result_obj__237;
void* __result_obj__238;
void* result_353;
void* __result_obj__239;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(void*));
        __result_obj__237 = result_352;
        return __result_obj__237;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__238 = self->it->item;
        return __result_obj__238;
    }
    memset(&result_353,0,sizeof(void*));
    __result_obj__239 = result_353;
    return __result_obj__239;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_355;
void* __result_obj__240;
void* __result_obj__241;
void* result_356;
void* __result_obj__242;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(void*));
        __result_obj__240 = result_355;
        return __result_obj__240;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__241 = self->it->item;
        return __result_obj__241;
    }
    memset(&result_356,0,sizeof(void*));
    __result_obj__242 = result_356;
    return __result_obj__242;
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_357;
struct list_item$1void$ph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value299 = (void*)0;
struct sType* result_359;
struct sType* __result_obj__258;
struct sType* __result_obj__259;
struct sClass* klass_393;
void* __right_value300 = (void*)0;
struct sType* result_type_394;
struct sType* __dec_obj50;
struct list$1void$ph* o2_saved_397;
struct sType* it_398;
void* __right_value301 = (void*)0;
struct sType* new_param_type_399;
int generics_number_403;
void* __right_value305 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_404=0;
char* Err_405=0;
struct list$1sNode$ph* array_num_406;
_Bool immutable__407;
int pointer_num_408;
_Bool heap_409;
_Bool exception__410;
_Bool guard__411;
_Bool no_heap_412;
_Bool no_calling_destructor_413;
_Bool null_value_414;
_Bool generate__415;
_Bool vtable_416;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj54;
struct list$1sNode$ph* __dec_obj55;
int generics_number_420;
void* __right_value308 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_421=0;
char* Err_422=0;
void* __right_value309 = (void*)0;
struct sClass* klass2_423;
int generics_number2_424;
struct list$1sNode$ph* array_num_425;
_Bool immutable__426;
int pointer_num_427;
_Bool heap_428;
_Bool guard__429;
_Bool no_heap_430;
_Bool no_calling_destructor_431;
_Bool null_value_432;
_Bool record__433;
_Bool multiple_types_434;
_Bool exception__435;
_Bool generate__436;
_Bool vtable_437;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj56;
struct list$1sNode$ph* __dec_obj57;
struct list$1void$ph* o2_saved_438;
struct sType* it_439;
void* __right_value312 = (void*)0;
struct sType* type_440;
void* __right_value313 = (void*)0;
char* new_name_441;
struct sType* __result_obj__264;
    result_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type==((void*)0)) {
        __result_obj__258 = come_increment_ref_count(result_359);
        come_call_finalizer3(result_359,sType_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(__result_obj__258,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__258;
    }
    if(    list$1void$ph$p_length(generics_type->mGenericsTypes)==0) {
        __result_obj__259 = come_increment_ref_count(result_359);
        come_call_finalizer3(result_359,sType_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(__result_obj__259,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__259;
    }
    klass_393=type->mClass;
    if(    string_operator_equals(klass_393->mName,"lambda")) {
        result_type_394=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj50=result_359->mResultType;
        result_359->mResultType=(struct sType*)come_increment_ref_count(result_type_394);
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1void$ph$p_reset(result_359->mParamTypes);
        for(        o2_saved_397=(struct list$1void$ph*)come_increment_ref_count((type->mParamTypes)),it_398=((struct sType*)list$1void$ph$p_begin((o2_saved_397)));        !list$1void$ph$p_end((o2_saved_397));        it_398=((struct sType*)list$1void$ph$p_next((o2_saved_397)))        ){
            new_param_type_399=(struct sType*)come_increment_ref_count(solve_generics(it_398,generics_type,info));
            list$1void$ph$p_push_back(result_359->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_399));
            come_call_finalizer3(new_param_type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_397,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_393->mMethodGenerics&&info->method_generics_types&&list$1void$ph$p_length(info->method_generics_types)>0) {
        generics_number_403=klass_393->mMethodGenericsNum;
        if(        generics_number_403>=list$1void$ph$p_length(info->method_generics_types)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value305=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_403,list$1void$ph$p_length(info->method_generics_types))));
            come_exception_var_c1_404=multiple_assign_var1->v1;
            Err_405=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_405)?(puts(Err_405),exit(0)):(0));
            come_call_finalizer3(__right_value305,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_405 = come_decrement_ref_count2(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_406=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__407=type->mImmutable;
        pointer_num_408=type->mPointerNum;
        heap_409=type->mHeap;
        exception__410=type->mException;
        guard__411=type->mGuardValue;
        no_heap_412=type->mNoHeap;
        no_calling_destructor_413=type->mNoCallingDestructor;
        null_value_414=type->mNullValue;
        generate__415=type->mGenerate;
        vtable_416=type->mCreateVTable;
        __dec_obj54=result_359;
        result_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value306=list$1void$ph$p_operator_load_element(info->method_generics_types,generics_number_403))))));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value306,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generate__415) {
            result_359->mGenerate=generate__415;
        }
        if(        vtable_416) {
            result_359->mCreateVTable=vtable_416;
        }
        if(        heap_409) {
            result_359->mHeap=heap_409;
        }
        if(        guard__411) {
            result_359->mGuardValue=guard__411;
        }
        if(        no_heap_412) {
            result_359->mNoHeap=(_Bool)1;
            result_359->mHeap=(_Bool)0;
        }
        if(        exception__410) {
            result_359->mException=(_Bool)1;
        }
        if(        no_calling_destructor_413) {
            result_359->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__407) {
            result_359->mImmutable=immutable__407;
        }
        if(        list$1sNode$ph$p_length(array_num_406)>0) {
            __dec_obj55=result_359->mArrayNum;
            result_359->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_406);
            come_call_finalizer3(__dec_obj55,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_414) {
            result_359->mNullValue=null_value_414;
        }
        if(        pointer_num_408>0) {
            result_359->mPointerNum+=pointer_num_408;
        }
        come_call_finalizer3(array_num_406,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_393->mGenerics) {
        generics_number_420=klass_393->mGenericsNum;
        if(        generics_number_420>=list$1void$ph$p_length(generics_type->mGenericsTypes)) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value308=err_msg(info,"invalid generics parametor number")));
            come_exception_var_c2_421=multiple_assign_var2->v1;
            Err_422=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            ((Err_422)?(puts(Err_422),exit(0)):(0));
            come_call_finalizer3(__right_value308,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_422 = come_decrement_ref_count2(Err_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        klass2_423=((struct sType*)((void*)(__right_value309=list$1void$ph$p_operator_load_element(generics_type->mGenericsTypes,generics_number_420))))->mClass;
        come_call_finalizer3(__right_value309,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        generics_number2_424=klass2_423->mGenericsNum;
        if(        generics_number_420!=generics_number2_424) {
            array_num_425=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            immutable__426=type->mImmutable;
            pointer_num_427=type->mPointerNum;
            heap_428=type->mHeap;
            guard__429=type->mGuardValue;
            no_heap_430=type->mNoHeap;
            no_calling_destructor_431=type->mNoCallingDestructor;
            null_value_432=type->mNullValue;
            record__433=type->mRecord;
            multiple_types_434=type->mMultipleTypes;
            exception__435=type->mException;
            generate__436=type->mGenerate;
            vtable_437=type->mCreateVTable;
            __dec_obj56=result_359;
            result_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value310=list$1void$ph$p_operator_load_element(generics_type->mGenericsTypes,generics_number_420))))));
            come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            vtable_437) {
                result_359->mCreateVTable=vtable_437;
            }
            if(            generate__436) {
                result_359->mGenerate=generate__436;
            }
            if(            heap_428) {
                result_359->mHeap=heap_428;
            }
            if(            exception__435) {
                result_359->mException=exception__435;
            }
            if(            guard__429) {
                result_359->mGuardValue=guard__429;
            }
            if(            record__433) {
                result_359->mRecord=record__433;
            }
            if(            no_heap_430) {
                result_359->mNoHeap=(_Bool)1;
                result_359->mHeap=(_Bool)0;
            }
            if(            multiple_types_434) {
                result_359->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_431) {
                result_359->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__426) {
                result_359->mImmutable=immutable__426;
            }
            if(            list$1sNode$ph$p_length(array_num_425)>0) {
                __dec_obj57=result_359->mArrayNum;
                result_359->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_425);
                come_call_finalizer3(__dec_obj57,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            null_value_432) {
                result_359->mNullValue=null_value_432;
            }
            if(            pointer_num_427>0) {
                result_359->mPointerNum+=pointer_num_427;
            }
            come_call_finalizer3(array_num_425,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1void$ph$p_reset(result_359->mGenericsTypes);
        for(        o2_saved_438=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_439=((struct sType*)list$1void$ph$p_begin((o2_saved_438)));        !list$1void$ph$p_end((o2_saved_438));        it_439=((struct sType*)list$1void$ph$p_next((o2_saved_438)))        ){
            type_440=(struct sType*)come_increment_ref_count(solve_generics(it_439,generics_type,info));
            list$1void$ph$p_push_back(result_359->mGenericsTypes,(struct sType*)come_increment_ref_count(type_440));
            come_call_finalizer3(type_440,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_438,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_359,generics_type,info)) {
            new_name_441=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_441);
            exit(1);
            (new_name_441 = come_decrement_ref_count2(new_name_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__264 = come_increment_ref_count(result_359);
    come_call_finalizer3(result_359,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__243;
void* __right_value261 = (void*)0;
struct sType* result_369;
void* __right_value262 = (void*)0;
struct sType* __dec_obj26;
void* __right_value263 = (void*)0;
struct sType* __dec_obj27;
void* __right_value271 = (void*)0;
struct list$1void$ph* __dec_obj31;
void* __right_value272 = (void*)0;
struct sType* __dec_obj32;
void* __right_value273 = (void*)0;
struct sType* __dec_obj33;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value277 = (void*)0;
char* __dec_obj36;
void* __right_value278 = (void*)0;
char* __dec_obj37;
void* __right_value279 = (void*)0;
char* __dec_obj38;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __dec_obj42;
void* __right_value288 = (void*)0;
char* __dec_obj43;
void* __right_value289 = (void*)0;
struct list$1void$ph* __dec_obj44;
void* __right_value297 = (void*)0;
struct list$1char$ph* __dec_obj48;
void* __right_value298 = (void*)0;
struct sType* __dec_obj49;
struct sType* __result_obj__257;
    if(    self==(void*)0) {
        __result_obj__243 = (void*)0;
        return __result_obj__243;
    }
    result_369=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_369->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj26=result_369->mOriginalLoadVarType;
        result_369->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj27=result_369->mChannelType;
        result_369->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj31=result_369->mGenericsTypes;
        result_369->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj31,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj32=result_369->mNoSolvedGenericsType;
        result_369->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj33=result_369->mAnyOriginalType;
        result_369->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj34=result_369->mSizeNum;
        result_369->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj35=result_369->mAlignas;
        result_369->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj36=result_369->mTupleName;
        result_369->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj37=result_369->mAttribute;
        result_369->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_369->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_369->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_369->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_369->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_369->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_369->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_369->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_369->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_369->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_369->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_369->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_369->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_369->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_369->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_369->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_369->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_369->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_369->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_369->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_369->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_369->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_369->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_369->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj38=result_369->mAsmName;
        result_369->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_369->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj42=result_369->mArrayNum;
        result_369->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj42,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj43=result_369->mOriginalTypeName;
        result_369->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj44=result_369->mParamTypes;
        result_369->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj44,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj48=result_369->mParamNames;
        result_369->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj49=result_369->mResultType;
        result_369->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mVarArgs=self->mVarArgs;
    }
    __result_obj__257 = result_369;
    come_call_finalizer3(result_369,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__257;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_360;
struct list_item$1sNode$ph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_362;
    result_362=0;
    result_362+=int_get_hash_key(((int)self->mClass));
    result_362+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_362+=int_get_hash_key(((int)self->mChannelType));
    result_362+=int_get_hash_key(((int)self->mGenericsTypes));
    result_362+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_362+=int_get_hash_key(((int)self->mAnyClass));
    result_362+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_362+=int_get_hash_key(((int)self->mSizeNum));
    result_362+=int_get_hash_key(((int)self->mAlignas));
    result_362+=int_get_hash_key(((int)self->mTupleName));
    result_362+=int_get_hash_key(((int)self->mAttribute));
    result_362+=int_get_hash_key(((int)self->mAllocaValue));
    result_362+=int_get_hash_key(((int)self->mUnsigned));
    result_362+=int_get_hash_key(((int)self->mShort));
    result_362+=int_get_hash_key(((int)self->mLong));
    result_362+=int_get_hash_key(((int)self->mLongLong));
    result_362+=int_get_hash_key(((int)self->mConstant));
    result_362+=int_get_hash_key(((int)self->mAtomic));
    result_362+=int_get_hash_key(((int)self->mRegister));
    result_362+=int_get_hash_key(((int)self->mVolatile));
    result_362+=int_get_hash_key(((int)self->mStatic));
    result_362+=int_get_hash_key(((int)self->mUniq));
    result_362+=int_get_hash_key(((int)self->mRecord));
    result_362+=int_get_hash_key(((int)self->mExtern));
    result_362+=int_get_hash_key(((int)self->mRestrict));
    result_362+=int_get_hash_key(((int)self->mImmutable));
    result_362+=int_get_hash_key(((int)self->mHeap));
    result_362+=int_get_hash_key(((int)self->mChannel));
    result_362+=int_get_hash_key(((int)self->mNoHeap));
    result_362+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_362+=int_get_hash_key(((int)self->mException));
    result_362+=int_get_hash_key(((int)self->mGenerate));
    result_362+=int_get_hash_key(((int)self->mCreateVTable));
    result_362+=int_get_hash_key(((int)self->mDynamic));
    result_362+=int_get_hash_key(((int)self->mInline));
    result_362+=int_get_hash_key(((int)self->mNullValue));
    result_362+=int_get_hash_key(((int)self->mGuardValue));
    result_362+=int_get_hash_key(((int)self->mAsmName));
    result_362+=int_get_hash_key(((int)self->mTypedef));
    result_362+=int_get_hash_key(((int)self->mMultipleTypes));
    result_362+=int_get_hash_key(((int)self->mOriginIsArray));
    result_362+=int_get_hash_key(((int)self->mArrayNum));
    result_362+=int_get_hash_key(((int)self->mPointerNum));
    result_362+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_362+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_362+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_362+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_362+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_362+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_362+=int_get_hash_key(((int)self->mArrayPointerType));
    result_362+=int_get_hash_key(((int)self->mLambdaArray));
    result_362+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_362+=int_get_hash_key(((int)self->mParamTypes));
    result_362+=int_get_hash_key(((int)self->mParamNames));
    result_362+=int_get_hash_key(((int)self->mResultType));
    result_362+=int_get_hash_key(((int)self->mVarArgs));
    return result_362;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
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
    if(    !list$1void$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right){
struct list_item$1void$ph* it_363;
struct list_item$1void$ph* it2_364;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_363=left->head;
    it2_364=right->head;
    while(it_363!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_363->item, it2_364->item)) {
            return (_Bool)0;
        }
        it_363=it_363->next;
        it2_364=it2_364->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_365;
struct list_item$1sNode$ph* it2_366;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_365=left->head;
    it2_366=right->head;
    while(it_365!=((void*)0)) {
        if(        !sNode_equals(it_365->item,it2_366->item)) {
            return (_Bool)0;
        }
        it_365=it_365->next;
        it2_366=it2_366->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_367;
struct list_item$1char$ph* it2_368;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_367=left->head;
    it2_368=right->head;
    while(it_367!=((void*)0)) {
        if(        !string_equals(it_367->item,it2_368->item)) {
            return (_Bool)0;
        }
        it_367=it_367->next;
        it2_368=it2_368->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__244;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1void$ph* result_371;
struct list_item$1void$ph* it_372;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1void$ph* __result_obj__247;
    if(    self==((void*)0)) {
        __result_obj__244 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__244,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_371=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1404, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_372=self->head;
    while(it_372!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_371,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_372->item)));
        }
        else {
            list$1void$ph$p_add(result_371,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_372->item)));
        }
        it_372=it_372->next;
    }
    __result_obj__247 = come_increment_ref_count(result_371);
    come_call_finalizer3(result_371,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_370;
    result_370=0;
    result_370+=int_get_hash_key(((int)self->head));
    result_370+=int_get_hash_key(((int)self->tail));
    result_370+=int_get_hash_key(((int)self->len));
    result_370+=int_get_hash_key(((int)self->it));
    return result_370;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__245;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__245 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value266 = (void*)0;
struct list_item$1void$ph* litem_373;
void* __dec_obj28;
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_374;
void* __dec_obj29;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_375;
void* __dec_obj30;
struct list$1void$ph* __result_obj__246;
    if(    self->len==0) {
        litem_373=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value266=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1423, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=((void*)0);
        litem_373->next=((void*)0);
        __dec_obj28=litem_373->item;
        litem_373->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_373;
        self->head=litem_373;
    }
    else if(    self->len==1) {
        litem_374=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1433, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->head;
        litem_374->next=((void*)0);
        __dec_obj29=litem_374->item;
        litem_374->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_374;
        self->head->next=litem_374;
    }
    else {
        litem_375=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1443, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=self->tail;
        litem_375->next=((void*)0);
        __dec_obj30=litem_375->item;
        litem_375->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj30,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_375;
        self->tail=litem_375;
    }
    self->len++;
    __result_obj__246 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__246;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_376;
struct list_item$1void$ph* prev_it_377;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        prev_it_377=it_376;
        it_376=it_376->next;
        come_call_finalizer3(prev_it_377,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__248;
void* __right_value274 = (void*)0;
struct sNode* result_378;
struct sNode* __result_obj__249;
    if(    self==(void*)0) {
        __result_obj__248 = come_increment_ref_count((void*)0);
        ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count2(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__248;
    }
    result_378=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_378->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_378->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_378->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_378->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_378->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_378->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_378->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_378->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_378->kind=self->kind;
    }
    __result_obj__249 = come_increment_ref_count(result_378);
    ((result_378) ? result_378 = come_decrement_ref_count2(result_378, ((struct sNode*)result_378)->finalize, ((struct sNode*)result_378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count2(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__250;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1sNode$ph* result_379;
struct list_item$1sNode$ph* it_380;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* __result_obj__253;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_379=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_380=self->head;
    while(it_380!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_379,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_380->item)));
        }
        else {
            list$1sNode$ph$p_add(result_379,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_380->item)));
        }
        it_380=it_380->next;
    }
    __result_obj__253 = come_increment_ref_count(result_379);
    come_call_finalizer3(result_379,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__251;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__251 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value282 = (void*)0;
struct list_item$1sNode$ph* litem_381;
struct sNode* __dec_obj39;
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_382;
struct sNode* __dec_obj40;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_383;
struct sNode* __dec_obj41;
struct list$1sNode$ph* __result_obj__252;
    if(    self->len==0) {
        litem_381=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value282=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=((void*)0);
        litem_381->next=((void*)0);
        __dec_obj39=litem_381->item;
        litem_381->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_381;
        self->head=litem_381;
    }
    else if(    self->len==1) {
        litem_382=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->head;
        litem_382->next=((void*)0);
        __dec_obj40=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_382;
        self->head->next=litem_382;
    }
    else {
        litem_383=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->tail;
        litem_383->next=((void*)0);
        __dec_obj41=litem_383->item;
        litem_383->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_383;
        self->tail=litem_383;
    }
    self->len++;
    __result_obj__252 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__252;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_384;
struct list_item$1sNode$ph* prev_it_385;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        prev_it_385=it_384;
        it_384=it_384->next;
        come_call_finalizer3(prev_it_385,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__254;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1char$ph* result_386;
struct list_item$1char$ph* it_387;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* __result_obj__256;
    if(    self==((void*)0)) {
        __result_obj__254 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__254;
    }
    result_386=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_387=self->head;
    while(it_387!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_386,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_387->item)));
        }
        else {
            list$1char$ph$p_add(result_386,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_387->item)));
        }
        it_387=it_387->next;
    }
    __result_obj__256 = come_increment_ref_count(result_386);
    come_call_finalizer3(result_386,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__256,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__256;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value292 = (void*)0;
struct list_item$1char$ph* litem_388;
char* __dec_obj45;
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_389;
char* __dec_obj46;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_390;
char* __dec_obj47;
struct list$1char$ph* __result_obj__255;
    if(    self->len==0) {
        litem_388=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value292=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        __dec_obj45=litem_388->item;
        litem_388->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1) {
        litem_389=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        __dec_obj46=litem_389->item;
        litem_389->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        __dec_obj47=litem_390->item;
        litem_390->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result_obj__255 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_391;
struct list_item$1char$ph* prev_it_392;
    it_391=self->head;
    while(it_391!=((void*)0)) {
        prev_it_392=it_391;
        it_391=it_391->next;
        come_call_finalizer3(prev_it_392,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
struct list_item$1void$ph* it_395;
struct list_item$1void$ph* prev_it_396;
struct list$1void$ph* __result_obj__260;
    it_395=self->head;
    while(it_395!=((void*)0)) {
        prev_it_396=it_395;
        it_395=it_395->next;
        come_call_finalizer3(prev_it_396,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__260 = self;
    return __result_obj__260;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value302 = (void*)0;
struct list_item$1void$ph* litem_400;
void* __dec_obj51;
void* __right_value303 = (void*)0;
struct list_item$1void$ph* litem_401;
void* __dec_obj52;
void* __right_value304 = (void*)0;
struct list_item$1void$ph* litem_402;
void* __dec_obj53;
struct list$1void$ph* __result_obj__261;
    if(    self->len==0) {
        litem_400=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value302=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1493, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_400->prev=((void*)0);
        litem_400->next=((void*)0);
        __dec_obj51=litem_400->item;
        litem_400->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_400;
        self->head=litem_400;
    }
    else if(    self->len==1) {
        litem_401=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value303=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1503, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_401->prev=self->head;
        litem_401->next=((void*)0);
        __dec_obj52=litem_401->item;
        litem_401->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_401;
        self->head->next=litem_401;
    }
    else {
        litem_402=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value304=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1513, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_402->prev=self->tail;
        litem_402->next=((void*)0);
        __dec_obj53=litem_402->item;
        litem_402->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_402;
        self->tail=litem_402;
    }
    self->len++;
    __result_obj__261 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__261;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_417;
int i_418;
void* __result_obj__262;
void* default_value_419;
void* __result_obj__263;
default_value_419 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_417=self->head;
    i_418=0;
    while(it_417!=((void*)0)) {
        if(        position==i_418) {
            __result_obj__262 = come_increment_ref_count(it_417->item);
            come_call_finalizer3(__result_obj__262,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__262;
        }
        it_417=it_417->next;
        i_418++;
    }
    memset(&default_value_419,0,sizeof(void*));
    __result_obj__263 = come_increment_ref_count(((struct sType*)default_value_419));
    come_call_finalizer3(default_value_419,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__263,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__263;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __right_value314 = (void*)0;
struct sType* result_442;
struct sClass* klass_443;
int generics_number_444;
void* __right_value315 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_445=0;
char* Err_446=0;
struct list$1sNode$ph* array_num_447;
_Bool immutable__448;
int pointer_num_449;
_Bool heap_450;
_Bool guard__451;
_Bool no_heap_452;
_Bool no_calling_destructor_453;
_Bool null_value_454;
_Bool exception__455;
_Bool generate__456;
_Bool vtable_457;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* __dec_obj58;
struct list$1sNode$ph* __dec_obj59;
int i_458;
struct list$1void$ph* o2_saved_459;
struct sType* it_460;
void* __right_value318 = (void*)0;
struct list$1void$ph* o2_saved_466;
struct sType* it_467;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* __dec_obj61;
struct sType* __result_obj__267;
    result_442=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    klass_443=type->mClass;
    if(    klass_443->mMethodGenerics&&info->method_generics_types&&list$1void$ph$p_length(info->method_generics_types)>0) {
        generics_number_444=klass_443->mMethodGenericsNum;
        if(        generics_number_444>=list$1void$ph$p_length(info->method_generics_types)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value315=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_444,list$1void$ph$p_length(info->method_generics_types))));
            come_exception_var_c3_445=multiple_assign_var3->v1;
            Err_446=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_446)?(puts(Err_446),exit(0)):(0));
            come_call_finalizer3(__right_value315,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_446 = come_decrement_ref_count2(Err_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_447=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__448=type->mImmutable;
        pointer_num_449=type->mPointerNum;
        heap_450=type->mHeap;
        guard__451=type->mGuardValue;
        no_heap_452=type->mNoHeap;
        no_calling_destructor_453=type->mNoCallingDestructor;
        null_value_454=type->mNullValue;
        exception__455=type->mException;
        generate__456=type->mGenerate;
        vtable_457=type->mCreateVTable;
        __dec_obj58=result_442;
        result_442=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value316=list$1void$ph$p_operator_load_element(info->method_generics_types,generics_number_444))))));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(__right_value316,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        vtable_457) {
            result_442->mCreateVTable=vtable_457;
        }
        if(        generate__456) {
            result_442->mGenerate=generate__456;
        }
        if(        heap_450) {
            result_442->mHeap=heap_450||result_442->mHeap;
        }
        if(        exception__455) {
            result_442->mException=exception__455;
        }
        if(        guard__451) {
            result_442->mGuardValue=guard__451||result_442->mGuardValue;
        }
        if(        no_heap_452) {
            result_442->mNoHeap=(_Bool)1;
            result_442->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_453) {
            result_442->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__448) {
            result_442->mImmutable=immutable__448;
        }
        if(        list$1sNode$ph$p_length(array_num_447)>0) {
            __dec_obj59=result_442->mArrayNum;
            result_442->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_447);
            come_call_finalizer3(__dec_obj59,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_454) {
            result_442->mNullValue=null_value_454;
        }
        if(        pointer_num_449>0) {
            result_442->mPointerNum+=pointer_num_449;
        }
        come_call_finalizer3(array_num_447,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_458=0;
    for(    o2_saved_459=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_460=((struct sType*)list$1void$ph$p_begin((o2_saved_459)));    !list$1void$ph$p_end((o2_saved_459));    it_460=((struct sType*)list$1void$ph$p_next((o2_saved_459)))    ){
        list$1void$ph$p_operator_store_element(result_442->mGenericsTypes,i_458,(struct sType*)come_increment_ref_count(solve_method_generics(it_460,info)));
        i_458++;
    }
    come_call_finalizer3(o2_saved_459,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    i_458=0;
    for(    o2_saved_466=(struct list$1void$ph*)come_increment_ref_count((type->mParamTypes)),it_467=((struct sType*)list$1void$ph$p_begin((o2_saved_466)));    !list$1void$ph$p_end((o2_saved_466));    it_467=((struct sType*)list$1void$ph$p_next((o2_saved_466)))    ){
        list$1void$ph$p_operator_store_element(result_442->mParamTypes,i_458,(struct sType*)come_increment_ref_count(solve_method_generics(it_467,info)));
        i_458++;
    }
    come_call_finalizer3(o2_saved_466,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj61=result_442->mResultType;
        result_442->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__267 = come_increment_ref_count(result_442);
    come_call_finalizer3(result_442,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_461;
int i_462;
void* default_value_463;
struct list$1void$ph* __result_obj__265;
struct list_item$1void$ph* it_464;
int i_465;
void* __dec_obj60;
struct list$1void$ph* __result_obj__266;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_461=self->len;
        for(        i_462=0;        i_462<position-len_461;        i_462++        ){
            memset(&default_value_463,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_463));
            come_call_finalizer3(default_value_463,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__265 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        return __result_obj__265;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __dec_obj60=it_464->item;
            it_464->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj60,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_464=it_464->next;
        i_465++;
    }
    __result_obj__266 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__266;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __right_value321 = (void*)0;
char* __result_obj__268;
void* __right_value322 = (void*)0;
char* __result_obj__269;
void* __right_value327 = (void*)0;
struct sRightValueObject* new_value_470;
struct sType* __dec_obj65;
void* __right_value328 = (void*)0;
char* __dec_obj66;
char* __dec_obj67;
void* __right_value329 = (void*)0;
char* buf_471;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* __result_obj__272;
    if(    gComeGC||gComeC) {
        __result_obj__268 = come_increment_ref_count(((char*)(__right_value321=__builtin_string(obj))));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__268 = come_decrement_ref_count2(__result_obj__268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__268;
    }
    if(    info->no_output_come_code) {
        __result_obj__269 = come_increment_ref_count(((char*)(__right_value322=__builtin_string(""))));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__269 = come_decrement_ref_count2(__result_obj__269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__269;
    }
    new_value_470=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 306, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj65=new_value_470->mType;
    new_value_470->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_470->mFreed=(_Bool)0;
    new_value_470->mID=gRightValueNum;
    __dec_obj66=new_value_470->mVarName;
    new_value_470->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj67=new_value_470->mFunName;
    new_value_470->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_470->mBlockLevel=info->block_level;
    list$1void$ph$p_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_470));
    buf_471=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_471);
    __result_obj__272 = come_increment_ref_count(((char*)(__right_value331=xsprintf("((%s)(%s=%s))",((char*)(__right_value330=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_470->mVarName,obj))));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_470,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    (buf_471 = come_decrement_ref_count2(buf_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__272 = come_decrement_ref_count2(__result_obj__272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__272;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self){
struct sRightValueObject* __result_obj__270;
void* __right_value323 = (void*)0;
struct sRightValueObject* result_469;
void* __right_value324 = (void*)0;
struct sType* __dec_obj62;
void* __right_value325 = (void*)0;
char* __dec_obj63;
void* __right_value326 = (void*)0;
char* __dec_obj64;
struct sRightValueObject* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__270,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__270;
    }
    result_469=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "sRightValueObject_clone", 3, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj62=result_469->mType;
        result_469->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        __dec_obj63=result_469->mVarName;
        result_469->mVarName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mVarName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj64=result_469->mFunName;
        result_469->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_469->mFreed=self->mFreed;
    }
    if(    self!=((void*)0)) {
        result_469->mID=self->mID;
    }
    if(    self!=((void*)0)) {
        result_469->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_469->mStored=self->mStored;
    }
    if(    self!=((void*)0)) {
        result_469->mDecrementRefCount=self->mDecrementRefCount;
    }
    __result_obj__271 = come_increment_ref_count(result_469);
    come_call_finalizer3(result_469,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__271,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self){
unsigned int result_468;
    result_468=0;
    result_468+=int_get_hash_key(((int)self->mType));
    result_468+=int_get_hash_key(((int)self->mVarName));
    result_468+=int_get_hash_key(((int)self->mFunName));
    result_468+=int_get_hash_key(((int)self->mFreed));
    result_468+=int_get_hash_key(((int)self->mID));
    result_468+=int_get_hash_key(((int)self->mBlockLevel));
    result_468+=int_get_hash_key(((int)self->mStored));
    result_468+=int_get_hash_key(((int)self->mDecrementRefCount));
    return result_468;
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

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value332 = (void*)0;
struct sRightValueObject* new_value_472;
struct sType* __dec_obj68;
void* __right_value333 = (void*)0;
char* __dec_obj69;
char* __dec_obj70;
void* __right_value334 = (void*)0;
char* buf_473;
void* __right_value335 = (void*)0;
char* __dec_obj71;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* __dec_obj72;
    if(    gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_472=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 330, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj68=new_value_472->mType;
    new_value_472->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_472->mFreed=(_Bool)0;
    new_value_472->mID=gRightValueNum;
    __dec_obj69=new_value_472->mVarName;
    new_value_472->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj70=new_value_472->mFunName;
    new_value_472->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_472->mBlockLevel=info->block_level;
    new_value_472->mDecrementRefCount=decrement_ref_count;
    list$1void$ph$p_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_472));
    buf_473=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_473);
    __dec_obj71=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, come_value->c_value));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj72=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value336=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_472->mVarName,come_value->c_value));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value->right_value_objects=new_value_472;
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_472,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    (buf_473 = come_decrement_ref_count2(buf_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_474;
struct list$1void$ph* o2_saved_475;
struct sRightValueObject* it_476;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_474=0;
    for(    o2_saved_475=(struct list$1void$ph*)come_increment_ref_count((info->right_value_objects)),it_476=((struct sRightValueObject*)list$1void$ph$p_begin((o2_saved_475)));    !list$1void$ph$p_end((o2_saved_475));    it_476=((struct sRightValueObject*)list$1void$ph$p_next((o2_saved_475)))    ){
        if(        it_476->mID==right_value_num) {
            break;
        }
        i_474++;
    }
    come_call_finalizer3(o2_saved_475,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1void$ph$p_delete(info->right_value_objects,i_474,i_474+1);
}

static struct list$1void$ph* list$1void$ph$p_delete(struct list$1void$ph* self, int head, int tail){
int tmp_477;
struct list$1void$ph* __result_obj__273;
struct list_item$1void$ph* it_478;
int i_479;
struct list_item$1void$ph* prev_it_480;
struct list_item$1void$ph* it_481;
int i_482;
struct list_item$1void$ph* prev_it_483;
struct list_item$1void$ph* it_484;
struct list_item$1void$ph* head_prev_it_485;
struct list_item$1void$ph* tail_it_486;
int i_487;
struct list_item$1void$ph* prev_it_488;
struct list$1void$ph* __result_obj__274;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_477=tail;
        tail=head;
        head=tmp_477;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__273 = self;
        return __result_obj__273;
    }
    if(    head==0&&tail==self->len) {
        list$1void$ph$p_reset(self);
    }
    else if(    head==0) {
        it_478=self->head;
        i_479=0;
        while(it_478!=((void*)0)) {
            if(            i_479<tail) {
                prev_it_480=it_478;
                it_478=it_478->next;
                i_479++;
                come_call_finalizer3(prev_it_480,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_479==tail) {
                self->head=it_478;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_478=it_478->next;
                i_479++;
            }
        }
    }
    else if(    tail==self->len) {
        it_481=self->head;
        i_482=0;
        while(it_481!=((void*)0)) {
            if(            i_482==head) {
                self->tail=it_481->prev;
                self->tail->next=((void*)0);
            }
            if(            i_482>=head) {
                prev_it_483=it_481;
                it_481=it_481->next;
                i_482++;
                come_call_finalizer3(prev_it_483,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_481=it_481->next;
                i_482++;
            }
        }
    }
    else {
        it_484=self->head;
        head_prev_it_485=((void*)0);
        tail_it_486=((void*)0);
        i_487=0;
        while(it_484!=((void*)0)) {
            if(            i_487==head) {
                head_prev_it_485=it_484->prev;
            }
            if(            i_487==tail) {
                tail_it_486=it_484;
            }
            if(            i_487>=head&&i_487<tail) {
                prev_it_488=it_484;
                it_484=it_484->next;
                i_487++;
                come_call_finalizer3(prev_it_488,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_484=it_484->next;
                i_487++;
            }
        }
        if(        head_prev_it_485!=((void*)0)) {
            head_prev_it_485->next=tail_it_486;
        }
        if(        tail_it_486!=((void*)0)) {
            tail_it_486->prev=head_prev_it_485;
        }
    }
    __result_obj__274 = self;
    return __result_obj__274;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value338 = (void*)0;
char* __result_obj__275;
void* __right_value339 = (void*)0;
char* __result_obj__276;
struct sClass* klass_489;
void* __right_value340 = (void*)0;
char* type_name_490;
void* __right_value341 = (void*)0;
char* __result_obj__277;
    if(    gComeGC||gComeC) {
        __result_obj__275 = come_increment_ref_count(((char*)(__right_value338=__builtin_string(obj))));
        (__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__275 = come_decrement_ref_count2(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__275;
    }
    if(    info->no_output_come_code) {
        __result_obj__276 = come_increment_ref_count(((char*)(__right_value339=__builtin_string(obj))));
        (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__276 = come_decrement_ref_count2(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__276;
    }
    klass_489=type->mClass;
    type_name_490=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result_obj__277 = come_increment_ref_count(((char*)(__right_value341=xsprintf("(%s)come_increment_ref_count(%s)",type_name_490,obj))));
    (type_name_490 = come_decrement_ref_count2(type_name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__277 = come_decrement_ref_count2(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__277;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUE$ph* stack_saved_491;
struct list$1void$ph* right_value_objects_492;
struct sClass* klass_493;
void* __right_value342 = (void*)0;
char* name_495;
void* __right_value343 = (void*)0;
_Bool no_decrement_496;
void* __right_value344 = (void*)0;
char* c_value_497;
struct sClass* klass_498;
char* class_name_499;
char* fun_name_500;
void* __right_value345 = (void*)0;
struct sType* type2_501;
void* __right_value346 = (void*)0;
char* fun_name2_502;
struct sFun* finalizer_503;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* none_generics_name_507;
void* __right_value349 = (void*)0;
char* generics_fun_name_508;
void* __right_value350 = (void*)0;
struct sGenericsFun* generics_fun_509;
void* __right_value351 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var4 = (void*)0;
char* name_510=0;
_Bool err_511=0;
void* __right_value352 = (void*)0;
int i_512;
void* __right_value353 = (void*)0;
char* new_fun_name_513;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __dec_obj73;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun_514=0;
char* new_fun_name_515=0;
char* __dec_obj74;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* type_name_516;
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
char* type_name_517;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
char* str_518;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* str_519;
struct list$1void$ph* __dec_obj75;
struct list$1CVALUE$ph* __dec_obj76;
memset(&i_512, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_491=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_492=info->right_value_objects;
    klass_493=type->mClass;
    static int dec_num_494=0;
    name_495=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_494));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(type,name_495,(_Bool)0,info))));
    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_495,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_495,obj);
    }
    obj=name_495;
    no_decrement_496=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_497=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_498=type->mClass;
        class_name_499=klass_498->mName;
        fun_name_500="finalize";
        type2_501=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_501->mHeap=(_Bool)0;
        fun_name2_502=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_500,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType) {
            type=type->mNoSolvedGenericsType;
        }
        finalizer_503=((void*)0);
        if(        list$1void$ph$p_length(type->mGenericsTypes)>0) {
            finalizer_503=((struct sFun*)((void*)(__right_value347=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_502))));
            come_call_finalizer3(__right_value347,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_503==((void*)0)) {
                none_generics_name_507=(char*)come_increment_ref_count(get_none_generics_name(type2_501->mClass->mName));
                generics_fun_name_508=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_507,fun_name_500));
                generics_fun_509=((struct sGenericsFun*)((void*)(__right_value350=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_508))));
                come_call_finalizer3(__right_value350,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                generics_fun_509) {
                    multiple_assign_var4=((struct tuple2$2char$phbool$*)(__right_value351=create_generics_fun((char*)come_increment_ref_count(fun_name2_502),generics_fun_509,type,info)));
                    name_510=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    err_511=multiple_assign_var4->v2;
                    come_call_finalizer3(__right_value351,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_511) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_503=((struct sFun*)((void*)(__right_value352=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_510))));
                    come_call_finalizer3(__right_value352,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    (name_510 = come_decrement_ref_count2(name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_507 = come_decrement_ref_count2(none_generics_name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_508 = come_decrement_ref_count2(generics_fun_name_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_512=128-1;            i_512>=1;            i_512--            ){
                new_fun_name_513=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_502,i_512));
                finalizer_503=((struct sFun*)((void*)(__right_value354=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_513))));
                come_call_finalizer3(__right_value354,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                finalizer_503) {
                    __dec_obj73=fun_name2_502;
                    fun_name2_502=(char*)come_increment_ref_count(__builtin_string(new_fun_name_513));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_513 = come_decrement_ref_count2(new_fun_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_513 = come_decrement_ref_count2(new_fun_name_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_503==((void*)0)) {
                finalizer_503=((struct sFun*)((void*)(__right_value356=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_502))));
                come_call_finalizer3(__right_value356,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        if(        finalizer_503==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph$p_length(type->mArrayNum)==0) {
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value357=create_finalizer_automatically(type,fun_name_500,info)));
            fun_514=multiple_assign_var5->v1;
            new_fun_name_515=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer3(__right_value357,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj74=fun_name2_502;
            fun_name2_502=(char*)come_increment_ref_count(new_fun_name_515);
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_503=fun_514;
            (new_fun_name_515 = come_decrement_ref_count2(new_fun_name_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_503!=((void*)0)||(finalizer_503==((void*)0)&&string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==1)) {
            if(            string_operator_equals(type->mClass->mName,"void")) {
                if(                c_value_497) {
                    add_come_last_code2(info,((char*)(__right_value363=xsprintf("come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0)",((char*)(__right_value358=string_to_string(c_value_497))),((char*)(__right_value359=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value360=int_to_string(((no_decrement_496)?(1):(0))))),((char*)(__right_value361=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value362=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else if(            klass_498->mProtocol&&type->mPointerNum==1) {
                type_name_516=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_497) {
                    add_come_last_code2(info,((char*)(__right_value377=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, \%s/* force_delete */, (void*)0)",((char*)(__right_value365=string_to_string(fun_name2_502))),((char*)(__right_value366=string_to_string(c_value_497))),((char*)(__right_value367=string_to_string(c_value_497))),((char*)(__right_value368=string_to_string(type_name_516))),((char*)(__right_value369=string_to_string(c_value_497))),((char*)(__right_value370=string_to_string(c_value_497))),((char*)(__right_value371=string_to_string(type_name_516))),((char*)(__right_value372=string_to_string(c_value_497))),((char*)(__right_value373=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value374=int_to_string(((no_decrement_496)?(1):(0))))),((char*)(__right_value375=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value376=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_516 = come_decrement_ref_count2(type_name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_497) {
                    add_come_last_code2(info,((char*)(__right_value384=xsprintf("come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, \%s/* force_delete_ */, (void*)0)",((char*)(__right_value378=string_to_string(c_value_497))),((char*)(__right_value379=string_to_string(fun_name2_502))),((char*)(__right_value380=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value381=int_to_string(((no_decrement_496)?(1):(0))))),((char*)(__right_value382=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value383=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_498->mProtocol&&type->mPointerNum==1) {
                type_name_517=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_518=(char*)come_increment_ref_count(xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,\%s,0, (void*)0); }",((char*)(__right_value386=string_to_string(name_495))),((char*)(__right_value387=string_to_string(name_495))),((char*)(__right_value388=string_to_string(name_495))),((char*)(__right_value389=string_to_string(type_name_517))),((char*)(__right_value390=string_to_string(name_495))),((char*)(__right_value391=string_to_string(type_name_517))),((char*)(__right_value392=string_to_string(name_495))),((char*)(__right_value393=int_to_string(((no_free)?(1):(0)))))));
                (__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_518);
                (type_name_517 = come_decrement_ref_count2(type_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (str_518 = come_decrement_ref_count2(str_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                str_519=(char*)come_increment_ref_count(xsprintf(((char*)(__right_value396=xsprintf("%%s = come_decrement_ref_count2(%%s, (void*)0, (void*)0, 0,\%s,0, (void*)0)",((char*)(__right_value395=int_to_string(((no_free)?(1):(0)))))))),name_495,name_495));
                (__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_519);
                (str_519 = come_decrement_ref_count2(str_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (c_value_497 = come_decrement_ref_count2(c_value_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_502 = come_decrement_ref_count2(fun_name2_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj75=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_492);
    come_call_finalizer3(__dec_obj75,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj76=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_491);
    come_call_finalizer3(__dec_obj76,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(stack_saved_491,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_504;
unsigned int hash_505;
unsigned int it_506;
void* __result_obj__278;
void* __result_obj__279;
void* __result_obj__280;
void* __result_obj__281;
default_value_504 = (void*)0;
    memset(&default_value_504,0,sizeof(void*));
    hash_505=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_506=hash_505;
    while((_Bool)1) {
        if(        self->item_existance[it_506]) {
            if(            come_call_equals((void*)0, self->keys[it_506], ((char*)key))) {
                __result_obj__278 = come_increment_ref_count(self->items[it_506]);
                come_call_finalizer3(default_value_504,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__278,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__278;
            }
            it_506++;
            if(            it_506>=self->size) {
                it_506=0;
            }
            else if(            it_506==hash_505) {
                __result_obj__279 = come_increment_ref_count(((struct sFun*)default_value_504));
                come_call_finalizer3(default_value_504,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__279,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__279;
            }
        }
        else {
            __result_obj__280 = come_increment_ref_count(((struct sFun*)default_value_504));
            come_call_finalizer3(default_value_504,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__280,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__280;
        }
    }
    __result_obj__281 = come_increment_ref_count(((struct sFun*)default_value_504));
    come_call_finalizer3(default_value_504,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__281,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__281;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_520;
struct list_item$1CVALUE$ph* prev_it_521;
    it_520=self->head;
    while(it_520!=((void*)0)) {
        prev_it_521=it_520;
        it_520=it_520->next;
        come_call_finalizer3(prev_it_521,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_522;
struct list_item$1CVALUE$ph* prev_it_523;
    it_522=self->head;
    while(it_522!=((void*)0)) {
        prev_it_523=it_522;
        it_522=it_522->next;
        come_call_finalizer3(prev_it_523,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUE$ph* stack_saved_524;
struct list$1void$ph* right_value_objects_525;
struct sType* type_before_526;
void* __right_value398 = (void*)0;
char* c_value_527;
struct sClass* klass_528;
char* class_name_529;
char* fun_name_530;
void* __right_value399 = (void*)0;
struct sType* type2_531;
void* __right_value400 = (void*)0;
char* fun_name2_532;
struct sFun* finalizer_533;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* none_generics_name_534;
void* __right_value403 = (void*)0;
char* generics_fun_name_535;
void* __right_value404 = (void*)0;
struct sGenericsFun* generics_fun_536;
void* __right_value405 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var6 = (void*)0;
char* name_537=0;
_Bool err_538=0;
void* __right_value406 = (void*)0;
int i_539;
void* __right_value407 = (void*)0;
char* new_fun_name_540;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* __dec_obj77;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun_541=0;
char* new_fun_name_542=0;
char* __dec_obj78;
void* __right_value412 = (void*)0;
char* type_name_543;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
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
struct list$1void$ph* o2_saved_544;
struct tuple2$2char$phsType$ph* it_545;
struct tuple2$2char$phsType$ph* multiple_assign_var8 = (void*)0;
char* name_546=0;
struct sType* field_type_547=0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* obj_548;
void* __right_value437 = (void*)0;
struct list$1void$ph* o2_saved_549;
struct tuple2$2char$phsType$ph* it_550;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* name_551=0;
struct sType* field_type_552=0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
char* obj_553;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* type_name_554;
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
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
char* type_name_555;
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
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1void$ph* __dec_obj79;
struct list$1CVALUE$ph* __dec_obj80;
memset(&i_539, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_524=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_525=info->right_value_objects;
    type_before_526=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1void$ph$p_length(type->mGenericsTypes)>0) {
        c_value_527=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_528=type->mClass;
        class_name_529=klass_528->mName;
        fun_name_530="finalize";
        type2_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_531->mHeap=(_Bool)0;
        fun_name2_532=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_530,info,(_Bool)1));
        finalizer_533=((void*)0);
        if(        list$1void$ph$p_length(type->mGenericsTypes)>0) {
            finalizer_533=((struct sFun*)((void*)(__right_value401=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_532))));
            come_call_finalizer3(__right_value401,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            finalizer_533==((void*)0)) {
                none_generics_name_534=(char*)come_increment_ref_count(get_none_generics_name(type2_531->mClass->mName));
                generics_fun_name_535=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_534,fun_name_530));
                generics_fun_536=((struct sGenericsFun*)((void*)(__right_value404=map$2void$phvoid$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_535))));
                come_call_finalizer3(__right_value404,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                generics_fun_536) {
                    multiple_assign_var6=((struct tuple2$2char$phbool$*)(__right_value405=create_generics_fun((char*)come_increment_ref_count(fun_name2_532),generics_fun_536,type,info)));
                    name_537=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    err_538=multiple_assign_var6->v2;
                    come_call_finalizer3(__right_value405,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_538) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_533=((struct sFun*)((void*)(__right_value406=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_537))));
                    come_call_finalizer3(__right_value406,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    (name_537 = come_decrement_ref_count2(name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_534 = come_decrement_ref_count2(none_generics_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_535 = come_decrement_ref_count2(generics_fun_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_539=128-1;            i_539>=1;            i_539--            ){
                new_fun_name_540=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_532,i_539));
                finalizer_533=((struct sFun*)((void*)(__right_value408=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_540))));
                come_call_finalizer3(__right_value408,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                finalizer_533) {
                    __dec_obj77=fun_name2_532;
                    fun_name2_532=(char*)come_increment_ref_count(__builtin_string(new_fun_name_540));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_540 = come_decrement_ref_count2(new_fun_name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_540 = come_decrement_ref_count2(new_fun_name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_533==((void*)0)) {
                finalizer_533=((struct sFun*)((void*)(__right_value410=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_532))));
                come_call_finalizer3(__right_value410,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        if(        finalizer_533==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph$p_length(type->mArrayNum)==0) {
            multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value411=create_finalizer_automatically(type,fun_name_530,info)));
            fun_541=multiple_assign_var7->v1;
            new_fun_name_542=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value411,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj78=fun_name2_532;
            fun_name2_532=(char*)come_increment_ref_count(new_fun_name_542);
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_533=fun_541;
            (new_fun_name_542 = come_decrement_ref_count2(new_fun_name_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_533!=((void*)0)) {
            if(            klass_528->mProtocol&&type->mPointerNum==1) {
                type_name_543=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_527) {
                    add_come_code(info,((char*)(__right_value426=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s, \%s, \%s, \%s, (void*)0)\%s",((char*)(__right_value413=string_to_string(fun_name2_532))),((char*)(__right_value414=string_to_string(c_value_527))),((char*)(__right_value415=string_to_string(c_value_527))),((char*)(__right_value416=string_to_string(type_name_543))),((char*)(__right_value417=string_to_string(c_value_527))),((char*)(__right_value418=string_to_string(c_value_527))),((char*)(__right_value419=string_to_string(type_name_543))),((char*)(__right_value420=string_to_string(c_value_527))),((char*)(__right_value421=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value422=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value423=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value424=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value425=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_543 = come_decrement_ref_count2(type_name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_527) {
                    add_come_code(info,((char*)(__right_value434=xsprintf("come_call_finalizer3(\%s,\%s, \%s, \%s, \%s, \%s, (void*)0)\%s",((char*)(__right_value427=string_to_string(c_value_527))),((char*)(__right_value428=string_to_string(fun_name2_532))),((char*)(__right_value429=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value430=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value431=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value432=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value433=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_528->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_544=(struct list$1void$ph*)come_increment_ref_count((klass_528->mFields)),it_545=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_544)));                !list$1void$ph$p_end((o2_saved_544));                it_545=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_544)))                ){
                    multiple_assign_var8=it_545;
                    name_546=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                    field_type_547=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                    if(                    field_type_547->mHeap&&field_type_547->mPointerNum>0) {
                        obj_548=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value435=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_527,name_546));
                        (__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value437=come_call_cloner(sType_clone, field_type_547))),obj_548,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value437,sType_finalize, 0, 1, 0, 0, (void*)0);
                        (obj_548 = come_decrement_ref_count2(obj_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_546 = come_decrement_ref_count2(name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_544,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_528->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_549=(struct list$1void$ph*)come_increment_ref_count((klass_528->mFields)),it_550=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_549)));                !list$1void$ph$p_end((o2_saved_549));                it_550=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_549)))                ){
                    multiple_assign_var9=it_550;
                    name_551=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    field_type_552=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
                    if(                    field_type_552->mHeap&&field_type_552->mPointerNum>0) {
                        obj_553=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value438=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_527,name_551));
                        (__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value440=come_call_cloner(sType_clone, field_type_552))),obj_553,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
                        (obj_553 = come_decrement_ref_count2(obj_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_551 = come_decrement_ref_count2(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(field_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_549,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                type->mAnyClass) {
                    if(                    klass_528->mProtocol&&type->mPointerNum==1) {
                        type_name_554=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        c_value_527) {
                            add_come_code(info,((char*)(__right_value454=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free */, \%s/* force_delete_*/, (void*)0)\%s",((char*)(__right_value442=string_to_string(c_value_527))),((char*)(__right_value443=string_to_string(c_value_527))),((char*)(__right_value444=string_to_string(type_name_554))),((char*)(__right_value445=string_to_string(c_value_527))),((char*)(__right_value446=string_to_string(c_value_527))),((char*)(__right_value447=string_to_string(type_name_554))),((char*)(__right_value448=string_to_string(c_value_527))),((char*)(__right_value449=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value450=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value451=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value452=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value453=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                            (__right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (type_name_554 = come_decrement_ref_count2(type_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        if(                        c_value_527) {
                            add_come_code(info,((char*)(__right_value461=xsprintf("come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_ */, (void*)0)\%s",((char*)(__right_value455=string_to_string(c_value_527))),((char*)(__right_value456=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value457=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value458=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value459=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value460=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                            (__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (__right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
                else if(                klass_528->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_527) {
                        type_name_555=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value474=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,\%s/*force_delete*/, (void*)0):(void*)0)\%s",((char*)(__right_value463=string_to_string(c_value_527))),((char*)(__right_value464=string_to_string(c_value_527))),((char*)(__right_value465=string_to_string(c_value_527))),((char*)(__right_value466=string_to_string(type_name_555))),((char*)(__right_value467=string_to_string(c_value_527))),((char*)(__right_value468=string_to_string(type_name_555))),((char*)(__right_value469=string_to_string(c_value_527))),((char*)(__right_value470=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value471=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value472=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value473=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (type_name_555 = come_decrement_ref_count2(type_name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_527) {
                        add_come_code(info,((char*)(__right_value481=xsprintf("(\%s = come_decrement_ref_count2(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0))\%s",((char*)(__right_value475=string_to_string(c_value_527))),((char*)(__right_value476=string_to_string(c_value_527))),((char*)(__right_value477=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value478=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value479=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value480=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
        }
        (c_value_527 = come_decrement_ref_count2(c_value_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_531,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name2_532 = come_decrement_ref_count2(fun_name2_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj79=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_525);
    come_call_finalizer3(__dec_obj79,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj80=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_524);
    come_call_finalizer3(__dec_obj80,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(stack_saved_524,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info){
_Bool in_clone_object_556;
void* __right_value482 = (void*)0;
struct sType* type2_557;
char* result_558;
struct sType* result_type_559;
struct list$1CVALUE$ph* stack_saved_560;
struct list$1void$ph* right_value_objects_561;
void* __right_value483 = (void*)0;
char* c_value_562;
struct sClass* klass_563;
char* class_name_564;
char* fun_name_565;
struct sFun* cloner_566;
char* fun_name2_567;
void* __right_value484 = (void*)0;
char* none_generics_name_568;
void* __right_value485 = (void*)0;
struct sType* obj_type_569;
void* __right_value486 = (void*)0;
char* __dec_obj81;
void* __right_value487 = (void*)0;
char* fun_name3_570;
void* __right_value488 = (void*)0;
struct sGenericsFun* generics_fun_571;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var10 = (void*)0;
char* name_574=0;
_Bool err_575=0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__289;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* __dec_obj86;
int i_578;
void* __right_value503 = (void*)0;
char* new_fun_name_579;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
char* __dec_obj87;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var11 = (void*)0;
struct sFun* fun_580=0;
char* new_fun_name_581=0;
char* __dec_obj88;
void* __right_value508 = (void*)0;
char* __dec_obj89;
struct sType* __dec_obj90;
void* __right_value509 = (void*)0;
struct sType* __dec_obj91;
void* __right_value510 = (void*)0;
char* __dec_obj92;
void* __right_value511 = (void*)0;
char* __dec_obj93;
void* __right_value512 = (void*)0;
struct sType* __dec_obj94;
void* __right_value513 = (void*)0;
char* type_name_582;
void* __right_value514 = (void*)0;
char* __dec_obj95;
void* __right_value515 = (void*)0;
char* __dec_obj96;
struct list$1void$ph* __dec_obj97;
struct list$1CVALUE$ph* __dec_obj98;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__290;
fun_name2_567 = (void*)0;
memset(&i_578, 0, sizeof(int));
    in_clone_object_556=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_557=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_558=((void*)0);
    result_type_559=((void*)0);
    stack_saved_560=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_561=info->right_value_objects;
    c_value_562=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_563=type->mClass;
    class_name_564=klass_563->mName;
    fun_name_565="clone";
    cloner_566=((void*)0);
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_568=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_569=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj81=fun_name2_567;
        fun_name2_567=(char*)come_increment_ref_count(create_method_name(obj_type_569,(_Bool)0,fun_name_565,info,(_Bool)1));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_570=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_568,fun_name_565));
        generics_fun_571=((struct sGenericsFun*)((void*)(__right_value488=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_570,((void*)0)))));
        come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_571) {
            multiple_assign_var10=((struct tuple2$2char$phbool$*)(__right_value490=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_567)),generics_fun_571,obj_type_569,info)));
            name_574=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            err_575=multiple_assign_var10->v2;
            come_call_finalizer3(__right_value490,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_575) {
                __result_obj__289 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value499=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 709, "struct tuple2$2sType$phchar$ph", tuple2$2sType$phchar$ph_finalize, tuple2$2sType$phchar$ph_clone, tuple2$2sType$phchar$ph_get_hash_key, tuple2$2sType$phchar$ph_equals)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 709, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string(""))))));
                (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_568 = come_decrement_ref_count2(none_generics_name_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_570 = come_decrement_ref_count2(fun_name3_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_557,sType_finalize, 0, 0, 0, 0, (void*)0);
                (result_558 = come_decrement_ref_count2(result_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_560,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (c_value_562 = come_decrement_ref_count2(c_value_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_567 = come_decrement_ref_count2(fun_name2_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value499,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__289,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__289;
            }
            cloner_566=((struct sFun*)((void*)(__right_value500=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_574))));
            come_call_finalizer3(__right_value500,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_566=((struct sFun*)((void*)(__right_value501=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_567))));
            come_call_finalizer3(__right_value501,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_568 = come_decrement_ref_count2(none_generics_name_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_569,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_570 = come_decrement_ref_count2(fun_name3_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj86=fun_name2_567;
        fun_name2_567=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_565,info,(_Bool)1));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_578=128-1;        i_578>=1;        i_578--        ){
            new_fun_name_579=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_567,i_578));
            cloner_566=((struct sFun*)((void*)(__right_value504=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_579))));
            come_call_finalizer3(__right_value504,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_566) {
                __dec_obj87=fun_name2_567;
                fun_name2_567=(char*)come_increment_ref_count(__builtin_string(new_fun_name_579));
                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_579 = come_decrement_ref_count2(new_fun_name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_579 = come_decrement_ref_count2(new_fun_name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_566==((void*)0)) {
            cloner_566=((struct sFun*)((void*)(__right_value506=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_567))));
            come_call_finalizer3(__right_value506,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_566==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFun$pchar$ph*)(__right_value507=create_cloner_automatically(type,fun_name_565,info)));
        fun_580=multiple_assign_var11->v1;
        new_fun_name_581=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(__right_value507,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj88=fun_name2_567;
        fun_name2_567=(char*)come_increment_ref_count(new_fun_name_581);
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_566=fun_580;
        (new_fun_name_581 = come_decrement_ref_count2(new_fun_name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    type->mAnyOriginalType) {
        __dec_obj89=result_558;
        result_558=(char*)come_increment_ref_count(xsprintf("come_call_cloner((void*)0, %s)",c_value_562));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    cloner_566!=((void*)0)) {
        __dec_obj90=result_type_559;
        result_type_559=(struct sType*)come_increment_ref_count(cloner_566->mResultType);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj91=result_type_559;
        result_type_559=(struct sType*)come_increment_ref_count(solve_generics(result_type_559,type,info));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj92=result_558;
        result_558=(char*)come_increment_ref_count(xsprintf("come_call_cloner(%s, %s)",fun_name2_567,c_value_562));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj93=result_558;
            result_558=(char*)come_increment_ref_count(append_stackframe(result_558,result_type_559,info));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj94=result_type_559;
        result_type_559=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type2_557->mHeap=(_Bool)1;
        type_name_582=(char*)come_increment_ref_count(make_type_name_string(type2_557,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj95=result_558;
        result_558=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_582,c_value_562,info->sname,info->sline,type_name_582));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj96=result_558;
            result_558=(char*)come_increment_ref_count(append_stackframe(result_558,result_type_559,info));
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        (type_name_582 = come_decrement_ref_count2(type_name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj97=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_561);
    come_call_finalizer3(__dec_obj97,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj98=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_560);
    come_call_finalizer3(__dec_obj98,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->in_clone_object=in_clone_object_556;
    __result_obj__290 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value517=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 774, "struct tuple2$2sType$phchar$ph", tuple2$2sType$phchar$ph_finalize, tuple2$2sType$phchar$ph_clone, tuple2$2sType$phchar$ph_get_hash_key, tuple2$2sType$phchar$ph_equals)),(struct sType*)come_increment_ref_count(result_type_559),(char*)come_increment_ref_count(result_558)))));
    come_call_finalizer3(type2_557,sType_finalize, 0, 0, 0, 0, (void*)0);
    (result_558 = come_decrement_ref_count2(result_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_560,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (c_value_562 = come_decrement_ref_count2(c_value_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_567 = come_decrement_ref_count2(fun_name2_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value517,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__290,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__290;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_572;
unsigned int it_573;
void* __result_obj__282;
void* __result_obj__283;
void* __result_obj__284;
void* __result_obj__285;
    hash_572=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_573=hash_572;
    while((_Bool)1) {
        if(        self->item_existance[it_573]) {
            if(            come_call_equals((void*)0, self->keys[it_573], key)) {
                __result_obj__282 = come_increment_ref_count(self->items[it_573]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__282,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__282;
            }
            it_573++;
            if(            it_573>=self->size) {
                it_573=0;
            }
            else if(            it_573==hash_572) {
                __result_obj__283 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__283,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__284,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__285,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__285;
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__286;
void* __right_value495 = (void*)0;
struct tuple2$2sType$phchar$ph* result_576;
void* __right_value496 = (void*)0;
struct sType* __dec_obj82;
void* __right_value497 = (void*)0;
char* __dec_obj83;
struct tuple2$2sType$phchar$ph* __result_obj__287;
    if(    self==(void*)0) {
        __result_obj__286 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__286,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__286;
    }
    result_576=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj82=result_576->v1;
        result_576->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj83=result_576->v2;
        result_576->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__287 = come_increment_ref_count(result_576);
    come_call_finalizer3(result_576,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__287,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_577;
    result_577=0;
    result_577+=int_get_hash_key(((int)self->v1));
    result_577+=int_get_hash_key(((int)self->v2));
    return result_577;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj84;
char* __dec_obj85;
struct tuple2$2sType$phchar$ph* __result_obj__288;
    __dec_obj84=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj85=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__288,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_583;
struct list$1CVALUE$ph* stack_saved_584;
struct list$1void$ph* right_value_objects_585;
struct sClass* klass_586;
char* class_name_587;
char* fun_name_588;
void* __right_value518 = (void*)0;
struct sType* type2_589;
struct sFun* cloner_590;
char* fun_name2_591;
void* __right_value519 = (void*)0;
char* none_generics_name_592;
void* __right_value520 = (void*)0;
struct sType* obj_type_593;
void* __right_value521 = (void*)0;
char* __dec_obj99;
void* __right_value522 = (void*)0;
char* fun_name3_594;
void* __right_value523 = (void*)0;
struct sGenericsFun* generics_fun_595;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_596=0;
_Bool err_597=0;
_Bool __result_obj__291;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
char* __dec_obj100;
int i_598;
void* __right_value529 = (void*)0;
char* new_fun_name_599;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __dec_obj101;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var13 = (void*)0;
struct sFun* fun_600=0;
char* new_fun_name_601=0;
char* __dec_obj102;
struct list$1void$ph* __dec_obj103;
struct list$1CVALUE$ph* __dec_obj104;
_Bool __result_obj__292;
fun_name2_591 = (void*)0;
memset(&i_598, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_583=((void*)0);
    stack_saved_584=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_585=info->right_value_objects;
    klass_586=type->mClass;
    class_name_587=klass_586->mName;
    fun_name_588="equals";
    type2_589=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_589->mHeap=(_Bool)0;
    cloner_590=((void*)0);
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_592=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_593=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj99=fun_name2_591;
        fun_name2_591=(char*)come_increment_ref_count(create_method_name(obj_type_593,(_Bool)0,fun_name_588,info,(_Bool)1));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_594=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_592,fun_name_588));
        generics_fun_595=((struct sGenericsFun*)((void*)(__right_value523=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_594,((void*)0)))));
        come_call_finalizer3(__right_value523,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_595) {
            multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value525=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_591)),generics_fun_595,obj_type_593,info)));
            name_596=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            err_597=multiple_assign_var12->v2;
            come_call_finalizer3(__right_value525,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_597) {
                __result_obj__291 = (_Bool)0;
                (name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_592 = come_decrement_ref_count2(none_generics_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_594 = come_decrement_ref_count2(fun_name3_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_583 = come_decrement_ref_count2(result_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_584,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_589,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_591 = come_decrement_ref_count2(fun_name2_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__291;
            }
            else {
                cloner_590=((struct sFun*)((void*)(__right_value526=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_596))));
                come_call_finalizer3(__right_value526,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            (name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_590=((struct sFun*)((void*)(__right_value527=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_591))));
            come_call_finalizer3(__right_value527,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_592 = come_decrement_ref_count2(none_generics_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_594 = come_decrement_ref_count2(fun_name3_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj100=fun_name2_591;
        fun_name2_591=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_588,info,(_Bool)1));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_598=128-1;        i_598>=1;        i_598--        ){
            new_fun_name_599=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_591,i_598));
            cloner_590=((struct sFun*)((void*)(__right_value530=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_599))));
            come_call_finalizer3(__right_value530,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_590) {
                __dec_obj101=fun_name2_591;
                fun_name2_591=(char*)come_increment_ref_count(__builtin_string(new_fun_name_599));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_599 = come_decrement_ref_count2(new_fun_name_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_599 = come_decrement_ref_count2(new_fun_name_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_590==((void*)0)) {
            cloner_590=((struct sFun*)((void*)(__right_value532=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_591))));
            come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_590==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var13=((struct tuple2$2sFun$pchar$ph*)(__right_value533=create_equals_automatically(type,fun_name_588,info)));
        fun_600=multiple_assign_var13->v1;
        new_fun_name_601=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        come_call_finalizer3(__right_value533,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj102=fun_name2_591;
        fun_name2_591=(char*)come_increment_ref_count(new_fun_name_601);
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_590=fun_600;
        (new_fun_name_601 = come_decrement_ref_count2(new_fun_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj103=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_585);
    come_call_finalizer3(__dec_obj103,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj104=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_584);
    come_call_finalizer3(__dec_obj104,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__292 = (_Bool)1;
    (result_583 = come_decrement_ref_count2(result_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_584,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_589,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_591 = come_decrement_ref_count2(fun_name2_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__292;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_602;
struct list$1CVALUE$ph* stack_saved_603;
struct list$1void$ph* right_value_objects_604;
struct sClass* klass_605;
char* class_name_606;
char* fun_name_607;
void* __right_value534 = (void*)0;
struct sType* type2_608;
struct sFun* cloner_609;
char* fun_name2_610;
void* __right_value535 = (void*)0;
char* none_generics_name_611;
void* __right_value536 = (void*)0;
struct sType* obj_type_612;
void* __right_value537 = (void*)0;
char* __dec_obj105;
void* __right_value538 = (void*)0;
char* fun_name3_613;
void* __right_value539 = (void*)0;
struct sGenericsFun* generics_fun_614;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var14 = (void*)0;
char* name_615=0;
_Bool err_616=0;
_Bool __result_obj__293;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* __dec_obj106;
int i_617;
void* __right_value545 = (void*)0;
char* new_fun_name_618;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* __dec_obj107;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var15 = (void*)0;
struct sFun* fun_619=0;
char* new_fun_name_620=0;
char* __dec_obj108;
struct list$1void$ph* __dec_obj109;
struct list$1CVALUE$ph* __dec_obj110;
_Bool __result_obj__294;
fun_name2_610 = (void*)0;
memset(&i_617, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_602=((void*)0);
    stack_saved_603=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_604=info->right_value_objects;
    klass_605=type->mClass;
    class_name_606=klass_605->mName;
    fun_name_607="operator_equals";
    type2_608=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_608->mHeap=(_Bool)0;
    cloner_609=((void*)0);
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_611=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_612=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj105=fun_name2_610;
        fun_name2_610=(char*)come_increment_ref_count(create_method_name(obj_type_612,(_Bool)0,fun_name_607,info,(_Bool)1));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_613=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_611,fun_name_607));
        generics_fun_614=((struct sGenericsFun*)((void*)(__right_value539=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_613,((void*)0)))));
        come_call_finalizer3(__right_value539,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_614) {
            multiple_assign_var14=((struct tuple2$2char$phbool$*)(__right_value541=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_610)),generics_fun_614,obj_type_612,info)));
            name_615=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            err_616=multiple_assign_var14->v2;
            come_call_finalizer3(__right_value541,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_616) {
                __result_obj__293 = (_Bool)0;
                (name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_611 = come_decrement_ref_count2(none_generics_name_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_613 = come_decrement_ref_count2(fun_name3_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_602 = come_decrement_ref_count2(result_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_603,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_608,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_610 = come_decrement_ref_count2(fun_name2_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__293;
            }
            cloner_609=((struct sFun*)((void*)(__right_value542=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_615))));
            come_call_finalizer3(__right_value542,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_609=((struct sFun*)((void*)(__right_value543=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_610))));
            come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_611 = come_decrement_ref_count2(none_generics_name_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_613 = come_decrement_ref_count2(fun_name3_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj106=fun_name2_610;
        fun_name2_610=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_607,info,(_Bool)1));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_617=128-1;        i_617>=1;        i_617--        ){
            new_fun_name_618=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_610,i_617));
            cloner_609=((struct sFun*)((void*)(__right_value546=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_618))));
            come_call_finalizer3(__right_value546,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_609) {
                __dec_obj107=fun_name2_610;
                fun_name2_610=(char*)come_increment_ref_count(__builtin_string(new_fun_name_618));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_618 = come_decrement_ref_count2(new_fun_name_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_618 = come_decrement_ref_count2(new_fun_name_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_609==((void*)0)) {
            cloner_609=((struct sFun*)((void*)(__right_value548=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_610))));
            come_call_finalizer3(__right_value548,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_609==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var15=((struct tuple2$2sFun$pchar$ph*)(__right_value549=create_operator_equals_automatically(type,fun_name_607,info)));
        fun_619=multiple_assign_var15->v1;
        new_fun_name_620=(char*)come_increment_ref_count(multiple_assign_var15->v2);
        come_call_finalizer3(__right_value549,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj108=fun_name2_610;
        fun_name2_610=(char*)come_increment_ref_count(new_fun_name_620);
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_609=fun_619;
        (new_fun_name_620 = come_decrement_ref_count2(new_fun_name_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj109=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_604);
    come_call_finalizer3(__dec_obj109,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj110=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_603);
    come_call_finalizer3(__dec_obj110,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__294 = (_Bool)1;
    (result_602 = come_decrement_ref_count2(result_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_603,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_608,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_610 = come_decrement_ref_count2(fun_name2_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__294;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_621;
struct list$1CVALUE$ph* stack_saved_622;
struct list$1void$ph* right_value_objects_623;
struct sClass* klass_624;
char* class_name_625;
char* fun_name_626;
void* __right_value550 = (void*)0;
struct sType* type2_627;
struct sFun* cloner_628;
char* fun_name2_629;
void* __right_value551 = (void*)0;
char* none_generics_name_630;
void* __right_value552 = (void*)0;
struct sType* obj_type_631;
void* __right_value553 = (void*)0;
char* __dec_obj111;
void* __right_value554 = (void*)0;
char* fun_name3_632;
void* __right_value555 = (void*)0;
struct sGenericsFun* generics_fun_633;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var16 = (void*)0;
char* name_634=0;
_Bool err_635=0;
_Bool __result_obj__295;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
char* __dec_obj112;
int i_636;
void* __right_value561 = (void*)0;
char* new_fun_name_637;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* __dec_obj113;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var17 = (void*)0;
struct sFun* fun_638=0;
char* new_fun_name_639=0;
char* __dec_obj114;
struct list$1void$ph* __dec_obj115;
struct list$1CVALUE$ph* __dec_obj116;
_Bool __result_obj__296;
fun_name2_629 = (void*)0;
memset(&i_636, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_621=((void*)0);
    stack_saved_622=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_623=info->right_value_objects;
    klass_624=type->mClass;
    class_name_625=klass_624->mName;
    fun_name_626="operator_not_equals";
    type2_627=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_627->mHeap=(_Bool)0;
    cloner_628=((void*)0);
    if(    list$1void$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_630=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_631=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj111=fun_name2_629;
        fun_name2_629=(char*)come_increment_ref_count(create_method_name(obj_type_631,(_Bool)0,fun_name_626,info,(_Bool)1));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_632=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_630,fun_name_626));
        generics_fun_633=((struct sGenericsFun*)((void*)(__right_value555=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_632,((void*)0)))));
        come_call_finalizer3(__right_value555,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_633) {
            multiple_assign_var16=((struct tuple2$2char$phbool$*)(__right_value557=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_629)),generics_fun_633,obj_type_631,info)));
            name_634=(char*)come_increment_ref_count(multiple_assign_var16->v1);
            err_635=multiple_assign_var16->v2;
            come_call_finalizer3(__right_value557,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_635) {
                __result_obj__295 = (_Bool)0;
                (name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_630 = come_decrement_ref_count2(none_generics_name_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(obj_type_631,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name3_632 = come_decrement_ref_count2(fun_name3_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_621 = come_decrement_ref_count2(result_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(stack_saved_622,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_627,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name2_629 = come_decrement_ref_count2(fun_name2_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__295;
            }
            cloner_628=((struct sFun*)((void*)(__right_value558=map$2void$phvoid$ph$p_operator_load_element(info->funcs,name_634))));
            come_call_finalizer3(__right_value558,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            (name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_628=((struct sFun*)((void*)(__right_value559=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_629))));
            come_call_finalizer3(__right_value559,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        (none_generics_name_630 = come_decrement_ref_count2(none_generics_name_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_631,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_632 = come_decrement_ref_count2(fun_name3_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj112=fun_name2_629;
        fun_name2_629=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_626,info,(_Bool)1));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_636=128-1;        i_636>=1;        i_636--        ){
            new_fun_name_637=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_629,i_636));
            cloner_628=((struct sFun*)((void*)(__right_value562=map$2void$phvoid$ph$p_operator_load_element(info->funcs,new_fun_name_637))));
            come_call_finalizer3(__right_value562,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            cloner_628) {
                __dec_obj113=fun_name2_629;
                fun_name2_629=(char*)come_increment_ref_count(__builtin_string(new_fun_name_637));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_637 = come_decrement_ref_count2(new_fun_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_637 = come_decrement_ref_count2(new_fun_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_628==((void*)0)) {
            cloner_628=((struct sFun*)((void*)(__right_value564=map$2void$phvoid$ph$p_operator_load_element(info->funcs,fun_name2_629))));
            come_call_finalizer3(__right_value564,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
    if(    cloner_628==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var17=((struct tuple2$2sFun$pchar$ph*)(__right_value565=create_operator_not_equals_automatically(type,fun_name_626,info)));
        fun_638=multiple_assign_var17->v1;
        new_fun_name_639=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        come_call_finalizer3(__right_value565,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj114=fun_name2_629;
        fun_name2_629=(char*)come_increment_ref_count(new_fun_name_639);
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_628=fun_638;
        (new_fun_name_639 = come_decrement_ref_count2(new_fun_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj115=info->right_value_objects;
    info->right_value_objects=(struct list$1void$ph*)come_increment_ref_count(right_value_objects_623);
    come_call_finalizer3(__dec_obj115,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj116=info->stack;
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_622);
    come_call_finalizer3(__dec_obj116,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__296 = (_Bool)1;
    (result_621 = come_decrement_ref_count2(result_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(stack_saved_622,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_627,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_629 = come_decrement_ref_count2(fun_name2_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__296;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_640;
struct list$1void$ph* right_value_objects_641;
int n_642;
struct list$1void$ph* o2_saved_643;
struct sRightValueObject* it_644;
struct sType* type_645;
void* __right_value566 = (void*)0;
struct sType* type2_646;
void* __right_value567 = (void*)0;
struct sType* __dec_obj117;
void* __right_value568 = (void*)0;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_640=(_Bool)0;
    right_value_objects_641=info->right_value_objects;
    n_642=0;
    for(    o2_saved_643=(right_value_objects_641),it_644=((struct sRightValueObject*)list$1void$ph$p_begin((o2_saved_643)));    !list$1void$ph$p_end((o2_saved_643));    it_644=((struct sRightValueObject*)list$1void$ph$p_next((o2_saved_643)))    ){
        if(        it_644&&!it_644->mFreed) {
            if(            string_operator_equals(it_644->mFunName,info->come_fun->mName)&&it_644->mBlockLevel==info->block_level&&!it_644->mStored) {
                type_645=(struct sType*)come_increment_ref_count(it_644->mType);
                type2_646=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_645));
                if(                info->generics_type) {
                    __dec_obj117=type_645;
                    type_645=(struct sType*)come_increment_ref_count(solve_generics(type2_646,info->generics_type,info));
                    come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                free_object(((struct sType*)(__right_value568=come_call_cloner(sType_clone, type_645))),it_644->mVarName,!it_644->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
                it_644->mFreed=(_Bool)1;
                free_right_value_640=(_Bool)1;
                come_call_finalizer3(type_645,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_646,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_642++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_647;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sVar* var__648;
struct sVar* __result_obj__297;
struct sVar* __result_obj__298;
    it_647=table;
    while(it_647) {
        var__648=((struct sVar*)((void*)(__right_value570=map$2void$phvoid$ph$p_operator_load_element(it_647->mVars,((char*)(__right_value569=__builtin_string(name)))))));
        (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value570,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__648) {
            __result_obj__297 = var__648;
            return __result_obj__297;
        }
        it_647=it_647->mParent;
    }
    __result_obj__298 = ((void*)0);
    return __result_obj__298;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2void$phvoid$ph* o2_saved_649;
char* it_652;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sVar* p_655;
struct sType* type_656;
struct sClass* klass_657;
void* __right_value573 = (void*)0;
struct sType* type2_658;
void* __right_value574 = (void*)0;
struct sType* type2_659;
void* __right_value575 = (void*)0;
char* c_value_660;
void* __right_value576 = (void*)0;
struct sType* type2_661;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_649=(struct map$2void$phvoid$ph*)come_increment_ref_count((table->mVars)),it_652=((char*)map$2void$phvoid$ph$p_begin((o2_saved_649)));    !map$2void$phvoid$ph$p_end((o2_saved_649));    it_652=((char*)map$2void$phvoid$ph$p_next((o2_saved_649)))    ){
        p_655=((struct sVar*)((void*)(__right_value572=map$2void$phvoid$ph$p_operator_load_element(table->mVars,((char*)(__right_value571=__builtin_string(it_652)))))));
        (__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value572,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type_656=p_655->mType;
        klass_657=type_656->mClass;
        if(        type_656->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_655->mCValueName,p_655->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_655->mCValueName,p_655->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_655->mCValueName!=((void*)0)&&string_operator_equals(p_655->mCValueName,ret_value->mCValueName)&&type_656->mHeap) {
            type2_658=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_656));
            free_object(type2_658,p_655->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            come_call_finalizer3(type2_658,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        type_656->mHeap&&p_655->mCValueName) {
            type2_659=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_656));
            free_object(type2_659,p_655->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer3(type2_659,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        klass_657->mStruct&&p_655->mCValueName&&type_656->mAllocaValue&&!type_656->mNoCallingDestructor) {
            c_value_660=(char*)come_increment_ref_count(xsprintf("(&%s)",p_655->mCValueName));
            type2_661=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_656));
            type2_661->mPointerNum++;
            free_object(type2_661,c_value_660,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            (c_value_660 = come_decrement_ref_count2(c_value_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type2_661,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_649,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_650;
void* __result_obj__299;
void* __result_obj__300;
void* result_651;
void* __result_obj__301;
result_650 = (void*)0;
result_651 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_650,0,sizeof(void*));
        __result_obj__299 = result_650;
        return __result_obj__299;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__300 = self->key_list->it->item;
        return __result_obj__300;
    }
    memset(&result_651,0,sizeof(void*));
    __result_obj__301 = result_651;
    return __result_obj__301;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_653;
void* __result_obj__302;
void* __result_obj__303;
void* result_654;
void* __result_obj__304;
result_653 = (void*)0;
result_654 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_653,0,sizeof(void*));
        __result_obj__302 = result_653;
        return __result_obj__302;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__303 = self->key_list->it->item;
        return __result_obj__303;
    }
    memset(&result_654,0,sizeof(void*));
    __result_obj__304 = result_654;
    return __result_obj__304;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_662;
int i_663;
    for(    i_662=0;    i_662<self->size;    i_662++    ){
        if(        self->item_existance[i_662]) {
            if(            1) {
                come_call_finalizer3(self->items[i_662],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_663=0;    i_663<self->size;    i_663++    ){
        if(        self->item_existance[i_663]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_663],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_664;
struct list_item$1void$p* prev_it_665;
    it_664=self->head;
    while(it_664!=((void*)0)) {
        prev_it_665=it_664;
        it_664=it_664->next;
        come_call_finalizer3(prev_it_665,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_666;
    if(    gComeGC||gComeC) {
        return;
    }
    it_666=info->lv_table;
    if(    it_666==info->come_fun->mBlock->mVarTable) {
        free_objects(it_666,ret_value,info);
    }
    else {
        while(it_666!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_666,ret_value,info);
            it_666=it_666->mParent;
        }
        free_objects(it_666,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_667;
struct sVarTable* current_loop_vtable_668;
struct sVarTable* it_669;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_667=((void*)0);
    current_loop_vtable_668=info->current_loop_vtable;
    if(    current_loop_vtable_668!=((void*)0)) {
        it_669=info->lv_table;
        while(it_669!=current_loop_vtable_668) {
            free_objects(it_669,ret_value_667,info);
            it_669=it_669->mParent;
        }
        free_objects(it_669,ret_value_667,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __result_obj__305;
void* __right_value582 = (void*)0;
char* var_name_671;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
char* __result_obj__306;
void* __right_value591 = (void*)0;
char* __result_obj__307;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result_obj__305 = come_increment_ref_count(((char*)(__right_value581=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value577=string_to_string(info->sname))),((char*)(__right_value578=int_to_string(info->sline))),((char*)(__right_value579=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value580=charp_to_string(c_value)))))));
            (__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__305 = come_decrement_ref_count2(__result_obj__305, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__305;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_670=0;
        ++n_670;
        var_name_671=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_670));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value583=make_define_var(type,var_name_671,(_Bool)0,info))));
        (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __result_obj__306 = come_increment_ref_count(((char*)(__right_value590=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value584=string_to_string(info->sname))),((char*)(__right_value585=int_to_string(info->sline))),((char*)(__right_value586=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value587=string_to_string(var_name_671))),((char*)(__right_value588=charp_to_string(c_value))),((char*)(__right_value589=string_to_string(var_name_671)))))));
        (var_name_671 = come_decrement_ref_count2(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__306 = come_decrement_ref_count2(__result_obj__306, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__306;
        (var_name_671 = come_decrement_ref_count2(var_name_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__307 = come_increment_ref_count(((char*)(__right_value591=__builtin_string(c_value))));
    (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__307 = come_decrement_ref_count2(__result_obj__307, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__307;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2void$phvoid$ph* o2_saved_672;
char* it_673;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sVar* p_674;
struct sType* type_675;
struct sClass* klass_676;
_Bool __result_obj__308;
_Bool __result_obj__309;
_Bool __result_obj__310;
_Bool __result_obj__311;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_672=(struct map$2void$phvoid$ph*)come_increment_ref_count((table->mVars)),it_673=((char*)map$2void$phvoid$ph$p_begin((o2_saved_672)));    !map$2void$phvoid$ph$p_end((o2_saved_672));    it_673=((char*)map$2void$phvoid$ph$p_next((o2_saved_672)))    ){
        p_674=((struct sVar*)((void*)(__right_value593=map$2void$phvoid$ph$p_operator_load_element(table->mVars,((char*)(__right_value592=__builtin_string(it_673)))))));
        (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value593,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type_675=p_674->mType;
        klass_676=type_675->mClass;
        if(        type_675->mChannel) {
            __result_obj__308 = (_Bool)1;
            come_call_finalizer3(o2_saved_672,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__308;
        }
        else if(        ret_value!=((void*)0)&&p_674->mCValueName!=((void*)0)&&string_operator_equals(p_674->mCValueName,ret_value->mCValueName)&&type_675->mHeap) {
            __result_obj__309 = (_Bool)1;
            come_call_finalizer3(o2_saved_672,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__309;
        }
        else if(        type_675->mHeap&&p_674->mCValueName) {
            __result_obj__310 = (_Bool)1;
            come_call_finalizer3(o2_saved_672,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__310;
        }
        else if(        klass_676->mStruct&&p_674->mCValueName&&type_675->mAllocaValue&&!type_675->mNoCallingDestructor) {
            __result_obj__311 = (_Bool)1;
            come_call_finalizer3(o2_saved_672,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__311;
        }
    }
    come_call_finalizer3(o2_saved_672,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_677;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_677=info->lv_table;
    if(    it_677==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_677,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_677!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_677,ret_value,info)) {
                return (_Bool)1;
            }
            it_677=it_677->mParent;
        }
        if(        existance_free_objects(it_677,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1void$ph* right_value_objects_678;
struct list$1void$ph* o2_saved_679;
struct sRightValueObject* it_680;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_678=info->right_value_objects;
    for(    o2_saved_679=(right_value_objects_678),it_680=((struct sRightValueObject*)list$1void$ph$p_begin((o2_saved_679)));    !list$1void$ph$p_end((o2_saved_679));    it_680=((struct sRightValueObject*)list$1void$ph$p_next((o2_saved_679)))    ){
        if(        it_680&&!it_680->mFreed) {
            if(            string_operator_equals(it_680->mFunName,info->come_fun->mName)&&it_680->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

