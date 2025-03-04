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
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
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
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
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
int come_main_v1(int argc, char** argv);
int main(int argc, char** argv);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sModule* sModule_initialize(struct sModule* self);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self);
static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self);
static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item);
static void list$1void$p_finalize(struct list$1void$p* self);
static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self);
static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
// uniq global variable
void* gComeFunResultObject=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

void* wildcard;

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_2;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 186, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_2=gNumComeStackFrame-2;    i_2>=0;    i_2--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    (__right_value2 = come_decrement_ref_count2(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

void stackframe(){
int i_3;
    for(    i_3=gNumComeStackFrame-1;    i_3>=0;    i_3--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_3],gComeStackFrameSLine[i_3],gComeStackFrameID[i_3]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value3 = (void*)0;
char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer)));
    (__right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result1__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result2__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result2__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result2__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result3__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result3__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result3__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_4;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_4=0;    i_4<gHeapPages.mSizePages;    i_4++    ){
        gHeapPages.mPages[i_4]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_5;
int n_6;
_Bool flag_7;
int i_8;
struct sMemHeaderTiny* it_9;
int n_10;
int i_11;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_5=gAllocMem;
        n_6=0;
        while(it_5) {
            n_6++;
            flag_7=(_Bool)0;
            printf("#%d ",n_6);
            if(            it_5->class_name) {
                printf("%p (%s): ",(char*)it_5+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_5->class_name);
            }
            for(            i_8=0;            i_8<16;            i_8++            ){
                if(                it_5->sname[i_8]) {
                    printf("%s %d #%d, ",it_5->sname[i_8],it_5->sline[i_8],it_5->id[i_8]);
                    flag_7=(_Bool)1;
                }
            }
            if(            flag_7) {
                puts("");
            }
            it_5=it_5->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_6,gNumAlloc,gNumFree);
    }
    else {
        it_9=(struct sMemHeaderTiny*)gAllocMem;
        n_10=0;
        while(it_9) {
            n_10++;
            if(            it_9->class_name) {
                printf("#%d %p (%s) %s %d\n",n_10,(char*)it_9+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_9->class_name,it_9->sname,it_9->sline);
            }
            it_9=it_9->next;
        }
        if(        n_10>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_10,gNumAlloc,gNumFree);
        }
    }
    for(    i_11=0;    i_11<gHeapPages.mSizePages;    i_11++    ){
        free(gHeapPages.mPages[i_11]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_12;
unsigned long  int free_area_13;
int new_size_pages_14;
char** new_pages_15;
int i_16;
void* __result4__;
    result_12=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_12=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_12,0,size);
        }
        if(        result_12==((void*)0)) {
            free_area_13=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_13) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_14=gHeapPages.mSizePages*2;
                    new_pages_15=calloc(1,sizeof(char*)*new_size_pages_14);
                    i_16=0;
                    for(                    ;                    i_16<gHeapPages.mSizePages;                    i_16++                    ){
                        new_pages_15[i_16]=gHeapPages.mPages[i_16];
                    }
                    for(                    ;                    i_16<new_size_pages_14;                    i_16++                    ){
                        new_pages_15[i_16]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_15;
                    gHeapPages.mSizePages=new_size_pages_14;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_12=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_12=calloc(1,size);
    }
    __result4__ = gComeFunResultObject = __result_obj__ = result_12;
    gComeFunResultObject = (void*)0;
    return __result4__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
void* result_17;
struct sMemHeader* it_18;
void* __result5__;
void* result_19;
struct sMemHeaderTiny* it_20;
void* __result6__;
    if(    gComeDebugLib) {
        result_17=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_18=result_17;
        it_18->allocated=177783;
        it_18->size=size+sizeof(struct sMemHeader);
        it_18->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_18->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_18->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_18->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_18->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_18->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_18->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_18->next=gAllocMem;
        it_18->prev=((void*)0);
        it_18->class_name=class_name;
        it_18->finalizer_fun=finalizer_fun;
        it_18->cloner_fun=cloner_fun;
        it_18->get_hash_key_fun=get_hash_key_fun;
        it_18->equaler_fun=equaler_fun;
        if(        gAllocMem) {
            gAllocMem->prev=it_18;
        }
        gAllocMem=it_18;
        gNumAlloc++;
        __result5__ = gComeFunResultObject = __result_obj__ = (char*)result_17+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result5__;
    }
    else {
        result_19=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_20=result_19;
        it_20->allocated=177783;
        it_20->class_name=class_name;
        it_20->finalizer_fun=finalizer_fun;
        it_20->cloner_fun=cloner_fun;
        it_20->get_hash_key_fun=get_hash_key_fun;
        it_20->equaler_fun=equaler_fun;
        it_20->sname=sname;
        it_20->sline=sline;
        it_20->size=size+sizeof(struct sMemHeaderTiny);
        it_20->free_next=((void*)0);
        it_20->next=(struct sMemHeaderTiny*)gAllocMem;
        it_20->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_20;
        }
        gAllocMem=(struct sMemHeader*)it_20;
        gNumAlloc++;
        __result6__ = gComeFunResultObject = __result_obj__ = (char*)result_19+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result6__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_21;
struct sMemHeader* prev_it_22;
struct sMemHeader* next_it_23;
unsigned long  int size_24;
struct sMemHeaderTiny* it_25;
struct sMemHeaderTiny* prev_it_26;
struct sMemHeaderTiny* next_it_27;
unsigned long  int size_28;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_21=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_21->allocated!=177783) {
                return;
            }
            it_21->allocated=0;
            prev_it_22=it_21->prev;
            next_it_23=it_21->next;
            if(            gAllocMem==it_21) {
                gAllocMem=next_it_23;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_22) {
                    prev_it_22->next=next_it_23;
                }
                if(                next_it_23) {
                    next_it_23->prev=prev_it_22;
                }
            }
            size_24=it_21->size;
            if(            size_24<2048*2) {
                if(                gHeapPages.mFreeMem[size_24]==((void*)0)) {
                    it_21->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_24]=(struct sMemHeaderTiny*)it_21;
                }
                else {
                    it_21->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_24];
                    gHeapPages.mFreeMem[size_24]=(struct sMemHeaderTiny*)it_21;
                }
            }
            else {
                free(it_21);
            }
            gNumFree++;
        }
        else {
            it_25=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_25->allocated!=177783) {
                return;
            }
            it_25->allocated=0;
            prev_it_26=it_25->prev;
            next_it_27=it_25->next;
            if(            gAllocMem==it_25) {
                gAllocMem=(struct sMemHeader*)next_it_27;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_26) {
                    prev_it_26->next=next_it_27;
                }
                if(                next_it_27) {
                    next_it_27->prev=prev_it_26;
                }
            }
            size_28=it_25->size;
            if(            size_28<2048*2) {
                if(                gHeapPages.mFreeMem[size_28]==((void*)0)) {
                    it_25->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_28]=it_25;
                }
                else {
                    it_25->free_next=gHeapPages.mFreeMem[size_28];
                    gHeapPages.mFreeMem[size_28]=it_25;
                }
            }
            else {
                free(it_25);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_29;
char* __result7__;
struct sMemHeaderTiny* it_30;
char* __result8__;
    if(    gComeDebugLib) {
        it_29=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_29->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_29);
            exit(2);
        }
        __result7__ = gComeFunResultObject = __result_obj__ = it_29->class_name;
        gComeFunResultObject = (void*)0;
        return __result7__;
    }
    else {
        it_30=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_30->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_30);
            exit(2);
        }
        __result8__ = gComeFunResultObject = __result_obj__ = it_30->class_name;
        gComeFunResultObject = (void*)0;
        return __result8__;
    }
}

void* come_get_finalizer(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_31;
void* __result9__;
void* __result10__;
struct sMemHeaderTiny* it_32;
void* __result11__;
void* __result12__;
    if(    gComeDebugLib) {
        it_31=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_31->allocated!=177783) {
            __result9__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result9__;
        }
        __result10__ = gComeFunResultObject = __result_obj__ = it_31->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result10__;
    }
    else {
        it_32=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_32->allocated!=177783) {
            __result11__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result11__;
        }
        __result12__ = gComeFunResultObject = __result_obj__ = it_32->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result12__;
    }
}

void* come_get_cloner(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_33;
void* __result13__;
void* __result14__;
struct sMemHeaderTiny* it_34;
void* __result15__;
void* __result16__;
    if(    gComeDebugLib) {
        it_33=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_33->allocated!=177783) {
            __result13__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result13__;
        }
        __result14__ = gComeFunResultObject = __result_obj__ = it_33->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result14__;
    }
    else {
        it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_34->allocated!=177783) {
            __result15__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result15__;
        }
        __result16__ = gComeFunResultObject = __result_obj__ = it_34->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result16__;
    }
}

void* come_get_hash_key(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_35;
void* __result17__;
void* __result18__;
struct sMemHeaderTiny* it_36;
void* __result19__;
void* __result20__;
    if(    gComeDebugLib) {
        it_35=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_35->allocated!=177783) {
            __result17__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result17__;
        }
        __result18__ = gComeFunResultObject = __result_obj__ = it_35->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result18__;
    }
    else {
        it_36=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_36->allocated!=177783) {
            __result19__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result19__;
        }
        __result20__ = gComeFunResultObject = __result_obj__ = it_36->get_hash_key_fun;
        gComeFunResultObject = (void*)0;
        return __result20__;
    }
}

void* come_get_equaler(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_37;
void* __result21__;
void* __result22__;
struct sMemHeaderTiny* it_38;
void* __result23__;
void* __result24__;
    if(    gComeDebugLib) {
        it_37=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_37->allocated!=177783) {
            __result21__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result21__;
        }
        __result22__ = gComeFunResultObject = __result_obj__ = it_37->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result22__;
    }
    else {
        it_38=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_38->allocated!=177783) {
            __result23__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result23__;
        }
        __result24__ = gComeFunResultObject = __result_obj__ = it_38->equaler_fun;
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* __result_obj__=(void*)0;
char* mem_39;
unsigned long  int* ref_count_40;
unsigned long  int* size2_41;
void* __result25__;
    mem_39=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name,finalizer_fun,cloner_fun,get_hash_key_fun,equaler_fun);
    ref_count_40=(unsigned long  int*)mem_39;
    *ref_count_40=0;
    size2_41=(unsigned long  int*)(mem_39+sizeof(unsigned long  int));
    *size2_41=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result25__ = gComeFunResultObject = __result_obj__ = mem_39+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_42;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_42=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_42);
}

void come_free(void* mem){
unsigned long  int* ref_count_43;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_43=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_43);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result26__;
char* mem_44;
unsigned long  int* size_p_45;
unsigned long  int size_46;
void* finalizer_fun_47;
void* cloner_fun_48;
void* get_hash_key_fun_49;
void* equaler_fun_50;
void* result_51;
void* __result27__;
    if(    !block) {
        __result26__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result26__;
    }
    mem_44=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_45=(unsigned long  int*)(mem_44+sizeof(unsigned long  int));
    size_46=*size_p_45-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    finalizer_fun_47=come_get_finalizer(block);
    cloner_fun_48=come_get_cloner(block);
    get_hash_key_fun_49=come_get_hash_key(block);
    equaler_fun_50=come_get_equaler(block);
    result_51=come_calloc(1,size_46,sname,sline,class_name,finalizer_fun_47,cloner_fun_48,get_hash_key_fun_49,equaler_fun_50);
    memcpy(result_51,block,size_46);
    __result27__ = gComeFunResultObject = __result_obj__ = result_51;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result28__;
unsigned long  int* ref_count_52;
void* __result29__;
    if(    mem==((void*)0)) {
        __result28__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result28__;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_52)++;
    __result29__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result29__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result30__;
unsigned long  int* ref_count_53;
void* __result31__;
    if(    mem==((void*)0)) {
        __result30__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result30__;
    }
    ref_count_53=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_53);
    __result31__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result32__;
