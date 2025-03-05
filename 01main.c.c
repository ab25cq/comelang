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
void come_print_heap_info(void* mem);
char* come_get_sname(void* mem);
int come_get_sline(void* mem);
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
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
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
static void list$1void$ph_finalize(struct list$1void$ph* self);
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
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
void* __right_value3 = (void*)0;
char* __result_obj__1;
    __result_obj__1 = come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__1 = come_decrement_ref_count2(__result_obj__1, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__1;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__2;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result_obj__2 = mem;
    return __result_obj__2;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__3;
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
    __result_obj__3 = mem;
    return __result_obj__3;
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
void* result_12;
unsigned long  int free_area_13;
int new_size_pages_14;
char** new_pages_15;
int i_16;
void* __result_obj__4;
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
    __result_obj__4 = result_12;
    return __result_obj__4;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
void* result_17;
struct sMemHeader* it_18;
int i_19;
int i_20;
void* __result_obj__5;
void* result_21;
struct sMemHeaderTiny* it_22;
void* __result_obj__6;
memset(&i_19, 0, sizeof(int));
memset(&i_20, 0, sizeof(int));
    if(    gComeDebugLib) {
        result_17=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_18=result_17;
        it_18->allocated=177783;
        it_18->size=size+sizeof(struct sMemHeader);
        it_18->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            for(            i_19=0;            i_19<gNumComeStackFrame;            i_19++            ){
                it_18->sname[i_19]=gComeStackFrameSName[i_19];
                it_18->sline[i_19]=gComeStackFrameSLine[i_19];
                it_18->id[i_19]=gComeStackFrameID[i_19];
            }
        }
        else {
            for(            i_20=0;            i_20<16;            i_20++            ){
                it_18->sname[i_20]=gComeStackFrameSName[gNumComeStackFrame-1-i_20];
                it_18->sline[i_20]=gComeStackFrameSLine[gNumComeStackFrame-1-i_20];
                it_18->id[i_20]=gComeStackFrameID[gNumComeStackFrame-1-i_20];
            }
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
        __result_obj__5 = (char*)result_17+sizeof(struct sMemHeader);
        return __result_obj__5;
    }
    else {
        result_21=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_22=result_21;
        it_22->allocated=177783;
        it_22->class_name=class_name;
        it_22->finalizer_fun=finalizer_fun;
        it_22->cloner_fun=cloner_fun;
        it_22->get_hash_key_fun=get_hash_key_fun;
        it_22->equaler_fun=equaler_fun;
        it_22->sname=sname;
        it_22->sline=sline;
        it_22->size=size+sizeof(struct sMemHeaderTiny);
        it_22->free_next=((void*)0);
        it_22->next=(struct sMemHeaderTiny*)gAllocMem;
        it_22->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_22;
        }
        gAllocMem=(struct sMemHeader*)it_22;
        gNumAlloc++;
        __result_obj__6 = (char*)result_21+sizeof(struct sMemHeaderTiny);
        return __result_obj__6;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_23;
struct sMemHeader* prev_it_24;
struct sMemHeader* next_it_25;
unsigned long  int size_26;
struct sMemHeaderTiny* it_27;
struct sMemHeaderTiny* prev_it_28;
struct sMemHeaderTiny* next_it_29;
unsigned long  int size_30;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_23=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_23->allocated!=177783) {
                return;
            }
            it_23->allocated=0;
            prev_it_24=it_23->prev;
            next_it_25=it_23->next;
            if(            gAllocMem==it_23) {
                gAllocMem=next_it_25;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_24) {
                    prev_it_24->next=next_it_25;
                }
                if(                next_it_25) {
                    next_it_25->prev=prev_it_24;
                }
            }
            size_26=it_23->size;
            if(            size_26<2048*2) {
                if(                gHeapPages.mFreeMem[size_26]==((void*)0)) {
                    it_23->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_26]=(struct sMemHeaderTiny*)it_23;
                }
                else {
                    it_23->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_26];
                    gHeapPages.mFreeMem[size_26]=(struct sMemHeaderTiny*)it_23;
                }
            }
            else {
                free(it_23);
            }
            gNumFree++;
        }
        else {
            it_27=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_27->allocated!=177783) {
                return;
            }
            it_27->allocated=0;
            prev_it_28=it_27->prev;
            next_it_29=it_27->next;
            if(            gAllocMem==it_27) {
                gAllocMem=(struct sMemHeader*)next_it_29;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_28) {
                    prev_it_28->next=next_it_29;
                }
                if(                next_it_29) {
                    next_it_29->prev=prev_it_28;
                }
            }
            size_30=it_27->size;
            if(            size_30<2048*2) {
                if(                gHeapPages.mFreeMem[size_30]==((void*)0)) {
                    it_27->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_30]=it_27;
                }
                else {
                    it_27->free_next=gHeapPages.mFreeMem[size_30];
                    gHeapPages.mFreeMem[size_30]=it_27;
                }
            }
            else {
                free(it_27);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_31;
char* __result_obj__7;
struct sMemHeaderTiny* it_32;
char* __result_obj__8;
    if(    gComeDebugLib) {
        it_31=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_31->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_31);
            exit(2);
        }
        __result_obj__7 = it_31->class_name;
        return __result_obj__7;
    }
    else {
        it_32=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_32->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_32);
            exit(2);
        }
        __result_obj__8 = it_32->class_name;
        return __result_obj__8;
    }
}

void* come_get_finalizer(void* mem){
struct sMemHeader* it_33;
void* __result_obj__9;
void* __result_obj__10;
struct sMemHeaderTiny* it_34;
void* __result_obj__11;
void* __result_obj__12;
    if(    gComeDebugLib) {
        it_33=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_33->allocated!=177783) {
            __result_obj__9 = ((void*)0);
            return __result_obj__9;
        }
        __result_obj__10 = it_33->finalizer_fun;
        return __result_obj__10;
    }
    else {
        it_34=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_34->allocated!=177783) {
            __result_obj__11 = ((void*)0);
            return __result_obj__11;
        }
        __result_obj__12 = it_34->finalizer_fun;
        return __result_obj__12;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_35;
int i_36;
struct sMemHeaderTiny* it_37;
    if(    gComeDebugLib) {
        it_35=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_35->allocated!=177783) {
            return;
        }
        printf("%p ",mem);
        if(        it_35->class_name) {
            printf("(%s): ",it_35->class_name);
        }
        for(        i_36=0;        i_36<16;        i_36++        ){
            if(            it_35->sname[i_36]) {
                printf("%s %d #%d, ",it_35->sname[i_36],it_35->sline[i_36],it_35->id[i_36]);
            }
        }
        puts("");
    }
    else {
        it_37=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_37->allocated!=177783) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_37->class_name,it_37->sname,it_37->sline);
    }
}

char* come_get_sname(void* mem){
struct sMemHeader* it_38;
char* __result_obj__13;
char* __result_obj__14;
struct sMemHeaderTiny* it_39;
char* __result_obj__15;
char* __result_obj__16;
    if(    gComeDebugLib) {
        it_38=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_38->allocated!=177783) {
            __result_obj__13 = ((void*)0);
            return __result_obj__13;
        }
        __result_obj__14 = it_38->sname;
        return __result_obj__14;
    }
    else {
        it_39=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_39->allocated!=177783) {
            __result_obj__15 = ((void*)0);
            return __result_obj__15;
        }
        __result_obj__16 = it_39->sname;
        return __result_obj__16;
    }
}

int come_get_sline(void* mem){
struct sMemHeader* it_40;
struct sMemHeaderTiny* it_41;
    if(    gComeDebugLib) {
        it_40=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_40->allocated!=177783) {
            return 0;
        }
        return it_40->sline;
    }
    else {
        it_41=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_41->allocated!=177783) {
            return 0;
        }
        return it_41->sline;
    }
}

void* come_get_cloner(void* mem){
struct sMemHeader* it_42;
void* __result_obj__17;
void* __result_obj__18;
struct sMemHeaderTiny* it_43;
void* __result_obj__19;
void* __result_obj__20;
    if(    gComeDebugLib) {
        it_42=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_42->allocated!=177783) {
            __result_obj__17 = ((void*)0);
            return __result_obj__17;
        }
        __result_obj__18 = it_42->cloner_fun;
        return __result_obj__18;
    }
    else {
        it_43=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_43->allocated!=177783) {
            __result_obj__19 = ((void*)0);
            return __result_obj__19;
        }
        __result_obj__20 = it_43->cloner_fun;
        return __result_obj__20;
    }
}

void* come_get_hash_key(void* mem){
struct sMemHeader* it_44;
void* __result_obj__21;
void* __result_obj__22;
struct sMemHeaderTiny* it_45;
void* __result_obj__23;
void* __result_obj__24;
    if(    gComeDebugLib) {
        it_44=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_44->allocated!=177783) {
            __result_obj__21 = ((void*)0);
            return __result_obj__21;
        }
        __result_obj__22 = it_44->get_hash_key_fun;
        return __result_obj__22;
    }
    else {
        it_45=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_45->allocated!=177783) {
            __result_obj__23 = ((void*)0);
            return __result_obj__23;
        }
        __result_obj__24 = it_45->get_hash_key_fun;
        return __result_obj__24;
    }
}

void* come_get_equaler(void* mem){
struct sMemHeader* it_46;
void* __result_obj__25;
void* __result_obj__26;
struct sMemHeaderTiny* it_47;
void* __result_obj__27;
void* __result_obj__28;
    if(    gComeDebugLib) {
        it_46=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_46->allocated!=177783) {
            __result_obj__25 = ((void*)0);
            return __result_obj__25;
        }
        __result_obj__26 = it_46->equaler_fun;
        return __result_obj__26;
    }
    else {
        it_47=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_47->allocated!=177783) {
            __result_obj__27 = ((void*)0);
            return __result_obj__27;
        }
        __result_obj__28 = it_47->equaler_fun;
        return __result_obj__28;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun){
char* mem_48;
unsigned long  int* ref_count_49;
unsigned long  int* size2_50;
void* __result_obj__29;
    mem_48=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name,finalizer_fun,cloner_fun,get_hash_key_fun,equaler_fun);
    ref_count_49=(unsigned long  int*)mem_48;
    *ref_count_49=0;
    size2_50=(unsigned long  int*)(mem_48+sizeof(unsigned long  int));
    *size2_50=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__29 = mem_48+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__29;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_51;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_51=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_51);
}

void come_free(void* mem){
unsigned long  int* ref_count_52;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_52=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_52);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__30;
char* mem_53;
unsigned long  int* size_p_54;
unsigned long  int size_55;
void* finalizer_fun_56;
void* cloner_fun_57;
void* get_hash_key_fun_58;
void* equaler_fun_59;
void* result_60;
void* __result_obj__31;
    if(    !block) {
        __result_obj__30 = ((void*)0);
        return __result_obj__30;
    }
    mem_53=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_54=(unsigned long  int*)(mem_53+sizeof(unsigned long  int));
    size_55=*size_p_54-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    finalizer_fun_56=come_get_finalizer(block);
    cloner_fun_57=come_get_cloner(block);
    get_hash_key_fun_58=come_get_hash_key(block);
    equaler_fun_59=come_get_equaler(block);
    result_60=come_calloc(1,size_55,sname,sline,class_name,finalizer_fun_56,cloner_fun_57,get_hash_key_fun_58,equaler_fun_59);
    memcpy(result_60,block,size_55);
    __result_obj__31 = result_60;
    return __result_obj__31;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__32;
unsigned long  int* ref_count_61;
void* __result_obj__33;
    if(    mem==((void*)0)) {
        __result_obj__32 = mem;
        return __result_obj__32;
    }
    ref_count_61=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_61)++;
    __result_obj__33 = mem;
    return __result_obj__33;
}

void* come_print_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_62;
void* __result_obj__35;
    if(    mem==((void*)0)) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_62=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_62);
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__36;
unsigned long  int* ref_count_63;
unsigned long  int count_64;
void (*finalizer_65)(void*);
void* __result_obj__37;
void* __result_obj__38;
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result_obj__36 = ((void*)0);
        return __result_obj__36;
    }
    ref_count_63=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_63)--;
    }
    count_64=*ref_count_63;
    if(    !no_free&&(count_64<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_65=protocol_fun;
            finalizer_65(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    __result_obj__38 = mem;
    return __result_obj__38;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__39;
void* __result_obj__40;
unsigned long  int* ref_count_66;
unsigned long  int count_67;
void (*finalizer_68)(void*);
void* __result_obj__41;
void* __result_obj__42;
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result_obj__39 = mem;
            return __result_obj__39;
        }
    }
    if(    mem==((void*)0)) {
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    ref_count_66=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_66)--;
    }
    count_67=*ref_count_66;
    if(    !no_free&&(count_67<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_68=protocol_fun;
            finalizer_68(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result_obj__41 = ((void*)0);
        return __result_obj__41;
    }
    __result_obj__42 = mem;
    return __result_obj__42;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* fun2_69;
void (*finalizer_70)(void*);
void (*finalizer_71)(void*);
void (*finalizer_72)(void*);
void (*finalizer_73)(void*);
unsigned long  int* ref_count_74;
unsigned long  int count_75;
void* fun2_76;
void (*finalizer_77)(void*);
void (*finalizer_78)(void*);
void (*finalizer_79)(void*);
void (*finalizer_80)(void*);
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_77, 0, sizeof(void (*)(void*)));
memset(&finalizer_78, 0, sizeof(void (*)(void*)));
memset(&finalizer_79, 0, sizeof(void (*)(void*)));
memset(&finalizer_80, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_69=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_70=protocol_fun;
                finalizer_70(protocol_obj);
            }
            finalizer_71=fun;
            finalizer_71(mem);
        }
        else if(        fun2_69) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_72=protocol_fun;
                finalizer_72(protocol_obj);
            }
            finalizer_73=fun2_69;
            finalizer_73(mem);
        }
    }
    else {
        ref_count_74=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_74)--;
        }
        count_75=*ref_count_74;
        if(        !no_free&&(count_75<=0||force_delete_)) {
            if(            mem) {
                fun2_76=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_77=protocol_fun;
                        finalizer_77(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_78=fun;
                        finalizer_78(mem);
                    }
                }
                else if(                fun2_76) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_79=protocol_fun;
                        finalizer_79(protocol_obj);
                    }
                    finalizer_80=fun2_76;
                    finalizer_80(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_81;
void (*finalizer_82)(void*);
void (*finalizer_83)(void*);
void (*finalizer_84)(void*);
void (*finalizer_85)(void*);
unsigned long  int* ref_count_86;
unsigned long  int count_87;
void* fun2_88;
void (*finalizer_89)(void*);
void (*finalizer_90)(void*);
void (*finalizer_91)(void*);
void (*finalizer_92)(void*);
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
memset(&finalizer_83, 0, sizeof(void (*)(void*)));
memset(&finalizer_84, 0, sizeof(void (*)(void*)));
memset(&finalizer_85, 0, sizeof(void (*)(void*)));
memset(&finalizer_89, 0, sizeof(void (*)(void*)));
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
memset(&finalizer_91, 0, sizeof(void (*)(void*)));
memset(&finalizer_92, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_81=come_get_finalizer(mem);
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_82=protocol_fun;
                finalizer_82(protocol_obj);
            }
            finalizer_83=fun;
            finalizer_83(mem);
        }
        else if(        fun2_81) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_84=protocol_fun;
                finalizer_84(protocol_obj);
            }
            finalizer_85=fun2_81;
            finalizer_85(mem);
        }
    }
    else {
        ref_count_86=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_86)--;
        }
        count_87=*ref_count_86;
        if(        !no_free&&(count_87<=0||force_delete_)) {
            if(            mem) {
                fun2_88=come_get_finalizer(mem);
                if(                fun) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_89=protocol_fun;
                        finalizer_89(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_90=fun;
                        finalizer_90(mem);
                    }
                }
                else if(                fun2_88) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_91=protocol_fun;
                        finalizer_91(protocol_obj);
                    }
                    finalizer_92=fun2_88;
                    finalizer_92(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_93;
void (*finalizer_94)(void*);
void (*finalizer_95)(void*);
unsigned long  int* ref_count_96;
unsigned long  int count_97;
void* fun2_98;
void (*finalizer_99)(void*);
void (*finalizer_100)(void*);
memset(&finalizer_94, 0, sizeof(void (*)(void*)));
memset(&finalizer_95, 0, sizeof(void (*)(void*)));
memset(&finalizer_99, 0, sizeof(void (*)(void*)));
memset(&finalizer_100, 0, sizeof(void (*)(void*)));
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
            fun2_93=come_get_finalizer(mem);
            if(            fun) {
                finalizer_94=fun;
                finalizer_94(mem);
            }
            else if(            fun2_93) {
                finalizer_95=fun2_93;
                finalizer_95(mem);
            }
        }
    }
    else {
        ref_count_96=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_96)--;
        }
        count_97=*ref_count_96;
        if(        !no_free&&(count_97<=0||force_delete_)) {
            if(            mem) {
                fun2_98=come_get_finalizer(mem);
                if(                fun) {
                    finalizer_99=fun;
                    finalizer_99(mem);
                }
                else if(                fun2_98) {
                    finalizer_100=fun2_98;
                    finalizer_100(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__43;
void* finalizer_fun_101;
void* cloner_fun_102;
void* get_hash_key_fun_103;
void* equaler_fun_104;
void* mem2_105;
void* (*cloner_106)(void*);
void* (*cloner_107)(void*);
struct sMemHeader* it_108;
struct sMemHeader* it2_109;
void* __result_obj__44;
struct sMemHeaderTiny* it_110;
struct sMemHeaderTiny* it2_111;
void* __result_obj__45;
void* __result_obj__46;
memset(&cloner_106, 0, sizeof(void* (*)(void*)));
memset(&cloner_107, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result_obj__43 = ((void*)0);
        return __result_obj__43;
    }
    finalizer_fun_101=come_get_finalizer(mem);
    cloner_fun_102=come_get_cloner(mem);
    get_hash_key_fun_103=come_get_hash_key(mem);
    equaler_fun_104=come_get_equaler(mem);
    mem2_105=((void*)0);
    if(    fun) {
        cloner_106=fun;
        mem2_105=cloner_106(mem);
    }
    else if(    cloner_fun_102) {
        cloner_107=cloner_fun_102;
        mem2_105=cloner_107(mem);
    }
    if(    mem2_105) {
        if(        gComeDebugLib) {
            it_108=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_109=(struct sMemHeader*)((char*)mem2_105-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
            it2_109->class_name=it_108->class_name;
            it2_109->finalizer_fun=it_108->finalizer_fun;
            it2_109->cloner_fun=it_108->cloner_fun;
            it2_109->get_hash_key_fun=it_108->get_hash_key_fun;
            it2_109->equaler_fun=it_108->equaler_fun;
            memcpy(it2_109->sname,it_108->sname,sizeof(char*)*16);
            memcpy(it2_109->sline,it_108->sline,sizeof(int)*16);
            memcpy(it2_109->id,it_108->id,sizeof(int)*16);
            __result_obj__44 = mem2_105;
            return __result_obj__44;
        }
        else {
            it_110=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_111=(struct sMemHeaderTiny*)((char*)mem2_105-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
            it2_111->class_name=it_110->class_name;
            it2_111->finalizer_fun=it_110->finalizer_fun;
            it2_111->cloner_fun=it_110->cloner_fun;
            it2_111->get_hash_key_fun=it_110->get_hash_key_fun;
            it2_111->equaler_fun=it_110->equaler_fun;
            it2_111->sname=it_110->sname;
            it2_111->sline=it_110->sline;
            __result_obj__45 = mem2_105;
            return __result_obj__45;
        }
    }
    __result_obj__46 = ((void*)0);
    return __result_obj__46;
}

unsigned int come_call_get_hash_key(void* fun, void* mem){
void* fun2_112;
unsigned int (*cloner_113)(void*);
unsigned int (*cloner_114)(void*);
memset(&cloner_113, 0, sizeof(unsigned int (*)(void*)));
memset(&cloner_114, 0, sizeof(unsigned int (*)(void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_112=come_get_hash_key(mem);
    if(    fun) {
        cloner_113=fun;
        return cloner_113(mem);
    }
    else if(    fun2_112) {
        cloner_114=fun2_112;
        return cloner_114(mem);
    }
    return 0;
}

unsigned int come_call_equals(void* fun, void* mem, void* mem2){
void* fun2_115;
unsigned int (*equaler_116)(void*,void*);
unsigned int (*equaler_117)(void*,void*);
memset(&equaler_116, 0, sizeof(unsigned int (*)(void*,void*)));
memset(&equaler_117, 0, sizeof(unsigned int (*)(void*,void*)));
    if(    mem==((void*)0)) {
        return 0;
    }
    fun2_115=come_get_equaler(mem);
    if(    fun) {
        equaler_116=fun;
        return equaler_116(mem,mem2);
    }
    else if(    fun2_115) {
        equaler_117=fun2_115;
        return equaler_117(mem,mem2);
    }
    return 0;
}

char* __builtin_string(char* str){
char* __result_obj__47;
int len_118;
void* __right_value4 = (void*)0;
char* result_119;
char* __result_obj__48;
    if(    str==((void*)0)) {
        __result_obj__47 = come_increment_ref_count(((void*)0));
        (__result_obj__47 = come_decrement_ref_count2(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__47;
    }
    len_118=strlen(str)+1;
    result_119=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_118)), "./comelang.h", 1378, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_119,str,len_118);
    __result_obj__48 = come_increment_ref_count(result_119);
    (result_119 = come_decrement_ref_count2(result_119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__48 = come_decrement_ref_count2(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__48;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_120;
int i_121;
    found_120=(_Bool)0;
    for(    i_121=0;    i_121<len;    i_121++    ){
        if(        array[i_121]==element) {
            found_120=(_Bool)1;
            break;
        }
    }
    return found_120;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__49;
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3773, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__49 = come_increment_ref_count(self);
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__49,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__49;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__50;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3783, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__50 = come_increment_ref_count(self);
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__50,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__50;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        (self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__51;
void* __right_value7 = (void*)0;
struct buffer* result_122;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__52;
    if(    self==((void*)0)) {
        __result_obj__51 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__51,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__51;
    }
    result_122=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3803, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals));
    result_122->size=self->size;
    __dec_obj3=result_122->buf;
    result_122->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3806, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_122->len=self->len;
    memcpy(result_122->buf,self->buf,self->len);
    __result_obj__52 = come_increment_ref_count(result_122);
    come_call_finalizer3(result_122,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__52,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__52;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result_obj__53;
    if(    left==((void*)0)||right==((void*)0)) {
        return (_Bool)0;
    }
    __result_obj__53 = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    (__right_value9 = come_decrement_ref_count2(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value10 = come_decrement_ref_count2(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__53;
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
struct buffer* __result_obj__54;
void* __right_value11 = (void*)0;
char* old_buf_123;
int old_len_124;
int new_size_125;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__55;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_123=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3854, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_123,self->buf,self->size);
        old_len_124=self->len;
        new_size_125=(self->size+size+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_125)), "./comelang.h", 3858, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
        (old_buf_123 = come_decrement_ref_count2(old_buf_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__56;
void* __right_value13 = (void*)0;
char* old_buf_126;
int old_len_127;
int new_size_128;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__57;
    if(    self==((void*)0)) {
        __result_obj__56 = ((void*)0);
        return __result_obj__56;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_126=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3877, "char*"));
        old_len_127=self->len;
        new_size_128=(self->size+10+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_128)), "./comelang.h", 3881, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_126,old_len_127);
        self->buf[old_len_127]=0;
        self->size=new_size_128;
        (old_buf_126 = come_decrement_ref_count2(old_buf_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__58;
int size_129;
void* __right_value15 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__59;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    size_129=strlen(mem);
    if(    self->len+size_129+1+1>=self->size) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3903, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_130,self->buf,self->size);
        old_len_131=self->len;
        new_size_132=(self->size+size_129+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_132)), "./comelang.h", 3907, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        (old_buf_130 = come_decrement_ref_count2(old_buf_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_129);
    self->len+=size_129;
    self->buf[self->len]=0;
    __result_obj__59 = self;
    return __result_obj__59;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__60;
va_list args_133;
char* result_134;
int len_135;
struct buffer* __result_obj__61;
void* __right_value17 = (void*)0;
char* mem_136;
int size_137;
void* __right_value18 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__62;
memset(&args_133, 0, sizeof(va_list));
result_134 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    __builtin_va_start(args_133,msg);
    len_135=vasprintf(&result_134,msg,args_133);
    __builtin_va_end(args_133);
    if(    len_135<0) {
        __result_obj__61 = self;
        come_call_finalizer3((&args_133),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result_obj__61;
    }
    mem_136=(char*)come_increment_ref_count(__builtin_string(result_134));
    size_137=strlen(mem_136);
    if(    self->len+size_137+1+1>=self->size) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3940, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_140)), "./comelang.h", 3944, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        (old_buf_138 = come_decrement_ref_count2(old_buf_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    free(result_134);
    __result_obj__62 = self;
    come_call_finalizer3((&args_133),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (mem_136 = come_decrement_ref_count2(mem_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__62;
}

static void va_list_finalize(va_list self){
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__63;
int size_141;
void* __right_value20 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__64;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result_obj__63 = self;
        return __result_obj__63;
    }
    size_141=strlen(mem)+1;
    if(    self->len+size_141+1+1+1>=self->size) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3966, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_144)), "./comelang.h", 3970, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count2(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__65;
int* mem_145;
int size_146;
void* __right_value22 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__66;
    if(    self==((void*)0)) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    mem_145=&value;
    size_146=sizeof(int);
    if(    self->len+size_146+1+1>=self->size) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3993, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_149)), "./comelang.h", 3997, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count2(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_145,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_150;
int size_151;
void* __right_value24 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__67;
    mem_150=&value;
    size_151=sizeof(long);
    if(    self->len+size_151+1+1>=self->size) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 4016, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_154)), "./comelang.h", 4020, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count2(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__68;
short* mem_155;
int size_156;
void* __right_value26 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__69;
    if(    self==((void*)0)) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    mem_155=&value;
    size_156=sizeof(short);
    if(    self->len+size_156+1+1>=self->size) {
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 4043, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_159)), "./comelang.h", 4047, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        (old_buf_157 = come_decrement_ref_count2(old_buf_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_155,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__70;
int len_160;
int new_size_161;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_162;
struct buffer* __result_obj__71;
    if(    self==((void*)0)) {
        __result_obj__70 = ((void*)0);
        return __result_obj__70;
    }
    len_160=self->len;
    len_160=(len_160+3)&~3;
    if(    len_160>=self->size) {
        new_size_161=(self->size+1+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_161)), "./comelang.h", 4071, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_161;
    }
    for(    i_162=self->len;    i_162<len_160;    i_162++    ){
        self->buf[i_162]=0;
    }
    self->len=len_160;
    __result_obj__71 = self;
    return __result_obj__71;
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
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__72;
struct buffer* __result_obj__73;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4101, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    self==((void*)0)) {
        __result_obj__72 = come_increment_ref_count(result_163);
        come_call_finalizer3(result_163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(__result_obj__72,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__72;
    }
    buffer_append_str(result_163,self);
    __result_obj__73 = come_increment_ref_count(result_163);
    come_call_finalizer3(result_163,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__73,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__73;
}

char* buffer_to_string(struct buffer* self){
void* __right_value31 = (void*)0;
char* __result_obj__74;
void* __right_value32 = (void*)0;
char* __result_obj__75;
    if(    self==((void*)0)) {
        __result_obj__74 = come_increment_ref_count(((char*)(__right_value31=__builtin_string(""))));
        (__right_value31 = come_decrement_ref_count2(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__74 = come_decrement_ref_count2(__result_obj__74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__74;
    }
    __result_obj__75 = come_increment_ref_count(((char*)(__right_value32=__builtin_string(self->buf))));
    (__right_value32 = come_decrement_ref_count2(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__75 = come_decrement_ref_count2(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__75;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__76;
    __result_obj__76 = self->buf;
    return __result_obj__76;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__77;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4128, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_164,self,sizeof(char)*len);
    __result_obj__77 = come_increment_ref_count(result_164);
    come_call_finalizer3(result_164,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__77,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__77;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_165;
int i_166;
struct buffer* __result_obj__78;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4135, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_166=0;    i_166<len;    i_166++    ){
        buffer_append(result_165,self[i_166],strlen(self[i_166]));
    }
    __result_obj__78 = come_increment_ref_count(result_165);
    come_call_finalizer3(result_165,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__78,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__78;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__79;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4144, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_167,(char*)self,sizeof(short)*len);
    __result_obj__79 = come_increment_ref_count(result_167);
    come_call_finalizer3(result_167,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__79,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__79;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__80;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4151, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_168,(char*)self,sizeof(int)*len);
    __result_obj__80 = come_increment_ref_count(result_168);
    come_call_finalizer3(result_168,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__80,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__80;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__81;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4158, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_169,(char*)self,sizeof(long)*len);
    __result_obj__81 = come_increment_ref_count(result_169);
    come_call_finalizer3(result_169,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_170;
struct buffer* __result_obj__82;
    result_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4165, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_170,(char*)self,sizeof(float)*len);
    __result_obj__82 = come_increment_ref_count(result_170);
    come_call_finalizer3(result_170,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__82,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__82;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__83;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4172, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(result_171,(char*)self,sizeof(double)*len);
    __result_obj__83 = come_increment_ref_count(result_171);
    come_call_finalizer3(result_171,buffer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__83,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__83;
}

char* buffer_printable(struct buffer* self){
int len_172;
void* __right_value47 = (void*)0;
char* result_173;
int n_174;
int i_175;
unsigned char c_176;
char* __result_obj__84;
    len_172=self->len;
    result_173=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_172*2+1)), "./comelang.h", 4180, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    n_174=0;
    for(    i_175=0;    i_175<len_172;    i_175++    ){
        c_176=self->buf[i_175];
        if(        (c_176>=0&&c_176<32)||c_176==127) {
            result_173[n_174++]=94;
            result_173[n_174++]=c_176+65-1;
        }
        else if(        c_176>127) {
            result_173[n_174++]=63;
        }
        else {
            result_173[n_174++]=c_176;
        }
    }
    result_173[n_174]=0;
    __result_obj__84 = come_increment_ref_count(result_173);
    (result_173 = come_decrement_ref_count2(result_173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__84 = come_decrement_ref_count2(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__84;
}

struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self){
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char$* __result_obj__86;
    __result_obj__86 = come_increment_ref_count(((struct smart_pointer$1char$*)(__right_value50=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4500, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self))))));
    come_call_finalizer3(__right_value50,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__85;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__85 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__85,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__85;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char$* __result_obj__87;
    __result_obj__87 = come_increment_ref_count(((struct smart_pointer$1char$*)(__right_value53=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4505, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self))))));
    come_call_finalizer3(__right_value53,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__87,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__87;
}

struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self){
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short$* __result_obj__89;
    __result_obj__89 = come_increment_ref_count(((struct smart_pointer$1short$*)(__right_value56=smart_pointer$1short$$p_initialize_with_value((struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), "./comelang.h", 4510, "struct smart_pointer$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self))))));
    come_call_finalizer3(__right_value56,smart_pointer$1short$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__89,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__89;
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__88;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int$* __result_obj__91;
    __result_obj__91 = come_increment_ref_count(((struct smart_pointer$1int$*)(__right_value59=smart_pointer$1int$$p_initialize_with_value((struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), "./comelang.h", 4515, "struct smart_pointer$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self))))));
    come_call_finalizer3(__right_value59,smart_pointer$1int$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__90;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__90 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__90,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__90;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self){
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long$* __result_obj__93;
    __result_obj__93 = come_increment_ref_count(((struct smart_pointer$1long$*)(__right_value62=smart_pointer$1long$$p_initialize_with_value((struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), "./comelang.h", 4520, "struct smart_pointer$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self))))));
    come_call_finalizer3(__right_value62,smart_pointer$1long$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__93,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__93;
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__92;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__92 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__92,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__92;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_177;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char$* __result_obj__94;
    buf_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4553, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_177,(char*)self,sizeof(char)*len);
    __result_obj__94 = come_increment_ref_count(((struct smart_pointer$1char$*)(__right_value66=smart_pointer$1char$$p_initialize_with_value((struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), "./comelang.h", 4555, "struct smart_pointer$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_177)))));
    come_call_finalizer3(buf_177,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value66,smart_pointer$1char$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__94,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__94;
}

struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_178;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1char$p* __result_obj__96;
    buf_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4560, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_178,(char*)self,sizeof(char*)*len);
    __result_obj__96 = come_increment_ref_count(((struct smart_pointer$1char$p*)(__right_value70=smart_pointer$1char$p$p_initialize_with_value((struct smart_pointer$1char$p*)come_increment_ref_count((struct smart_pointer$1char$p*)come_calloc(1, sizeof(struct smart_pointer$1char$p)*(1), "./comelang.h", 4562, "struct smart_pointer$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_178)))));
    come_call_finalizer3(buf_178,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value70,smart_pointer$1char$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__95;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__95 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__95,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__95;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_179;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short$* __result_obj__97;
    buf_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4567, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_179,(char*)self,sizeof(short)*len);
    __result_obj__97 = come_increment_ref_count(((struct smart_pointer$1short$*)(__right_value74=smart_pointer$1short$$p_initialize_with_value((struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), "./comelang.h", 4569, "struct smart_pointer$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_179)))));
    come_call_finalizer3(buf_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value74,smart_pointer$1short$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__97,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__97;
}

struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_180;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int$* __result_obj__98;
    buf_180=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4574, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_180,(char*)self,sizeof(int)*len);
    __result_obj__98 = come_increment_ref_count(((struct smart_pointer$1int$*)(__right_value78=smart_pointer$1int$$p_initialize_with_value((struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), "./comelang.h", 4576, "struct smart_pointer$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_180)))));
    come_call_finalizer3(buf_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value78,smart_pointer$1int$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_181;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long$* __result_obj__99;
    buf_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4581, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_181,(char*)self,sizeof(long)*len);
    __result_obj__99 = come_increment_ref_count(((struct smart_pointer$1long$*)(__right_value82=smart_pointer$1long$$p_initialize_with_value((struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), "./comelang.h", 4583, "struct smart_pointer$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_181)))));
    come_call_finalizer3(buf_181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value82,smart_pointer$1long$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__99,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__99;
}

struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_182;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float$* __result_obj__101;
    buf_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4588, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_182,(char*)self,sizeof(float)*len);
    __result_obj__101 = come_increment_ref_count(((struct smart_pointer$1float$*)(__right_value86=smart_pointer$1float$$p_initialize_with_value((struct smart_pointer$1float$*)come_increment_ref_count((struct smart_pointer$1float$*)come_calloc(1, sizeof(struct smart_pointer$1float$)*(1), "./comelang.h", 4590, "struct smart_pointer$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_182)))));
    come_call_finalizer3(buf_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value86,smart_pointer$1float$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__100;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__100 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__100,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__100;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len){
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_183;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double$* __result_obj__103;
    buf_183=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4595, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append(buf_183,(char*)self,sizeof(double)*len);
    __result_obj__103 = come_increment_ref_count(((struct smart_pointer$1double$*)(__right_value90=smart_pointer$1double$$p_initialize_with_value((struct smart_pointer$1double$*)come_increment_ref_count((struct smart_pointer$1double$*)come_calloc(1, sizeof(struct smart_pointer$1double$)*(1), "./comelang.h", 4597, "struct smart_pointer$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_183)))));
    come_call_finalizer3(buf_183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value90,smart_pointer$1double$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__103,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__103;
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__102;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__102 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__102,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__102;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char$* __result_obj__106;
    __result_obj__106 = come_increment_ref_count(((struct list$1char$*)(__right_value95=list$1char$$p_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./comelang.h", 4602, "struct list$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value95,list$1char$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__106,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__106;
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_184;
struct list$1char$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1char$$p_push_back(self,values[i_184]);
    }
    __result_obj__105 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__105,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__105;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_185;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_186;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_187;
struct list$1char$* __result_obj__104;
    if(    self->len==0) {
        litem_185=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1545, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1555, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1565, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_188;
struct list_item$1char$* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1char$p* __result_obj__109;
    __result_obj__109 = come_increment_ref_count(((struct list$1char$p*)(__right_value100=list$1char$p$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 4607, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value100,list$1char$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__109,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__109;
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_190;
struct list$1char$p* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1char$p$p_push_back(self,values[i_190]);
    }
    __result_obj__108 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__108,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__108;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_191;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_192;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_193;
struct list$1char$p* __result_obj__107;
    if(    self->len==0) {
        litem_191=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1545, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1555, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1565, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_194;
struct list_item$1char$p* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short$* __result_obj__112;
    __result_obj__112 = come_increment_ref_count(((struct list$1short$*)(__right_value105=list$1short$$p_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./comelang.h", 4612, "struct list$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value105,list$1short$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__112,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__112;
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_196;
struct list$1short$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1short$$p_push_back(self,values[i_196]);
    }
    __result_obj__111 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__111,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__111;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_197;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_198;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_199;
struct list$1short$* __result_obj__110;
    if(    self->len==0) {
        litem_197=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1545, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1555, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1565, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_200;
struct list_item$1short$* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int$* __result_obj__115;
    __result_obj__115 = come_increment_ref_count(((struct list$1int$*)(__right_value110=list$1int$$p_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./comelang.h", 4617, "struct list$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value110,list$1int$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__115,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__115;
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_202;
struct list$1int$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1int$$p_push_back(self,values[i_202]);
    }
    __result_obj__114 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__114,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__114;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_203;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_204;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_205;
struct list$1int$* __result_obj__113;
    if(    self->len==0) {
        litem_203=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1545, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1555, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1565, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_206;
struct list_item$1int$* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long$* __result_obj__118;
    __result_obj__118 = come_increment_ref_count(((struct list$1long$*)(__right_value115=list$1long$$p_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./comelang.h", 4622, "struct list$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value115,list$1long$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__118,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__118;
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_208;
struct list$1long$* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_208=0;    i_208<num_value;    i_208++    ){
        list$1long$$p_push_back(self,values[i_208]);
    }
    __result_obj__117 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__117,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__117;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_209;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_210;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_211;
struct list$1long$* __result_obj__116;
    if(    self->len==0) {
        litem_209=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1545, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_209->prev=((void*)0);
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head=litem_209;
    }
    else if(    self->len==1) {
        litem_210=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1555, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_210->prev=self->head;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head->next=litem_210;
    }
    else {
        litem_211=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1565, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=self->tail;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail->next=litem_211;
        self->tail=litem_211;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_212;
struct list_item$1long$* prev_it_213;
    it_212=self->head;
    while(it_212!=((void*)0)) {
        prev_it_213=it_212;
        it_212=it_212->next;
        come_call_finalizer3(prev_it_213,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float$* __result_obj__121;
    __result_obj__121 = come_increment_ref_count(((struct list$1float$*)(__right_value120=list$1float$$p_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./comelang.h", 4627, "struct list$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value120,list$1float$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__121,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__121;
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_214;
struct list$1float$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_214=0;    i_214<num_value;    i_214++    ){
        list$1float$$p_push_back(self,values[i_214]);
    }
    __result_obj__120 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__120,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__120;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_215;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_216;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_217;
struct list$1float$* __result_obj__119;
    if(    self->len==0) {
        litem_215=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1545, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_215->prev=((void*)0);
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head=litem_215;
    }
    else if(    self->len==1) {
        litem_216=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1555, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_216->prev=self->head;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head->next=litem_216;
    }
    else {
        litem_217=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1565, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=self->tail;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail->next=litem_217;
        self->tail=litem_217;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_218;
struct list_item$1float$* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        come_call_finalizer3(prev_it_219,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double$* __result_obj__124;
    __result_obj__124 = come_increment_ref_count(((struct list$1double$*)(__right_value125=list$1double$$p_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./comelang.h", 4632, "struct list$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value125,list$1double$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__124,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__124;
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_220;
struct list$1double$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_220=0;    i_220<num_value;    i_220++    ){
        list$1double$$p_push_back(self,values[i_220]);
    }
    __result_obj__123 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__123,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__123;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_221;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_222;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_223;
struct list$1double$* __result_obj__122;
    if(    self->len==0) {
        litem_221=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1545, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_221->prev=((void*)0);
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail=litem_221;
        self->head=litem_221;
    }
    else if(    self->len==1) {
        litem_222=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1555, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_222->prev=self->head;
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head->next=litem_222;
    }
    else {
        litem_223=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1565, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_223->prev=self->tail;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail->next=litem_223;
        self->tail=litem_223;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_224;
struct list_item$1double$* prev_it_225;
    it_224=self->head;
    while(it_224!=((void*)0)) {
        prev_it_225=it_224;
        it_224=it_224->next;
        come_call_finalizer3(prev_it_225,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len){
void* __right_value126 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1char$* __result_obj__127;
    __result_obj__127 = come_increment_ref_count(((struct vector$1char$*)(__right_value129=vector$1char$$p_initialize_with_values((struct vector$1char$*)come_increment_ref_count((struct vector$1char$*)come_calloc(1, sizeof(struct vector$1char$)*(1), "./comelang.h", 4637, "struct vector$1char$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value129,vector$1char$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__127,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__127;
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_226;
struct vector$1char$* __result_obj__126;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2362, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_226=0;    i_226<num_value;    i_226++    ){
        vector$1char$$p_add(self,values[i_226]);
    }
    __result_obj__126 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__126,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__126;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_227;
char* items_228;
void* __right_value128 = (void*)0;
int i_229;
struct vector$1char$* __result_obj__125;
memset(&i_229, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_227=self->size*2;
        items_228=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_227)), "./comelang.h", 2489, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_229=0;        i_229<self->size;        i_229++        ){
            self->items[i_229]=items_228[i_229];
        }
        self->size=new_size_227;
        come_free(items_228);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__125 = self;
    return __result_obj__125;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_230;
    if(    0) {
        for(        i_230=0;        i_230<self->len;        i_230++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len){
void* __right_value130 = (void*)0;
void* __right_value133 = (void*)0;
struct vector$1char$p* __result_obj__130;
    __result_obj__130 = come_increment_ref_count(((struct vector$1char$p*)(__right_value133=vector$1char$p$p_initialize_with_values((struct vector$1char$p*)come_increment_ref_count((struct vector$1char$p*)come_calloc(1, sizeof(struct vector$1char$p)*(1), "./comelang.h", 4642, "struct vector$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value133,vector$1char$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__130,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__130;
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_231;
struct vector$1char$p* __result_obj__129;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2362, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_231=0;    i_231<num_value;    i_231++    ){
        vector$1char$p$p_add(self,values[i_231]);
    }
    __result_obj__129 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__129,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__129;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_232;
char** items_233;
void* __right_value132 = (void*)0;
int i_234;
struct vector$1char$p* __result_obj__128;
memset(&i_234, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_232=self->size*2;
        items_233=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_232)), "./comelang.h", 2489, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_234=0;        i_234<self->size;        i_234++        ){
            self->items[i_234]=items_233[i_234];
        }
        self->size=new_size_232;
        come_free(items_233);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__128 = self;
    return __result_obj__128;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_235;
    if(    0) {
        for(        i_235=0;        i_235<self->len;        i_235++        ){
            (self->items[i_235] = come_decrement_ref_count2(self->items[i_235], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len){
void* __right_value134 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1short$* __result_obj__133;
    __result_obj__133 = come_increment_ref_count(((struct vector$1short$*)(__right_value137=vector$1short$$p_initialize_with_values((struct vector$1short$*)come_increment_ref_count((struct vector$1short$*)come_calloc(1, sizeof(struct vector$1short$)*(1), "./comelang.h", 4647, "struct vector$1short$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value137,vector$1short$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__133,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__133;
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_236;
struct vector$1short$* __result_obj__132;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2362, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_236=0;    i_236<num_value;    i_236++    ){
        vector$1short$$p_add(self,values[i_236]);
    }
    __result_obj__132 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__132,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__132;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_237;
short* items_238;
void* __right_value136 = (void*)0;
int i_239;
struct vector$1short$* __result_obj__131;
memset(&i_239, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_237=self->size*2;
        items_238=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_237)), "./comelang.h", 2489, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_239=0;        i_239<self->size;        i_239++        ){
            self->items[i_239]=items_238[i_239];
        }
        self->size=new_size_237;
        come_free(items_238);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__131 = self;
    return __result_obj__131;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_240;
    if(    0) {
        for(        i_240=0;        i_240<self->len;        i_240++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len){
void* __right_value138 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1int$* __result_obj__136;
    __result_obj__136 = come_increment_ref_count(((struct vector$1int$*)(__right_value141=vector$1int$$p_initialize_with_values((struct vector$1int$*)come_increment_ref_count((struct vector$1int$*)come_calloc(1, sizeof(struct vector$1int$)*(1), "./comelang.h", 4652, "struct vector$1int$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value141,vector$1int$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__136,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__136;
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_241;
struct vector$1int$* __result_obj__135;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2362, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_241=0;    i_241<num_value;    i_241++    ){
        vector$1int$$p_add(self,values[i_241]);
    }
    __result_obj__135 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__135,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__135;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_242;
int* items_243;
void* __right_value140 = (void*)0;
int i_244;
struct vector$1int$* __result_obj__134;
memset(&i_244, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_242=self->size*2;
        items_243=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_242)), "./comelang.h", 2489, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_244=0;        i_244<self->size;        i_244++        ){
            self->items[i_244]=items_243[i_244];
        }
        self->size=new_size_242;
        come_free(items_243);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_245;
    if(    0) {
        for(        i_245=0;        i_245<self->len;        i_245++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len){
void* __right_value142 = (void*)0;
void* __right_value145 = (void*)0;
struct vector$1long$* __result_obj__139;
    __result_obj__139 = come_increment_ref_count(((struct vector$1long$*)(__right_value145=vector$1long$$p_initialize_with_values((struct vector$1long$*)come_increment_ref_count((struct vector$1long$*)come_calloc(1, sizeof(struct vector$1long$)*(1), "./comelang.h", 4657, "struct vector$1long$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value145,vector$1long$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__139,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__139;
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_246;
struct vector$1long$* __result_obj__138;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2362, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_246=0;    i_246<num_value;    i_246++    ){
        vector$1long$$p_add(self,values[i_246]);
    }
    __result_obj__138 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__138,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__138;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_247;
long* items_248;
void* __right_value144 = (void*)0;
int i_249;
struct vector$1long$* __result_obj__137;
memset(&i_249, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_247=self->size*2;
        items_248=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_247)), "./comelang.h", 2489, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_249=0;        i_249<self->size;        i_249++        ){
            self->items[i_249]=items_248[i_249];
        }
        self->size=new_size_247;
        come_free(items_248);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__137 = self;
    return __result_obj__137;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_250;
    if(    0) {
        for(        i_250=0;        i_250<self->len;        i_250++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len){
void* __right_value146 = (void*)0;
void* __right_value149 = (void*)0;
struct vector$1float$* __result_obj__142;
    __result_obj__142 = come_increment_ref_count(((struct vector$1float$*)(__right_value149=vector$1float$$p_initialize_with_values((struct vector$1float$*)come_increment_ref_count((struct vector$1float$*)come_calloc(1, sizeof(struct vector$1float$)*(1), "./comelang.h", 4662, "struct vector$1float$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value149,vector$1float$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__142,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__142;
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_251;
struct vector$1float$* __result_obj__141;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2362, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_251=0;    i_251<num_value;    i_251++    ){
        vector$1float$$p_add(self,values[i_251]);
    }
    __result_obj__141 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__141,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__141;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_252;
float* items_253;
void* __right_value148 = (void*)0;
int i_254;
struct vector$1float$* __result_obj__140;
memset(&i_254, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_252=self->size*2;
        items_253=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_252)), "./comelang.h", 2489, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_254=0;        i_254<self->size;        i_254++        ){
            self->items[i_254]=items_253[i_254];
        }
        self->size=new_size_252;
        come_free(items_253);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__140 = self;
    return __result_obj__140;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_255;
    if(    0) {
        for(        i_255=0;        i_255<self->len;        i_255++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len){
void* __right_value150 = (void*)0;
void* __right_value153 = (void*)0;
struct vector$1double$* __result_obj__145;
    __result_obj__145 = come_increment_ref_count(((struct vector$1double$*)(__right_value153=vector$1double$$p_initialize_with_values((struct vector$1double$*)come_increment_ref_count((struct vector$1double$*)come_calloc(1, sizeof(struct vector$1double$)*(1), "./comelang.h", 4667, "struct vector$1double$*", (void*)0, (void*)0, (void*)0, (void*)0)),len,self))));
    come_call_finalizer3(__right_value153,vector$1double$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__145,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__145;
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_256;
struct vector$1double$* __result_obj__144;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2362, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_256=0;    i_256<num_value;    i_256++    ){
        vector$1double$$p_add(self,values[i_256]);
    }
    __result_obj__144 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__144,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__144;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_257;
double* items_258;
void* __right_value152 = (void*)0;
int i_259;
struct vector$1double$* __result_obj__143;
memset(&i_259, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_257=self->size*2;
        items_258=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_257)), "./comelang.h", 2489, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_259=0;        i_259<self->size;        i_259++        ){
            self->items[i_259]=items_258[i_259];
        }
        self->size=new_size_257;
        come_free(items_258);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__143 = self;
    return __result_obj__143;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_260;
    if(    0) {
        for(        i_260=0;        i_260<self->len;        i_260++        ){
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
void* __right_value154 = (void*)0;
char* __result_obj__146;
int len_261;
void* __right_value155 = (void*)0;
char* result_262;
char* __result_obj__147;
    if(    self==((void*)0)||right==((void*)0)) {
        __result_obj__146 = come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
        (__right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count2(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__146;
    }
    len_261=strlen(self)+strlen(right);
    result_262=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_261+1)), "./comelang.h", 4881, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_262,self,len_261+1);
    strncat(result_262,right,len_261+1);
    __result_obj__147 = come_increment_ref_count(result_262);
    (result_262 = come_decrement_ref_count2(result_262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count2(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__147;
}

char* string_operator_add(char* self, char* right){
void* __right_value156 = (void*)0;
char* __result_obj__148;
int len_263;
void* __right_value157 = (void*)0;
char* result_264;
char* __result_obj__149;
    if(    self==((void*)0)||right==((void*)0)) {
        __result_obj__148 = come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count2(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__148;
    }
    len_263=strlen(self)+strlen(right);
    result_264=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_263+1)), "./comelang.h", 4896, "char", (void*)0, (void*)0, charp_get_hash_key, charp_equals));
    strncpy(result_264,self,len_263+1);
    strncat(result_264,right,len_263+1);
    __result_obj__149 = come_increment_ref_count(result_264);
    (result_264 = come_decrement_ref_count2(result_264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count2(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__149;
}

char* charp_operator_mult(char* self, int right){
void* __right_value158 = (void*)0;
char* __result_obj__150;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct buffer* buf_265;
int i_266;
void* __right_value161 = (void*)0;
char* __result_obj__151;
    if(    self==((void*)0)) {
        __result_obj__150 = come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count2(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__150;
    }
    buf_265=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4909, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_266=0;    i_266<right;    i_266++    ){
        buffer_append_str(buf_265,self);
    }
    __result_obj__151 = come_increment_ref_count(((char*)(__right_value161=buffer_to_string(buf_265))));
    come_call_finalizer3(buf_265,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count2(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__151;
}

char* string_operator_mult(char* self, int right){
void* __right_value162 = (void*)0;
char* __result_obj__152;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct buffer* buf_267;
int i_268;
void* __right_value165 = (void*)0;
char* __result_obj__153;
    if(    self==((void*)0)) {
        __result_obj__152 = come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count2(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__152;
    }
    buf_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4923, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_268=0;    i_268<right;    i_268++    ){
        buffer_append_str(buf_267,self);
    }
    __result_obj__153 = come_increment_ref_count(((char*)(__right_value165=buffer_to_string(buf_267))));
    come_call_finalizer3(buf_267,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count2(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__153;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_269;
int i_270;
    result_269=(_Bool)0;
    for(    i_270=0;    i_270<len;    i_270++    ){
        if(        strncmp(self[i_270],str,strlen(self[i_270]))==0) {
            result_269=(_Bool)1;
            break;
        }
    }
    return result_269;
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
int result_271;
char* p_272;
    if(    value==((void*)0)) {
        return 0;
    }
    result_271=0;
    p_272=value;
    while(*p_272) {
        result_271+=(*p_272);
        p_272++;
    }
    return result_271;
}

unsigned int string_get_hash_key(char* value){
int result_273;
char* p_274;
    if(    value==((void*)0)) {
        return 0;
    }
    result_273=0;
    p_274=value;
    while(*p_274) {
        result_273+=(*p_274);
        p_274++;
    }
    return result_273;
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
char* __result_obj__154;
void* __right_value166 = (void*)0;
char* __result_obj__155;
    if(    self==((void*)0)) {
        __result_obj__154 = come_increment_ref_count(((void*)0));
        (__result_obj__154 = come_decrement_ref_count2(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count2(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__155;
}

char* string_clone(char* self){
char* __result_obj__156;
void* __right_value167 = (void*)0;
char* __result_obj__157;
    if(    self==((void*)0)) {
        __result_obj__156 = come_increment_ref_count(((void*)0));
        (__result_obj__156 = come_decrement_ref_count2(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__156;
    }
    __result_obj__157 = come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count2(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__157;
}

_Bool xiswalpha(unsigned int c){
_Bool result_275;
    result_275=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_275;
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
_Bool result_276;
    result_276=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_276;
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
_Bool result_277;
    result_277=(c>=32&&c<=126);
    return result_277;
}

_Bool xiswascii(unsigned int c){
_Bool result_278;
    result_278=(c>=32&&c<=126);
    return result_278;
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
void* __right_value168 = (void*)0;
char* __result_obj__158;
int len_279;
void* __right_value169 = (void*)0;
char* result_280;
int i_281;
char* __result_obj__159;
    if(    str==((void*)0)) {
        __result_obj__158 = come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count2(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__158;
    }
    len_279=strlen(str);
    result_280=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_279+1)), "./comelang.h", 5197, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    for(    i_281=0;    i_281<len_279;    i_281++    ){
        result_280[i_281]=str[len_279-i_281-1];
    }
    result_280[len_279]=0;
    __result_obj__159 = come_increment_ref_count(result_280);
    (result_280 = come_decrement_ref_count2(result_280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count2(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__159;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value170 = (void*)0;
char* __result_obj__160;
int len_282;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result_obj__161;
void* __right_value173 = (void*)0;
char* __result_obj__162;
void* __right_value174 = (void*)0;
char* __result_obj__163;
void* __right_value175 = (void*)0;
char* result_283;
char* __result_obj__164;
    if(    str==((void*)0)) {
        __result_obj__160 = come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count2(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__160;
    }
    len_282=strlen(str);
    if(    head<0) {
        head+=len_282;
    }
    if(    tail<0) {
        tail+=len_282+1;
    }
    if(    head>tail) {
        __result_obj__161 = come_increment_ref_count(((char*)(__right_value172=charp_reverse(((char*)(__right_value171=charp_substring(str,tail,head)))))));
        (__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count2(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_282) {
        tail=len_282;
    }
    if(    head==tail) {
        __result_obj__162 = come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count2(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__162;
    }
    if(    tail-head+1<1) {
        __result_obj__163 = come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count2(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__163;
    }
    result_283=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5243, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_283,str+head,tail-head);
    result_283[tail-head]=0;
    __result_obj__164 = come_increment_ref_count(result_283);
    (result_283 = come_decrement_ref_count2(result_283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count2(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__164;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value176 = (void*)0;
char* __result_obj__165;
int len_284;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __result_obj__166;
void* __right_value179 = (void*)0;
char* __result_obj__167;
void* __right_value180 = (void*)0;
char* __result_obj__168;
void* __right_value181 = (void*)0;
char* result_285;
char* __result_obj__169;
    if(    str==((void*)0)) {
        __result_obj__165 = come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count2(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__165;
    }
    len_284=strlen(str);
    if(    head<0) {
        head+=len_284;
    }
    if(    tail<0) {
        tail+=len_284+1;
    }
    if(    head>tail) {
        __result_obj__166 = come_increment_ref_count(((char*)(__right_value178=charp_reverse(((char*)(__right_value177=charp_substring(str,tail,head)))))));
        (__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count2(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__166;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_284) {
        tail=len_284;
    }
    if(    head==tail) {
        __result_obj__167 = come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count2(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__167;
    }
    if(    tail-head+1<1) {
        __result_obj__168 = come_increment_ref_count(((char*)(__right_value180=__builtin_string(""))));
        (__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count2(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__168;
    }
    result_285=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5286, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_285,str+head,tail-head);
    result_285[tail-head]=0;
    __result_obj__169 = come_increment_ref_count(result_285);
    (result_285 = come_decrement_ref_count2(result_285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count2(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__169;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value182 = (void*)0;
char* __result_obj__170;
int len_286;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
char* __result_obj__171;
void* __right_value185 = (void*)0;
char* __result_obj__172;
void* __right_value186 = (void*)0;
char* __result_obj__173;
void* __right_value187 = (void*)0;
char* result_287;
char* __result_obj__174;
    if(    str==((void*)0)) {
        __result_obj__170 = come_increment_ref_count(((char*)(__right_value182=__builtin_string(""))));
        (__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count2(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__170;
    }
    len_286=strlen(str);
    if(    head<0) {
        head+=len_286;
    }
    if(    tail<0) {
        tail+=len_286+1;
    }
    if(    head>tail) {
        __result_obj__171 = come_increment_ref_count(((char*)(__right_value184=charp_reverse(((char*)(__right_value183=charp_substring(str,tail,head)))))));
        (__right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count2(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__171;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_286) {
        tail=len_286;
    }
    if(    head==tail) {
        __result_obj__172 = come_increment_ref_count(((char*)(__right_value185=__builtin_string(""))));
        (__right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count2(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__172;
    }
    if(    tail-head+1<1) {
        __result_obj__173 = come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
        (__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count2(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__173;
    }
    result_287=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 5329, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_287,str+head,tail-head);
    result_287[tail-head]=0;
    __result_obj__174 = come_increment_ref_count(result_287);
    (result_287 = come_decrement_ref_count2(result_287, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count2(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__174;
}

char* xsprintf(char* msg, ...){
void* __right_value188 = (void*)0;
char* __result_obj__175;
va_list args_288;
char* result_289;
int len_290;
void* __right_value189 = (void*)0;
char* __result_obj__176;
void* __right_value190 = (void*)0;
char* result2_291;
char* __result_obj__177;
memset(&args_288, 0, sizeof(va_list));
result_289 = (void*)0;
    if(    msg==((void*)0)) {
        __result_obj__175 = come_increment_ref_count(((char*)(__right_value188=__builtin_string(""))));
        (__right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count2(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__175;
    }
    __builtin_va_start(args_288,msg);
    len_290=vasprintf(&result_289,msg,args_288);
    __builtin_va_end(args_288);
    if(    len_290<0) {
        __result_obj__176 = come_increment_ref_count(((char*)(__right_value189=__builtin_string(""))));
        come_call_finalizer3((&args_288),va_list_finalize, 1, 0, 0, 0, (void*)0);
        (__right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count2(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__176;
    }
    result2_291=(char*)come_increment_ref_count(__builtin_string(result_289));
    free(result_289);
    __result_obj__177 = come_increment_ref_count(result2_291);
    come_call_finalizer3((&args_288),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (result2_291 = come_decrement_ref_count2(result2_291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count2(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value191 = (void*)0;
char* __result_obj__178;
int len_292;
void* __right_value192 = (void*)0;
char* __result_obj__179;
void* __right_value193 = (void*)0;
char* __result_obj__180;
void* __right_value194 = (void*)0;
char* result_293;
char* __result_obj__181;
    if(    str==((void*)0)) {
        __result_obj__178 = come_increment_ref_count(((char*)(__right_value191=__builtin_string(""))));
        (__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count2(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__178;
    }
    len_292=strlen(str);
    if(    strcmp(str,"")==0) {
        __result_obj__179 = come_increment_ref_count(((char*)(__right_value192=__builtin_string(str))));
        (__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count2(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__179;
    }
    if(    head<0) {
        head+=len_292;
    }
    if(    tail<0) {
        tail+=len_292+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result_obj__180 = come_increment_ref_count(((char*)(__right_value193=__builtin_string(str))));
        (__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count2(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__180;
    }
    if(    tail>=len_292) {
        tail=len_292;
    }
    result_293=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_292-(tail-head)+1)), "./comelang.h", 5391, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    memcpy(result_293,str,head);
    memcpy(result_293+head,str+tail,len_292-tail);
    result_293[len_292-(tail-head)]=0;
    __result_obj__181 = come_increment_ref_count(result_293);
    (result_293 = come_decrement_ref_count2(result_293, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count2(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__181;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1char$ph* __result_obj__183;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* result_296;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* str_297;
int i_298;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1char$ph* __result_obj__185;
    if(    self==((void*)0)) {
        __result_obj__183 = come_increment_ref_count(((struct list$1char$ph*)(__right_value196=list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))))));
        come_call_finalizer3(__right_value196,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__183,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__183;
    }
    result_296=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5407, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    str_297=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5409, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    for(    i_298=0;    i_298<charp_length(self);    i_298++    ){
        if(        self[i_298]==c) {
            list$1char$ph$p_push_back(result_296,(char*)come_increment_ref_count(__builtin_string(str_297->buf)));
            buffer_reset(str_297);
        }
        else {
            buffer_append_char(str_297,self[i_298]);
        }
    }
    if(    buffer_length(str_297)!=0) {
        list$1char$ph$p_push_back(result_296,(char*)come_increment_ref_count(__builtin_string(str_297->buf)));
    }
    __result_obj__185 = come_increment_ref_count(result_296);
    come_call_finalizer3(result_296,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_297,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__185,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__185;
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__182;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__182 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__182;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_294;
struct list_item$1char$ph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj22;
struct list$1char$ph* __result_obj__184;
    if(    self->len==0) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1545, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj20=litem_299->item;
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1555, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj21=litem_300->item;
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1565, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj22=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__184 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__184;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value206 = (void*)0;
char* __result_obj__186;
    __result_obj__186 = come_increment_ref_count(((char*)(__right_value206=xsprintf(msg,self))));
    (__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count2(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__186;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value207 = (void*)0;
char* __result_obj__187;
    __result_obj__187 = come_increment_ref_count(((char*)(__right_value207=xsprintf(msg,self))));
    (__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count2(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__187;
}

char* charp_printable(char* str){
int len_302;
void* __right_value208 = (void*)0;
char* result_303;
int n_304;
int i_305;
char c_306;
char* __result_obj__188;
    len_302=charp_length(str);
    result_303=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_302*2+1)), "./comelang.h", 5441, "char", (void*)0, charp_clone, charp_get_hash_key, charp_equals));
    n_304=0;
    for(    i_305=0;    i_305<len_302;    i_305++    ){
        c_306=str[i_305];
        if(        (c_306>=0&&c_306<32)||c_306==127) {
            result_303[n_304++]=94;
            result_303[n_304++]=c_306+65-1;
        }
        else {
            result_303[n_304++]=c_306;
        }
    }
    result_303[n_304]=0;
    __result_obj__188 = come_increment_ref_count(result_303);
    (result_303 = come_decrement_ref_count2(result_303, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__188 = come_decrement_ref_count2(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__188;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value209 = (void*)0;
char* __result_obj__189;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* result_307;
char* p_308;
char* p2_309;
void* __right_value212 = (void*)0;
char* __result_obj__190;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result_obj__189 = come_increment_ref_count(((char*)(__right_value209=__builtin_string(self))));
        (__right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count2(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__189;
    }
    result_307=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5469, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_308=self;
    while((_Bool)1) {
        p2_309=strstr(p_308,str);
        if(        p2_309==((void*)0)) {
            p2_309=p_308;
            while(*p2_309) {
                p2_309++;
            }
            buffer_append(result_307,p_308,p2_309-p_308);
            break;
        }
        buffer_append(result_307,p_308,p2_309-p_308);
        buffer_append_str(result_307,replace);
        p_308=p2_309+strlen(str);
    }
    __result_obj__190 = come_increment_ref_count(((char*)(__right_value212=buffer_to_string(result_307))));
    come_call_finalizer3(result_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count2(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__190;
}

char* xbasename(char* path){
void* __right_value213 = (void*)0;
char* __result_obj__191;
char* p_310;
void* __right_value214 = (void*)0;
char* __result_obj__192;
void* __right_value215 = (void*)0;
char* __result_obj__193;
void* __right_value216 = (void*)0;
char* __result_obj__194;
    if(    path==((void*)0)) {
        __result_obj__191 = come_increment_ref_count(((char*)(__right_value213=__builtin_string(""))));
        (__right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count2(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__191;
    }
    p_310=path+strlen(path);
    while(p_310>=path) {
        if(        *p_310==47) {
            break;
        }
        else {
            p_310--;
        }
    }
    if(    p_310<path) {
        __result_obj__192 = come_increment_ref_count(((char*)(__right_value214=__builtin_string(path))));
        (__right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count2(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__192;
    }
    else {
        __result_obj__193 = come_increment_ref_count(((char*)(__right_value215=__builtin_string(p_310+1))));
        (__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__193 = come_decrement_ref_count2(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__193;
    }
    __result_obj__194 = come_increment_ref_count(((char*)(__right_value216=__builtin_string(""))));
    (__right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count2(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__194;
}

char* xnoextname(char* path){
void* __right_value217 = (void*)0;
char* __result_obj__195;
void* __right_value218 = (void*)0;
char* path2_311;
char* p_312;
void* __right_value219 = (void*)0;
char* __result_obj__196;
void* __right_value220 = (void*)0;
char* __result_obj__197;
void* __right_value221 = (void*)0;
char* __result_obj__198;
    if(    path==((void*)0)) {
        __result_obj__195 = come_increment_ref_count(((char*)(__right_value217=__builtin_string(""))));
        (__right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__195 = come_decrement_ref_count2(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__195;
    }
    path2_311=(char*)come_increment_ref_count(xbasename(path));
    p_312=path2_311+strlen(path2_311);
    while(p_312>=path2_311) {
        if(        *p_312==46) {
            break;
        }
        else {
            p_312--;
        }
    }
    if(    p_312<path2_311) {
        __result_obj__196 = come_increment_ref_count(((char*)(__right_value219=__builtin_string(path2_311))));
        (path2_311 = come_decrement_ref_count2(path2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count2(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__196;
    }
    else {
        __result_obj__197 = come_increment_ref_count(((char*)(__right_value220=charp_substring(path2_311,0,p_312-path2_311))));
        (path2_311 = come_decrement_ref_count2(path2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__197 = come_decrement_ref_count2(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__197;
    }
    __result_obj__198 = come_increment_ref_count(((char*)(__right_value221=__builtin_string(""))));
    (path2_311 = come_decrement_ref_count2(path2_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count2(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

char* xextname(char* path){
void* __right_value222 = (void*)0;
char* __result_obj__199;
char* p_313;
void* __right_value223 = (void*)0;
char* __result_obj__200;
void* __right_value224 = (void*)0;
char* __result_obj__201;
void* __right_value225 = (void*)0;
char* __result_obj__202;
    if(    path==((void*)0)) {
        __result_obj__199 = come_increment_ref_count(((char*)(__right_value222=__builtin_string(""))));
        (__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__199 = come_decrement_ref_count2(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__199;
    }
    p_313=path+strlen(path);
    while(p_313>=path) {
        if(        *p_313==46) {
            break;
        }
        else {
            p_313--;
        }
    }
    if(    p_313<path) {
        __result_obj__200 = come_increment_ref_count(((char*)(__right_value223=__builtin_string(path))));
        (__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count2(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__200;
    }
    else {
        __result_obj__201 = come_increment_ref_count(((char*)(__right_value224=__builtin_string(p_313+1))));
        (__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count2(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__201;
    }
    __result_obj__202 = come_increment_ref_count(((char*)(__right_value225=__builtin_string(""))));
    (__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count2(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__202;
}

char* bool_to_string(_Bool self){
void* __right_value226 = (void*)0;
char* __result_obj__203;
void* __right_value227 = (void*)0;
char* __result_obj__204;
    if(    self) {
        __result_obj__203 = come_increment_ref_count(((char*)(__right_value226=__builtin_string("true"))));
        (__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__203 = come_decrement_ref_count2(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__203;
    }
    else {
        __result_obj__204 = come_increment_ref_count(((char*)(__right_value227=__builtin_string("false"))));
        (__right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count2(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__204;
    }
}

char* char_to_string(char self){
void* __right_value228 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = come_increment_ref_count(((char*)(__right_value228=xsprintf("%c",self))));
    (__right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count2(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
}

char* short_to_string(short self){
void* __right_value229 = (void*)0;
char* __result_obj__206;
    __result_obj__206 = come_increment_ref_count(((char*)(__right_value229=xsprintf("%d",self))));
    (__right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__206 = come_decrement_ref_count2(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__206;
}

char* int_to_string(int self){
void* __right_value230 = (void*)0;
char* __result_obj__207;
    __result_obj__207 = come_increment_ref_count(((char*)(__right_value230=xsprintf("%d",self))));
    (__right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__207 = come_decrement_ref_count2(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__207;
}

char* long_to_string(long self){
void* __right_value231 = (void*)0;
char* __result_obj__208;
    __result_obj__208 = come_increment_ref_count(((char*)(__right_value231=xsprintf("%ld",self))));
    (__right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count2(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__208;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value232 = (void*)0;
char* __result_obj__209;
    __result_obj__209 = come_increment_ref_count(((char*)(__right_value232=xsprintf("%ld",self))));
    (__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__209 = come_decrement_ref_count2(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__209;
}

char* float_to_string(float self){
void* __right_value233 = (void*)0;
char* __result_obj__210;
    __result_obj__210 = come_increment_ref_count(((char*)(__right_value233=xsprintf("%f",self))));
    (__right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__210 = come_decrement_ref_count2(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__210;
}

char* double_to_string(double self){
void* __right_value234 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = come_increment_ref_count(((char*)(__right_value234=xsprintf("%lf",self))));
    (__right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count2(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__211;
}

char* string_to_string(char* self){
void* __right_value235 = (void*)0;
char* __result_obj__212;
void* __right_value236 = (void*)0;
char* __result_obj__213;
    if(    self==((void*)0)) {
        __result_obj__212 = come_increment_ref_count(((char*)(__right_value235=__builtin_string(""))));
        (__right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__212 = come_decrement_ref_count2(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__212;
    }
    __result_obj__213 = come_increment_ref_count(((char*)(__right_value236=__builtin_string(self))));
    (__right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count2(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__213;
}

char* charp_to_string(char* self){
void* __right_value237 = (void*)0;
char* __result_obj__214;
void* __right_value238 = (void*)0;
char* __result_obj__215;
    if(    self==((void*)0)) {
        __result_obj__214 = come_increment_ref_count(((char*)(__right_value237=__builtin_string(""))));
        (__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__214 = come_decrement_ref_count2(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__214;
    }
    __result_obj__215 = come_increment_ref_count(((char*)(__right_value238=__builtin_string(self))));
    (__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__215 = come_decrement_ref_count2(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__215;
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
void* __right_value239 = (void*)0;
char* __result_obj__216;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct buffer* buf_314;
int size_316;
void* __right_value242 = (void*)0;
char* __result_obj__217;
    if(    f==((void*)0)) {
        __result_obj__216 = come_increment_ref_count(((char*)(__right_value239=__builtin_string(""))));
        (__right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__216 = come_decrement_ref_count2(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__216;
    }
    buf_314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5805, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_315[1024];
        memset(&buf2_315, 0, sizeof(char)        *(1024)        );
        size_316=fread(buf2_315,1,1024,f);
        buffer_append(buf_314,buf2_315,size_316);
        if(        size_316<1024) {
            break;
        }
    }
    __result_obj__217 = come_increment_ref_count(((char*)(__right_value242=buffer_to_string(buf_314))));
    come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__217 = come_decrement_ref_count2(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_317;
    if(    f==((void*)0)) {
        return -1;
    }
    result_317=fclose(f);
    if(    result_317<0) {
        return result_317;
    }
    return result_317;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
struct _IO_FILE* __result_obj__218;
va_list args_319;
int result_320;
struct _IO_FILE* __result_obj__219;
struct _IO_FILE* __result_obj__220;
memset(&args_319, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result_obj__218 = f;
        return __result_obj__218;
    }
    char msg2_318[1024*2*2*2];
    memset(&msg2_318, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_319,msg);
    vsnprintf(msg2_318,1024*2*2*2,msg,args_319);
    __builtin_va_end(args_319);
    result_320=fprintf(f,"%s",msg2_318);
    if(    result_320<0) {
        __result_obj__219 = f;
        come_call_finalizer3((&args_319),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result_obj__219;
    }
    __result_obj__220 = f;
    come_call_finalizer3((&args_319),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result_obj__220;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_321;
int result_322;
int result2_323;
f_321 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_321=fopen(file_name,"a");
    }
    else {
        f_321=fopen(file_name,"w");
    }
    if(    f_321==((void*)0)) {
        return -1;
    }
    result_322=fwrite(self,strlen(self),1,f_321);
    if(    result_322<0) {
        return result_322;
    }
    result2_323=fclose(f_321);
    if(    result2_323<0) {
        return result2_323;
    }
    return result_322;
}

char* charp_read(char* file_name){
void* __right_value243 = (void*)0;
char* __result_obj__221;
struct _IO_FILE* f_324;
void* __right_value244 = (void*)0;
char* __result_obj__222;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct buffer* buf_325;
int size_327;
void* __right_value247 = (void*)0;
char* result_328;
int result2_329;
void* __right_value248 = (void*)0;
char* __result_obj__223;
char* __result_obj__224;
    if(    file_name==((void*)0)) {
        __result_obj__221 = come_increment_ref_count(((char*)(__right_value243=__builtin_string(""))));
        (__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count2(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__221;
    }
    f_324=fopen(file_name,"r");
    if(    f_324==((void*)0)) {
        __result_obj__222 = come_increment_ref_count(((char*)(__right_value244=__builtin_string(""))));
        (__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count2(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__222;
    }
    buf_325=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5913, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        char buf2_326[1024];
        memset(&buf2_326, 0, sizeof(char)        *(1024)        );
        size_327=fread(buf2_326,1,1024,f_324);
        buffer_append(buf_325,buf2_326,size_327);
        if(        size_327<1024) {
            break;
        }
    }
    result_328=(char*)come_increment_ref_count(buffer_to_string(buf_325));
    result2_329=fclose(f_324);
    if(    result2_329<0) {
        __result_obj__223 = come_increment_ref_count(((char*)(__right_value248=__builtin_string(""))));
        come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (result_328 = come_decrement_ref_count2(result_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count2(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = come_increment_ref_count(result_328);
    come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (result_328 = come_decrement_ref_count2(result_328, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count2(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__224;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1char$ph* result_330;
struct list$1char$ph* __result_obj__225;
void* __right_value251 = (void*)0;
struct list$1char$ph* __result_obj__226;
    result_330=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 5940, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    f==((void*)0)) {
        __result_obj__225 = come_increment_ref_count(result_330);
        come_call_finalizer3(result_330,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(__result_obj__225,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__225;
    }
    while(1) {
        char buf_331[1024];
        memset(&buf_331, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_331,1024,f)==((void*)0)) {
            break;
        }
        list$1char$ph$p_push_back(result_330,(char*)come_increment_ref_count(__builtin_string(buf_331)));
    }
    __result_obj__226 = come_increment_ref_count(result_330);
    come_call_finalizer3(result_330,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__226,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__226;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_332;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_332=fopen(path,mode);
    if(    f_332) {
        block(parent,f_332);
        fclose(f_332);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __right_value252 = (void*)0;
char* __result_obj__227;
void* __right_value253 = (void*)0;
char* __result_obj__228;
    if(    self==((void*)0)) {
        __result_obj__227 = come_increment_ref_count(((char*)(__right_value252=__builtin_string(""))));
        (__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__227 = come_decrement_ref_count2(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__227;
    }
    puts(self);
    __result_obj__228 = come_increment_ref_count(((char*)(__right_value253=__builtin_string(self))));
    (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count2(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__228;
}

char* charp_print(char* self){
void* __right_value254 = (void*)0;
char* __result_obj__229;
void* __right_value255 = (void*)0;
char* __result_obj__230;
    if(    self==((void*)0)) {
        __result_obj__229 = come_increment_ref_count(((char*)(__right_value254=__builtin_string(""))));
        (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__229 = come_decrement_ref_count2(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__229;
    }
    printf("%s",self);
    __result_obj__230 = come_increment_ref_count(((char*)(__right_value255=__builtin_string(self))));
    (__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__230 = come_decrement_ref_count2(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__230;
}

char* charp_printf(char* self, ...){
void* __right_value256 = (void*)0;
char* __result_obj__231;
char* msg2_333;
va_list args_334;
void* __right_value257 = (void*)0;
char* __result_obj__232;
msg2_333 = (void*)0;
memset(&args_334, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result_obj__231 = come_increment_ref_count(((char*)(__right_value256=__builtin_string(""))));
        (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__231 = come_decrement_ref_count2(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__231;
    }
    __builtin_va_start(args_334,self);
    vasprintf(&msg2_333,self,args_334);
    __builtin_va_end(args_334);
    printf("%s",msg2_333);
    free(msg2_333);
    __result_obj__232 = come_increment_ref_count(((char*)(__right_value257=__builtin_string(self))));
    come_call_finalizer3((&args_334),va_list_finalize, 1, 0, 0, 0, (void*)0);
    (__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__232 = come_decrement_ref_count2(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__232;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_335;
    for(    i_335=0;    i_335<self;    i_335++    ){
        block(parent,i_335);
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
int idx_336;
    *matchlength=0;
    if(    pattern!=0) {
        if(        pattern[0].type==(2)) {
            return ((((matchpattern(&pattern[1],text,matchlength)))?(0):(-1)));
        }
        else {
            idx_336=-1;
            do {
                idx_336+=1;
                if(                matchpattern(pattern,text,matchlength)) {
                    if(                    text[0]==0) {
                        return -1;
                    }
                    return idx_336;
                }
            } while(*text++!=0);
        }
    }
    return -1;
}

struct regex_t* re_compile(const char* pattern){
int ccl_bufidx_339;
char c_340;
int i_341;
int j_342;
int buf_begin_343;
struct regex_t* __result_obj__233;
struct regex_t* __result_obj__234;
struct regex_t* __result_obj__235;
struct regex_t* __result_obj__236;
struct regex_t* __result_obj__237;
struct regex_t* __result_obj__238;
struct regex_t* __result_obj__239;
memset(&c_340, 0, sizeof(char));
    static struct regex_t re_compiled_337[30];
    memset(&re_compiled_337, 0, sizeof(struct regex_t)    *(30)    );
    static unsigned char ccl_buf_338[40];
    memset(&ccl_buf_338, 0, sizeof(unsigned char)    *(40)    );
    ccl_bufidx_339=1;
    i_341=0;
    j_342=0;
    while(pattern[i_341]!=0&&(j_342+1<30)) {
        c_340=pattern[i_341];
        switch (c_340) {
            case 94:
            {
                re_compiled_337[j_342].type=(2);
            }
            break;
            case 36:
            {
                re_compiled_337[j_342].type=(3);
            }
            break;
            case 46:
            {
                re_compiled_337[j_342].type=(1);
            }
            break;
            case 42:
            {
                re_compiled_337[j_342].type=(5);
            }
            break;
            case 43:
            {
                re_compiled_337[j_342].type=(6);
            }
            break;
            case 63:
            {
                re_compiled_337[j_342].type=(4);
            }
            break;
            case 92:
            {
                if(                pattern[i_341+1]!=0) {
                    i_341+=1;
                    switch (pattern[i_341]) {
                        case 100:
                        {
                            re_compiled_337[j_342].type=(10);
                        }
                        break;
                        case 68:
                        {
                            re_compiled_337[j_342].type=(11);
                        }
                        break;
                        case 119:
                        {
                            re_compiled_337[j_342].type=(12);
                        }
                        break;
                        case 87:
                        {
                            re_compiled_337[j_342].type=(13);
                        }
                        break;
                        case 115:
                        {
                            re_compiled_337[j_342].type=(14);
                        }
                        break;
                        case 83:
                        {
                            re_compiled_337[j_342].type=(15);
                        }
                        break;
                        default:
                        {
                            re_compiled_337[j_342].type=(7);
                            re_compiled_337[j_342].u.ch=pattern[i_341];
                        }
                        break;
                    }
                }
            }
            break;
            case 91:
            {
                buf_begin_343=ccl_bufidx_339;
                if(                pattern[i_341+1]==94) {
                    re_compiled_337[j_342].type=(9);
                    i_341+=1;
                    if(                    pattern[i_341+1]==0) {
                        __result_obj__233 = /*b*/(void*)0;
                        return __result_obj__233;
                    }
                }
                else {
                    re_compiled_337[j_342].type=(8);
                }
                while((pattern[++i_341]!=93)&&(pattern[i_341]!=0)) {
                    if(                    pattern[i_341]==92) {
                        if(                        ccl_bufidx_339>=40-1) {
                            __result_obj__234 = /*b*/(void*)0;
                            return __result_obj__234;
                        }
                        if(                        pattern[i_341+1]==0) {
                            __result_obj__235 = /*b*/(void*)0;
                            return __result_obj__235;
                        }
                        ccl_buf_338[ccl_bufidx_339++]=pattern[i_341++];
                    }
                    else if(                    ccl_bufidx_339>=40) {
                        __result_obj__236 = /*b*/(void*)0;
                        return __result_obj__236;
                    }
                    ccl_buf_338[ccl_bufidx_339++]=pattern[i_341];
                }
                if(                ccl_bufidx_339>=40) {
                    __result_obj__237 = /*b*/(void*)0;
                    return __result_obj__237;
                }
                ccl_buf_338[ccl_bufidx_339++]=0;
                re_compiled_337[j_342].u.ccl=&ccl_buf_338[buf_begin_343];
            }
            break;
            default:
            {
                re_compiled_337[j_342].type=(7);
                re_compiled_337[j_342].u.ch=c_340;
            }
            break;
        }
        if(        pattern[i_341]==0) {
            __result_obj__238 = /*b*/(void*)0;
            return __result_obj__238;
        }
        i_341+=1;
        j_342+=1;
    }
    re_compiled_337[j_342].type=(0);
    __result_obj__239 = (struct regex_t*)re_compiled_337;
    return __result_obj__239;
}

void re_print(struct regex_t* pattern){
int i_345;
int j_346;
char c_347;
memset(&i_345, 0, sizeof(int));
memset(&j_346, 0, sizeof(int));
memset(&c_347, 0, sizeof(char));
    const char* types_344[]={"UNUSED","DOT","BEGIN","END","QUESTIONMARK","STAR","PLUS","CHAR","CHAR_CLASS","INV_CHAR_CLASS","DIGIT","NOT_DIGIT","ALPHA","NOT_ALPHA","WHITESPACE","NOT_WHITESPACE","BRANCH"};
    for(    i_345=0;    i_345<30;    ++i_345    ){
        if(        pattern[i_345].type==(0)) {
            break;
        }
        printf("type: %s",types_344[pattern[i_345].type]);
        if(        pattern[i_345].type==(8)||pattern[i_345].type==(9)) {
            printf(" [");
            for(            j_346=0;            j_346<40;            ++j_346            ){
                c_347=pattern[i_345].u.ccl[j_346];
                if(                (c_347==0)||(c_347==93)) {
                    break;
                }
                printf("%c",c_347);
            }
            printf("]");
        }
        else if(        pattern[i_345].type==(7)) {
            printf(" '%c'",pattern[i_345].u.ch);
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
int prelen_348;
    prelen_348=*matchlength;
    const char* prepoint_349=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>=prepoint_349) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    *matchlength=prelen_348;
    return 0;
}

int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    const char* prepoint_350=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>prepoint_350) {
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
int pre_351;
    pre_351=*matchlength;
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
    *matchlength=pre_351;
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
unsigned int result_352;
unsigned int* p_353;
    result_352=0;
    p_353=value;
    while(*p_353) {
        result_352+=*p_353;
        p_353++;
    }
    return result_352;
}

char* wchar_t_to_string(unsigned int wc){
void* __right_value258 = (void*)0;
char* __result_obj__240;
    __result_obj__240 = come_increment_ref_count(((char*)(__right_value258=xsprintf("%ls",wc))));
    (__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__240 = come_decrement_ref_count2(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    return 0;
}

int main(int argc, char** argv){
int __result_obj__241;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result_obj__241 = come_main_v2(argc,argv);
    come_call_finalizer3(gExceptionRightValueObjects,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result_obj__241;
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_354;
struct list_item$1void$ph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        come_call_finalizer3(prev_it_355,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
struct CVALUE* __result_obj__242;
    __result_obj__242 = come_increment_ref_count(self);
    come_call_finalizer3(self,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__242,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__242;
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
struct list_item$1sNode$ph* it_356;
struct list_item$1sNode$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        come_call_finalizer3(prev_it_357,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* __dec_obj23;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct buffer* __dec_obj24;
char* __dec_obj25;
char* __dec_obj26;
void* __right_value270 = (void*)0;
void* __right_value276 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj29;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj30;
struct sModule* __result_obj__251;
    __dec_obj23=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 24, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj24=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 25, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj25=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj26=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj29=self->mHeader;
    self->mHeader=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 28, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj29,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj30=self->mHeaderStructs;
    self->mHeaderStructs=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 29, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj30,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__251 = come_increment_ref_count(self);
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,sModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_358;
int i_359;
    for(    i_358=0;    i_358<self->size;    i_358++    ){
        if(        self->item_existance[i_358]) {
            if(            1) {
                come_call_finalizer3(self->items[i_358],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_359=0;    i_359<self->size;    i_359++    ){
        if(        self->item_existance[i_359]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_359],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_360;
struct list_item$1void$p* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
struct map$2void$phvoid$ph* __result_obj__243;
void* __right_value263 = (void*)0;
struct map$2void$phvoid$ph* result_362;
void* __right_value269 = (void*)0;
struct list$1void$p* __dec_obj27;
struct map$2void$phvoid$ph* __result_obj__248;
    if(    self==(void*)0) {
        __result_obj__243 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__243,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__243;
    }
    result_362=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_362->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_362->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_362->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_362->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_362->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj27=result_362->key_list;
        result_362->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj27,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->it=self->it;
    }
    __result_obj__248 = come_increment_ref_count(result_362);
    come_call_finalizer3(result_362,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__248,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__248;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
struct list$1void$p* __result_obj__244;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1void$p* result_364;
struct list_item$1void$p* it_365;
struct list$1void$p* __result_obj__247;
    if(    self==((void*)0)) {
        __result_obj__244 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__244,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_364=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1456, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_365=self->head;
    while(it_365!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_364,it_365->item);
        }
        else {
            list$1void$p$p_add(result_364,it_365->item);
        }
        it_365=it_365->next;
    }
    __result_obj__247 = come_increment_ref_count(result_364);
    come_call_finalizer3(result_364,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_363;
    result_363=0;
    result_363+=int_get_hash_key(((int)self->head));
    result_363+=int_get_hash_key(((int)self->tail));
    result_363+=int_get_hash_key(((int)self->len));
    result_363+=int_get_hash_key(((int)self->it));
    return result_363;
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
struct list$1void$p* __result_obj__245;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__245 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __right_value266 = (void*)0;
struct list_item$1void$p* litem_366;
void* __right_value267 = (void*)0;
struct list_item$1void$p* litem_367;
void* __right_value268 = (void*)0;
struct list_item$1void$p* litem_368;
struct list$1void$p* __result_obj__246;
    if(    self->len==0) {
        litem_366=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value266=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1475, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        litem_366->item=item;
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1) {
        litem_367=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value267=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1485, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        litem_367->item=item;
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value268=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1495, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        litem_368->item=item;
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result_obj__246 = self;
    return __result_obj__246;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_369;
struct list_item$1void$p* prev_it_370;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        prev_it_370=it_369;
        it_369=it_369->next;
        come_call_finalizer3(prev_it_370,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_371;
    result_371=0;
    result_371+=int_get_hash_key(((int)self->keys));
    result_371+=int_get_hash_key(((int)self->item_existance));
    result_371+=int_get_hash_key(((int)self->items));
    result_371+=int_get_hash_key(((int)self->size));
    result_371+=int_get_hash_key(((int)self->len));
    result_371+=int_get_hash_key(((int)self->key_list));
    result_371+=int_get_hash_key(((int)self->it));
    return result_371;
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
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
int i_372;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1void$p* __dec_obj28;
struct map$2void$phvoid$ph* __result_obj__250;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value271=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2751, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value272=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2752, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value273=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2753, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_372=0;    i_372<128;    i_372++    ){
        self->item_existance[i_372]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj28=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2763, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj28,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__250 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__250,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__250;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer3(self->mHeader,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        come_call_finalizer3(self->mHeaderStructs,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj31;
struct sVarTable* __result_obj__252;
    __dec_obj31=self->mVars;
    self->mVars=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "01main.c", 36, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
    come_call_finalizer3(__dec_obj31,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    __result_obj__252 = come_increment_ref_count(self);
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer3(self->mVars,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
int pointer_num_373;
char* p_374;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* name2_375;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sClass* klass_376;
void* __right_value285 = (void*)0;
struct sClass* generics_class_380;
void* __right_value298 = (void*)0;
struct sClass* klass2_381;
void* __right_value299 = (void*)0;
char* __dec_obj39;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj40;
struct sType* __dec_obj41;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1void$ph* __dec_obj42;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1sNode$ph* __dec_obj43;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1void$ph* __dec_obj44;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1char$ph* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
void* __right_value319 = (void*)0;
char* __dec_obj48;
struct sType* __result_obj__286;
    pointer_num_373=0;
    p_374=name;
    while(*p_374) {
        if(        xisalpha(*p_374)||*p_374==95) {
            p_374++;
        }
        else {
            break;
        }
    }
    while(*p_374==42) {
        pointer_num_373++;
        p_374++;
    }
    name2_375=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value281=__builtin_string(name))),0,-pointer_num_373-1));
    (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    klass_376=((struct sClass*)((void*)(__right_value284=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value283=__builtin_string(name2_375)))))));
    (__right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value284,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_class_380=((struct sClass*)((void*)(__right_value285=map$2void$phvoid$ph$p_operator_load_element(info->generics_classes,name2_375))));
    come_call_finalizer3(__right_value285,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    klass_376==((void*)0)&&generics_class_380==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_375);
    }
    if(    klass_376) {
        self->mClass=klass_376;
    }
    else {
        klass2_381=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 78, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
        __dec_obj39=klass2_381->mName;
        klass2_381->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_381));
        self->mClass=((struct sClass*)((void*)(__right_value310=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value309=__builtin_string(name)))))));
        (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value310,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        come_call_finalizer3(klass2_381,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj40=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj41=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj42=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 88, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj42,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj43=self->mArrayNum;
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "01main.c", 89, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj43,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj44=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 90, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj44,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj45=self->mParamNames;
    self->mParamNames=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 91, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj46=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
    self->mPointerNum=pointer_num_373;
    __dec_obj47=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj48=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mOriginalPointerNum=0;
    __result_obj__286 = come_increment_ref_count(self);
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    (name2_375 = come_decrement_ref_count2(name2_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__286,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_377;
unsigned int hash_378;
unsigned int it_379;
void* __result_obj__253;
void* __result_obj__254;
void* __result_obj__255;
void* __result_obj__256;
default_value_377 = (void*)0;
    memset(&default_value_377,0,sizeof(void*));
    hash_378=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_379=hash_378;
    while((_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            come_call_equals((void*)0, self->keys[it_379], ((char*)key))) {
                __result_obj__253 = come_increment_ref_count(self->items[it_379]);
                come_call_finalizer3(default_value_377,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__253,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__253;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result_obj__254 = come_increment_ref_count(((struct sClass*)default_value_377));
                come_call_finalizer3(default_value_377,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__254,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__254;
            }
        }
        else {
            __result_obj__255 = come_increment_ref_count(((struct sClass*)default_value_377));
            come_call_finalizer3(default_value_377,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__255,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__255;
        }
    }
    __result_obj__256 = come_increment_ref_count(((struct sClass*)default_value_377));
    come_call_finalizer3(default_value_377,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__256,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__256;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__257;
void* __right_value286 = (void*)0;
struct sClass* result_385;
void* __right_value287 = (void*)0;
char* __dec_obj32;
void* __right_value295 = (void*)0;
struct list$1void$ph* __dec_obj36;
void* __right_value296 = (void*)0;
char* __dec_obj37;
void* __right_value297 = (void*)0;
char* __dec_obj38;
struct sClass* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__257 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__257,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__257;
    }
    result_385=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_385->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_385->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_385->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_385->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_385->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_385->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_385->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_385->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj32=result_385->mName;
        result_385->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_385->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_385->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj36=result_385->mFields;
        result_385->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj36,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj37=result_385->mParentClassName;
        result_385->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj38=result_385->mAttribute;
        result_385->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_385->mDynamic=self->mDynamic;
    }
    __result_obj__262 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__262,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_382;
    result_382=0;
    result_382+=int_get_hash_key(((int)self->mStruct));
    result_382+=int_get_hash_key(((int)self->mFloat));
    result_382+=int_get_hash_key(((int)self->mUnion));
    result_382+=int_get_hash_key(((int)self->mGenerics));
    result_382+=int_get_hash_key(((int)self->mMethodGenerics));
    result_382+=int_get_hash_key(((int)self->mEnum));
    result_382+=int_get_hash_key(((int)self->mProtocol));
    result_382+=int_get_hash_key(((int)self->mNumber));
    result_382+=int_get_hash_key(((int)self->mName));
    result_382+=int_get_hash_key(((int)self->mGenericsNum));
    result_382+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_382+=int_get_hash_key(((int)self->mFields));
    result_382+=int_get_hash_key(((int)self->mParentClassName));
    result_382+=int_get_hash_key(((int)self->mAttribute));
    result_382+=int_get_hash_key(((int)self->mDynamic));
    return result_382;
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
struct list_item$1void$ph* it_383;
struct list_item$1void$ph* it2_384;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_383=left->head;
    it2_384=right->head;
    while(it_383!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_383->item, it2_384->item)) {
            return (_Bool)0;
        }
        it_383=it_383->next;
        it2_384=it2_384->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__258;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1void$ph* result_387;
struct list_item$1void$ph* it_388;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1void$ph* __result_obj__261;
    if(    self==((void*)0)) {
        __result_obj__258 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__258,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__258;
    }
    result_387=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_388=self->head;
    while(it_388!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_387,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_388->item)));
        }
        else {
            list$1void$ph$p_add(result_387,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_388->item)));
        }
        it_388=it_388->next;
    }
    __result_obj__261 = come_increment_ref_count(result_387);
    come_call_finalizer3(result_387,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__261,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__261;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_386;
    result_386=0;
    result_386+=int_get_hash_key(((int)self->head));
    result_386+=int_get_hash_key(((int)self->tail));
    result_386+=int_get_hash_key(((int)self->len));
    result_386+=int_get_hash_key(((int)self->it));
    return result_386;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__259;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__259 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__259,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__259;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value290 = (void*)0;
struct list_item$1void$ph* litem_389;
void* __dec_obj33;
void* __right_value291 = (void*)0;
struct list_item$1void$ph* litem_390;
void* __dec_obj34;
void* __right_value292 = (void*)0;
struct list_item$1void$ph* litem_391;
void* __dec_obj35;
struct list$1void$ph* __result_obj__260;
    if(    self->len==0) {
        litem_389=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value290=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        __dec_obj33=litem_389->item;
        litem_389->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj33,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value291=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        __dec_obj34=litem_390->item;
        litem_390->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj34,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value292=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        __dec_obj35=litem_391->item;
        litem_391->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj35,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_391;
        self->tail=litem_391;
    }
    self->len++;
    __result_obj__260 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__260;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_392;
struct list_item$1void$ph* prev_it_393;
    it_392=self->head;
    while(it_392!=((void*)0)) {
        prev_it_393=it_392;
        it_392=it_392->next;
        come_call_finalizer3(prev_it_393,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_411;
unsigned int it_412;
_Bool same_key_exist_429;
char* it2_432;
struct map$2void$phvoid$ph* __result_obj__284;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_411=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_412=hash_411;
    while((_Bool)1) {
        if(        self->item_existance[it_412]) {
            if(            come_call_equals((void*)0, self->keys[it_412], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_412]);
                    come_call_finalizer3(self->keys[it_412],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_412]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_412]);
                    self->keys[it_412]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_412],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_412]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_412]=item;
                }
                break;
            }
            it_412++;
            if(            it_412>=self->size) {
                it_412=0;
            }
            else if(            it_412==hash_411) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_412]=(_Bool)1;
            if(            1) {
                self->keys[it_412]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_412]=key;
            }
            if(            1) {
                self->items[it_412]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_412]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_429=(_Bool)0;
    for(    it2_432=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_432=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_432, key)) {
            same_key_exist_429=(_Bool)1;
        }
    }
    if(    !same_key_exist_429) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__284 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__284;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_394;
void* __right_value300 = (void*)0;
void** keys_395;
void* __right_value301 = (void*)0;
void** items_396;
void* __right_value302 = (void*)0;
_Bool* item_existance_397;
int len_398;
void* it_401;
void* default_value_404;
void* __right_value303 = (void*)0;
void* it2_405;
unsigned int hash_408;
int n_409;
void* default_value_410;
void* __right_value304 = (void*)0;
default_value_404 = (void*)0;
default_value_410 = (void*)0;
    size_394=self->size*10;
    keys_395=(void**)come_increment_ref_count(((void**)(__right_value300=(void**)come_calloc(1, sizeof(void*)*(1*(size_394)), "./comelang.h", 2990, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_396=(void**)come_increment_ref_count(((void**)(__right_value301=(void**)come_calloc(1, sizeof(void*)*(1*(size_394)), "./comelang.h", 2991, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_397=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value302=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_394)), "./comelang.h", 2992, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_398=0;
    for(    it_401=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_401=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_404,0,sizeof(void*));
        it2_405=((void*)(__right_value303=map$2void$phvoid$ph$p_at(self,it_401,(void*)come_increment_ref_count(default_value_404))));
        come_call_finalizer3(__right_value303,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_408=come_call_get_hash_key((void*)0, ((void*)it_401))%size_394;
        n_409=hash_408;
        while((_Bool)1) {
            if(            item_existance_397[n_409]) {
                n_409++;
                if(                n_409>=size_394) {
                    n_409=0;
                }
                else if(                n_409==hash_408) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_397[n_409]=(_Bool)1;
                keys_395[n_409]=it_401;
                items_396[n_409]=((void*)(__right_value304=map$2void$phvoid$ph$p_at(self,it_401,(void*)come_increment_ref_count(default_value_410))));
                come_call_finalizer3(__right_value304,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_398++;
                come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_410,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_404,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_395;
    self->items=items_396;
    self->item_existance=item_existance_397;
    self->size=size_394;
    self->len=len_398;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_399;
void* __result_obj__263;
void* __result_obj__264;
void* result_400;
void* __result_obj__265;
result_399 = (void*)0;
result_400 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_399,0,sizeof(void*));
        __result_obj__263 = result_399;
        return __result_obj__263;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__264 = self->key_list->it->item;
        return __result_obj__264;
    }
    memset(&result_400,0,sizeof(void*));
    __result_obj__265 = result_400;
    return __result_obj__265;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_402;
void* __result_obj__266;
void* __result_obj__267;
void* result_403;
void* __result_obj__268;
result_402 = (void*)0;
result_403 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_402,0,sizeof(void*));
        __result_obj__266 = result_402;
        return __result_obj__266;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__267 = self->key_list->it->item;
        return __result_obj__267;
    }
    memset(&result_403,0,sizeof(void*));
    __result_obj__268 = result_403;
    return __result_obj__268;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_406;
unsigned int it_407;
void* __result_obj__269;
void* __result_obj__270;
void* __result_obj__271;
void* __result_obj__272;
    hash_406=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_407=hash_406;
    while((_Bool)1) {
        if(        self->item_existance[it_407]) {
            if(            come_call_equals((void*)0, self->keys[it_407], key)) {
                __result_obj__269 = come_increment_ref_count(self->items[it_407]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__269,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__269;
            }
            it_407++;
            if(            it_407>=self->size) {
                it_407=0;
            }
            else if(            it_407==hash_406) {
                __result_obj__270 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__270,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__270;
            }
        }
        else {
            __result_obj__271 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__271,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__271;
        }
    }
    __result_obj__272 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__272,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__272;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_413;
struct list_item$1void$p* it_414;
struct list$1void$p* __result_obj__276;
    it2_413=0;
    it_414=self->head;
    while(it_414!=((void*)0)) {
        if(        come_call_equals((void*)0, it_414->item, item)) {
            list$1void$p$p_delete(self,it2_413,it2_413+1);
            break;
        }
        it2_413++;
        it_414=it_414->next;
    }
    __result_obj__276 = self;
    return __result_obj__276;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_415;
struct list$1void$p* __result_obj__273;
struct list_item$1void$p* it_418;
int i_419;
struct list_item$1void$p* prev_it_420;
struct list_item$1void$p* it_421;
int i_422;
struct list_item$1void$p* prev_it_423;
struct list_item$1void$p* it_424;
struct list_item$1void$p* head_prev_it_425;
struct list_item$1void$p* tail_it_426;
int i_427;
struct list_item$1void$p* prev_it_428;
struct list$1void$p* __result_obj__275;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_415=tail;
        tail=head;
        head=tmp_415;
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
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_418=self->head;
        i_419=0;
        while(it_418!=((void*)0)) {
            if(            i_419<tail) {
                prev_it_420=it_418;
                it_418=it_418->next;
                i_419++;
                come_call_finalizer3(prev_it_420,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_419==tail) {
                self->head=it_418;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_418=it_418->next;
                i_419++;
            }
        }
    }
    else if(    tail==self->len) {
        it_421=self->head;
        i_422=0;
        while(it_421!=((void*)0)) {
            if(            i_422==head) {
                self->tail=it_421->prev;
                self->tail->next=((void*)0);
            }
            if(            i_422>=head) {
                prev_it_423=it_421;
                it_421=it_421->next;
                i_422++;
                come_call_finalizer3(prev_it_423,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_421=it_421->next;
                i_422++;
            }
        }
    }
    else {
        it_424=self->head;
        head_prev_it_425=((void*)0);
        tail_it_426=((void*)0);
        i_427=0;
        while(it_424!=((void*)0)) {
            if(            i_427==head) {
                head_prev_it_425=it_424->prev;
            }
            if(            i_427==tail) {
                tail_it_426=it_424;
            }
            if(            i_427>=head&&i_427<tail) {
                prev_it_428=it_424;
                it_424=it_424->next;
                i_427++;
                come_call_finalizer3(prev_it_428,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_424=it_424->next;
                i_427++;
            }
        }
        if(        head_prev_it_425!=((void*)0)) {
            head_prev_it_425->next=tail_it_426;
        }
        if(        tail_it_426!=((void*)0)) {
            tail_it_426->prev=head_prev_it_425;
        }
    }
    __result_obj__275 = self;
    return __result_obj__275;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_416;
struct list_item$1void$p* prev_it_417;
struct list$1void$p* __result_obj__274;
    it_416=self->head;
    while(it_416!=((void*)0)) {
        prev_it_417=it_416;
        it_416=it_416->next;
        come_call_finalizer3(prev_it_417,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = self;
    return __result_obj__274;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_430;
void* __result_obj__277;
void* __result_obj__278;
void* result_431;
void* __result_obj__279;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_430,0,sizeof(void*));
        __result_obj__277 = result_430;
        return __result_obj__277;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__278 = self->it->item;
        return __result_obj__278;
    }
    memset(&result_431,0,sizeof(void*));
    __result_obj__279 = result_431;
    return __result_obj__279;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_433;
void* __result_obj__280;
void* __result_obj__281;
void* result_434;
void* __result_obj__282;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_433,0,sizeof(void*));
        __result_obj__280 = result_433;
        return __result_obj__280;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__281 = self->it->item;
        return __result_obj__281;
    }
    memset(&result_434,0,sizeof(void*));
    __result_obj__282 = result_434;
    return __result_obj__282;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value305 = (void*)0;
struct list_item$1void$p* litem_435;
void* __right_value306 = (void*)0;
struct list_item$1void$p* litem_436;
void* __right_value307 = (void*)0;
struct list_item$1void$p* litem_437;
struct list$1void$p* __result_obj__283;
    if(    self->len==0) {
        litem_435=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value305=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1545, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=((void*)0);
        litem_435->next=((void*)0);
        litem_435->item=item;
        self->tail=litem_435;
        self->head=litem_435;
    }
    else if(    self->len==1) {
        litem_436=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value306=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1555, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_436->prev=self->head;
        litem_436->next=((void*)0);
        litem_436->item=item;
        self->tail=litem_436;
        self->head->next=litem_436;
    }
    else {
        litem_437=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value307=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1565, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_437->prev=self->tail;
        litem_437->next=((void*)0);
        litem_437->item=item;
        self->tail->next=litem_437;
        self->tail=litem_437;
    }
    self->len++;
    __result_obj__283 = self;
    return __result_obj__283;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__285;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__285 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__285,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__285;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_438;
struct list_item$1sNode$ph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_440;
struct list_item$1char$ph* prev_it_441;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        prev_it_441=it_440;
        it_440=it_440->next;
        come_call_finalizer3(prev_it_441,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __right_value320 = (void*)0;
char* __dec_obj49;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1void$ph* __dec_obj50;
struct sClass* __result_obj__287;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj50=self->mFields;
    self->mFields=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "01main.c", 131, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    come_call_finalizer3(__dec_obj50,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__287 = come_increment_ref_count(self);
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__287,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __right_value323 = (void*)0;
char* __dec_obj51;
void* __right_value324 = (void*)0;
char* __dec_obj52;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1char$ph* __dec_obj53;
void* __right_value327 = (void*)0;
char* __dec_obj54;
struct sClassModule* __result_obj__288;
    __dec_obj51=self->mName;
    self->mName=(char*)come_increment_ref_count(come_call_cloner(charp_clone, name));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj52=self->mText;
    self->mText=(char*)come_increment_ref_count(come_call_cloner(string_clone, text));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj53=self->mParams;
    self->mParams=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "01main.c", 140, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj53,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj54=self->mSName;
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=sline;
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    (text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__288,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute){
char* __dec_obj55;
struct sType* __dec_obj56;
struct list$1void$ph* __dec_obj57;
struct list$1char$ph* __dec_obj58;
struct list$1char$ph* __dec_obj59;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj81;
struct list$1void$ph* o2_saved_459;
struct sType* it_462;
void* __right_value364 = (void*)0;
struct list$1char$ph* o2_saved_468;
char* it_471;
void* __right_value365 = (void*)0;
struct sType* __dec_obj85;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct buffer* __dec_obj86;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct buffer* __dec_obj87;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct buffer* __dec_obj88;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct buffer* __dec_obj89;
struct sBlock* __dec_obj90;
struct sType* result_474;
char* __dec_obj91;
char* __dec_obj92;
struct sFun* __result_obj__312;
result_474 = (void*)0;
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj56=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj57=self->mParamTypes;
    self->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj57,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj58,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj59=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj59,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mGenerate=generate_;
    __dec_obj81=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 161, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_459=(struct list$1void$ph*)come_increment_ref_count((param_types)),it_462=((struct sType*)list$1void$ph$p_begin((o2_saved_459)));    !list$1void$ph$p_end((o2_saved_459));    it_462=((struct sType*)list$1void$ph$p_next((o2_saved_459)))    ){
        list$1void$ph$p_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_462)));
    }
    come_call_finalizer3(o2_saved_459,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_468=(struct list$1char$ph*)come_increment_ref_count((param_names)),it_471=list$1char$ph$p_begin((o2_saved_468));    !list$1char$ph$p_end((o2_saved_468));    it_471=list$1char$ph$p_next((o2_saved_468))    ){
        list$1char$ph$p_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_471)));
    }
    come_call_finalizer3(o2_saved_468,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj85=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj86=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 174, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj86,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj87=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 175, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj87,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj88=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 176, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj88,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj89=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 177, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj90=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer3(__dec_obj90,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    (string_operator_equals(result_type->mClass->mName,"void")||result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj91=self->mAttribute;
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=self->mFunAttribute;
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__312 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute = come_decrement_ref_count2(fun_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__312,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__289;
void* __right_value328 = (void*)0;
struct sType* result_447;
void* __right_value329 = (void*)0;
struct sType* __dec_obj60;
void* __right_value330 = (void*)0;
struct sType* __dec_obj61;
void* __right_value331 = (void*)0;
struct list$1void$ph* __dec_obj62;
void* __right_value332 = (void*)0;
struct sType* __dec_obj63;
void* __right_value333 = (void*)0;
struct sType* __dec_obj64;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj65;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value337 = (void*)0;
char* __dec_obj67;
void* __right_value338 = (void*)0;
char* __dec_obj68;
void* __right_value339 = (void*)0;
char* __dec_obj69;
void* __right_value347 = (void*)0;
struct list$1sNode$ph* __dec_obj73;
void* __right_value348 = (void*)0;
char* __dec_obj74;
void* __right_value349 = (void*)0;
struct list$1void$ph* __dec_obj75;
void* __right_value357 = (void*)0;
struct list$1char$ph* __dec_obj79;
void* __right_value358 = (void*)0;
struct sType* __dec_obj80;
struct sType* __result_obj__298;
    if(    self==(void*)0) {
        __result_obj__289 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__289,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__289;
    }
    result_447=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_447->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_447->mOriginalLoadVarType;
        result_447->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj61=result_447->mChannelType;
        result_447->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj62=result_447->mGenericsTypes;
        result_447->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj62,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj63=result_447->mNoSolvedGenericsType;
        result_447->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj64=result_447->mAnyOriginalType;
        result_447->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj65=result_447->mSizeNum;
        result_447->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj66=result_447->mAlignas;
        result_447->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj67=result_447->mTupleName;
        result_447->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj68=result_447->mAttribute;
        result_447->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_447->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_447->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_447->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_447->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_447->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_447->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_447->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_447->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_447->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_447->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_447->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_447->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_447->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_447->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_447->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_447->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_447->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_447->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_447->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_447->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_447->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_447->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_447->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_447->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_447->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj69=result_447->mAsmName;
        result_447->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_447->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_447->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_447->mArrayNum;
        result_447->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_447->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_447->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_447->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_447->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_447->mOriginalTypeName;
        result_447->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_447->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_447->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_447->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj75=result_447->mParamTypes;
        result_447->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj75,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj79=result_447->mParamNames;
        result_447->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj79,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj80=result_447->mResultType;
        result_447->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_447->mVarArgs=self->mVarArgs;
    }
    __result_obj__298 = come_increment_ref_count(result_447);
    come_call_finalizer3(result_447,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__298,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__298;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_442;
    result_442=0;
    result_442+=int_get_hash_key(((int)self->mClass));
    result_442+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_442+=int_get_hash_key(((int)self->mChannelType));
    result_442+=int_get_hash_key(((int)self->mGenericsTypes));
    result_442+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_442+=int_get_hash_key(((int)self->mAnyClass));
    result_442+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_442+=int_get_hash_key(((int)self->mSizeNum));
    result_442+=int_get_hash_key(((int)self->mAlignas));
    result_442+=int_get_hash_key(((int)self->mTupleName));
    result_442+=int_get_hash_key(((int)self->mAttribute));
    result_442+=int_get_hash_key(((int)self->mAllocaValue));
    result_442+=int_get_hash_key(((int)self->mUnsigned));
    result_442+=int_get_hash_key(((int)self->mShort));
    result_442+=int_get_hash_key(((int)self->mLong));
    result_442+=int_get_hash_key(((int)self->mLongLong));
    result_442+=int_get_hash_key(((int)self->mConstant));
    result_442+=int_get_hash_key(((int)self->mAtomic));
    result_442+=int_get_hash_key(((int)self->mRegister));
    result_442+=int_get_hash_key(((int)self->mVolatile));
    result_442+=int_get_hash_key(((int)self->mStatic));
    result_442+=int_get_hash_key(((int)self->mUniq));
    result_442+=int_get_hash_key(((int)self->mRecord));
    result_442+=int_get_hash_key(((int)self->mExtern));
    result_442+=int_get_hash_key(((int)self->mRestrict));
    result_442+=int_get_hash_key(((int)self->mImmutable));
    result_442+=int_get_hash_key(((int)self->mHeap));
    result_442+=int_get_hash_key(((int)self->mChannel));
    result_442+=int_get_hash_key(((int)self->mNoHeap));
    result_442+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_442+=int_get_hash_key(((int)self->mException));
    result_442+=int_get_hash_key(((int)self->mGenerate));
    result_442+=int_get_hash_key(((int)self->mCreateVTable));
    result_442+=int_get_hash_key(((int)self->mDynamic));
    result_442+=int_get_hash_key(((int)self->mInline));
    result_442+=int_get_hash_key(((int)self->mNullValue));
    result_442+=int_get_hash_key(((int)self->mGuardValue));
    result_442+=int_get_hash_key(((int)self->mAsmName));
    result_442+=int_get_hash_key(((int)self->mTypedef));
    result_442+=int_get_hash_key(((int)self->mMultipleTypes));
    result_442+=int_get_hash_key(((int)self->mOriginIsArray));
    result_442+=int_get_hash_key(((int)self->mArrayNum));
    result_442+=int_get_hash_key(((int)self->mPointerNum));
    result_442+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_442+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_442+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_442+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_442+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_442+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_442+=int_get_hash_key(((int)self->mArrayPointerType));
    result_442+=int_get_hash_key(((int)self->mLambdaArray));
    result_442+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_442+=int_get_hash_key(((int)self->mParamTypes));
    result_442+=int_get_hash_key(((int)self->mParamNames));
    result_442+=int_get_hash_key(((int)self->mResultType));
    result_442+=int_get_hash_key(((int)self->mVarArgs));
    return result_442;
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
struct list_item$1sNode$ph* it_443;
struct list_item$1sNode$ph* it2_444;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_443=left->head;
    it2_444=right->head;
    while(it_443!=((void*)0)) {
        if(        !sNode_equals(it_443->item,it2_444->item)) {
            return (_Bool)0;
        }
        it_443=it_443->next;
        it2_444=it2_444->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_445;
struct list_item$1char$ph* it2_446;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_445=left->head;
    it2_446=right->head;
    while(it_445!=((void*)0)) {
        if(        !string_equals(it_445->item,it2_446->item)) {
            return (_Bool)0;
        }
        it_445=it_445->next;
        it2_446=it2_446->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__290;
void* __right_value334 = (void*)0;
struct sNode* result_448;
struct sNode* __result_obj__291;
    if(    self==(void*)0) {
        __result_obj__290 = come_increment_ref_count((void*)0);
        ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count2(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__290;
    }
    result_448=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_448->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_448->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_448->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_448->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_448->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_448->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_448->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_448->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_448->kind=self->kind;
    }
    __result_obj__291 = come_increment_ref_count(result_448);
    ((result_448) ? result_448 = come_decrement_ref_count2(result_448, ((struct sNode*)result_448)->finalize, ((struct sNode*)result_448)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__291) ? __result_obj__291 = come_decrement_ref_count2(__result_obj__291, ((struct sNode*)__result_obj__291)->finalize, ((struct sNode*)__result_obj__291)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__291;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__292;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1sNode$ph* result_449;
struct list_item$1sNode$ph* it_450;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1sNode$ph* __result_obj__294;
    if(    self==((void*)0)) {
        __result_obj__292 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__292,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__292;
    }
    result_449=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_450=self->head;
    while(it_450!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_449,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_450->item)));
        }
        else {
            list$1sNode$ph$p_add(result_449,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_450->item)));
        }
        it_450=it_450->next;
    }
    __result_obj__294 = come_increment_ref_count(result_449);
    come_call_finalizer3(result_449,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__294,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__294;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value342 = (void*)0;
struct list_item$1sNode$ph* litem_451;
struct sNode* __dec_obj70;
void* __right_value343 = (void*)0;
struct list_item$1sNode$ph* litem_452;
struct sNode* __dec_obj71;
void* __right_value344 = (void*)0;
struct list_item$1sNode$ph* litem_453;
struct sNode* __dec_obj72;
struct list$1sNode$ph* __result_obj__293;
    if(    self->len==0) {
        litem_451=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value342=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        __dec_obj70=litem_451->item;
        litem_451->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_451;
        self->head=litem_451;
    }
    else if(    self->len==1) {
        litem_452=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value343=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_452->prev=self->head;
        litem_452->next=((void*)0);
        __dec_obj71=litem_452->item;
        litem_452->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_452;
        self->head->next=litem_452;
    }
    else {
        litem_453=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value344=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_453->prev=self->tail;
        litem_453->next=((void*)0);
        __dec_obj72=litem_453->item;
        litem_453->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_453;
        self->tail=litem_453;
    }
    self->len++;
    __result_obj__293 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__293;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__295;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct list$1char$ph* result_454;
struct list_item$1char$ph* it_455;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1char$ph* __result_obj__297;
    if(    self==((void*)0)) {
        __result_obj__295 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__295,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__295;
    }
    result_454=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_455=self->head;
    while(it_455!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_454,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_455->item)));
        }
        else {
            list$1char$ph$p_add(result_454,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_455->item)));
        }
        it_455=it_455->next;
    }
    __result_obj__297 = come_increment_ref_count(result_454);
    come_call_finalizer3(result_454,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__297,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__297;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value352 = (void*)0;
struct list_item$1char$ph* litem_456;
char* __dec_obj76;
void* __right_value353 = (void*)0;
struct list_item$1char$ph* litem_457;
char* __dec_obj77;
void* __right_value354 = (void*)0;
struct list_item$1char$ph* litem_458;
char* __dec_obj78;
struct list$1char$ph* __result_obj__296;
    if(    self->len==0) {
        litem_456=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value352=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        __dec_obj76=litem_456->item;
        litem_456->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1) {
        litem_457=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value353=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        __dec_obj77=litem_457->item;
        litem_457->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value354=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        __dec_obj78=litem_458->item;
        litem_458->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result_obj__296 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__296;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_460;
void* __result_obj__299;
void* __result_obj__300;
void* result_461;
void* __result_obj__301;
result_460 = (void*)0;
result_461 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_460,0,sizeof(void*));
        __result_obj__299 = result_460;
        return __result_obj__299;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_461,0,sizeof(void*));
    __result_obj__301 = result_461;
    return __result_obj__301;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_463;
void* __result_obj__302;
void* __result_obj__303;
void* result_464;
void* __result_obj__304;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_463,0,sizeof(void*));
        __result_obj__302 = result_463;
        return __result_obj__302;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__303 = self->it->item;
        return __result_obj__303;
    }
    memset(&result_464,0,sizeof(void*));
    __result_obj__304 = result_464;
    return __result_obj__304;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value361 = (void*)0;
struct list_item$1void$ph* litem_465;
void* __dec_obj82;
void* __right_value362 = (void*)0;
struct list_item$1void$ph* litem_466;
void* __dec_obj83;
void* __right_value363 = (void*)0;
struct list_item$1void$ph* litem_467;
void* __dec_obj84;
struct list$1void$ph* __result_obj__305;
    if(    self->len==0) {
        litem_465=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value361=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1545, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_465->prev=((void*)0);
        litem_465->next=((void*)0);
        __dec_obj82=litem_465->item;
        litem_465->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_465;
        self->head=litem_465;
    }
    else if(    self->len==1) {
        litem_466=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value362=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1555, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_466->prev=self->head;
        litem_466->next=((void*)0);
        __dec_obj83=litem_466->item;
        litem_466->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_466;
        self->head->next=litem_466;
    }
    else {
        litem_467=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value363=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1565, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_467->prev=self->tail;
        litem_467->next=((void*)0);
        __dec_obj84=litem_467->item;
        litem_467->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_467;
        self->tail=litem_467;
    }
    self->len++;
    __result_obj__305 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__305;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_469;
char* __result_obj__306;
char* __result_obj__307;
char* result_470;
char* __result_obj__308;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_469,0,sizeof(char*));
        __result_obj__306 = result_469;
        return __result_obj__306;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__307 = self->it->item;
        return __result_obj__307;
    }
    memset(&result_470,0,sizeof(char*));
    __result_obj__308 = result_470;
    return __result_obj__308;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_472;
char* __result_obj__309;
char* __result_obj__310;
char* result_473;
char* __result_obj__311;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_472,0,sizeof(char*));
        __result_obj__309 = result_472;
        return __result_obj__309;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__310 = self->it->item;
        return __result_obj__310;
    }
    memset(&result_473,0,sizeof(char*));
    __result_obj__311 = result_473;
    return __result_obj__311;
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __right_value374 = (void*)0;
char* __dec_obj93;
struct sNodeBase* __result_obj__313;
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
void* __right_value375 = (void*)0;
char* __result_obj__314;
    __result_obj__314 = come_increment_ref_count(((char*)(__right_value375=__builtin_string(self->sname))));
    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count2(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