unsigned long  int* ref_count_54;
unsigned long  int count_55;
void (*finalizer_56)(void*);
void* __result33__;
void* __result34__;
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result32__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result32__;
    }
    ref_count_54=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_54)--;
    }
    count_55=*ref_count_54;
    if(    !no_free&&(count_55<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_56=protocol_fun;
            finalizer_56(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result33__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
    __result34__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result35__;
void* __result36__;
unsigned long  int* ref_count_57;
unsigned long  int count_58;
void (*finalizer_59)(void*);
void* __result37__;
void* __result38__;
memset(&finalizer_59, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result35__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result35__;
        }
    }
    if(    mem==((void*)0)) {
        __result36__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result36__;
    }
    ref_count_57=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_57)--;
    }
    count_58=*ref_count_57;
    if(    !no_free&&(count_58<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_59=protocol_fun;
            finalizer_59(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result37__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result37__;
    }
    __result38__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result38__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* fun2_60;
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
void (*finalizer_63)(void*);
void (*finalizer_64)(void*);
unsigned long  int* ref_count_65;
unsigned long  int count_66;
void* fun2_67;
void (*finalizer_68)(void*);
void (*finalizer_69)(void*);
void (*finalizer_70)(void*);
void (*finalizer_71)(void*);
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_60=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_61=protocol_fun;
                finalizer_61(protocol_obj);
            }
            finalizer_62=fun;
            finalizer_62(mem);
        }
        else if(        fun2_60) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_63=protocol_fun;
                finalizer_63(protocol_obj);
            }
            finalizer_64=fun2_60;
            finalizer_64(mem);
        }
    }
    else {
        ref_count_65=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_65)--;
        }
        count_66=*ref_count_65;
        if(        !no_free&&(count_66<=0||force_delete_)) {
            if(            mem) {
                fun2_67=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_68=protocol_fun;
                        finalizer_68(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_69=fun;
                        finalizer_69(mem);
                    }
                }
                else if(                fun2_67) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_70=protocol_fun;
                        finalizer_70(protocol_obj);
                    }
                    finalizer_71=fun2_67;
                    finalizer_71(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_72;
void (*finalizer_73)(void*);
void (*finalizer_74)(void*);
void (*finalizer_75)(void*);
void (*finalizer_76)(void*);
unsigned long  int* ref_count_77;
unsigned long  int count_78;
void* fun2_79;
void (*finalizer_80)(void*);
void (*finalizer_81)(void*);
void (*finalizer_82)(void*);
void (*finalizer_83)(void*);
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_74, 0, sizeof(void (*)(void*)));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
memset(&finalizer_80, 0, sizeof(void (*)(void*)));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
memset(&finalizer_83, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_72=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_73=protocol_fun;
                finalizer_73(protocol_obj);
            }
            finalizer_74=fun;
            finalizer_74(mem);
        }
        else if(        fun2_72) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_75=protocol_fun;
                finalizer_75(protocol_obj);
            }
            finalizer_76=fun2_72;
            finalizer_76(mem);
        }
    }
    else {
        ref_count_77=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_77)--;
        }
        count_78=*ref_count_77;
        if(        !no_free&&(count_78<=0||force_delete_)) {
            if(            mem) {
                fun2_79=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_80=protocol_fun;
                        finalizer_80(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_81=fun;
                        finalizer_81(mem);
                    }
                }
                else if(                fun2_79) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_82=protocol_fun;
                        finalizer_82(protocol_obj);
                    }
                    finalizer_83=fun2_79;
                    finalizer_83(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_84;
void (*finalizer_85)(void*);
void (*finalizer_86)(void*);
unsigned long  int* ref_count_87;
unsigned long  int count_88;
void* fun2_89;
void (*finalizer_90)(void*);
void (*finalizer_91)(void*);
memset(&finalizer_85, 0, sizeof(void (*)(void*)));
memset(&finalizer_86, 0, sizeof(void (*)(void*)));
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
memset(&finalizer_91, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            fun2_84=come_get_finalizer(mem);
            if(            fun) {
                finalizer_85=fun;
                finalizer_85(mem);
            }
            else if(            fun2_84) {
                finalizer_86=fun2_84;
                finalizer_86(mem);
            }
        }
    }
    else {
        ref_count_87=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_87)--;
        }
        count_88=*ref_count_87;
        if(        !no_free&&(count_88<=0||force_delete_)) {
            if(            mem) {
                fun2_89=come_get_finalizer(mem);
                if(                fun) {
                    finalizer_90=fun;
                    finalizer_90(mem);
                }
                else if(                fun2_89) {
                    finalizer_91=fun2_89;
                    finalizer_91(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__=(void*)0;
void* __result39__;
void* finalizer_fun_92;
void* cloner_fun_93;
void* get_hash_key_fun_94;
void* equaler_fun_95;
void* mem2_96;
void* (*cloner_97)(void*);
void* (*cloner_98)(void*);
struct sMemHeader* it_99;
struct sMemHeader* it2_100;
void* __result40__;
struct sMemHeaderTiny* it_101;
struct sMemHeaderTiny* it2_102;
void* __result41__;
void* __result42__;
memset(&cloner_97, 0, sizeof(void* (*)(void*)));
memset(&cloner_98, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result39__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result39__;
    }
    finalizer_fun_92=come_get_finalizer(mem);
    cloner_fun_93=come_get_cloner(mem);
    get_hash_key_fun_94=come_get_hash_key(mem);
    equaler_fun_95=come_get_equaler(mem);
    mem2_96=((void*)0);
    if(    fun) {
        cloner_97=fun;
        mem2_96=cloner_97(mem);
    }
    else if(    cloner_fun_93) {
        cloner_98=cloner_fun_93;
        mem2_96=cloner_98(mem);
    }
    if(    mem2_96) {
        if(        gComeDebugLib) {
            it_99=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_100=(struct sMemHeader*)((char*)mem2_96-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_100->class_name=it_99->class_name;
            it2_100->finalizer_fun=it_99->finalizer_fun;
            it2_100->cloner_fun=it_99->cloner_fun;
            it2_100->get_hash_key_fun=it_99->get_hash_key_fun;
            it2_100->equaler_fun=it_99->equaler_fun;
            memcpy(it2_100->sname,it_99->sname,sizeof(char*)*16);
            memcpy(it2_100->sline,it_99->sline,sizeof(int)*16);
            memcpy(it2_100->id,it_99->id,sizeof(int)*16);
            __result40__ = gComeFunResultObject = __result_obj__ = mem2_96;
            gComeFunResultObject = (void*)0;
            return __result40__;
        }
        else {
            it_101=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_102=(struct sMemHeaderTiny*)((char*)mem2_96-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_102->class_name=it_101->class_name;
            it2_102->finalizer_fun=it_101->finalizer_fun;
            it2_102->cloner_fun=it_101->cloner_fun;
            it2_102->get_hash_key_fun=it_101->get_hash_key_fun;
            it2_102->equaler_fun=it_101->equaler_fun;
            it2_102->sname=it_101->sname;
            it2_102->sline=it_101->sline;
            __result41__ = gComeFunResultObject = __result_obj__ = mem2_96;
            gComeFunResultObject = (void*)0;
            return __result41__;
        }
    }
    __result42__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result42__;
}

unsigned int come_call_get_hash_key(void* fun, void* mem){
void* fun2_103;
unsigned int (*cloner_104)(void*);
unsigned int (*cloner_105)(void*);
memset(&cloner_104, 0, sizeof(unsigned int (*)(void*)));
memset(&cloner_105, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_103=come_get_hash_key(mem);
    if(    fun) {
        cloner_104=fun;
        return cloner_104(mem);
    }
    else if(    fun2_103) {
        cloner_105=fun2_103;
        return cloner_105(mem);
    }
    return 0;
}

unsigned int come_call_equals(void* fun, void* mem, void* mem2){
void* fun2_106;
unsigned int (*equaler_107)(void*,void*);
unsigned int (*equaler_108)(void*,void*);
memset(&equaler_107, 0, sizeof(unsigned int (*)(void*,void*)));
memset(&equaler_108, 0, sizeof(unsigned int (*)(void*,void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_106=come_get_equaler(mem);
    if(    fun) {
        equaler_107=fun;
        return equaler_107(mem,mem2);
    }
    else if(    fun2_106) {
        equaler_108=fun2_106;
        return equaler_108(mem,mem2);
    }
    return 0;
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result43__;
int len_109;
void* __right_value4 = (void*)0;
char* result_110;
char* __result44__;
    if(    str==((void*)0)) {
        __result43__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result43__;
    }
    len_109=strlen(str)+1;
    result_110=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_109)), "./comelang.h", 1290, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_110,str,len_109);
    __result44__ = gComeFunResultObject = __result_obj__ = result_110;
    (result_110 = come_decrement_ref_count2(result_110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result44__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_111;
int i_112;
    found_111=(_Bool)0;
    for(    i_112=0;    i_112<len;    i_112++    ){
        if(        array[i_112]==element) {
            found_111=(_Bool)1;
            break;
        }
    }
    return found_111;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result45__;
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3685, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result45__;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result46__;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3695, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        (self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result47__;
void* __right_value7 = (void*)0;
struct buffer* result_113;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result48__;
    if(    self==((void*)0)) {
        __result47__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result47__;
    }
    result_113=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3715, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals));
    result_113->size=self->size;
    __dec_obj3=result_113->buf;
    result_113->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3718, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_113->len=self->len;
    memcpy(result_113->buf,self->buf,self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result49__;
    if(    left==((void*)0)||right==((void*)0)) {
        return (_Bool)0;
    }
    __result49__ = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    (__right_value9 = come_decrement_ref_count2(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value10 = come_decrement_ref_count2(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result49__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result50__;
void* __right_value11 = (void*)0;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result51__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result50__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result50__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_114=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3766, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_114,self->buf,self->size);
        old_len_115=self->len;
        new_size_116=(self->size+size+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "./comelang.h", 3770, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        (old_buf_114 = come_decrement_ref_count2(old_buf_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result51__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result52__;
void* __right_value13 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result53__;
    if(    self==((void*)0)) {
        __result52__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result52__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_117=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3789, "char*"));
        old_len_118=self->len;
        new_size_119=(self->size+10+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_119)), "./comelang.h", 3793, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        (old_buf_117 = come_decrement_ref_count2(old_buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result53__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result54__;
int size_120;
void* __right_value15 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result55__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result54__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result54__;
    }
    size_120=strlen(mem);
    if(    self->len+size_120+1+1>=self->size) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3815, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_121,self->buf,self->size);
        old_len_122=self->len;
        new_size_123=(self->size+size_120+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_123)), "./comelang.h", 3819, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        (old_buf_121 = come_decrement_ref_count2(old_buf_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_120);
    self->len+=size_120;
    self->buf[self->len]=0;
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result55__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result56__;
va_list args_124;
char* result_125;
int len_126;
struct buffer* __result57__;
void* __right_value17 = (void*)0;
char* mem_127;
int size_128;
void* __right_value18 = (void*)0;
char* old_buf_129;
int old_len_130;
int new_size_131;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result58__;
memset(&args_124, 0, sizeof(va_list));
result_125 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result56__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result56__;
    }
    __builtin_va_start(args_124,msg);
    len_126=vasprintf(&result_125,msg,args_124);
    __builtin_va_end(args_124);
    if(    len_126<0) {
        __result57__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3((&args_124),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result57__;
    }
    mem_127=(char*)come_increment_ref_count(__builtin_string(result_125));
    size_128=strlen(mem_127);
    if(    self->len+size_128+1+1>=self->size) {
        old_buf_129=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3852, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_129,self->buf,self->size);
        old_len_130=self->len;
        new_size_131=(self->size+size_128+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_131)), "./comelang.h", 3856, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_129,old_len_130);
        self->buf[old_len_130]=0;
        self->size=new_size_131;
        (old_buf_129 = come_decrement_ref_count2(old_buf_129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_127,size_128);
    self->len+=size_128;
    self->buf[self->len]=0;
    free(result_125);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3((&args_124),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (mem_127 = come_decrement_ref_count2(mem_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void va_list_finalize(va_list self){
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result59__;
int size_132;
void* __right_value20 = (void*)0;
char* old_buf_133;
int old_len_134;
int new_size_135;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result60__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result59__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result59__;
    }
    size_132=strlen(mem)+1;
    if(    self->len+size_132+1+1+1>=self->size) {
        old_buf_133=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3878, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size_132+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_135)), "./comelang.h", 3882, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
        (old_buf_133 = come_decrement_ref_count2(old_buf_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_132);
    self->len+=size_132;
    self->buf[self->len]=0;
    self->len++;
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result61__;
int* mem_136;
int size_137;
void* __right_value22 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result62__;
    if(    self==((void*)0)) {
        __result61__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result61__;
    }
    mem_136=&value;
    size_137=sizeof(int);
    if(    self->len+size_137+1+1>=self->size) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3905, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_140)), "./comelang.h", 3909, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        (old_buf_138 = come_decrement_ref_count2(old_buf_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result62__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_141;
int size_142;
void* __right_value24 = (void*)0;
char* old_buf_143;
int old_len_144;
int new_size_145;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result63__;
    mem_141=&value;
    size_142=sizeof(long);
    if(    self->len+size_142+1+1>=self->size) {
        old_buf_143=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3928, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_143,self->buf,self->size);
        old_len_144=self->len;
        new_size_145=(self->size+size_142+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_145)), "./comelang.h", 3932, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_143,old_len_144);
        self->buf[old_len_144]=0;
        self->size=new_size_145;
        (old_buf_143 = come_decrement_ref_count2(old_buf_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_141,size_142);
    self->len+=size_142;
    self->buf[self->len]=0;
    __result63__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result63__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result64__;
short* mem_146;
int size_147;
void* __right_value26 = (void*)0;
char* old_buf_148;
int old_len_149;
int new_size_150;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result65__;
    if(    self==((void*)0)) {
        __result64__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result64__;
    }
    mem_146=&value;
    size_147=sizeof(short);
    if(    self->len+size_147+1+1>=self->size) {
        old_buf_148=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3955, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_148,self->buf,self->size);
        old_len_149=self->len;
        new_size_150=(self->size+size_147+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_150)), "./comelang.h", 3959, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_148,old_len_149);
        self->buf[old_len_149]=0;
        self->size=new_size_150;
        (old_buf_148 = come_decrement_ref_count2(old_buf_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_146,size_147);
    self->len+=size_147;
    self->buf[self->len]=0;
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result65__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result66__;
int len_151;
int new_size_152;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_153;
struct buffer* __result67__;
    if(    self==((void*)0)) {
        __result66__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    len_151=self->len;
    len_151=(len_151+3)&~3;
    if(    len_151>=self->size) {
        new_size_152=(self->size+1+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_152)), "./comelang.h", 3983, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_152;
    }
    for(    i_153=self->len;    i_153<len_151;    i_153++    ){
        self->buf[i_153]=0;
    }
    self->len=len_151;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_154;
struct buffer* __result68__;
struct buffer* __result69__;
    result_154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4013, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = result_154;
        come_call_finalizer3(result_154,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    buffer_append_str(result_154,self);
    __result69__ = gComeFunResultObject = __result_obj__ = result_154;
    come_call_finalizer3(result_154,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
char* __result70__;
void* __right_value32 = (void*)0;
char* __result71__;
    if(    self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value31=__builtin_string("")));
        (__right_value31 = come_decrement_ref_count2(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value32=__builtin_string(self->buf)));
    (__right_value32 = come_decrement_ref_count2(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result71__;
}

unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_155;
struct buffer* __result73__;
    result_155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4040, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_155,self,sizeof(char)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = result_155;
    come_call_finalizer3(result_155,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_156;
int i_157;
struct buffer* __result74__;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4047, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_157=0;    i_157<len;    i_157++    ){
        buffer_append(result_156,self[i_157],strlen(self[i_157]));
    }
    __result74__ = gComeFunResultObject = __result_obj__ = result_156;
    come_call_finalizer3(result_156,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_158;
struct buffer* __result75__;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4056, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_158,(char*)self,sizeof(short)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = result_158;
    come_call_finalizer3(result_158,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_159;
struct buffer* __result76__;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4063, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_159,(char*)self,sizeof(int)*len);
    __result76__ = gComeFunResultObject = __result_obj__ = result_159;
    come_call_finalizer3(result_159,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_160;
struct buffer* __result77__;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4070, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_160,(char*)self,sizeof(long)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_161;
struct buffer* __result78__;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4077, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_161,(char*)self,sizeof(float)*len);
    __result78__ = gComeFunResultObject = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_162;
struct buffer* __result79__;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4084, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_162,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = result_162;
    come_call_finalizer3(result_162,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

char* buffer_printable(struct buffer* self){
void* __result_obj__=(void*)0;
int len_163;
void* __right_value47 = (void*)0;
char* result_164;
int n_165;
int i_166;
unsigned char c_167;
char* __result80__;
    len_163=self->len;
    result_164=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_163*2+1)), "./comelang.h", 4092, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    n_165=0;
    for(    i_166=0;    i_166<len_163;    i_166++    ){
        c_167=self->buf[i_166];
        if(        (c_167>=0&&c_167<32)||c_167==127) {
            result_164[n_165++]=94;
            result_164[n_165++]=c_167+65-1;
        }
        else if(        c_167>127) {
            result_164[n_165++]=63;
        }
        else {
            result_164[n_165++]=c_167;
        }
    }
    result_164[n_165]=0;
    __result80__ = gComeFunResultObject = __result_obj__ = result_164;
    (result_164 = come_decrement_ref_count2(result_164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result80__;
}

struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char$* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char$*)(__right_value50=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4412, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value50,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
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

struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char$* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char$*)(__right_value53=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4417, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value53,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short$* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short$*)(__right_value56=smart_pointer$1short$$p_initialize_with_value((struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), "./comelang.h", 4422, "struct smart_pointer$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value56,smart_pointer$1short$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short$* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
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

struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int$* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int$*)(__right_value59=smart_pointer$1int$$p_initialize_with_value((struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), "./comelang.h", 4427, "struct smart_pointer$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value59,smart_pointer$1int$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int$* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
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

struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long$* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long$*)(__right_value62=smart_pointer$1long$$p_initialize_with_value((struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), "./comelang.h", 4432, "struct smart_pointer$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value62,smart_pointer$1long$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long$* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
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

struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_168;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char$* __result90__;
    buf_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4465, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_168,(char*)self,sizeof(char)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char$*)(__right_value66=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4467, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_168))));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value66,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_169;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1char$p* __result92__;
    buf_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4472, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_169,(char*)self,sizeof(char*)*len);
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char$p*)(__right_value70=smart_pointer$1char$p$p_initialize_with_value((struct smart_pointer$1char$p*)come_increment_ref_count((struct smart_pointer$1char$p*)come_calloc(1, sizeof(struct smart_pointer$1char$p)*(1), "./comelang.h", 4474, "struct smart_pointer$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_169))));
    come_call_finalizer3(buf_169,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value70,smart_pointer$1char$p$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1char$p* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
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

struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_170;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short$* __result93__;
    buf_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4479, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_170,(char*)self,sizeof(short)*len);
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short$*)(__right_value74=smart_pointer$1short$$p_initialize_with_value((struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), "./comelang.h", 4481, "struct smart_pointer$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_170))));
    come_call_finalizer3(buf_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value74,smart_pointer$1short$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_171;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int$* __result94__;
    buf_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4486, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_171,(char*)self,sizeof(int)*len);
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int$*)(__right_value78=smart_pointer$1int$$p_initialize_with_value((struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), "./comelang.h", 4488, "struct smart_pointer$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_171))));
    come_call_finalizer3(buf_171,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value78,smart_pointer$1int$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_172;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long$* __result95__;
    buf_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4493, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_172,(char*)self,sizeof(long)*len);
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long$*)(__right_value82=smart_pointer$1long$$p_initialize_with_value((struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), "./comelang.h", 4495, "struct smart_pointer$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_172))));
    come_call_finalizer3(buf_172,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value82,smart_pointer$1long$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_173;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float$* __result97__;
    buf_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4500, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_173,(char*)self,sizeof(float)*len);
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float$*)(__right_value86=smart_pointer$1float$$p_initialize_with_value((struct smart_pointer$1float$*)come_increment_ref_count((struct smart_pointer$1float$*)come_calloc(1, sizeof(struct smart_pointer$1float$)*(1), "./comelang.h", 4502, "struct smart_pointer$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_173))));
    come_call_finalizer3(buf_173,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value86,smart_pointer$1float$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float$* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
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

struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_174;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double$* __result99__;
    buf_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4507, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_174,(char*)self,sizeof(double)*len);
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double$*)(__right_value90=smart_pointer$1double$$p_initialize_with_value((struct smart_pointer$1double$*)come_increment_ref_count((struct smart_pointer$1double$*)come_calloc(1, sizeof(struct smart_pointer$1double$)*(1), "./comelang.h", 4509, "struct smart_pointer$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_174))));
    come_call_finalizer3(buf_174,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value90,smart_pointer$1double$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double$* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
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

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char$* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1char$*)(__right_value95=list$1char$$p_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./comelang.h", 4514, "struct list$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value95,list$1char$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char$* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1457, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1467, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1477, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_179;
struct list_item$1char$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1char$p* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1char$p*)(__right_value100=list$1char$p$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 4519, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value100,list$1char$p$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1char$p* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1457, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1467, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1477, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_185;
struct list_item$1char$p* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short$* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1short$*)(__right_value105=list$1short$$p_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./comelang.h", 4524, "struct list$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value105,list$1short$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short$* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1457, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1467, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1477, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_191;
struct list_item$1short$* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int$* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1int$*)(__right_value110=list$1int$$p_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./comelang.h", 4529, "struct list$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value110,list$1int$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int$* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1457, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1467, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1477, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_197;
struct list_item$1int$* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long$* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct list$1long$*)(__right_value115=list$1long$$p_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./comelang.h", 4534, "struct list$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value115,list$1long$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long$* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1457, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1467, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1477, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_203;
struct list_item$1long$* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float$* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct list$1float$*)(__right_value120=list$1float$$p_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./comelang.h", 4539, "struct list$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value120,list$1float$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float$* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1457, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1467, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1477, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_209;
struct list_item$1float$* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double$* __result120__;
    __result120__ = gComeFunResultObject = __result_obj__ = ((struct list$1double$*)(__right_value125=list$1double$$p_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./comelang.h", 4544, "struct list$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value125,list$1double$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double$* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1457, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1467, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1477, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_215;
struct list_item$1double$* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1char$* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char$*)(__right_value129=vector$1char$$p_initialize_with_values((struct vector$1char$*)come_increment_ref_count((struct vector$1char$*)come_calloc(1, sizeof(struct vector$1char$)*(1), "./comelang.h", 4549, "struct vector$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1char$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
void* __result_obj__=(void*)0;
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result121__;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value133 = (void*)0;
struct vector$1char$p* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char$p*)(__right_value133=vector$1char$p$p_initialize_with_values((struct vector$1char$p*)come_increment_ref_count((struct vector$1char$p*)come_calloc(1, sizeof(struct vector$1char$p)*(1), "./comelang.h", 4554, "struct vector$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value133,vector$1char$p$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
void* __result_obj__=(void*)0;
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result124__;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
            (self->items[i_226] = come_decrement_ref_count2(self->items[i_226], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1short$* __result129__;
    __result129__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short$*)(__right_value137=vector$1short$$p_initialize_with_values((struct vector$1short$*)come_increment_ref_count((struct vector$1short$*)come_calloc(1, sizeof(struct vector$1short$)*(1), "./comelang.h", 4559, "struct vector$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value137,vector$1short$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
void* __result_obj__=(void*)0;
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result127__;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1int$* __result132__;
    __result132__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int$*)(__right_value141=vector$1int$$p_initialize_with_values((struct vector$1int$*)come_increment_ref_count((struct vector$1int$*)come_calloc(1, sizeof(struct vector$1int$)*(1), "./comelang.h", 4564, "struct vector$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1int$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
void* __result_obj__=(void*)0;
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result130__;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value145 = (void*)0;
struct vector$1long$* __result135__;
    __result135__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long$*)(__right_value145=vector$1long$$p_initialize_with_values((struct vector$1long$*)come_increment_ref_count((struct vector$1long$*)come_calloc(1, sizeof(struct vector$1long$)*(1), "./comelang.h", 4569, "struct vector$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value145,vector$1long$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result134__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
void* __result_obj__=(void*)0;
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result133__;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
void* __right_value149 = (void*)0;
struct vector$1float$* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float$*)(__right_value149=vector$1float$$p_initialize_with_values((struct vector$1float$*)come_increment_ref_count((struct vector$1float$*)come_calloc(1, sizeof(struct vector$1float$)*(1), "./comelang.h", 4574, "struct vector$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value149,vector$1float$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result137__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
void* __result_obj__=(void*)0;
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result136__;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value150 = (void*)0;
void* __right_value153 = (void*)0;
struct vector$1double$* __result141__;
    __result141__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double$*)(__right_value153=vector$1double$$p_initialize_with_values((struct vector$1double$*)come_increment_ref_count((struct vector$1double$*)come_calloc(1, sizeof(struct vector$1double$)*(1), "./comelang.h", 4579, "struct vector$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value153,vector$1double$$p_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result140__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
void* __result_obj__=(void*)0;
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result139__;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value154 = (void*)0;
char* __result142__;
int len_252;
void* __right_value155 = (void*)0;
char* result_253;
char* __result143__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=__builtin_string("")));
        (__right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    len_252=strlen(self)+strlen(right);
    result_253=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_252+1)), "./comelang.h", 4793, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_253,self,len_252+1);
    strncat(result_253,right,len_252+1);
    __result143__ = gComeFunResultObject = __result_obj__ = result_253;
    (result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value156 = (void*)0;
char* __result144__;
int len_254;
void* __right_value157 = (void*)0;
char* result_255;
char* __result145__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value156=__builtin_string("")));
        (__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    len_254=strlen(self)+strlen(right);
    result_255=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_254+1)), "./comelang.h", 4808, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_255,self,len_254+1);
    strncat(result_255,right,len_254+1);
    __result145__ = gComeFunResultObject = __result_obj__ = result_255;
    (result_255 = come_decrement_ref_count2(result_255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value158 = (void*)0;
char* __result146__;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct buffer* buf_256;
int i_257;
void* __right_value161 = (void*)0;
char* __result147__;
    if(    self==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string("")));
        (__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    buf_256=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4821, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_257=0;    i_257<right;    i_257++    ){
        buffer_append_str(buf_256,self);
    }
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=buffer_to_string(buf_256)));
    come_call_finalizer3(buf_256,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result147__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
char* __result148__;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct buffer* buf_258;
int i_259;
void* __right_value165 = (void*)0;
char* __result149__;
    if(    self==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value162=__builtin_string("")));
        (__right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4835, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_259=0;    i_259<right;    i_259++    ){
        buffer_append_str(buf_258,self);
    }
    __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=buffer_to_string(buf_258)));
    come_call_finalizer3(buf_258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result149__;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_260;
int i_261;
    result_260=(_Bool)0;
    for(    i_261=0;    i_261<len;    i_261++    ){
        if(        strncmp(self[i_261],str,strlen(self[i_261]))==0) {
            result_260=(_Bool)1;
            break;
        }
    }
    return result_260;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_262;
char* p_263;
    if(    value==((void*)0)) {
        return 0;
    }
    result_262=0;
    p_263=value;
    while(*p_263) {
        result_262+=(*p_263);
        p_263++;
    }
    return result_262;
}

unsigned int string_get_hash_key(char* value){
int result_264;
char* p_265;
    if(    value==((void*)0)) {
        return 0;
    }
    result_264=0;
    p_265=value;
    while(*p_265) {
        result_264+=(*p_265);
        p_265++;
    }
    return result_264;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result150__;
void* __right_value166 = (void*)0;
char* __result151__;
    if(    self==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string(self)));
    (__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result151__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result152__;
void* __right_value167 = (void*)0;
char* __result153__;
    if(    self==((void*)0)) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string(self)));
    (__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result153__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_266;
    result_266=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_266;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_267;
    result_267=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_267;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_268;
    result_268=(c>=32&&c<=126);
    return result_268;
}

_Bool xiswascii(unsigned int c){
_Bool result_269;
    result_269=(c>=32&&c<=126);
    return result_269;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* __result154__;
int len_270;
void* __right_value169 = (void*)0;
char* result_271;
int i_272;
char* __result155__;
    if(    str==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("")));
        (__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    len_270=strlen(str);
    result_271=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_270+1)), "./comelang.h", 5109, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    for(    i_272=0;    i_272<len_270;    i_272++    ){
        result_271[i_272]=str[len_270-i_272-1];
    }
    result_271[len_270]=0;
    __result155__ = gComeFunResultObject = __result_obj__ = result_271;
    (result_271 = come_decrement_ref_count2(result_271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result155__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value170 = (void*)0;
char* __result156__;
int len_273;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result157__;
void* __right_value173 = (void*)0;
char* __result158__;
void* __right_value174 = (void*)0;
char* __result159__;
void* __right_value175 = (void*)0;
char* result_274;
char* __result160__;
    if(    str==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=__builtin_string("")));
        (__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    len_273=strlen(str);
    if(    head<0) {
        head+=len_273;
    }
    if(    tail<0) {
        tail+=len_273+1;
    }
    if(    head>tail) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value172=charp_reverse(((char*)(__right_value171=charp_substring(str,tail,head))))));
        (__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_273) {
        tail=len_273;
    }
    if(    head==tail) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("")));
        (__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    if(    tail-head+1<1) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value174=__builtin_string("")));
        (__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    result_274=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5155, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_274,str+head,tail-head);
    result_274[tail-head]=0;
    __result160__ = gComeFunResultObject = __result_obj__ = result_274;
    (result_274 = come_decrement_ref_count2(result_274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
char* __result161__;
int len_275;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __result162__;
void* __right_value179 = (void*)0;
char* __result163__;
void* __right_value180 = (void*)0;
char* __result164__;
void* __right_value181 = (void*)0;
char* result_276;
char* __result165__;
    if(    str==((void*)0)) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value176=__builtin_string("")));
        (__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    len_275=strlen(str);
    if(    head<0) {
        head+=len_275;
    }
    if(    tail<0) {
        tail+=len_275+1;
    }
    if(    head>tail) {
        __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value178=charp_reverse(((char*)(__right_value177=charp_substring(str,tail,head))))));
        (__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_275) {
        tail=len_275;
    }
    if(    head==tail) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        (__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    if(    tail-head+1<1) {
        __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        (__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_276=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5198, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_276,str+head,tail-head);
    result_276[tail-head]=0;
    __result165__ = gComeFunResultObject = __result_obj__ = result_276;
    (result_276 = come_decrement_ref_count2(result_276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
char* __result166__;
int len_277;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
char* __result167__;
void* __right_value185 = (void*)0;
char* __result168__;
void* __right_value186 = (void*)0;
char* __result169__;
void* __right_value187 = (void*)0;
char* result_278;
char* __result170__;
    if(    str==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value182=__builtin_string("")));
        (__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    len_277=strlen(str);
    if(    head<0) {
        head+=len_277;
    }
    if(    tail<0) {
        tail+=len_277+1;
    }
    if(    head>tail) {
        __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value184=charp_reverse(((char*)(__right_value183=charp_substring(str,tail,head))))));
        (__right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        (__right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_277) {
        tail=len_277;
    }
    if(    head==tail) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string("")));
        (__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    if(    tail-head+1<1) {
        __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("")));
        (__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    result_278=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5241, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_278,str+head,tail-head);
    result_278[tail-head]=0;
    __result170__ = gComeFunResultObject = __result_obj__ = result_278;
    (result_278 = come_decrement_ref_count2(result_278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result170__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
char* __result171__;
va_list args_279;
char* result_280;
int len_281;
void* __right_value189 = (void*)0;
char* __result172__;
void* __right_value190 = (void*)0;
char* result2_282;
char* __result173__;
memset(&args_279, 0, sizeof(va_list));
result_280 = (void*)0;
    if(    msg==((void*)0)) {
        __result171__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value188=__builtin_string("")));
        (__right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    __builtin_va_start(args_279,msg);
    len_281=vasprintf(&result_280,msg,args_279);
    __builtin_va_end(args_279);
    if(    len_281<0) {
        __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string("")));
        come_call_finalizer3((&args_279),va_list_finalize, 1, 0, 0, 0, (void*)0);
        (__right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    result2_282=(char*)come_increment_ref_count(__builtin_string(result_280));
    free(result_280);
    __result173__ = gComeFunResultObject = __result_obj__ = result2_282;
    come_call_finalizer3((&args_279),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (result2_282 = come_decrement_ref_count2(result2_282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value191 = (void*)0;
char* __result174__;
int len_283;
void* __right_value192 = (void*)0;
char* __result175__;
void* __right_value193 = (void*)0;
char* __result176__;
void* __right_value194 = (void*)0;
char* result_284;
char* __result177__;
    if(    str==((void*)0)) {
        __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value191=__builtin_string("")));
        (__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    len_283=strlen(str);
    if(    strcmp(str,"")==0) {
        __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string(str)));
        (__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    if(    head<0) {
        head+=len_283;
    }
    if(    tail<0) {
        tail+=len_283+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string(str)));
        (__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result176__;
    }
    if(    tail>=len_283) {
        tail=len_283;
    }
    result_284=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_283-(tail-head)+1)), "./comelang.h", 5303, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_284,str,head);
    memcpy(result_284+head,str+tail,len_283-tail);
    result_284[len_283-(tail-head)]=0;
    __result177__ = gComeFunResultObject = __result_obj__ = result_284;
    (result_284 = come_decrement_ref_count2(result_284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result177__;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1char$ph* __result179__;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* result_287;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* str_288;
int i_289;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1char$ph* __result181__;
    if(    self==((void*)0)) {
        __result179__ = gComeFunResultObject = __result_obj__ = ((struct list$1char$ph*)(__right_value196=list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5316, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0)))));
        come_call_finalizer3(__right_value196,list$1char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    result_287=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5319, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    str_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5321, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_289=0;    i_289<charp_length(self);    i_289++    ){
        if(        self[i_289]==c) {
            list$1char$ph$p_push_back(result_287,(char*)come_increment_ref_count(__builtin_string(str_288->buf)));
            buffer_reset(str_288);
        }
        else {
            buffer_append_char(str_288,self[i_289]);
        }
    }
    if(    buffer_length(str_288)!=0) {
        list$1char$ph$p_push_back(result_287,(char*)come_increment_ref_count(__builtin_string(str_288->buf)));
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_287;
    come_call_finalizer3(result_287,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result178__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj28;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj29;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj30;
struct list$1char$ph* __result180__;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj28=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj29=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj30=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result180__;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=xsprintf(msg,self)));
    (__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=xsprintf(msg,self)));
    (__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result183__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_293;
void* __right_value208 = (void*)0;
char* result_294;
int n_295;
int i_296;
char c_297;
char* __result184__;
    len_293=charp_length(str);
    result_294=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_293*2+1)), "./comelang.h", 5353, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    n_295=0;
    for(    i_296=0;    i_296<len_293;    i_296++    ){
        c_297=str[i_296];
        if(        (c_297>=0&&c_297<32)||c_297==127) {
            result_294[n_295++]=94;
            result_294[n_295++]=c_297+65-1;
        }
        else {
            result_294[n_295++]=c_297;
        }
    }
    result_294[n_295]=0;
    __result184__ = gComeFunResultObject = __result_obj__ = result_294;
    (result_294 = come_decrement_ref_count2(result_294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
char* __result185__;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* result_298;
char* p_299;
char* p2_300;
void* __right_value212 = (void*)0;
char* __result186__;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value209=__builtin_string(self)));
        (__right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    result_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5381, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_299=self;
    while((_Bool)1) {
        p2_300=strstr(p_299,str);
        if(        p2_300==((void*)0)) {
            p2_300=p_299;
            while(*p2_300) {
                p2_300++;
            }
            buffer_append(result_298,p_299,p2_300-p_299);
            break;
        }
        buffer_append(result_298,p_299,p2_300-p_299);
        buffer_append_str(result_298,replace);
        p_299=p2_300+strlen(str);
    }
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value212=buffer_to_string(result_298)));
    come_call_finalizer3(result_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result187__;
char* p_301;
void* __right_value214 = (void*)0;
char* __result188__;
void* __right_value215 = (void*)0;
char* __result189__;
void* __right_value216 = (void*)0;
char* __result190__;
    if(    path==((void*)0)) {
        __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("")));
        (__right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    p_301=path+strlen(path);
    while(p_301>=path) {
        if(        *p_301==47) {
            break;
        }
        else {
            p_301--;
        }
    }
    if(    p_301<path) {
        __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value214=__builtin_string(path)));
        (__right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    else {
        __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string(p_301+1)));
        (__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value216=__builtin_string("")));
    (__right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
char* __result191__;
void* __right_value218 = (void*)0;
char* path2_302;
char* p_303;
void* __right_value219 = (void*)0;
char* __result192__;
void* __right_value220 = (void*)0;
char* __result193__;
void* __right_value221 = (void*)0;
char* __result194__;
    if(    path==((void*)0)) {
        __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string("")));
        (__right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    path2_302=(char*)come_increment_ref_count(xbasename(path));
    p_303=path2_302+strlen(path2_302);
    while(p_303>=path2_302) {
        if(        *p_303==46) {
            break;
        }
        else {
            p_303--;
        }
    }
    if(    p_303<path2_302) {
        __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=__builtin_string(path2_302)));
        (path2_302 = come_decrement_ref_count2(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    else {
        __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=charp_substring(path2_302,0,p_303-path2_302)));
        (path2_302 = come_decrement_ref_count2(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=__builtin_string("")));
    (path2_302 = come_decrement_ref_count2(path2_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result194__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result195__;
char* p_304;
void* __right_value223 = (void*)0;
char* __result196__;
void* __right_value224 = (void*)0;
char* __result197__;
void* __right_value225 = (void*)0;
char* __result198__;
    if(    path==((void*)0)) {
        __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=__builtin_string("")));
        (__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    p_304=path+strlen(path);
    while(p_304>=path) {
        if(        *p_304==46) {
            break;
        }
        else {
            p_304--;
        }
    }
    if(    p_304<path) {
        __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string(path)));
        (__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    else {
        __result197__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=__builtin_string(p_304+1)));
        (__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=__builtin_string("")));
    (__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result199__;
void* __right_value227 = (void*)0;
char* __result200__;
    if(    self) {
        __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string("true")));
        (__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    else {
        __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string("false")));
        (__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
char* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=xsprintf("%c",self)));
    (__right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result201__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value229 = (void*)0;
char* __result202__;
    __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=xsprintf("%d",self)));
    (__right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result202__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
char* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=xsprintf("%d",self)));
    (__right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result203__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
char* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=xsprintf("%ld",self)));
    (__right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result204__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
char* __result205__;
    __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=xsprintf("%ld",self)));
    (__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result205__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
char* __result206__;
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=xsprintf("%f",self)));
    (__right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result206__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=xsprintf("%lf",self)));
    (__right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
char* __result208__;
void* __right_value236 = (void*)0;
char* __result209__;
    if(    self==((void*)0)) {
        __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string("")));
        (__right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value236=__builtin_string(self)));
    (__right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result210__;
void* __right_value238 = (void*)0;
char* __result211__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value237=__builtin_string("")));
        (__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string(self)));
    (__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result211__;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
char* __result212__;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct buffer* buf_305;
int size_307;
void* __right_value242 = (void*)0;
char* __result213__;
    if(    f==((void*)0)) {
        __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string("")));
        (__right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    buf_305=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5717, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_306[1024];
        memset(&buf2_306, 0, sizeof(char)        *(1024)        );
        size_307=fread(buf2_306,1,1024,f);
        buffer_append(buf_305,buf2_306,size_307);
        if(        size_307<1024) {
            break;
        }
    }
    __result213__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value242=buffer_to_string(buf_305)));
    come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result213__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_308;
    if(    f==((void*)0)) {
        return -1;
    }
    result_308=fclose(f);
    if(    result_308<0) {
        return result_308;
    }
    return result_308;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result214__;
va_list args_310;
int result_311;
struct _IO_FILE* __result215__;
struct _IO_FILE* __result216__;
memset(&args_310, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    char msg2_309[1024*2*2*2];
    memset(&msg2_309, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_310,msg);
    vsnprintf(msg2_309,1024*2*2*2,msg,args_310);
    __builtin_va_end(args_310);
    result_311=fprintf(f,"%s",msg2_309);
    if(    result_311<0) {
        __result215__ = gComeFunResultObject = __result_obj__ = f;
        come_call_finalizer3((&args_310),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    __result216__ = gComeFunResultObject = __result_obj__ = f;
    come_call_finalizer3((&args_310),va_list_finalize, 1, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_312;
int result_313;
int result2_314;
f_312 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_312=fopen(file_name,"a");
    }
    else {
        f_312=fopen(file_name,"w");
    }
    if(    f_312==((void*)0)) {
        return -1;
    }
    result_313=fwrite(self,strlen(self),1,f_312);
    if(    result_313<0) {
        return result_313;
    }
    result2_314=fclose(f_312);
    if(    result2_314<0) {
        return result2_314;
    }
    return result_313;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result217__;
struct _IO_FILE* f_315;
void* __right_value244 = (void*)0;
char* __result218__;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct buffer* buf_316;
int size_318;
void* __right_value247 = (void*)0;
char* result_319;
int result2_320;
void* __right_value248 = (void*)0;
char* __result219__;
char* __result220__;
    if(    file_name==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("")));
        (__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    f_315=fopen(file_name,"r");
    if(    f_315==((void*)0)) {
        __result218__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string("")));
        (__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    buf_316=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5825, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_317[1024];
        memset(&buf2_317, 0, sizeof(char)        *(1024)        );
        size_318=fread(buf2_317,1,1024,f_315);
        buffer_append(buf_316,buf2_317,size_318);
        if(        size_318<1024) {
            break;
        }
    }
    result_319=(char*)come_increment_ref_count(buffer_to_string(buf_316));
    result2_320=fclose(f_315);
    if(    result2_320<0) {
        __result219__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string("")));
        come_call_finalizer3(buf_316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_319;
    come_call_finalizer3(buf_316,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1char$ph* result_321;
struct list$1char$ph* __result221__;
void* __right_value251 = (void*)0;
struct list$1char$ph* __result222__;
    result_321=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5852, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    f==((void*)0)) {
        __result221__ = gComeFunResultObject = __result_obj__ = result_321;
        come_call_finalizer3(result_321,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    while(1) {
        char buf_322[1024];
        memset(&buf_322, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_322,1024,f)==((void*)0)) {
            break;
        }
        list$1char$ph$p_push_back(result_321,(char*)come_increment_ref_count(__builtin_string(buf_322)));
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_321;
    come_call_finalizer3(result_321,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_323;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_323=fopen(path,mode);
    if(    f_323) {
        block(parent,f_323);
        fclose(f_323);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result223__;
void* __right_value253 = (void*)0;
char* __result224__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("")));
        (__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    puts(self);
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string(self)));
    (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result224__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result225__;
void* __right_value255 = (void*)0;
char* __result226__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("")));
        (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    printf("%s",self);
    __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value255=__builtin_string(self)));
    (__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result226__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
char* __result227__;
char* msg2_324;
va_list args_325;
void* __right_value257 = (void*)0;
char* __result228__;
msg2_324 = (void*)0;
memset(&args_325, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=__builtin_string("")));
        (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    __builtin_va_start(args_325,self);
    vasprintf(&msg2_324,self,args_325);
    __builtin_va_end(args_325);
    printf("%s",msg2_324);
    free(msg2_324);
    __result228__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string(self)));
    come_call_finalizer3((&args_325),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result228__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_326;
    for(    i_326=0;    i_326<self;    i_326++    ){
        block(parent,i_326);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

int re_match(const char* pattern, const char* text, int* matchlength){
    return re_matchp(re_compile(pattern),text,matchlength);
}

int re_matchp(struct regex_t* pattern, const char* text, int* matchlength){
int idx_327;
    *matchlength=0;
    if(    pattern!=0) {
        if(        pattern[0].type==(2)) {
            return ((((matchpattern(&pattern[1],text,matchlength)))?(0):(-1)));
        }
        else {
            idx_327=-1;
            do {
                idx_327+=1;
                if(                matchpattern(pattern,text,matchlength)) {
                    if(                    text[0]==0) {
                        return -1;
                    }
                    return idx_327;
                }
            } while(*text++!=0);
        }
    }
    return -1;
}

struct regex_t* re_compile(const char* pattern){
void* __result_obj__=(void*)0;
int ccl_bufidx_330;
char c_331;
int i_332;
int j_333;
int buf_begin_334;
struct regex_t* __result229__;
struct regex_t* __result230__;
struct regex_t* __result231__;
struct regex_t* __result232__;
struct regex_t* __result233__;
struct regex_t* __result234__;
struct regex_t* __result235__;
memset(&c_331, 0, sizeof(char));
    static struct regex_t re_compiled_328[30];
    memset(&re_compiled_328, 0, sizeof(struct regex_t)    *(30)    );
    static unsigned char ccl_buf_329[40];
    memset(&ccl_buf_329, 0, sizeof(unsigned char)    *(40)    );
    ccl_bufidx_330=1;
    i_332=0;
    j_333=0;
    while(pattern[i_332]!=0&&(j_333+1<30)) {
        c_331=pattern[i_332];
        switch (c_331) {
            case 94:
            {
                re_compiled_328[j_333].type=(2);
            }
            break;
            case 36:
            {
                re_compiled_328[j_333].type=(3);
            }
            break;
            case 46:
            {
                re_compiled_328[j_333].type=(1);
            }
            break;
            case 42:
            {
                re_compiled_328[j_333].type=(5);
            }
            break;
            case 43:
            {
                re_compiled_328[j_333].type=(6);
            }
            break;
            case 63:
            {
                re_compiled_328[j_333].type=(4);
            }
            break;
            case 92:
            {
                if(                pattern[i_332+1]!=0) {
                    i_332+=1;
                    switch (pattern[i_332]) {
                        case 100:
                        {
                            re_compiled_328[j_333].type=(10);
                        }
                        break;
                        case 68:
                        {
                            re_compiled_328[j_333].type=(11);
                        }
                        break;
                        case 119:
                        {
                            re_compiled_328[j_333].type=(12);
                        }
                        break;
                        case 87:
                        {
                            re_compiled_328[j_333].type=(13);
                        }
                        break;
                        case 115:
                        {
                            re_compiled_328[j_333].type=(14);
                        }
                        break;
                        case 83:
                        {
                            re_compiled_328[j_333].type=(15);
                        }
                        break;
                        default:
                        {
                            re_compiled_328[j_333].type=(7);
                            re_compiled_328[j_333].u.ch=pattern[i_332];
                        }
                        break;
                    }
                }
            }
            break;
            case 91:
            {
                buf_begin_334=ccl_bufidx_330;
                if(                pattern[i_332+1]==94) {
                    re_compiled_328[j_333].type=(9);
                    i_332+=1;
                    if(                    pattern[i_332+1]==0) {
                        __result229__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result229__;
                    }
                }
                else {
                    re_compiled_328[j_333].type=(8);
                }
                while((pattern[++i_332]!=93)&&(pattern[i_332]!=0)) {
                    if(                    pattern[i_332]==92) {
                        if(                        ccl_bufidx_330>=40-1) {
                            __result230__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result230__;
                        }
                        if(                        pattern[i_332+1]==0) {
                            __result231__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result231__;
                        }
                        ccl_buf_329[ccl_bufidx_330++]=pattern[i_332++];
                    }
                    else if(                    ccl_bufidx_330>=40) {
                        __result232__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result232__;
                    }
                    ccl_buf_329[ccl_bufidx_330++]=pattern[i_332];
                }
                if(                ccl_bufidx_330>=40) {
                    __result233__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                    gComeFunResultObject = (void*)0;
                    return __result233__;
                }
                ccl_buf_329[ccl_bufidx_330++]=0;
                re_compiled_328[j_333].u.ccl=&ccl_buf_329[buf_begin_334];
            }
            break;
            default:
            {
                re_compiled_328[j_333].type=(7);
                re_compiled_328[j_333].u.ch=c_331;
            }
            break;
        }
        if(        pattern[i_332]==0) {
            __result234__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
            gComeFunResultObject = (void*)0;
            return __result234__;
        }
        i_332+=1;
        j_333+=1;
    }
    re_compiled_328[j_333].type=(0);
    __result235__ = gComeFunResultObject = __result_obj__ = (struct regex_t*)re_compiled_328;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

void re_print(struct regex_t* pattern){
int i_336;
int j_337;
char c_338;
memset(&i_336, 0, sizeof(int));
memset(&j_337, 0, sizeof(int));
memset(&c_338, 0, sizeof(char));
    const char* types_335[]={"UNUSED","DOT","BEGIN","END","QUESTIONMARK","STAR","PLUS","CHAR","CHAR_CLASS","INV_CHAR_CLASS","DIGIT","NOT_DIGIT","ALPHA","NOT_ALPHA","WHITESPACE","NOT_WHITESPACE","BRANCH"};
    for(    i_336=0;    i_336<30;    ++i_336    ){
        if(        pattern[i_336].type==(0)) {
            break;
        }
        printf("type: %s",types_335[pattern[i_336].type]);
        if(        pattern[i_336].type==(8)||pattern[i_336].type==(9)) {
            printf(" [");
            for(            j_337=0;            j_337<40;            ++j_337            ){
                c_338=pattern[i_336].u.ccl[j_337];
                if(                (c_338==0)||(c_338==93)) {
                    break;
                }
                printf("%c",c_338);
            }
            printf("]");
        }
        else if(        pattern[i_336].type==(7)) {
            printf(" '%c'",pattern[i_336].u.ch);
        }
        printf("\n");
    }
}

int matchdigit(char c){
    return (((0)?(isdigit(c)):(((unsigned int)(c)-48)<10)));
}

int matchalpha(char c){
    return (((0)?(isalpha(c)):((((unsigned int)(c)|32)-97)<26)));
}

int matchwhitespace(char c){
    return __isspace(c);
}

int matchalphanum(char c){
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str){
    return ((c!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((c>=str[0])&&(c<=str[2])));
}

int matchdot(char c){
    (void)c;
    return 1;
}

int ismetachar(char c){
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str){
    switch (str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str){
    do {
        if(        matchrange(c,str)) {
            return 1;
        }
        else if(        str[0]==92) {
            str+=1;
            if(            matchmetachar(c,str)) {
                return 1;
            }
            else if(            (c==str[0])&&!ismetachar(c)) {
                return 1;
            }
        }
        else if(        c==str[0]) {
            if(            c==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

int matchone(struct regex_t p, char c){
    switch (p.type) {
        case (1):
        return matchdot(c);
        case (8):
        return matchcharclass(c,(const char*)p.u.ccl);
        case (9):
        return !matchcharclass(c,(const char*)p.u.ccl);
        case (10):
        return matchdigit(c);
        case (11):
        return !matchdigit(c);
        case (12):
        return matchalphanum(c);
        case (13):
        return !matchalphanum(c);
        case (14):
        return matchwhitespace(c);
        case (15):
        return !matchwhitespace(c);
        default:
        return (p.u.ch==c);
    }
}

int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
int prelen_339;
    prelen_339=*matchlength;
    const char* prepoint_340=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>=prepoint_340) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    *matchlength=prelen_339;
    return 0;
}

int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    const char* prepoint_341=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>prepoint_341) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    return 0;
}

int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    if(    p.type==(0)) {
        return 1;
    }
    if(    matchpattern(pattern,text,matchlength)) {
        return 1;
    }
    if(    *text&&matchone(p,*text++)) {
        if(        matchpattern(pattern,text,matchlength)) {
            (*matchlength)++;
            return 1;
        }
    }
    return 0;
}

int matchpattern(struct regex_t* pattern, const char* text, int* matchlength){
int pre_342;
    pre_342=*matchlength;
    do {
        if(        (pattern[0].type==(0))||(pattern[1].type==(4))) {
            return matchquestion(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(5)) {
            return matchstar(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(6)) {
            return matchplus(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        (pattern[0].type==(3))&&pattern[1].type==(0)) {
            return (text[0]==0);
        }
        (*matchlength)++;
    } while((text[0]!=0)&&matchone(*pattern++,*text++));
    *matchlength=pre_342;
    return 0;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_tp_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
unsigned int result_343;
unsigned int* p_344;
    result_343=0;
    p_344=value;
    while(*p_344) {
        result_343+=*p_344;
        p_344++;
    }
    return result_343;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=xsprintf("%ls",wc)));
    (__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result236__;
}

int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    return 0;
}

int main(int argc, char** argv){
int __result237__;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result237__ = come_main_v2(argc,argv);
    come_call_finalizer3(gExceptionRightValueObjects,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result237__;
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_345;
struct list_item$1void$ph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        come_call_finalizer3(prev_it_346,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
void* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj32;
struct sType* __dec_obj33;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj32=self->c_value;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj33=self->type;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj50=self->c_value_without_right_value_objects;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj51=self->c_value_without_cast_object_value;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct list$1void$ph* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sNode* __dec_obj39;
struct sNode* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
struct list$1sNode$ph* __dec_obj44;
char* __dec_obj46;
struct list$1void$ph* __dec_obj47;
struct list$1char$ph* __dec_obj48;
struct sType* __dec_obj49;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj36,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj39=self->mSizeNum;
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj40=self->mAlignas;
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj41=self->mTupleName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj42=self->mAttribute;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj43=self->mAsmName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj46=self->mOriginalTypeName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_347;
struct list_item$1void$ph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_349;
struct list_item$1sNode$ph* prev_it_350;
    it_349=self->head;
    while(it_349!=((void*)0)) {
        prev_it_350=it_349;
        it_349=it_349->next;
        come_call_finalizer3(prev_it_350,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_351;
struct list_item$1sNode$ph* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_353;
struct list_item$1char$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* __dec_obj52;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
void* __right_value270 = (void*)0;
void* __right_value276 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj59;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj60;
struct sModule* __result247__;
    __dec_obj52=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 24, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj52,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj53=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 25, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj53,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj54=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj59=self->mHeader;
    self->mHeader=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 28, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj59,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj60=self->mHeaderStructs;
    self->mHeaderStructs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 29, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj60,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_355;
int i_356;
    for(    i_355=0;    i_355<self->size;    i_355++    ){
        if(        self->item_existance[i_355]) {
            if(            1) {
                come_call_finalizer3(self->items[i_355],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_356=0;    i_356<self->size;    i_356++    ){
        if(        self->item_existance[i_356]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_356],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_357;
struct list_item$1void$p* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result239__;
void* __right_value263 = (void*)0;
struct map$2void$phvoid$ph* result_359;
void* __right_value269 = (void*)0;
struct list$1void$p* __dec_obj56;
struct map$2void$phvoid$ph* __result244__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_359=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_359->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_359->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_359->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_359->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_359->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj56=result_359->key_list;
        result_359->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj56,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_359->it=self->it;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result240__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1void$p* result_361;
struct list_item$1void$p* it_362;
struct list$1void$p* __result243__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_361=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1368, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_362=self->head;
    while(it_362!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_361,it_362->item);
        }
        else {
            list$1void$p$p_add(result_361,it_362->item);
        }
        it_362=it_362->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_361;
    come_call_finalizer3(result_361,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_360;
    result_360=0;
    result_360+=int_get_hash_key(((int)self->head));
    result_360+=int_get_hash_key(((int)self->tail));
    result_360+=int_get_hash_key(((int)self->len));
    result_360+=int_get_hash_key(((int)self->it));
    return result_360;
}

static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right){
    if(    !list_item$1void$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1void$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result241__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1void$p* litem_363;
void* __right_value267 = (void*)0;
struct list_item$1void$p* litem_364;
void* __right_value268 = (void*)0;
struct list_item$1void$p* litem_365;
struct list$1void$p* __result242__;
    if(    self->len==0) {
        litem_363=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value266=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1387, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_363->prev=((void*)0);
        litem_363->next=((void*)0);
        litem_363->item=item;
        self->tail=litem_363;
        self->head=litem_363;
    }
    else if(    self->len==1) {
        litem_364=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value267=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1397, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_364->prev=self->head;
        litem_364->next=((void*)0);
        litem_364->item=item;
        self->tail=litem_364;
        self->head->next=litem_364;
    }
    else {
        litem_365=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value268=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1407, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=self->tail;
        litem_365->next=((void*)0);
        litem_365->item=item;
        self->tail->next=litem_365;
        self->tail=litem_365;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_366;
struct list_item$1void$p* prev_it_367;
    it_366=self->head;
    while(it_366!=((void*)0)) {
        prev_it_367=it_366;
        it_366=it_366->next;
        come_call_finalizer3(prev_it_367,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
struct list$1void$p* __dec_obj57;
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        if(        self->key_list==gComeFunResultObject) {
            __dec_obj57=self->key_list;
            come_call_finalizer3(__dec_obj57,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_368;
    result_368=0;
    result_368+=int_get_hash_key(((int)self->keys));
    result_368+=int_get_hash_key(((int)self->item_existance));
    result_368+=int_get_hash_key(((int)self->items));
    result_368+=int_get_hash_key(((int)self->size));
    result_368+=int_get_hash_key(((int)self->len));
    result_368+=int_get_hash_key(((int)self->key_list));
    result_368+=int_get_hash_key(((int)self->it));
    return result_368;
}

static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right){
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
    if(    !list$1void$p$p_equals(left->key_list,right->key_list)) {
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

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
int i_369;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1void$p* __dec_obj58;
struct map$2void$phvoid$ph* __result246__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value271=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value272=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value273=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_369=0;    i_369<128;    i_369++    ){
        self->item_existance[i_369]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj58,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj61;
struct buffer* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
struct map$2void$phvoid$ph* __dec_obj65;
struct map$2void$phvoid$ph* __dec_obj66;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj61=self->mSourceHead;
            come_call_finalizer3(__dec_obj61,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj62=self->mSource;
            come_call_finalizer3(__dec_obj62,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj63=self->mLastCode;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj64=self->mLastCode2;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj65=self->mHeader;
            come_call_finalizer3(__dec_obj65,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        if(        self->mHeaderStructs==gComeFunResultObject) {
            __dec_obj66=self->mHeaderStructs;
            come_call_finalizer3(__dec_obj66,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeaderStructs,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj67;
struct sVarTable* __result248__;
    __dec_obj67=self->mVars;
    self->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 36, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj67,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer3(self->mVars,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__=(void*)0;
int pointer_num_370;
char* p_371;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* name2_372;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sClass* klass_373;
void* __right_value285 = (void*)0;
struct sClass* generics_class_377;
void* __right_value298 = (void*)0;
struct sClass* klass2_378;
void* __right_value299 = (void*)0;
char* __dec_obj79;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj80;
struct sType* __dec_obj81;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1void$ph* __dec_obj82;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1sNode$ph* __dec_obj83;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1void$ph* __dec_obj84;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1char$ph* __dec_obj85;
struct sType* __dec_obj86;
struct sNode* __dec_obj87;
void* __right_value319 = (void*)0;
char* __dec_obj88;
struct sType* __result282__;
    pointer_num_370=0;
    p_371=name;
    while(*p_371) {
        if(        xisalpha(*p_371)||*p_371==95) {
            p_371++;
        }
        else {
            break;
        }
    }
    while(*p_371==42) {
        pointer_num_370++;
        p_371++;
    }
    name2_372=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value281=__builtin_string(name))),0,-pointer_num_370-1));
    (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    klass_373=((struct sClass*)((void*)(__right_value284=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value283=__builtin_string(name2_372)))))));
    (__right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    come_call_finalizer3(__right_value284,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    generics_class_377=((struct sClass*)((void*)(__right_value285=map$2void$phvoid$ph$p_operator_load_element(info->generics_classes,name2_372))));
    come_call_finalizer3(__right_value285,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    if(    klass_373==((void*)0)&&generics_class_377==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_372);
    }
    if(    klass_373) {
        self->mClass=klass_373;
    }
    else {
        klass2_378=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 78, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
        __dec_obj79=klass2_378->mName;
        klass2_378->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_378));
        self->mClass=((struct sClass*)((void*)(__right_value310=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value309=__builtin_string(name)))))));
        (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        come_call_finalizer3(__right_value310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        come_call_finalizer3(klass2_378,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj80=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj81=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj82=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 88, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj82,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj83=self->mArrayNum;
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "01main.c", 89, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj83,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj84=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 90, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj84,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj85=self->mParamNames;
    self->mParamNames=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 91, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj85,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj86=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_370;
    __dec_obj87=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj88=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mOriginalPointerNum=0;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    (name2_372 = come_decrement_ref_count2(name2_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_374;
unsigned int hash_375;
unsigned int it_376;
void* __result249__;
void* __result250__;
void* __result251__;
void* __result252__;
default_value_374 = (void*)0;
    memset(&default_value_374,0,sizeof(void*));
    hash_375=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_376=hash_375;
    while((_Bool)1) {
        if(        self->item_existance[it_376]) {
            if(            come_call_equals((void*)0, self->keys[it_376], ((char*)key))) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_376];
                come_call_finalizer3(default_value_374,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_376++;
            if(            it_376>=self->size) {
                it_376=0;
            }
            else if(            it_376==hash_375) {
                __result250__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_374);
                come_call_finalizer3(default_value_374,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_374);
            come_call_finalizer3(default_value_374,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct sClass*)default_value_374);
    come_call_finalizer3(default_value_374,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj68;
struct list$1void$ph* __dec_obj69;
char* __dec_obj70;
char* __dec_obj71;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj68=self->mName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj69=self->mFields;
            come_call_finalizer3(__dec_obj69,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj70=self->mParentClassName;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj71=self->mAttribute;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result253__;
void* __right_value286 = (void*)0;
struct sClass* result_382;
void* __right_value287 = (void*)0;
char* __dec_obj72;
void* __right_value295 = (void*)0;
struct list$1void$ph* __dec_obj76;
void* __right_value296 = (void*)0;
char* __dec_obj77;
void* __right_value297 = (void*)0;
char* __dec_obj78;
struct sClass* __result258__;
    if(    self==(void*)0) {
        __result253__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_382=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_382->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_382->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_382->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_382->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_382->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_382->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_382->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_382->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj72=result_382->mName;
        result_382->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_382->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_382->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj76=result_382->mFields;
        result_382->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj76,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj77=result_382->mParentClassName;
        result_382->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_382->mAttribute;
        result_382->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_382->mDynamic=self->mDynamic;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_382;
    come_call_finalizer3(result_382,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_379;
    result_379=0;
    result_379+=int_get_hash_key(((int)self->mStruct));
    result_379+=int_get_hash_key(((int)self->mFloat));
    result_379+=int_get_hash_key(((int)self->mUnion));
    result_379+=int_get_hash_key(((int)self->mGenerics));
    result_379+=int_get_hash_key(((int)self->mMethodGenerics));
    result_379+=int_get_hash_key(((int)self->mEnum));
    result_379+=int_get_hash_key(((int)self->mProtocol));
    result_379+=int_get_hash_key(((int)self->mNumber));
    result_379+=int_get_hash_key(((int)self->mName));
    result_379+=int_get_hash_key(((int)self->mGenericsNum));
    result_379+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_379+=int_get_hash_key(((int)self->mFields));
    result_379+=int_get_hash_key(((int)self->mParentClassName));
    result_379+=int_get_hash_key(((int)self->mAttribute));
    result_379+=int_get_hash_key(((int)self->mDynamic));
    return result_379;
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
struct list_item$1void$ph* it_380;
struct list_item$1void$ph* it2_381;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_380=left->head;
    it2_381=right->head;
    while(it_380!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_380->item, it2_381->item)) {
            return (_Bool)0;
        }
        it_380=it_380->next;
        it2_381=it2_381->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result254__;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1void$ph* result_384;
struct list_item$1void$ph* it_385;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1void$ph* __result257__;
    if(    self==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_384=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_385=self->head;
    while(it_385!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_384,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_385->item)));
        }
        else {
            list$1void$ph$p_add(result_384,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_385->item)));
        }
        it_385=it_385->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_384;
    come_call_finalizer3(result_384,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_383;
    result_383=0;
    result_383+=int_get_hash_key(((int)self->head));
    result_383+=int_get_hash_key(((int)self->tail));
    result_383+=int_get_hash_key(((int)self->len));
    result_383+=int_get_hash_key(((int)self->it));
    return result_383;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result255__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
struct list_item$1void$ph* litem_386;
void* __dec_obj73;
void* __right_value291 = (void*)0;
struct list_item$1void$ph* litem_387;
void* __dec_obj74;
void* __right_value292 = (void*)0;
struct list_item$1void$ph* litem_388;
void* __dec_obj75;
struct list$1void$ph* __result256__;
    if(    self->len==0) {
        litem_386=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value290=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj73=litem_386->item;
        litem_386->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value291=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj74=litem_387->item;
        litem_387->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value292=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj75=litem_388->item;
        litem_388->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_406;
unsigned int it_407;
_Bool same_key_exist_424;
char* it2_427;
struct map$2void$phvoid$ph* __result280__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_406=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_407=hash_406;
    while((_Bool)1) {
        if(        self->item_existance[it_407]) {
            if(            come_call_equals((void*)0, self->keys[it_407], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_407]);
                    come_call_finalizer3(self->keys[it_407],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_407]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_407]);
                    self->keys[it_407]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_407],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_407]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_407]=item;
                }
                break;
            }
            it_407++;
            if(            it_407>=self->size) {
                it_407=0;
            }
            else if(            it_407==hash_406) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_407]=(_Bool)1;
            if(            1) {
                self->keys[it_407]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_407]=key;
            }
            if(            1) {
                self->items[it_407]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_407]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_424=(_Bool)0;
    for(    it2_427=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_427=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_427, key)) {
            same_key_exist_424=(_Bool)1;
        }
    }
    if(    !same_key_exist_424) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_389;
void* __right_value300 = (void*)0;
void** keys_390;
void* __right_value301 = (void*)0;
void** items_391;
void* __right_value302 = (void*)0;
_Bool* item_existance_392;
int len_393;
void* it_396;
void* default_value_399;
void* __right_value303 = (void*)0;
void* it2_400;
unsigned int hash_403;
int n_404;
void* default_value_405;
void* __right_value304 = (void*)0;
default_value_399 = (void*)0;
default_value_405 = (void*)0;
    size_389=self->size*10;
    keys_390=(void**)come_increment_ref_count(((void**)(__right_value300=(void**)come_calloc(1, sizeof(void*)*(1*(size_389)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_391=(void**)come_increment_ref_count(((void**)(__right_value301=(void**)come_calloc(1, sizeof(void*)*(1*(size_389)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_392=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value302=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_389)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_393=0;
    for(    it_396=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_396=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_399,0,sizeof(void*));
        it2_400=((void*)(__right_value303=map$2void$phvoid$ph$p_at(self,it_396,(void*)come_increment_ref_count(default_value_399))));
        come_call_finalizer3(__right_value303,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_403=come_call_get_hash_key((void*)0, ((void*)it_396))%size_389;
        n_404=hash_403;
        while((_Bool)1) {
            if(            item_existance_392[n_404]) {
                n_404++;
                if(                n_404>=size_389) {
                    n_404=0;
                }
                else if(                n_404==hash_403) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_392[n_404]=(_Bool)1;
                keys_390[n_404]=it_396;
                items_391[n_404]=((void*)(__right_value304=map$2void$phvoid$ph$p_at(self,it_396,(void*)come_increment_ref_count(default_value_405))));
                come_call_finalizer3(__right_value304,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_393++;
                come_call_finalizer3(default_value_405,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_405,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_399,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_390;
    self->items=items_391;
    self->item_existance=item_existance_392;
    self->size=size_389;
    self->len=len_393;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_394;
void* __result259__;
void* __result260__;
void* result_395;
void* __result261__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(void*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_395,0,sizeof(void*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_397;
void* __result262__;
void* __result263__;
void* result_398;
void* __result264__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_397,0,sizeof(void*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_398,0,sizeof(void*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_401;
unsigned int it_402;
void* __result265__;
void* __result266__;
void* __result267__;
void* __result268__;
    hash_401=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_402=hash_401;
    while((_Bool)1) {
        if(        self->item_existance[it_402]) {
            if(            come_call_equals((void*)0, self->keys[it_402], key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_402];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_402++;
            if(            it_402>=self->size) {
                it_402=0;
            }
            else if(            it_402==hash_401) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_408;
struct list_item$1void$p* it_409;
struct list$1void$p* __result272__;
    it2_408=0;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        if(        come_call_equals((void*)0, it_409->item, item)) {
            list$1void$p$p_delete(self,it2_408,it2_408+1);
            break;
        }
        it2_408++;
        it_409=it_409->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_410;
struct list$1void$p* __result269__;
struct list_item$1void$p* it_413;
int i_414;
struct list_item$1void$p* prev_it_415;
struct list_item$1void$p* it_416;
int i_417;
struct list_item$1void$p* prev_it_418;
struct list_item$1void$p* it_419;
struct list_item$1void$p* head_prev_it_420;
struct list_item$1void$p* tail_it_421;
int i_422;
struct list_item$1void$p* prev_it_423;
struct list$1void$p* __result271__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_410=tail;
        tail=head;
        head=tmp_410;
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
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_413=self->head;
        i_414=0;
        while(it_413!=((void*)0)) {
            if(            i_414<tail) {
                prev_it_415=it_413;
                it_413=it_413->next;
                i_414++;
                come_call_finalizer3(prev_it_415,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_414==tail) {
                self->head=it_413;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_413=it_413->next;
                i_414++;
            }
        }
    }
    else if(    tail==self->len) {
        it_416=self->head;
        i_417=0;
        while(it_416!=((void*)0)) {
            if(            i_417==head) {
                self->tail=it_416->prev;
                self->tail->next=((void*)0);
            }
            if(            i_417>=head) {
                prev_it_418=it_416;
                it_416=it_416->next;
                i_417++;
                come_call_finalizer3(prev_it_418,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_416=it_416->next;
                i_417++;
            }
        }
    }
    else {
        it_419=self->head;
        head_prev_it_420=((void*)0);
        tail_it_421=((void*)0);
        i_422=0;
        while(it_419!=((void*)0)) {
            if(            i_422==head) {
                head_prev_it_420=it_419->prev;
            }
            if(            i_422==tail) {
                tail_it_421=it_419;
            }
            if(            i_422>=head&&i_422<tail) {
                prev_it_423=it_419;
                it_419=it_419->next;
                i_422++;
                come_call_finalizer3(prev_it_423,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_419=it_419->next;
                i_422++;
            }
        }
        if(        head_prev_it_420!=((void*)0)) {
            head_prev_it_420->next=tail_it_421;
        }
        if(        tail_it_421!=((void*)0)) {
            tail_it_421->prev=head_prev_it_420;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_411;
struct list_item$1void$p* prev_it_412;
struct list$1void$p* __result270__;
    it_411=self->head;
    while(it_411!=((void*)0)) {
        prev_it_412=it_411;
        it_411=it_411->next;
        come_call_finalizer3(prev_it_412,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_425;
void* __result273__;
void* __result274__;
void* result_426;
void* __result275__;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_425,0,sizeof(void*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_425;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_426,0,sizeof(void*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_426;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_428;
void* __result276__;
void* __result277__;
void* result_429;
void* __result278__;
result_428 = (void*)0;
result_429 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_428,0,sizeof(void*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_428;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_429,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_429;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
struct list_item$1void$p* litem_430;
void* __right_value306 = (void*)0;
struct list_item$1void$p* litem_431;
void* __right_value307 = (void*)0;
struct list_item$1void$p* litem_432;
struct list$1void$p* __result279__;
    if(    self->len==0) {
        litem_430=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value305=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        litem_430->item=item;
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value306=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        litem_431->item=item;
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value307=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        litem_432->item=item;
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result281__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __dec_obj89;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1void$ph* __dec_obj90;
struct sClass* __result283__;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj89=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj90=self->mFields;
    self->mFields=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 131, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj90,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
char* __dec_obj91;
void* __right_value324 = (void*)0;
char* __dec_obj92;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1char$ph* __dec_obj93;
void* __right_value327 = (void*)0;
char* __dec_obj94;
struct sClassModule* __result284__;
    __dec_obj91=self->mName;
    self->mName=(char*)come_increment_ref_count(come_call_cloner(charp_clone, name));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=self->mText;
    self->mText=(char*)come_increment_ref_count(come_call_cloner(string_clone, text));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=self->mParams;
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "01main.c", 140, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj93,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj94=self->mSName;
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=sline;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    (text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj95;
char* __dec_obj96;
struct list$1char$ph* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj95=self->mName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj96=self->mText;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj97=self->mParams;
            come_call_finalizer3(__dec_obj97,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj98=self->mSName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute){
void* __result_obj__=(void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
struct list$1void$ph* __dec_obj101;
struct list$1char$ph* __dec_obj102;
struct list$1char$ph* __dec_obj103;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj125;
struct list$1void$ph* o2_saved_450;
struct sType* it_453;
void* __right_value364 = (void*)0;
struct list$1char$ph* o2_saved_459;
char* it_462;
void* __right_value365 = (void*)0;
struct sType* __dec_obj129;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct buffer* __dec_obj130;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct buffer* __dec_obj131;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct buffer* __dec_obj132;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct buffer* __dec_obj133;
struct sBlock* __dec_obj134;
struct sType* result_465;
char* __dec_obj137;
char* __dec_obj138;
struct sFun* __result308__;
result_465 = (void*)0;
    __dec_obj99=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj101=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj101,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj102=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj102,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj103=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj103,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mGenerate=generate_;
    __dec_obj125=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 161, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_450=(struct list$1void$ph*)come_increment_ref_count((param_types)),it_453=((struct sType*)list$1void$ph$p_begin((o2_saved_450)));    !list$1void$ph$p_end((o2_saved_450));    it_453=((struct sType*)list$1void$ph$p_next((o2_saved_450)))    ){
        list$1void$ph$p_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_453)));
    }
    come_call_finalizer3(o2_saved_450,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_459=(struct list$1char$ph*)come_increment_ref_count((param_names)),it_462=list$1char$ph$p_begin((o2_saved_459));    !list$1char$ph$p_end((o2_saved_459));    it_462=list$1char$ph$p_next((o2_saved_459))    ){
        list$1char$ph$p_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_462)));
    }
    come_call_finalizer3(o2_saved_459,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj130=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 174, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj130,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj131=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 175, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj131,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj132=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 176, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj132,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj133=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 177, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj134=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer3(__dec_obj134,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    (string_operator_equals(result_type->mClass->mName,"void")||result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj137=self->mAttribute;
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=self->mFunAttribute;
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute = come_decrement_ref_count2(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result285__;
void* __right_value328 = (void*)0;
struct sType* result_438;
void* __right_value329 = (void*)0;
struct sType* __dec_obj104;
void* __right_value330 = (void*)0;
struct sType* __dec_obj105;
void* __right_value331 = (void*)0;
struct list$1void$ph* __dec_obj106;
void* __right_value332 = (void*)0;
struct sType* __dec_obj107;
void* __right_value333 = (void*)0;
struct sType* __dec_obj108;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj109;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj110;
void* __right_value337 = (void*)0;
char* __dec_obj111;
void* __right_value338 = (void*)0;
char* __dec_obj112;
void* __right_value339 = (void*)0;
char* __dec_obj113;
void* __right_value347 = (void*)0;
struct list$1sNode$ph* __dec_obj117;
void* __right_value348 = (void*)0;
char* __dec_obj118;
void* __right_value349 = (void*)0;
struct list$1void$ph* __dec_obj119;
void* __right_value357 = (void*)0;
struct list$1char$ph* __dec_obj123;
void* __right_value358 = (void*)0;
struct sType* __dec_obj124;
struct sType* __result294__;
    if(    self==(void*)0) {
        __result285__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_438=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_438->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj104=result_438->mOriginalLoadVarType;
        result_438->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj105=result_438->mChannelType;
        result_438->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj106=result_438->mGenericsTypes;
        result_438->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj106,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj107=result_438->mNoSolvedGenericsType;
        result_438->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj108=result_438->mAnyOriginalType;
        result_438->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj109=result_438->mSizeNum;
        result_438->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj110=result_438->mAlignas;
        result_438->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj111=result_438->mTupleName;
        result_438->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj112=result_438->mAttribute;
        result_438->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_438->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_438->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_438->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_438->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_438->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_438->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_438->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_438->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_438->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_438->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_438->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_438->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_438->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_438->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_438->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_438->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_438->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_438->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_438->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_438->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_438->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_438->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_438->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_438->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_438->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj113=result_438->mAsmName;
        result_438->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_438->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_438->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj117=result_438->mArrayNum;
        result_438->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj117,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_438->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_438->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_438->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_438->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj118=result_438->mOriginalTypeName;
        result_438->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_438->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_438->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_438->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj119=result_438->mParamTypes;
        result_438->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj119,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj123=result_438->mParamNames;
        result_438->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj123,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj124=result_438->mResultType;
        result_438->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->mVarArgs=self->mVarArgs;
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_438;
    come_call_finalizer3(result_438,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_433;
    result_433=0;
    result_433+=int_get_hash_key(((int)self->mClass));
    result_433+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_433+=int_get_hash_key(((int)self->mChannelType));
    result_433+=int_get_hash_key(((int)self->mGenericsTypes));
    result_433+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_433+=int_get_hash_key(((int)self->mAnyClass));
    result_433+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_433+=int_get_hash_key(((int)self->mSizeNum));
    result_433+=int_get_hash_key(((int)self->mAlignas));
    result_433+=int_get_hash_key(((int)self->mTupleName));
    result_433+=int_get_hash_key(((int)self->mAttribute));
    result_433+=int_get_hash_key(((int)self->mAllocaValue));
    result_433+=int_get_hash_key(((int)self->mUnsigned));
    result_433+=int_get_hash_key(((int)self->mShort));
    result_433+=int_get_hash_key(((int)self->mLong));
    result_433+=int_get_hash_key(((int)self->mLongLong));
    result_433+=int_get_hash_key(((int)self->mConstant));
    result_433+=int_get_hash_key(((int)self->mAtomic));
    result_433+=int_get_hash_key(((int)self->mRegister));
    result_433+=int_get_hash_key(((int)self->mVolatile));
    result_433+=int_get_hash_key(((int)self->mStatic));
    result_433+=int_get_hash_key(((int)self->mUniq));
    result_433+=int_get_hash_key(((int)self->mRecord));
    result_433+=int_get_hash_key(((int)self->mExtern));
    result_433+=int_get_hash_key(((int)self->mRestrict));
    result_433+=int_get_hash_key(((int)self->mImmutable));
    result_433+=int_get_hash_key(((int)self->mHeap));
    result_433+=int_get_hash_key(((int)self->mChannel));
    result_433+=int_get_hash_key(((int)self->mNoHeap));
    result_433+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_433+=int_get_hash_key(((int)self->mException));
    result_433+=int_get_hash_key(((int)self->mGenerate));
    result_433+=int_get_hash_key(((int)self->mCreateVTable));
    result_433+=int_get_hash_key(((int)self->mDynamic));
    result_433+=int_get_hash_key(((int)self->mInline));
    result_433+=int_get_hash_key(((int)self->mNullValue));
    result_433+=int_get_hash_key(((int)self->mGuardValue));
    result_433+=int_get_hash_key(((int)self->mAsmName));
    result_433+=int_get_hash_key(((int)self->mTypedef));
    result_433+=int_get_hash_key(((int)self->mMultipleTypes));
    result_433+=int_get_hash_key(((int)self->mOriginIsArray));
    result_433+=int_get_hash_key(((int)self->mArrayNum));
    result_433+=int_get_hash_key(((int)self->mPointerNum));
    result_433+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_433+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_433+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_433+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_433+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_433+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_433+=int_get_hash_key(((int)self->mArrayPointerType));
    result_433+=int_get_hash_key(((int)self->mLambdaArray));
    result_433+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_433+=int_get_hash_key(((int)self->mParamTypes));
    result_433+=int_get_hash_key(((int)self->mParamNames));
    result_433+=int_get_hash_key(((int)self->mResultType));
    result_433+=int_get_hash_key(((int)self->mVarArgs));
    return result_433;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_434;
struct list_item$1sNode$ph* it2_435;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_434=left->head;
    it2_435=right->head;
    while(it_434!=((void*)0)) {
        if(        !sNode_equals(it_434->item,it2_435->item)) {
            return (_Bool)0;
        }
        it_434=it_434->next;
        it2_435=it2_435->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_436;
struct list_item$1char$ph* it2_437;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_436=left->head;
    it2_437=right->head;
    while(it_436!=((void*)0)) {
        if(        !string_equals(it_436->item,it2_437->item)) {
            return (_Bool)0;
        }
        it_436=it_436->next;
        it2_437=it2_437->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result286__;
void* __right_value334 = (void*)0;
struct sNode* result_439;
struct sNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_439=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_439->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_439->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_439->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_439->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_439->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_439->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_439->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_439->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_439->kind=self->kind;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_439;
    ((result_439) ? result_439 = come_decrement_ref_count2(result_439, ((struct sNode*)result_439)->finalize, ((struct sNode*)result_439)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result288__;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1sNode$ph* result_440;
struct list_item$1sNode$ph* it_441;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1sNode$ph* __result290__;
    if(    self==((void*)0)) {
        __result288__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    result_440=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_441=self->head;
    while(it_441!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_440,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_441->item)));
        }
        else {
            list$1sNode$ph$p_add(result_440,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_441->item)));
        }
        it_441=it_441->next;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_440;
    come_call_finalizer3(result_440,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
struct list_item$1sNode$ph* litem_442;
struct sNode* __dec_obj114;
void* __right_value343 = (void*)0;
struct list_item$1sNode$ph* litem_443;
struct sNode* __dec_obj115;
void* __right_value344 = (void*)0;
struct list_item$1sNode$ph* litem_444;
struct sNode* __dec_obj116;
struct list$1sNode$ph* __result289__;
    if(    self->len==0) {
        litem_442=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value342=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_442->prev=((void*)0);
        litem_442->next=((void*)0);
        __dec_obj114=litem_442->item;
        litem_442->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_442;
        self->head=litem_442;
    }
    else if(    self->len==1) {
        litem_443=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value343=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=self->head;
        litem_443->next=((void*)0);
        __dec_obj115=litem_443->item;
        litem_443->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_443;
        self->head->next=litem_443;
    }
    else {
        litem_444=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value344=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=self->tail;
        litem_444->next=((void*)0);
        __dec_obj116=litem_444->item;
        litem_444->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_444;
        self->tail=litem_444;
    }
    self->len++;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result291__;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct list$1char$ph* result_445;
struct list_item$1char$ph* it_446;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1char$ph* __result293__;
    if(    self==((void*)0)) {
        __result291__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    result_445=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_446=self->head;
    while(it_446!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_445,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_446->item)));
        }
        else {
            list$1char$ph$p_add(result_445,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_446->item)));
        }
        it_446=it_446->next;
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_445;
    come_call_finalizer3(result_445,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct list_item$1char$ph* litem_447;
char* __dec_obj120;
void* __right_value353 = (void*)0;
struct list_item$1char$ph* litem_448;
char* __dec_obj121;
void* __right_value354 = (void*)0;
struct list_item$1char$ph* litem_449;
char* __dec_obj122;
struct list$1char$ph* __result292__;
    if(    self->len==0) {
        litem_447=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value352=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_447->prev=((void*)0);
        litem_447->next=((void*)0);
        __dec_obj120=litem_447->item;
        litem_447->item=(char*)come_increment_ref_count(item);
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_447;
        self->head=litem_447;
    }
    else if(    self->len==1) {
        litem_448=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value353=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=self->head;
        litem_448->next=((void*)0);
        __dec_obj121=litem_448->item;
        litem_448->item=(char*)come_increment_ref_count(item);
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_448;
        self->head->next=litem_448;
    }
    else {
        litem_449=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value354=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->tail;
        litem_449->next=((void*)0);
        __dec_obj122=litem_449->item;
        litem_449->item=(char*)come_increment_ref_count(item);
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_449;
        self->tail=litem_449;
    }
    self->len++;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_451;
void* __result295__;
void* __result296__;
void* result_452;
void* __result297__;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_451,0,sizeof(void*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_451;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->head;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_452,0,sizeof(void*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_452;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_454;
void* __result298__;
void* __result299__;
void* result_455;
void* __result300__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_454,0,sizeof(void*));
        __result298__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result299__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    memset(&result_455,0,sizeof(void*));
    __result300__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct list_item$1void$ph* litem_456;
void* __dec_obj126;
void* __right_value362 = (void*)0;
struct list_item$1void$ph* litem_457;
void* __dec_obj127;
void* __right_value363 = (void*)0;
struct list_item$1void$ph* litem_458;
void* __dec_obj128;
struct list$1void$ph* __result301__;
    if(    self->len==0) {
        litem_456=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value361=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        __dec_obj126=litem_456->item;
        litem_456->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1) {
        litem_457=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value362=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        __dec_obj127=litem_457->item;
        litem_457->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value363=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        __dec_obj128=litem_458->item;
        litem_458->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_460;
char* __result302__;
char* __result303__;
char* result_461;
char* __result304__;
result_460 = (void*)0;
result_461 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_460,0,sizeof(char*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_460;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->it=self->head;
    if(    self->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_461,0,sizeof(char*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_461;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_463;
char* __result305__;
char* __result306__;
char* result_464;
char* __result307__;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_463,0,sizeof(char*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_463;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_464,0,sizeof(char*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_464;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNode$ph* __dec_obj135;
struct sVarTable* __dec_obj136;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj135=self->mNodes;
            come_call_finalizer3(__dec_obj135,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj136=self->mVarTable;
            come_call_finalizer3(__dec_obj136,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj139;
struct sType* __dec_obj140;
struct list$1void$ph* __dec_obj141;
struct list$1char$ph* __dec_obj142;
struct list$1char$ph* __dec_obj143;
struct sType* __dec_obj144;
struct sBlock* __dec_obj145;
struct buffer* __dec_obj146;
struct buffer* __dec_obj147;
struct buffer* __dec_obj148;
struct buffer* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj139=self->mName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj140=self->mResultType;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj141=self->mParamTypes;
            come_call_finalizer3(__dec_obj141,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj142=self->mParamNames;
            come_call_finalizer3(__dec_obj142,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj143=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj143,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj144=self->mLambdaType;
            come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj145=self->mBlock;
            come_call_finalizer3(__dec_obj145,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj146=self->mSource;
            come_call_finalizer3(__dec_obj146,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj147=self->mSourceHead;
            come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj148=self->mSourceHead2;
            come_call_finalizer3(__dec_obj148,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj149=self->mSourceDefer;
            come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj150=self->mAttribute;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj151=self->mFunAttribute;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj152;
struct sNodeBase* __result309__;
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj153;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value375=__builtin_string(self->sname)));
    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result310__;
}

